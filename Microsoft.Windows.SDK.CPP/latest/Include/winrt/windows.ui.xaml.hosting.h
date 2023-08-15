/* Header file automatically generated from windows.ui.xaml.hosting.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0223 
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
#ifndef __windows2Eui2Examl2Ehosting_h__
#define __windows2Eui2Examl2Ehosting_h__
#ifndef __windows2Eui2Examl2Ehosting_p_h__
#define __windows2Eui2Examl2Ehosting_p_h__


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
#define WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x40000
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
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x70000
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

#if !defined(WINDOWS_SYSTEM_ANDROMEDAPLACEHOLDERCONTRACT_VERSION)
#define WINDOWS_SYSTEM_ANDROMEDAPLACEHOLDERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_SYSTEM_ANDROMEDAPLACEHOLDERCONTRACT_VERSION)

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

#if !defined(WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION)
#define WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.UI.Composition.h"
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Controls.h"
#include "Windows.UI.Xaml.Controls.Primitives.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IDesignerAppExitedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs ABI::Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IDesignerAppManager;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager ABI::Windows::UI::Xaml::Hosting::IDesignerAppManager

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IDesignerAppManagerFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory ABI::Windows::UI::Xaml::Hosting::IDesignerAppManagerFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IDesignerAppView;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView ABI::Windows::UI::Xaml::Hosting::IDesignerAppView

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IDesktopWindowXamlSource;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IDesktopWindowXamlSourceFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IDesktopWindowXamlSourceGotFocusEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceGotFocusEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IDesktopWindowXamlSourceTakeFocusRequestedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceTakeFocusRequestedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IElementCompositionPreview;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview ABI::Windows::UI::Xaml::Hosting::IElementCompositionPreview

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IElementCompositionPreviewStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics ABI::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IElementCompositionPreviewStatics2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 ABI::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IWindowsXamlManager;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager ABI::Windows::UI::Xaml::Hosting::IWindowsXamlManager

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IWindowsXamlManagerStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics ABI::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlSourceFocusNavigationRequest;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest ABI::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlSourceFocusNavigationRequestFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory ABI::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequestFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlSourceFocusNavigationResult;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult ABI::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlSourceFocusNavigationResultFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory ABI::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResultFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlUIPresenter;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter ABI::Windows::UI::Xaml::Hosting::IXamlUIPresenter

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlUIPresenterHost;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost ABI::Windows::UI::Xaml::Hosting::IXamlUIPresenterHost

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlUIPresenterHost2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 ABI::Windows::UI::Xaml::Hosting::IXamlUIPresenterHost2

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlUIPresenterHost3;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 ABI::Windows::UI::Xaml::Hosting::IXamlUIPresenterHost3

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlUIPresenterStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics ABI::Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    interface IXamlUIPresenterStatics2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 ABI::Windows::UI::Xaml::Hosting::IXamlUIPresenterStatics2

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class DesignerAppView;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */


#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("aeeb272e-a814-5981-a2c3-623e226e4a71"))
IAsyncOperationCompletedHandler<ABI::Windows::UI::Xaml::Hosting::DesignerAppView*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Hosting::DesignerAppView*, ABI::Windows::UI::Xaml::Hosting::IDesignerAppView*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.UI.Xaml.Hosting.DesignerAppView>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::UI::Xaml::Hosting::DesignerAppView*> __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::UI::Xaml::Hosting::IDesignerAppView*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::UI::Xaml::Hosting::IDesignerAppView*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_USE */


#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000

#ifndef DEF___FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_USE
#define DEF___FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("49c6c658-1bd2-581e-a385-6eb3fd9bfee3"))
IAsyncOperation<ABI::Windows::UI::Xaml::Hosting::DesignerAppView*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Hosting::DesignerAppView*, ABI::Windows::UI::Xaml::Hosting::IDesignerAppView*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.UI.Xaml.Hosting.DesignerAppView>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::UI::Xaml::Hosting::DesignerAppView*> __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_t;
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::UI::Xaml::Hosting::IDesignerAppView*>
//#define __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::UI::Xaml::Hosting::IDesignerAppView*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_USE */


#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class DesignerAppManager;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class DesignerAppExitedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */


#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3772ce98-9ba0-504b-8a0d-36b7f816a1c2"))
ITypedEventHandler<ABI::Windows::UI::Xaml::Hosting::DesignerAppManager*,ABI::Windows::UI::Xaml::Hosting::DesignerAppExitedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Hosting::DesignerAppManager*, ABI::Windows::UI::Xaml::Hosting::IDesignerAppManager*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Hosting::DesignerAppExitedEventArgs*, ABI::Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Hosting.DesignerAppManager, Windows.UI.Xaml.Hosting.DesignerAppExitedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::Hosting::DesignerAppManager*,ABI::Windows::UI::Xaml::Hosting::DesignerAppExitedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Hosting::IDesignerAppManager*,ABI::Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Hosting::IDesignerAppManager*,ABI::Windows::UI::Xaml::Hosting::IDesignerAppExitedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs_USE */


#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class DesktopWindowXamlSource;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class DesktopWindowXamlSourceGotFocusEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */


#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a77f0e84-ced7-5681-b140-8c18a55ceb1d"))
ITypedEventHandler<ABI::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource*,ABI::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceGotFocusEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource*, ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceGotFocusEventArgs*, ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceGotFocusEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Hosting.DesktopWindowXamlSource, Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceGotFocusEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource*,ABI::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceGotFocusEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource*,ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceGotFocusEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource*,ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceGotFocusEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_USE */


#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class DesktopWindowXamlSourceTakeFocusRequestedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */


#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9e79eafe-c7fe-54a5-96ff-7abe02e05418"))
ITypedEventHandler<ABI::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource*,ABI::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource*, ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs*, ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceTakeFocusRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Hosting.DesktopWindowXamlSource, Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceTakeFocusRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource*,ABI::Windows::UI::Xaml::Hosting::DesktopWindowXamlSourceTakeFocusRequestedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource*,ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceTakeFocusRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource*,ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceTakeFocusRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_USE */


#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000




#ifndef DEF___FIKeyValuePair_2_IInspectable_IInspectable_USE
#define DEF___FIKeyValuePair_2_IInspectable_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("59e7ae0c-c29d-5ad6-bef5-dedb52a198e1"))
IKeyValuePair<IInspectable*,IInspectable*> : IKeyValuePair_impl<IInspectable*,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<Object, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<IInspectable*,IInspectable*> __FIKeyValuePair_2_IInspectable_IInspectable_t;
#define __FIKeyValuePair_2_IInspectable_IInspectable ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_IInspectable_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_IInspectable_IInspectable ABI::Windows::Foundation::Collections::IKeyValuePair<IInspectable*,IInspectable*>
//#define __FIKeyValuePair_2_IInspectable_IInspectable_t ABI::Windows::Foundation::Collections::IKeyValuePair<IInspectable*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_IInspectable_IInspectable_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("31e55e8a-0f05-52fd-90d3-b04aa331aaa4"))
IIterator<__FIKeyValuePair_2_IInspectable_IInspectable*> : IIterator_impl<__FIKeyValuePair_2_IInspectable_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<Object, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_IInspectable_IInspectable*> __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_t;
#define __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<IInspectable*,IInspectable*>*>
//#define __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<IInspectable*,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("33ac68f0-1084-529a-8a17-4e7c8adb7a0c"))
IIterable<__FIKeyValuePair_2_IInspectable_IInspectable*> : IIterable_impl<__FIKeyValuePair_2_IInspectable_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<Object, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_IInspectable_IInspectable*> __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable_t;
#define __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<IInspectable*,IInspectable*>*>
//#define __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<IInspectable*,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable_USE */






