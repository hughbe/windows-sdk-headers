/* Header file automatically generated from windows.ui.xaml.printing.idl */
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
#ifndef __windows2Eui2Examl2Eprinting_h__
#define __windows2Eui2Examl2Eprinting_h__
#ifndef __windows2Eui2Examl2Eprinting_p_h__
#define __windows2Eui2Examl2Eprinting_p_h__


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

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Graphics.Printing.h"
#include "Windows.UI.Xaml.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    interface IAddPagesEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler ABI::Windows::UI::Xaml::Printing::IAddPagesEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    interface IGetPreviewPageEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler ABI::Windows::UI::Xaml::Printing::IGetPreviewPageEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    interface IPaginateEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler ABI::Windows::UI::Xaml::Printing::IPaginateEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    interface IAddPagesEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs ABI::Windows::UI::Xaml::Printing::IAddPagesEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    interface IGetPreviewPageEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs ABI::Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    interface IPaginateEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs ABI::Windows::UI::Xaml::Printing::IPaginateEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    interface IPrintDocument;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument ABI::Windows::UI::Xaml::Printing::IPrintDocument

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    interface IPrintDocumentFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory ABI::Windows::UI::Xaml::Printing::IPrintDocumentFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    interface IPrintDocumentStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics ABI::Windows::UI::Xaml::Printing::IPrintDocumentStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintDocumentSource;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource ABI::Windows::Graphics::Printing::IPrintDocumentSource

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                class PrintTaskOptions;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */

#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Printing {
                interface IPrintTaskOptionsCore;
            } /* Windows */
        } /* Graphics */
    } /* Printing */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore ABI::Windows::Graphics::Printing::IPrintTaskOptionsCore

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                class DependencyProperty;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                interface IDependencyProperty;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty ABI::Windows::UI::Xaml::IDependencyProperty

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__


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
                namespace Printing {
                    
                    typedef enum PreviewPageCountType : int PreviewPageCountType;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */










namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    class AddPagesEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    class GetPreviewPageEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    class PaginateEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    class PrintDocument;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */







/*
 *
 * Struct Windows.UI.Xaml.Printing.PreviewPageCountType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    /* [v1_enum, contract] */
                    enum PreviewPageCountType : int
                    {
                        PreviewPageCountType_Final = 0,
                        PreviewPageCountType_Intermediate = 1,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Printing.AddPagesEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    /* [object, uuid("D4B57970-57A0-4209-847C-C093B54BC729"), contract] */
                    MIDL_INTERFACE("D4B57970-57A0-4209-847C-C093B54BC729")
                    IAddPagesEventHandler : public IUnknown
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Printing::IAddPagesEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAddPagesEventHandler=_uuidof(IAddPagesEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Printing.GetPreviewPageEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    /* [object, uuid("CCB3E9ED-9C11-4E50-AB49-E98086BBFDEF"), contract] */
                    MIDL_INTERFACE("CCB3E9ED-9C11-4E50-AB49-E98086BBFDEF")
                    IGetPreviewPageEventHandler : public IUnknown
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Printing::IGetPreviewPageEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGetPreviewPageEventHandler=_uuidof(IGetPreviewPageEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Printing.PaginateEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    /* [object, uuid("0CC05B61-811B-4A32-9965-13EB78DBB01B"), contract] */
                    MIDL_INTERFACE("0CC05B61-811B-4A32-9965-13EB78DBB01B")
                    IPaginateEventHandler : public IUnknown
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Printing::IPaginateEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPaginateEventHandler=_uuidof(IPaginateEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Printing.IAddPagesEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Printing.AddPagesEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IAddPagesEventArgs[] = L"Windows.UI.Xaml.Printing.IAddPagesEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    /* [object, uuid("E2E52BE5-056C-4420-9795-CB3526CE0C20"), exclusiveto, contract] */
                    MIDL_INTERFACE("E2E52BE5-056C-4420-9795-CB3526CE0C20")
                    IAddPagesEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PrintTaskOptions(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::IPrintTaskOptionsCore * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAddPagesEventArgs=_uuidof(IAddPagesEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Printing.IGetPreviewPageEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Printing.GetPreviewPageEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IGetPreviewPageEventArgs[] = L"Windows.UI.Xaml.Printing.IGetPreviewPageEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    /* [object, uuid("A43D703D-DEA9-4DF6-A7ED-35049CD485C7"), exclusiveto, contract] */
                    MIDL_INTERFACE("A43D703D-DEA9-4DF6-A7ED-35049CD485C7")
                    IGetPreviewPageEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageNumber(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGetPreviewPageEventArgs=_uuidof(IGetPreviewPageEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Printing.IPaginateEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Printing.PaginateEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IPaginateEventArgs[] = L"Windows.UI.Xaml.Printing.IPaginateEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    /* [object, uuid("ED945FD6-79AB-42B7-930A-3D6E09011D21"), exclusiveto, contract] */
                    MIDL_INTERFACE("ED945FD6-79AB-42B7-930A-3D6E09011D21")
                    IPaginateEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PrintTaskOptions(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::IPrintTaskOptionsCore * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentPreviewPageNumber(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPaginateEventArgs=_uuidof(IPaginateEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Printing.IPrintDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Printing.PrintDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IPrintDocument[] = L"Windows.UI.Xaml.Printing.IPrintDocument";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    /* [object, uuid("E44327C3-A999-485B-B1D8-72DC517821E6"), exclusiveto, contract] */
                    MIDL_INTERFACE("E44327C3-A999-485B-B1D8-72DC517821E6")
                    IPrintDocument : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentSource(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Graphics::Printing::IPrintDocumentSource * * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Paginate(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Printing::IPaginateEventHandler  * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Paginate(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GetPreviewPage(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Printing::IGetPreviewPageEventHandler  * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GetPreviewPage(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AddPages(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Printing::IAddPagesEventHandler  * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AddPages(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddPage(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * pageVisual
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddPagesComplete(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPreviewPageCount(
                            /* [in] */INT32 count,
                            /* [in] */ABI::Windows::UI::Xaml::Printing::PreviewPageCountType type
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPreviewPage(
                            /* [in] */INT32 pageNumber,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * pageVisual
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE InvalidatePreview(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintDocument=_uuidof(IPrintDocument);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Printing.IPrintDocumentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Printing.PrintDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IPrintDocumentFactory[] = L"Windows.UI.Xaml.Printing.IPrintDocumentFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    /* [object, uuid("FB87B18F-2606-4A2F-99D4-A7CDBC35D7C7"), exclusiveto, contract] */
                    MIDL_INTERFACE("FB87B18F-2606-4A2F-99D4-A7CDBC35D7C7")
                    IPrintDocumentFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt IInspectable * baseInterface,
                            /* [out] */__RPC__deref_out_opt IInspectable * * innerInterface,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Printing::IPrintDocument * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintDocumentFactory=_uuidof(IPrintDocumentFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Printing.IPrintDocumentStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Printing.PrintDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IPrintDocumentStatics[] = L"Windows.UI.Xaml.Printing.IPrintDocumentStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Printing {
                    /* [object, uuid("FD970A3C-B152-49E0-A6BD-6AA6477E43C7"), exclusiveto, contract] */
                    MIDL_INTERFACE("FD970A3C-B152-49E0-A6BD-6AA6477E43C7")
                    IPrintDocumentStatics : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentSourceProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPrintDocumentStatics=_uuidof(IPrintDocumentStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Printing */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Printing.AddPagesEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Printing.IAddPagesEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Printing_AddPagesEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Printing_AddPagesEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Printing_AddPagesEventArgs[] = L"Windows.UI.Xaml.Printing.AddPagesEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Printing.GetPreviewPageEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Printing.IGetPreviewPageEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Printing_GetPreviewPageEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Printing_GetPreviewPageEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Printing_GetPreviewPageEventArgs[] = L"Windows.UI.Xaml.Printing.GetPreviewPageEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Printing.PaginateEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Printing.IPaginateEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Printing_PaginateEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Printing_PaginateEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Printing_PaginateEventArgs[] = L"Windows.UI.Xaml.Printing.PaginateEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Printing.PrintDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Printing.IPrintDocumentStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Printing.IPrintDocument ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Printing_PrintDocument_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Printing_PrintDocument_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Printing_PrintDocument[] = L"Windows.UI.Xaml.Printing.PrintDocument";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument;

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore;

#endif // ____x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CUI_CXaml_CPrinting_CPreviewPageCountType __x_ABI_CWindows_CUI_CXaml_CPrinting_CPreviewPageCountType;



















/*
 *
 * Struct Windows.UI.Xaml.Printing.PreviewPageCountType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CPrinting_CPreviewPageCountType
{
    PreviewPageCountType_Final = 0,
    PreviewPageCountType_Intermediate = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Printing.AddPagesEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler_INTERFACE_DEFINED__
/* [object, uuid("D4B57970-57A0-4209-847C-C093B54BC729"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Printing.GetPreviewPageEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler_INTERFACE_DEFINED__
/* [object, uuid("CCB3E9ED-9C11-4E50-AB49-E98086BBFDEF"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Printing.PaginateEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler_INTERFACE_DEFINED__
/* [object, uuid("0CC05B61-811B-4A32-9965-13EB78DBB01B"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Printing.IAddPagesEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Printing.AddPagesEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IAddPagesEventArgs[] = L"Windows.UI.Xaml.Printing.IAddPagesEventArgs";
/* [object, uuid("E2E52BE5-056C-4420-9795-CB3526CE0C20"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PrintTaskOptions )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_get_PrintTaskOptions(This,value) \
    ( (This)->lpVtbl->get_PrintTaskOptions(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Printing.IGetPreviewPageEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Printing.GetPreviewPageEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IGetPreviewPageEventArgs[] = L"Windows.UI.Xaml.Printing.IGetPreviewPageEventArgs";
/* [object, uuid("A43D703D-DEA9-4DF6-A7ED-35049CD485C7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageNumber )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_get_PageNumber(This,value) \
    ( (This)->lpVtbl->get_PageNumber(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Printing.IPaginateEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Printing.PaginateEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IPaginateEventArgs[] = L"Windows.UI.Xaml.Printing.IPaginateEventArgs";
/* [object, uuid("ED945FD6-79AB-42B7-930A-3D6E09011D21"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PrintTaskOptions )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintTaskOptionsCore * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentPreviewPageNumber )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_get_PrintTaskOptions(This,value) \
    ( (This)->lpVtbl->get_PrintTaskOptions(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_get_CurrentPreviewPageNumber(This,value) \
    ( (This)->lpVtbl->get_CurrentPreviewPageNumber(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Printing.IPrintDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Printing.PrintDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IPrintDocument[] = L"Windows.UI.Xaml.Printing.IPrintDocument";
/* [object, uuid("E44327C3-A999-485B-B1D8-72DC517821E6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentSource )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CPrinting_CIPrintDocumentSource * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Paginate )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPaginateEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Paginate )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GetPreviewPage )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CPrinting_CIGetPreviewPageEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GetPreviewPage )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AddPages )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CPrinting_CIAddPagesEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AddPages )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *AddPage )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * pageVisual
        );
    HRESULT ( STDMETHODCALLTYPE *AddPagesComplete )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetPreviewPageCount )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
        /* [in] */INT32 count,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CPrinting_CPreviewPageCountType type
        );
    HRESULT ( STDMETHODCALLTYPE *SetPreviewPage )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This,
        /* [in] */INT32 pageNumber,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * pageVisual
        );
    HRESULT ( STDMETHODCALLTYPE *InvalidatePreview )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_get_DocumentSource(This,value) \
    ( (This)->lpVtbl->get_DocumentSource(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_add_Paginate(This,handler,token) \
    ( (This)->lpVtbl->add_Paginate(This,handler,token) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_remove_Paginate(This,token) \
    ( (This)->lpVtbl->remove_Paginate(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_add_GetPreviewPage(This,handler,token) \
    ( (This)->lpVtbl->add_GetPreviewPage(This,handler,token) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_remove_GetPreviewPage(This,token) \
    ( (This)->lpVtbl->remove_GetPreviewPage(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_add_AddPages(This,handler,token) \
    ( (This)->lpVtbl->add_AddPages(This,handler,token) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_remove_AddPages(This,token) \
    ( (This)->lpVtbl->remove_AddPages(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_AddPage(This,pageVisual) \
    ( (This)->lpVtbl->AddPage(This,pageVisual) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_AddPagesComplete(This) \
    ( (This)->lpVtbl->AddPagesComplete(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_SetPreviewPageCount(This,count,type) \
    ( (This)->lpVtbl->SetPreviewPageCount(This,count,type) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_SetPreviewPage(This,pageNumber,pageVisual) \
    ( (This)->lpVtbl->SetPreviewPage(This,pageNumber,pageVisual) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_InvalidatePreview(This) \
    ( (This)->lpVtbl->InvalidatePreview(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Printing.IPrintDocumentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Printing.PrintDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IPrintDocumentFactory[] = L"Windows.UI.Xaml.Printing.IPrintDocumentFactory";
/* [object, uuid("FB87B18F-2606-4A2F-99D4-A7CDBC35D7C7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory * This,
        /* [in] */__RPC__in_opt IInspectable * baseInterface,
        /* [out] */__RPC__deref_out_opt IInspectable * * innerInterface,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocument * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_CreateInstance(This,baseInterface,innerInterface,value) \
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Printing.IPrintDocumentStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Printing.PrintDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Printing_IPrintDocumentStatics[] = L"Windows.UI.Xaml.Printing.IPrintDocumentStatics";
/* [object, uuid("FD970A3C-B152-49E0-A6BD-6AA6477E43C7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentSourceProperty )(
        __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_get_DocumentSourceProperty(This,value) \
    ( (This)->lpVtbl->get_DocumentSourceProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CPrinting_CIPrintDocumentStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Printing.AddPagesEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Printing.IAddPagesEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Printing_AddPagesEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Printing_AddPagesEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Printing_AddPagesEventArgs[] = L"Windows.UI.Xaml.Printing.AddPagesEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Printing.GetPreviewPageEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Printing.IGetPreviewPageEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Printing_GetPreviewPageEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Printing_GetPreviewPageEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Printing_GetPreviewPageEventArgs[] = L"Windows.UI.Xaml.Printing.GetPreviewPageEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Printing.PaginateEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Printing.IPaginateEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Printing_PaginateEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Printing_PaginateEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Printing_PaginateEventArgs[] = L"Windows.UI.Xaml.Printing.PaginateEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Printing.PrintDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Printing.IPrintDocumentStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Printing.IPrintDocument ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Printing_PrintDocument_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Printing_PrintDocument_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Printing_PrintDocument[] = L"Windows.UI.Xaml.Printing.PrintDocument";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eui2Examl2Eprinting_p_h__

#endif // __windows2Eui2Examl2Eprinting_h__