#ifndef DEF___FIMapView_2_IInspectable_IInspectable_USE
#define DEF___FIMapView_2_IInspectable_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("efe76d10-cb60-50ad-8a4f-6885cd6212a1"))
IMapView<IInspectable*,IInspectable*> : IMapView_impl<IInspectable*,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<Object, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<IInspectable*,IInspectable*> __FIMapView_2_IInspectable_IInspectable_t;
#define __FIMapView_2_IInspectable_IInspectable ABI::Windows::Foundation::Collections::__FIMapView_2_IInspectable_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_IInspectable_IInspectable ABI::Windows::Foundation::Collections::IMapView<IInspectable*,IInspectable*>
//#define __FIMapView_2_IInspectable_IInspectable_t ABI::Windows::Foundation::Collections::IMapView<IInspectable*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_IInspectable_IInspectable_USE */






#ifndef DEF___FIMap_2_IInspectable_IInspectable_USE
#define DEF___FIMap_2_IInspectable_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f5f69427-55ed-5512-8429-d4f6626dfcdd"))
IMap<IInspectable*,IInspectable*> : IMap_impl<IInspectable*,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<Object, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<IInspectable*,IInspectable*> __FIMap_2_IInspectable_IInspectable_t;
#define __FIMap_2_IInspectable_IInspectable ABI::Windows::Foundation::Collections::__FIMap_2_IInspectable_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_IInspectable_IInspectable ABI::Windows::Foundation::Collections::IMap<IInspectable*,IInspectable*>
//#define __FIMap_2_IInspectable_IInspectable_t ABI::Windows::Foundation::Collections::IMap<IInspectable*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_IInspectable_IInspectable_USE */





#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IAsyncAction;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIAsyncAction ABI::Windows::Foundation::IAsyncAction

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IClosable;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIClosable ABI::Windows::Foundation::IClosable

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Size Size;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                class CompositionPropertySet;
            } /* Windows */
        } /* UI */
    } /* Composition */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                interface ICompositionPropertySet;
            } /* Windows */
        } /* UI */
    } /* Composition */} /* ABI */
#define __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet ABI::Windows::UI::Composition::ICompositionPropertySet

#endif // ____x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                interface ICompositionAnimationBase;
            } /* Windows */
        } /* UI */
    } /* Composition */} /* ABI */
#define __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase ABI::Windows::UI::Composition::ICompositionAnimationBase

#endif // ____x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                class Visual;
            } /* Windows */
        } /* UI */
    } /* Composition */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CComposition_CIVisual_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CIVisual_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                interface IVisual;
            } /* Windows */
        } /* UI */
    } /* Composition */} /* ABI */
#define __x_ABI_CWindows_CUI_CComposition_CIVisual ABI::Windows::UI::Composition::IVisual

#endif // ____x_ABI_CWindows_CUI_CComposition_CIVisual_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    namespace Primitives {
                        
                        typedef enum FlyoutPlacementMode : int FlyoutPlacementMode;
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Controls */
    } /* Primitives */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    class ScrollViewer;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Controls */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Controls {
                    interface IScrollViewer;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Controls */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CControls_CIScrollViewer ABI::Windows::UI::Xaml::Controls::IScrollViewer

#endif // ____x_ABI_CWindows_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                class FrameworkElement;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIFrameworkElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIFrameworkElement_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                interface IFrameworkElement;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement ABI::Windows::UI::Xaml::IFrameworkElement

#endif // ____x_ABI_CWindows_CUI_CXaml_CIFrameworkElement_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                class ResourceDictionary;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIResourceDictionary_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIResourceDictionary_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                interface IResourceDictionary;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary ABI::Windows::UI::Xaml::IResourceDictionary

#endif // ____x_ABI_CWindows_CUI_CXaml_CIResourceDictionary_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                class UIElement;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                interface IUIElement;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CIUIElement ABI::Windows::UI::Xaml::IUIElement

#endif // ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    
                    typedef enum DesignerAppViewState : int DesignerAppViewState;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    
                    typedef enum XamlSourceFocusNavigationReason : int XamlSourceFocusNavigationReason;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */






























namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class ElementCompositionPreview;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class WindowsXamlManager;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class XamlSourceFocusNavigationRequest;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class XamlSourceFocusNavigationResult;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    class XamlUIPresenter;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */













/*
 *
 * Struct Windows.UI.Xaml.Hosting.DesignerAppViewState
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 2.0
 *
 *
 */

#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [v1_enum, contract] */
                    enum DesignerAppViewState : int
                    {
                        DesignerAppViewState_Visible = 0,
                        DesignerAppViewState_Hidden = 1,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationReason
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 */

#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [v1_enum, contract] */
                    enum XamlSourceFocusNavigationReason : int
                    {
                        XamlSourceFocusNavigationReason_Programmatic = 0,
                        XamlSourceFocusNavigationReason_Restore = 1,
                        XamlSourceFocusNavigationReason_First = 3,
                        XamlSourceFocusNavigationReason_Last = 4,
                        XamlSourceFocusNavigationReason_Left = 7,
                        XamlSourceFocusNavigationReason_Up = 8,
                        XamlSourceFocusNavigationReason_Right = 9,
                        XamlSourceFocusNavigationReason_Down = 10,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IDesignerAppExitedEventArgs
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.DesignerAppExitedEventArgs
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesignerAppExitedEventArgs[] = L"Windows.UI.Xaml.Hosting.IDesignerAppExitedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("F6AAC86A-0CAD-410C-8F62-DC2936151C74"), exclusiveto, contract] */
                    MIDL_INTERFACE("F6AAC86A-0CAD-410C-8F62-DC2936151C74")
                    IDesignerAppExitedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExitCode(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDesignerAppExitedEventArgs=_uuidof(IDesignerAppExitedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IDesignerAppManager
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.DesignerAppManager
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesignerAppManager[] = L"Windows.UI.Xaml.Hosting.IDesignerAppManager";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("A6272CAA-D5C6-40CB-ABD9-27BA43831BB7"), exclusiveto, contract] */
                    MIDL_INTERFACE("A6272CAA-D5C6-40CB-ABD9-27BA43831BB7")
                    IDesignerAppManager : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppUserModelId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DesignerAppExited(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DesignerAppExited(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateNewViewAsync(
                            /* [in] */ABI::Windows::UI::Xaml::Hosting::DesignerAppViewState initialViewState,
                            /* [in] */ABI::Windows::Foundation::Size initialViewSize,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE LoadObjectIntoAppAsync(
                            /* [in] */__RPC__in HSTRING dllName,
                            /* [in] */GUID classId,
                            /* [in] */__RPC__in HSTRING initializationData,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDesignerAppManager=_uuidof(IDesignerAppManager);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IDesignerAppManagerFactory
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.DesignerAppManager
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesignerAppManagerFactory[] = L"Windows.UI.Xaml.Hosting.IDesignerAppManagerFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("8F9D633B-1266-4C0E-8499-0DB85BBD4C43"), exclusiveto, contract] */
                    MIDL_INTERFACE("8F9D633B-1266-4C0E-8499-0DB85BBD4C43")
                    IDesignerAppManagerFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */__RPC__in HSTRING appUserModelId,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Hosting::IDesignerAppManager * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDesignerAppManagerFactory=_uuidof(IDesignerAppManagerFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IDesignerAppView
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.DesignerAppView
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesignerAppView[] = L"Windows.UI.Xaml.Hosting.IDesignerAppView";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("5C777CEA-DD71-4A84-A56F-DACB4B14706F"), exclusiveto, contract] */
                    MIDL_INTERFACE("5C777CEA-DD71-4A84-A56F-DACB4B14706F")
                    IDesignerAppView : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ApplicationViewId(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppUserModelId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ViewState(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Hosting::DesignerAppViewState * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ViewSize(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE UpdateViewAsync(
                            /* [in] */ABI::Windows::UI::Xaml::Hosting::DesignerAppViewState viewState,
                            /* [in] */ABI::Windows::Foundation::Size viewSize,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDesignerAppView=_uuidof(IDesignerAppView);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IDesktopWindowXamlSource
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.DesktopWindowXamlSource
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource[] = L"Windows.UI.Xaml.Hosting.IDesktopWindowXamlSource";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("D585BFE1-00FF-51BE-BA1D-A1329956EA0A"), exclusiveto, contract] */
                    MIDL_INTERFACE("D585BFE1-00FF-51BE-BA1D-A1329956EA0A")
                    IDesktopWindowXamlSource : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Content(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IUIElement * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Content(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasFocus(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TakeFocusRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TakeFocusRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GotFocus(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GotFocus(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NavigateFocus(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * request,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDesktopWindowXamlSource=_uuidof(IDesktopWindowXamlSource);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceFactory
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.DesktopWindowXamlSource
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory[] = L"Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("5CD61DC0-2561-56E1-8E75-6E44173805E3"), exclusiveto, contract] */
                    MIDL_INTERFACE("5CD61DC0-2561-56E1-8E75-6E44173805E3")
                    IDesktopWindowXamlSourceFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt IInspectable * baseInterface,
                            /* [out] */__RPC__deref_out_opt IInspectable * * innerInterface,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSource * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDesktopWindowXamlSourceFactory=_uuidof(IDesktopWindowXamlSourceFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceGotFocusEventArgs
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceGotFocusEventArgs
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceGotFocusEventArgs[] = L"Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceGotFocusEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("39BE4849-D9CC-5B70-8F05-1AD9A4AAA342"), exclusiveto, contract] */
                    MIDL_INTERFACE("39BE4849-D9CC-5B70-8F05-1AD9A4AAA342")
                    IDesktopWindowXamlSourceGotFocusEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDesktopWindowXamlSourceGotFocusEventArgs=_uuidof(IDesktopWindowXamlSourceGotFocusEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceTakeFocusRequestedEventArgs
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceTakeFocusRequestedEventArgs
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceTakeFocusRequestedEventArgs[] = L"Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceTakeFocusRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("FE61E4B9-A7AF-52B3-BDB9-C3305C0B8DF2"), exclusiveto, contract] */
                    MIDL_INTERFACE("FE61E4B9-A7AF-52B3-BDB9-C3305C0B8DF2")
                    IDesktopWindowXamlSourceTakeFocusRequestedEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDesktopWindowXamlSourceTakeFocusRequestedEventArgs=_uuidof(IDesktopWindowXamlSourceTakeFocusRequestedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IElementCompositionPreview
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.ElementCompositionPreview
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IElementCompositionPreview[] = L"Windows.UI.Xaml.Hosting.IElementCompositionPreview";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("B6F1A676-CFE6-46AC-ACF6-C4687BB65E60"), exclusiveto, contract] */
                    MIDL_INTERFACE("B6F1A676-CFE6-46AC-ACF6-C4687BB65E60")
                    IElementCompositionPreview : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IElementCompositionPreview=_uuidof(IElementCompositionPreview);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.ElementCompositionPreview
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics[] = L"Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("08C92B38-EC99-4C55-BC85-A1C180B27646"), exclusiveto, contract] */
                    MIDL_INTERFACE("08C92B38-EC99-4C55-BC85-A1C180B27646")
                    IElementCompositionPreviewStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetElementVisual(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * element,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Composition::IVisual * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetElementChildVisual(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * element,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Composition::IVisual * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetElementChildVisual(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * element,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Composition::IVisual * visual
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetScrollViewerManipulationPropertySet(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Controls::IScrollViewer * scrollViewer,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Composition::ICompositionPropertySet * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IElementCompositionPreviewStatics=_uuidof(IElementCompositionPreviewStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.ElementCompositionPreview
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2[] = L"Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("24148FBB-23D6-4F37-BA0C-0733E799722D"), exclusiveto, contract] */
                    MIDL_INTERFACE("24148FBB-23D6-4F37-BA0C-0733E799722D")
                    IElementCompositionPreviewStatics2 : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE SetImplicitShowAnimation(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * element,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Composition::ICompositionAnimationBase * animation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetImplicitHideAnimation(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * element,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Composition::ICompositionAnimationBase * animation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetIsTranslationEnabled(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * element,
                            /* [in] */boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPointerPositionPropertySet(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * targetElement,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Composition::ICompositionPropertySet * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IElementCompositionPreviewStatics2=_uuidof(IElementCompositionPreviewStatics2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IWindowsXamlManager
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.WindowsXamlManager
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IWindowsXamlManager[] = L"Windows.UI.Xaml.Hosting.IWindowsXamlManager";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("56096C31-1AA0-5288-8818-6E74A2DCAFF5"), exclusiveto, contract] */
                    MIDL_INTERFACE("56096C31-1AA0-5288-8818-6E74A2DCAFF5")
                    IWindowsXamlManager : public IInspectable
                    {
                    public:
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IWindowsXamlManager=_uuidof(IWindowsXamlManager);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IWindowsXamlManagerStatics
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.WindowsXamlManager
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics[] = L"Windows.UI.Xaml.Hosting.IWindowsXamlManagerStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("28258A12-7D82-505B-B210-712B04A58882"), exclusiveto, contract] */
                    MIDL_INTERFACE("28258A12-7D82-505B-B210-712B04A58882")
                    IWindowsXamlManagerStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE InitializeForCurrentThread(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Hosting::IWindowsXamlManager * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IWindowsXamlManagerStatics=_uuidof(IWindowsXamlManagerStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequest
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequest[] = L"Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequest";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("FBB93BB5-1496-5A80-AC00-E757359755E6"), exclusiveto, contract] */
                    MIDL_INTERFACE("FBB93BB5-1496-5A80-AC00-E757359755E6")
                    IXamlSourceFocusNavigationRequest : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reason(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationReason * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HintRect(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CorrelationId(
                            /* [retval, out] */__RPC__out GUID * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlSourceFocusNavigationRequest=_uuidof(IXamlSourceFocusNavigationRequest);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequestFactory
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory[] = L"Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequestFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("E746AB8F-B4EF-5390-97E5-CC0A2779C574"), exclusiveto, contract] */
                    MIDL_INTERFACE("E746AB8F-B4EF-5390-97E5-CC0A2779C574")
                    IXamlSourceFocusNavigationRequestFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */ABI::Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationReason reason,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateInstanceWithHintRect(
                            /* [in] */ABI::Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationReason reason,
                            /* [in] */ABI::Windows::Foundation::Rect hintRect,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateInstanceWithHintRectAndCorrelationId(
                            /* [in] */ABI::Windows::UI::Xaml::Hosting::XamlSourceFocusNavigationReason reason,
                            /* [in] */ABI::Windows::Foundation::Rect hintRect,
                            /* [in] */GUID correlationId,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationRequest * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlSourceFocusNavigationRequestFactory=_uuidof(IXamlSourceFocusNavigationRequestFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationResult
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationResult
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationResult[] = L"Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationResult";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("88D55A5F-9603-5D8F-9CC7-D1C4070D9801"), exclusiveto, contract] */
                    MIDL_INTERFACE("88D55A5F-9603-5D8F-9CC7-D1C4070D9801")
                    IXamlSourceFocusNavigationResult : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WasFocusMoved(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlSourceFocusNavigationResult=_uuidof(IXamlSourceFocusNavigationResult);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationResultFactory
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationResult
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationResultFactory[] = L"Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationResultFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("43BBADBF-F9E1-5527-B8C5-09339FF2CA76"), exclusiveto, contract] */
                    MIDL_INTERFACE("43BBADBF-F9E1-5527-B8C5-09339FF2CA76")
                    IXamlSourceFocusNavigationResultFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */boolean focusMoved,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Hosting::IXamlSourceFocusNavigationResult * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlSourceFocusNavigationResultFactory=_uuidof(IXamlSourceFocusNavigationResultFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlUIPresenter
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.XamlUIPresenter
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenter[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenter";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("A714944A-1619-4FC6-B31B-89512EF022A2"), exclusiveto, contract] */
                    MIDL_INTERFACE("A714944A-1619-4FC6-B31B-89512EF022A2")
                    IXamlUIPresenter : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RootElement(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IUIElement * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RootElement(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ThemeKey(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ThemeKey(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ThemeResourcesXaml(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ThemeResourcesXaml(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetSize(
                            /* [in] */INT32 width,
                            /* [in] */INT32 height
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Render(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Present(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlUIPresenter=_uuidof(IXamlUIPresenter);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlUIPresenterHost
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterHost";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("AAFB84CD-9F6D-4F80-AC2C-0E6CB9F31659"), contract] */
                    MIDL_INTERFACE("AAFB84CD-9F6D-4F80-AC2C-0E6CB9F31659")
                    IXamlUIPresenterHost : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE ResolveFileResource(
                            /* [in] */__RPC__in HSTRING path,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlUIPresenterHost=_uuidof(IXamlUIPresenterHost);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlUIPresenterHost2
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost2[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterHost2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("61595672-7CA4-4A21-B56A-88F4812388CA"), contract] */
                    MIDL_INTERFACE("61595672-7CA4-4A21-B56A-88F4812388CA")
                    IXamlUIPresenterHost2 : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetGenericXamlFilePath(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlUIPresenterHost2=_uuidof(IXamlUIPresenterHost2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlUIPresenterHost3
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost3[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterHost3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("B14292BF-7320-41BB-9F26-4D6FD34DB45A"), contract] */
                    MIDL_INTERFACE("B14292BF-7320-41BB-9F26-4D6FD34DB45A")
                    IXamlUIPresenterHost3 : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE ResolveDictionaryResource(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IResourceDictionary * dictionary,
                            /* [in] */__RPC__in_opt IInspectable * dictionaryKey,
                            /* [in] */__RPC__in_opt IInspectable * suggestedValue,
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlUIPresenterHost3=_uuidof(IXamlUIPresenterHost3);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.XamlUIPresenter
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("71EAEAC8-45E1-4192-85AA-3A422EDD23CF"), exclusiveto, contract] */
                    MIDL_INTERFACE("71EAEAC8-45E1-4192-85AA-3A422EDD23CF")
                    IXamlUIPresenterStatics : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CompleteTimelinesAutomatically(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CompleteTimelinesAutomatically(
                            /* [in] */boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetHost(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Hosting::IXamlUIPresenterHost * host
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyWindowSizeChanged(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlUIPresenterStatics=_uuidof(IXamlUIPresenterStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics2
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.XamlUIPresenter
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics2[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Hosting {
                    /* [object, uuid("5C6B68D2-CF1C-4F53-BF09-6A745F7A9703"), exclusiveto, contract] */
                    MIDL_INTERFACE("5C6B68D2-CF1C-4F53-BF09-6A745F7A9703")
                    IXamlUIPresenterStatics2 : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetFlyoutPlacementTargetInfo(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IFrameworkElement * placementTarget,
                            /* [in] */ABI::Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode preferredPlacement,
                            /* [out] */__RPC__out ABI::Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode * targetPreferredPlacement,
                            /* [out] */__RPC__out boolean * allowFallbacks,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFlyoutPlacement(
                            /* [in] */ABI::Windows::Foundation::Rect placementTargetBounds,
                            /* [in] */ABI::Windows::Foundation::Size controlSize,
                            /* [in] */ABI::Windows::Foundation::Size minControlSize,
                            /* [in] */ABI::Windows::Foundation::Rect containerRect,
                            /* [in] */ABI::Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode targetPreferredPlacement,
                            /* [in] */boolean allowFallbacks,
                            /* [out] */__RPC__out ABI::Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode * chosenPlacement,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXamlUIPresenterStatics2=_uuidof(IXamlUIPresenterStatics2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Hosting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Hosting.DesignerAppExitedEventArgs
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IDesignerAppExitedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesignerAppExitedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesignerAppExitedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesignerAppExitedEventArgs[] = L"Windows.UI.Xaml.Hosting.DesignerAppExitedEventArgs";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Xaml.Hosting.DesignerAppManager
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 2.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Hosting.IDesignerAppManagerFactory interface starting with version 2.0 of the Windows.UI.Xaml.Hosting.HostingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IDesignerAppManager ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesignerAppManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesignerAppManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesignerAppManager[] = L"Windows.UI.Xaml.Hosting.DesignerAppManager";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Xaml.Hosting.DesignerAppView
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IDesignerAppView ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesignerAppView_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesignerAppView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesignerAppView[] = L"Windows.UI.Xaml.Hosting.DesignerAppView";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Xaml.Hosting.DesktopWindowXamlSource
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IDesktopWindowXamlSource ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesktopWindowXamlSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesktopWindowXamlSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesktopWindowXamlSource[] = L"Windows.UI.Xaml.Hosting.DesktopWindowXamlSource";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceGotFocusEventArgs
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceGotFocusEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesktopWindowXamlSourceGotFocusEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesktopWindowXamlSourceGotFocusEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesktopWindowXamlSourceGotFocusEventArgs[] = L"Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceGotFocusEventArgs";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceTakeFocusRequestedEventArgs
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceTakeFocusRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesktopWindowXamlSourceTakeFocusRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesktopWindowXamlSourceTakeFocusRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesktopWindowXamlSourceTakeFocusRequestedEventArgs[] = L"Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceTakeFocusRequestedEventArgs";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Hosting.ElementCompositionPreview
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IElementCompositionPreview ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_ElementCompositionPreview_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_ElementCompositionPreview_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_ElementCompositionPreview[] = L"Windows.UI.Xaml.Hosting.ElementCompositionPreview";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Xaml.Hosting.WindowsXamlManager
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Hosting.IWindowsXamlManagerStatics interface starting with version 3.0 of the Windows.UI.Xaml.Hosting.HostingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IWindowsXamlManager ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_WindowsXamlManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_WindowsXamlManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_WindowsXamlManager[] = L"Windows.UI.Xaml.Hosting.WindowsXamlManager";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequestFactory interface starting with version 3.0 of the Windows.UI.Xaml.Hosting.HostingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_XamlSourceFocusNavigationRequest_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_XamlSourceFocusNavigationRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_XamlSourceFocusNavigationRequest[] = L"Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationResult
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationResultFactory interface starting with version 3.0 of the Windows.UI.Xaml.Hosting.HostingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_XamlSourceFocusNavigationResult_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_XamlSourceFocusNavigationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_XamlSourceFocusNavigationResult[] = L"Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationResult";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Hosting.XamlUIPresenter
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics2 interface starting with version 1.0 of the Windows.UI.Xaml.Hosting.HostingContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics interface starting with version 1.0 of the Windows.UI.Xaml.Hosting.HostingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IXamlUIPresenter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_XamlUIPresenter_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_XamlUIPresenter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_XamlUIPresenter[] = L"Windows.UI.Xaml.Hosting.XamlUIPresenter";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppViewVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppViewVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_INTERFACE_DEFINED__

#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
#if !defined(____FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView;

typedef struct __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CHosting__CDesignerAppView **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppViewVtbl;

interface __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView_INTERFACE_DEFINED__

#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000



#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000



#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000



#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000



#if !defined(____FIKeyValuePair_2_IInspectable_IInspectable_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_IInspectable_IInspectable_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_IInspectable_IInspectable __FIKeyValuePair_2_IInspectable_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_IInspectable_IInspectable;

typedef struct __FIKeyValuePair_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This, /* [retval][out] */ __RPC__out IInspectable * *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_IInspectable_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_IInspectable_IInspectableVtbl;

interface __FIKeyValuePair_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_IInspectable_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_IInspectable_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_IInspectable_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_IInspectable_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_IInspectable_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_IInspectable_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_IInspectable_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_IInspectable_IInspectable_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_IInspectable_IInspectable_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_IInspectable_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable;

typedef struct __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_IInspectable_IInspectable * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_IInspectable_IInspectable * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl;

interface __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable;

typedef  struct __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_IInspectable_IInspectable **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl;

interface __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_IInspectable_IInspectable_INTERFACE_DEFINED__




#if !defined(____FIMapView_2_IInspectable_IInspectable_INTERFACE_DEFINED__)
#define ____FIMapView_2_IInspectable_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMapView_2_IInspectable_IInspectable __FIMapView_2_IInspectable_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_IInspectable_IInspectable;

typedef struct __FIMapView_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This,
        /* [in] */ __RPC__in IInspectable * key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This, /* [in] */ __RPC__in IInspectable * key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_IInspectable_IInspectable * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_IInspectable_IInspectable **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_IInspectable_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_IInspectable_IInspectableVtbl;

interface __FIMapView_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FIMapView_2_IInspectable_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_IInspectable_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_IInspectable_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_IInspectable_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_IInspectable_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_IInspectable_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_IInspectable_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_IInspectable_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_IInspectable_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_IInspectable_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_IInspectable_IInspectable_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_IInspectable_IInspectable_INTERFACE_DEFINED__




#if !defined(____FIMap_2_IInspectable_IInspectable_INTERFACE_DEFINED__)
#define ____FIMap_2_IInspectable_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMap_2_IInspectable_IInspectable __FIMap_2_IInspectable_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_IInspectable_IInspectable;

typedef struct __FIMap_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_IInspectable_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_IInspectable_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_IInspectable_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_IInspectable_IInspectable * This,
        /* [in] */ IInspectable * key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, /* [in] */ IInspectable * key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_IInspectable_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_IInspectable_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_IInspectable_IInspectable * This,
        /* [in] */ IInspectable * key,
        /* [in] */ __RPC__in_opt IInspectable * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_IInspectable_IInspectable * This,/* [in] */ IInspectable * key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_IInspectable_IInspectable * This);
    END_INTERFACE
} __FIMap_2_IInspectable_IInspectableVtbl;

interface __FIMap_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FIMap_2_IInspectable_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_IInspectable_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_IInspectable_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_IInspectable_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_IInspectable_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_IInspectable_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_IInspectable_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_IInspectable_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_IInspectable_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_IInspectable_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_IInspectable_IInspectable_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_IInspectable_IInspectable_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_IInspectable_IInspectable_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_IInspectable_IInspectable_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_IInspectable_IInspectable_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;




#ifndef ____x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet;

#endif // ____x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase;

#endif // ____x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CComposition_CIVisual_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CIVisual_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVisual __x_ABI_CWindows_CUI_CComposition_CIVisual;

#endif // ____x_ABI_CWindows_CUI_CComposition_CIVisual_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode;






#ifndef ____x_ABI_CWindows_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CIScrollViewer __x_ABI_CWindows_CUI_CXaml_CControls_CIScrollViewer;

#endif // ____x_ABI_CWindows_CUI_CXaml_CControls_CIScrollViewer_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CUI_CXaml_CIFrameworkElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIFrameworkElement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIFrameworkElement_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CXaml_CIResourceDictionary_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIResourceDictionary_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIResourceDictionary_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CUI_CXaml_CHosting_CDesignerAppViewState __x_ABI_CWindows_CUI_CXaml_CHosting_CDesignerAppViewState;


typedef enum __x_ABI_CWindows_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason __x_ABI_CWindows_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason;














































/*
 *
 * Struct Windows.UI.Xaml.Hosting.DesignerAppViewState
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 2.0
 *
 *
 */

#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CHosting_CDesignerAppViewState
{
    DesignerAppViewState_Visible = 0,
    DesignerAppViewState_Hidden = 1,
};
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationReason
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 */

#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason
{
    XamlSourceFocusNavigationReason_Programmatic = 0,
    XamlSourceFocusNavigationReason_Restore = 1,
    XamlSourceFocusNavigationReason_First = 3,
    XamlSourceFocusNavigationReason_Last = 4,
    XamlSourceFocusNavigationReason_Left = 7,
    XamlSourceFocusNavigationReason_Up = 8,
    XamlSourceFocusNavigationReason_Right = 9,
    XamlSourceFocusNavigationReason_Down = 10,
};
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IDesignerAppExitedEventArgs
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.DesignerAppExitedEventArgs
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesignerAppExitedEventArgs[] = L"Windows.UI.Xaml.Hosting.IDesignerAppExitedEventArgs";
/* [object, uuid("F6AAC86A-0CAD-410C-8F62-DC2936151C74"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExitCode )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_get_ExitCode(This,value) \
    ( (This)->lpVtbl->get_ExitCode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppExitedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IDesignerAppManager
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.DesignerAppManager
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesignerAppManager[] = L"Windows.UI.Xaml.Hosting.IDesignerAppManager";
/* [object, uuid("A6272CAA-D5C6-40CB-ABD9-27BA43831BB7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppUserModelId )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DesignerAppExited )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesignerAppManager_Windows__CUI__CXaml__CHosting__CDesignerAppExitedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DesignerAppExited )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CreateNewViewAsync )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CHosting_CDesignerAppViewState initialViewState,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize initialViewSize,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CHosting__CDesignerAppView * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *LoadObjectIntoAppAsync )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * This,
        /* [in] */__RPC__in HSTRING dllName,
        /* [in] */GUID classId,
        /* [in] */__RPC__in HSTRING initializationData,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_get_AppUserModelId(This,value) \
    ( (This)->lpVtbl->get_AppUserModelId(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_add_DesignerAppExited(This,handler,token) \
    ( (This)->lpVtbl->add_DesignerAppExited(This,handler,token) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_remove_DesignerAppExited(This,token) \
    ( (This)->lpVtbl->remove_DesignerAppExited(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_CreateNewViewAsync(This,initialViewState,initialViewSize,operation) \
    ( (This)->lpVtbl->CreateNewViewAsync(This,initialViewState,initialViewSize,operation) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_LoadObjectIntoAppAsync(This,dllName,classId,initializationData,operation) \
    ( (This)->lpVtbl->LoadObjectIntoAppAsync(This,dllName,classId,initializationData,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IDesignerAppManagerFactory
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.DesignerAppManager
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesignerAppManagerFactory[] = L"Windows.UI.Xaml.Hosting.IDesignerAppManagerFactory";
/* [object, uuid("8F9D633B-1266-4C0E-8499-0DB85BBD4C43"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory * This,
        /* [in] */__RPC__in HSTRING appUserModelId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManager * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_Create(This,appUserModelId,value) \
    ( (This)->lpVtbl->Create(This,appUserModelId,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppManagerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IDesignerAppView
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.DesignerAppView
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesignerAppView[] = L"Windows.UI.Xaml.Hosting.IDesignerAppView";
/* [object, uuid("5C777CEA-DD71-4A84-A56F-DACB4B14706F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ApplicationViewId )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppUserModelId )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ViewState )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CHosting_CDesignerAppViewState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ViewSize )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateViewAsync )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CHosting_CDesignerAppViewState viewState,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize viewSize,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppViewVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_get_ApplicationViewId(This,value) \
    ( (This)->lpVtbl->get_ApplicationViewId(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_get_AppUserModelId(This,value) \
    ( (This)->lpVtbl->get_AppUserModelId(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_get_ViewState(This,value) \
    ( (This)->lpVtbl->get_ViewState(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_get_ViewSize(This,value) \
    ( (This)->lpVtbl->get_ViewSize(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_UpdateViewAsync(This,viewState,viewSize,operation) \
    ( (This)->lpVtbl->UpdateViewAsync(This,viewState,viewSize,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesignerAppView_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IDesktopWindowXamlSource
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.DesktopWindowXamlSource
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSource[] = L"Windows.UI.Xaml.Hosting.IDesktopWindowXamlSource";
/* [object, uuid("D585BFE1-00FF-51BE-BA1D-A1329956EA0A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasFocus )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TakeFocusRequested )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceTakeFocusRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TakeFocusRequested )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GotFocus )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSource_Windows__CUI__CXaml__CHosting__CDesktopWindowXamlSourceGotFocusEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GotFocus )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *NavigateFocus )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * request,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_get_Content(This,value) \
    ( (This)->lpVtbl->get_Content(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_put_Content(This,value) \
    ( (This)->lpVtbl->put_Content(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_get_HasFocus(This,value) \
    ( (This)->lpVtbl->get_HasFocus(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_add_TakeFocusRequested(This,handler,token) \
    ( (This)->lpVtbl->add_TakeFocusRequested(This,handler,token) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_remove_TakeFocusRequested(This,token) \
    ( (This)->lpVtbl->remove_TakeFocusRequested(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_add_GotFocus(This,handler,token) \
    ( (This)->lpVtbl->add_GotFocus(This,handler,token) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_remove_GotFocus(This,token) \
    ( (This)->lpVtbl->remove_GotFocus(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_NavigateFocus(This,request,result) \
    ( (This)->lpVtbl->NavigateFocus(This,request,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceFactory
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.DesktopWindowXamlSource
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory[] = L"Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceFactory";
/* [object, uuid("5CD61DC0-2561-56E1-8E75-6E44173805E3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory * This,
        /* [in] */__RPC__in_opt IInspectable * baseInterface,
        /* [out] */__RPC__deref_out_opt IInspectable * * innerInterface,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSource * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_CreateInstance(This,baseInterface,innerInterface,value) \
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceGotFocusEventArgs
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceGotFocusEventArgs
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceGotFocusEventArgs[] = L"Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceGotFocusEventArgs";
/* [object, uuid("39BE4849-D9CC-5B70-8F05-1AD9A4AAA342"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceGotFocusEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceTakeFocusRequestedEventArgs
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceTakeFocusRequestedEventArgs
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceTakeFocusRequestedEventArgs[] = L"Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceTakeFocusRequestedEventArgs";
/* [object, uuid("FE61E4B9-A7AF-52B3-BDB9-C3305C0B8DF2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIDesktopWindowXamlSourceTakeFocusRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IElementCompositionPreview
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.ElementCompositionPreview
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IElementCompositionPreview[] = L"Windows.UI.Xaml.Hosting.IElementCompositionPreview";
/* [object, uuid("B6F1A676-CFE6-46AC-ACF6-C4687BB65E60"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreview_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.ElementCompositionPreview
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics[] = L"Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics";
/* [object, uuid("08C92B38-EC99-4C55-BC85-A1C180B27646"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetElementVisual )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetElementChildVisual )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetElementChildVisual )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * visual
        );
    HRESULT ( STDMETHODCALLTYPE *GetScrollViewerManipulationPropertySet )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIScrollViewer * scrollViewer,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetElementVisual(This,element,result) \
    ( (This)->lpVtbl->GetElementVisual(This,element,result) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetElementChildVisual(This,element,result) \
    ( (This)->lpVtbl->GetElementChildVisual(This,element,result) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_SetElementChildVisual(This,element,visual) \
    ( (This)->lpVtbl->SetElementChildVisual(This,element,visual) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_GetScrollViewerManipulationPropertySet(This,scrollViewer,result) \
    ( (This)->lpVtbl->GetScrollViewerManipulationPropertySet(This,scrollViewer,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.ElementCompositionPreview
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IElementCompositionPreviewStatics2[] = L"Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics2";
/* [object, uuid("24148FBB-23D6-4F37-BA0C-0733E799722D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetImplicitShowAnimation )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * animation
        );
    HRESULT ( STDMETHODCALLTYPE *SetImplicitHideAnimation )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimationBase * animation
        );
    HRESULT ( STDMETHODCALLTYPE *SetIsTranslationEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPointerPositionPropertySet )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * targetElement,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionPropertySet * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_SetImplicitShowAnimation(This,element,animation) \
    ( (This)->lpVtbl->SetImplicitShowAnimation(This,element,animation) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_SetImplicitHideAnimation(This,element,animation) \
    ( (This)->lpVtbl->SetImplicitHideAnimation(This,element,animation) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_SetIsTranslationEnabled(This,element,value) \
    ( (This)->lpVtbl->SetIsTranslationEnabled(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_GetPointerPositionPropertySet(This,targetElement,result) \
    ( (This)->lpVtbl->GetPointerPositionPropertySet(This,targetElement,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIElementCompositionPreviewStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IWindowsXamlManager
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.WindowsXamlManager
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IWindowsXamlManager[] = L"Windows.UI.Xaml.Hosting.IWindowsXamlManager";
/* [object, uuid("56096C31-1AA0-5288-8818-6E74A2DCAFF5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IWindowsXamlManagerStatics
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.WindowsXamlManager
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IWindowsXamlManagerStatics[] = L"Windows.UI.Xaml.Hosting.IWindowsXamlManagerStatics";
/* [object, uuid("28258A12-7D82-505B-B210-712B04A58882"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *InitializeForCurrentThread )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManager * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_InitializeForCurrentThread(This,result) \
    ( (This)->lpVtbl->InitializeForCurrentThread(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIWindowsXamlManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequest
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequest[] = L"Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequest";
/* [object, uuid("FBB93BB5-1496-5A80-AC00-E757359755E6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HintRect )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CorrelationId )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_get_Reason(This,value) \
    ( (This)->lpVtbl->get_Reason(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_get_HintRect(This,value) \
    ( (This)->lpVtbl->get_HintRect(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_get_CorrelationId(This,value) \
    ( (This)->lpVtbl->get_CorrelationId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequestFactory
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationRequestFactory[] = L"Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequestFactory";
/* [object, uuid("E746AB8F-B4EF-5390-97E5-CC0A2779C574"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason reason,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithHintRect )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason reason,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect hintRect,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithHintRectAndCorrelationId )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CHosting_CXamlSourceFocusNavigationReason reason,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect hintRect,
        /* [in] */GUID correlationId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequest * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_CreateInstance(This,reason,value) \
    ( (This)->lpVtbl->CreateInstance(This,reason,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_CreateInstanceWithHintRect(This,reason,hintRect,value) \
    ( (This)->lpVtbl->CreateInstanceWithHintRect(This,reason,hintRect,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_CreateInstanceWithHintRectAndCorrelationId(This,reason,hintRect,correlationId,value) \
    ( (This)->lpVtbl->CreateInstanceWithHintRectAndCorrelationId(This,reason,hintRect,correlationId,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationRequestFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationResult
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationResult
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationResult[] = L"Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationResult";
/* [object, uuid("88D55A5F-9603-5D8F-9CC7-D1C4070D9801"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WasFocusMoved )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_get_WasFocusMoved(This,value) \
    ( (This)->lpVtbl->get_WasFocusMoved(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationResultFactory
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationResult
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlSourceFocusNavigationResultFactory[] = L"Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationResultFactory";
/* [object, uuid("43BBADBF-F9E1-5527-B8C5-09339FF2CA76"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory * This,
        /* [in] */boolean focusMoved,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResult * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_CreateInstance(This,focusMoved,value) \
    ( (This)->lpVtbl->CreateInstance(This,focusMoved,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlSourceFocusNavigationResultFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlUIPresenter
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.XamlUIPresenter
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenter[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenter";
/* [object, uuid("A714944A-1619-4FC6-B31B-89512EF022A2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RootElement )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RootElement )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ThemeKey )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ThemeKey )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ThemeResourcesXaml )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ThemeResourcesXaml )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSize )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This,
        /* [in] */INT32 width,
        /* [in] */INT32 height
        );
    HRESULT ( STDMETHODCALLTYPE *Render )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This
        );
    HRESULT ( STDMETHODCALLTYPE *Present )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_get_RootElement(This,value) \
    ( (This)->lpVtbl->get_RootElement(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_put_RootElement(This,value) \
    ( (This)->lpVtbl->put_RootElement(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_get_ThemeKey(This,value) \
    ( (This)->lpVtbl->get_ThemeKey(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_put_ThemeKey(This,value) \
    ( (This)->lpVtbl->put_ThemeKey(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_get_ThemeResourcesXaml(This,value) \
    ( (This)->lpVtbl->get_ThemeResourcesXaml(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_put_ThemeResourcesXaml(This,value) \
    ( (This)->lpVtbl->put_ThemeResourcesXaml(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_SetSize(This,width,height) \
    ( (This)->lpVtbl->SetSize(This,width,height) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_Render(This) \
    ( (This)->lpVtbl->Render(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_Present(This) \
    ( (This)->lpVtbl->Present(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenter_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlUIPresenterHost
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterHost";
/* [object, uuid("AAFB84CD-9F6D-4F80-AC2C-0E6CB9F31659"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ResolveFileResource )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * This,
        /* [in] */__RPC__in HSTRING path,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHostVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHostVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_ResolveFileResource(This,path,result) \
    ( (This)->lpVtbl->ResolveFileResource(This,path,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlUIPresenterHost2
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost2[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterHost2";
/* [object, uuid("61595672-7CA4-4A21-B56A-88F4812388CA"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetGenericXamlFilePath )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_GetGenericXamlFilePath(This,result) \
    ( (This)->lpVtbl->GetGenericXamlFilePath(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost2_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlUIPresenterHost3
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterHost3[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterHost3";
/* [object, uuid("B14292BF-7320-41BB-9F26-4D6FD34DB45A"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ResolveDictionaryResource )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIResourceDictionary * dictionary,
        /* [in] */__RPC__in_opt IInspectable * dictionaryKey,
        /* [in] */__RPC__in_opt IInspectable * suggestedValue,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_ResolveDictionaryResource(This,dictionary,dictionaryKey,suggestedValue,result) \
    ( (This)->lpVtbl->ResolveDictionaryResource(This,dictionary,dictionaryKey,suggestedValue,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost3_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.XamlUIPresenter
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics";
/* [object, uuid("71EAEAC8-45E1-4192-85AA-3A422EDD23CF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CompleteTimelinesAutomatically )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CompleteTimelinesAutomatically )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *SetHost )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterHost * host
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyWindowSizeChanged )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_get_CompleteTimelinesAutomatically(This,value) \
    ( (This)->lpVtbl->get_CompleteTimelinesAutomatically(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_put_CompleteTimelinesAutomatically(This,value) \
    ( (This)->lpVtbl->put_CompleteTimelinesAutomatically(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_SetHost(This,host) \
    ( (This)->lpVtbl->SetHost(This,host) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_NotifyWindowSizeChanged(This) \
    ( (This)->lpVtbl->NotifyWindowSizeChanged(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics2
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Hosting.XamlUIPresenter
 *
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Hosting_IXamlUIPresenterStatics2[] = L"Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics2";
/* [object, uuid("5C6B68D2-CF1C-4F53-BF09-6A745F7A9703"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetFlyoutPlacementTargetInfo )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * placementTarget,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode preferredPlacement,
        /* [out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode * targetPreferredPlacement,
        /* [out] */__RPC__out boolean * allowFallbacks,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetFlyoutPlacement )(
        __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect placementTargetBounds,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize controlSize,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize minControlSize,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect containerRect,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode targetPreferredPlacement,
        /* [in] */boolean allowFallbacks,
        /* [out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CControls_CPrimitives_CFlyoutPlacementMode * chosenPlacement,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_GetFlyoutPlacementTargetInfo(This,placementTarget,preferredPlacement,targetPreferredPlacement,allowFallbacks,returnValue) \
    ( (This)->lpVtbl->GetFlyoutPlacementTargetInfo(This,placementTarget,preferredPlacement,targetPreferredPlacement,allowFallbacks,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_GetFlyoutPlacement(This,placementTargetBounds,controlSize,minControlSize,containerRect,targetPreferredPlacement,allowFallbacks,chosenPlacement,returnValue) \
    ( (This)->lpVtbl->GetFlyoutPlacement(This,placementTargetBounds,controlSize,minControlSize,containerRect,targetPreferredPlacement,allowFallbacks,chosenPlacement,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CHosting_CIXamlUIPresenterStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Hosting.DesignerAppExitedEventArgs
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IDesignerAppExitedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesignerAppExitedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesignerAppExitedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesignerAppExitedEventArgs[] = L"Windows.UI.Xaml.Hosting.DesignerAppExitedEventArgs";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Xaml.Hosting.DesignerAppManager
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 2.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Hosting.IDesignerAppManagerFactory interface starting with version 2.0 of the Windows.UI.Xaml.Hosting.HostingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IDesignerAppManager ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesignerAppManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesignerAppManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesignerAppManager[] = L"Windows.UI.Xaml.Hosting.DesignerAppManager";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Xaml.Hosting.DesignerAppView
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IDesignerAppView ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesignerAppView_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesignerAppView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesignerAppView[] = L"Windows.UI.Xaml.Hosting.DesignerAppView";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Xaml.Hosting.DesktopWindowXamlSource
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IDesktopWindowXamlSource ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesktopWindowXamlSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesktopWindowXamlSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesktopWindowXamlSource[] = L"Windows.UI.Xaml.Hosting.DesktopWindowXamlSource";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceGotFocusEventArgs
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceGotFocusEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesktopWindowXamlSourceGotFocusEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesktopWindowXamlSourceGotFocusEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesktopWindowXamlSourceGotFocusEventArgs[] = L"Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceGotFocusEventArgs";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceTakeFocusRequestedEventArgs
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IDesktopWindowXamlSourceTakeFocusRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesktopWindowXamlSourceTakeFocusRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_DesktopWindowXamlSourceTakeFocusRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_DesktopWindowXamlSourceTakeFocusRequestedEventArgs[] = L"Windows.UI.Xaml.Hosting.DesktopWindowXamlSourceTakeFocusRequestedEventArgs";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Hosting.ElementCompositionPreview
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Hosting.IElementCompositionPreviewStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IElementCompositionPreview ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_ElementCompositionPreview_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_ElementCompositionPreview_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_ElementCompositionPreview[] = L"Windows.UI.Xaml.Hosting.ElementCompositionPreview";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.UI.Xaml.Hosting.WindowsXamlManager
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Hosting.IWindowsXamlManagerStatics interface starting with version 3.0 of the Windows.UI.Xaml.Hosting.HostingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IWindowsXamlManager ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_WindowsXamlManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_WindowsXamlManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_WindowsXamlManager[] = L"Windows.UI.Xaml.Hosting.WindowsXamlManager";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequestFactory interface starting with version 3.0 of the Windows.UI.Xaml.Hosting.HostingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_XamlSourceFocusNavigationRequest_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_XamlSourceFocusNavigationRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_XamlSourceFocusNavigationRequest[] = L"Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationRequest";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationResult
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationResultFactory interface starting with version 3.0 of the Windows.UI.Xaml.Hosting.HostingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IXamlSourceFocusNavigationResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_XamlSourceFocusNavigationResult_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_XamlSourceFocusNavigationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_XamlSourceFocusNavigationResult[] = L"Windows.UI.Xaml.Hosting.XamlSourceFocusNavigationResult";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Xaml.Hosting.XamlUIPresenter
 *
 * Introduced to Windows.UI.Xaml.Hosting.HostingContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics2 interface starting with version 1.0 of the Windows.UI.Xaml.Hosting.HostingContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Hosting.IXamlUIPresenterStatics interface starting with version 1.0 of the Windows.UI.Xaml.Hosting.HostingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Hosting.IXamlUIPresenter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Hosting_XamlUIPresenter_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Hosting_XamlUIPresenter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Hosting_XamlUIPresenter[] = L"Windows.UI.Xaml.Hosting.XamlUIPresenter";
#endif
#endif // WINDOWS_UI_XAML_HOSTING_HOSTINGCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eui2Examl2Ehosting_p_h__

#endif // __windows2Eui2Examl2Ehosting_h__
