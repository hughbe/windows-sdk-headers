
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
#ifndef __windows2Esystem2Eremotedesktop2Eprovider_h__
#define __windows2Esystem2Eremotedesktop2Eprovider_h__
#ifndef __windows2Esystem2Eremotedesktop2Eprovider_p_h__
#define __windows2Esystem2Eremotedesktop2Eprovider_p_h__


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
#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x110000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.UI.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    interface ICloudPCDisplayInfo;
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo ABI::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    interface ICloudPCDisplayInfoFactory;
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory ABI::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfoFactory

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    interface ICloudPCHostService;
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService ABI::Windows::System::RemoteDesktop::Provider::ICloudPCHostService

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    interface ICloudPCHostServiceStatics;
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics ABI::Windows::System::RemoteDesktop::Provider::ICloudPCHostServiceStatics

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    interface IRemoteDesktopConnectionInfo;
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo ABI::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    interface IRemoteDesktopConnectionInfo2;
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2 ABI::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo2

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    interface IRemoteDesktopConnectionInfoStatics;
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics ABI::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfoStatics

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

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

#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_IInspectable_USE */


namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Uri;
        } /* Foundation */
    } /* Windows */
} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IUriRuntimeClass;
        } /* Foundation */
    } /* Windows */
} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIUriRuntimeClass ABI::Windows::Foundation::IUriRuntimeClass

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

namespace ABI {
    namespace Windows {
        namespace UI {
            typedef struct WindowId WindowId;
        } /* UI */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    typedef enum RemoteDesktopConnectionStatus : int RemoteDesktopConnectionStatus;
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    class CloudPCDisplayInfo;
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    class CloudPCHostService;
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    class RemoteDesktopConnectionInfo;
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */

/*
 *
 * Struct Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 15.0
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    enum RemoteDesktopConnectionStatus : int
                    {
                        RemoteDesktopConnectionStatus_Connecting = 0,
                        RemoteDesktopConnectionStatus_Connected = 1,
                        RemoteDesktopConnectionStatus_UserInputNeeded = 2,
                        RemoteDesktopConnectionStatus_Disconnected = 3,
                    };
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.ICloudPCDisplayInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 17.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.CloudPCDisplayInfo
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_ICloudPCDisplayInfo[] = L"Windows.System.RemoteDesktop.Provider.ICloudPCDisplayInfo";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    MIDL_INTERFACE("6c858de8-1095-5c6e-913f-2e800c29fc53")
                    ICloudPCDisplayInfo : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_Name(
                            HSTRING* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_Name(
                            HSTRING value
                            ) = 0;
                    };

                    MIDL_CONST_ID IID& IID_ICloudPCDisplayInfo = __uuidof(ICloudPCDisplayInfo);
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.ICloudPCDisplayInfoFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 17.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.CloudPCDisplayInfo
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_ICloudPCDisplayInfoFactory[] = L"Windows.System.RemoteDesktop.Provider.ICloudPCDisplayInfoFactory";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    MIDL_INTERFACE("97db7d7d-90d7-5a31-814d-1e9aed6586ae")
                    ICloudPCDisplayInfoFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            HSTRING name,
                            ABI::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo** value
                            ) = 0;
                    };

                    MIDL_CONST_ID IID& IID_ICloudPCDisplayInfoFactory = __uuidof(ICloudPCDisplayInfoFactory);
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.ICloudPCHostService
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 17.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.CloudPCHostService
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_ICloudPCHostService[] = L"Windows.System.RemoteDesktop.Provider.ICloudPCHostService";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    MIDL_INTERFACE("593aa68b-29e0-5c1b-a9db-f6d58eaac33f")
                    ICloudPCHostService : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_DisplayInfo(
                            ABI::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_DisplayInfo(
                            ABI::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SwitchToCloudPC(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE add_SwitchToLocalPC(
                            __FIEventHandler_1_IInspectable* handler,
                            EventRegistrationToken* token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE remove_SwitchToLocalPC(
                            EventRegistrationToken token
                            ) = 0;
                    };

                    MIDL_CONST_ID IID& IID_ICloudPCHostService = __uuidof(ICloudPCHostService);
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.ICloudPCHostServiceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 17.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.CloudPCHostService
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_ICloudPCHostServiceStatics[] = L"Windows.System.RemoteDesktop.Provider.ICloudPCHostServiceStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    MIDL_INTERFACE("b756145e-85c0-5d54-8a68-4d92bba93365")
                    ICloudPCHostServiceStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetForWindow(
                            ABI::Windows::UI::WindowId windowId,
                            ABI::Windows::System::RemoteDesktop::Provider::ICloudPCHostService** result
                            ) = 0;
                    };

                    MIDL_CONST_ID IID& IID_ICloudPCHostServiceStatics = __uuidof(ICloudPCHostServiceStatics);
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 15.0
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo[] = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    MIDL_INTERFACE("886bde2a-46ad-5a25-9348-03e801c78575")
                    IRemoteDesktopConnectionInfo : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE SetConnectionStatus(
                            ABI::Windows::System::RemoteDesktop::Provider::RemoteDesktopConnectionStatus value
                            ) = 0;
                    };

                    MIDL_CONST_ID IID& IID_IRemoteDesktopConnectionInfo = __uuidof(IRemoteDesktopConnectionInfo);
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 17.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo2[] = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo2";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    MIDL_INTERFACE("8a260cf2-195d-5cd8-97fb-a2b1c5e51261")
                    IRemoteDesktopConnectionInfo2 : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE get_DisplayInfo(
                            ABI::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo** value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE put_DisplayInfo(
                            ABI::Windows::System::RemoteDesktop::Provider::ICloudPCDisplayInfo* value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE add_SwitchToCloudPC(
                            __FIEventHandler_1_IInspectable* handler,
                            EventRegistrationToken* token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE remove_SwitchToCloudPC(
                            EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SwitchToLocalPC(void) = 0;
                    };

                    MIDL_CONST_ID IID& IID_IRemoteDesktopConnectionInfo2 = __uuidof(IRemoteDesktopConnectionInfo2);
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 15.0
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfoStatics[] = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfoStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                namespace Provider {
                    MIDL_INTERFACE("4a7dc5a1-3368-5a75-bb78-807df7ebc439")
                    IRemoteDesktopConnectionInfoStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetForLaunchUri(
                            ABI::Windows::Foundation::IUriRuntimeClass* launchUri,
                            ABI::Windows::UI::WindowId windowId,
                            ABI::Windows::System::RemoteDesktop::Provider::IRemoteDesktopConnectionInfo** result
                            ) = 0;
                    };

                    MIDL_CONST_ID IID& IID_IRemoteDesktopConnectionInfoStatics = __uuidof(IRemoteDesktopConnectionInfoStatics);
                } /* Provider */
            } /* RemoteDesktop */
        } /* System */
    } /* Windows */
} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000

/*
 *
 * Class Windows.System.RemoteDesktop.Provider.CloudPCDisplayInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 17.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.RemoteDesktop.Provider.ICloudPCDisplayInfoFactory interface starting with version 17.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteDesktop.Provider.ICloudPCDisplayInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#ifndef RUNTIMECLASS_Windows_System_RemoteDesktop_Provider_CloudPCDisplayInfo_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteDesktop_Provider_CloudPCDisplayInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteDesktop_Provider_CloudPCDisplayInfo[] = L"Windows.System.RemoteDesktop.Provider.CloudPCDisplayInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.System.RemoteDesktop.Provider.CloudPCHostService
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 17.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.RemoteDesktop.Provider.ICloudPCHostServiceStatics interface starting with version 17.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteDesktop.Provider.ICloudPCHostService ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#ifndef RUNTIMECLASS_Windows_System_RemoteDesktop_Provider_CloudPCHostService_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteDesktop_Provider_CloudPCHostService_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteDesktop_Provider_CloudPCHostService[] = L"Windows.System.RemoteDesktop.Provider.CloudPCHostService";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 15.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfoStatics interface starting with version 15.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo ** Default Interface **
 *    Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000
#ifndef RUNTIMECLASS_Windows_System_RemoteDesktop_Provider_RemoteDesktopConnectionInfo_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteDesktop_Provider_RemoteDesktopConnectionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteDesktop_Provider_RemoteDesktopConnectionInfo[] = L"Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000

#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo;

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory;

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService;

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics;

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo;

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2 __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2;

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics;

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;

typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__FIEventHandler_1_IInspectable* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__FIEventHandler_1_IInspectable* This);
    ULONG (STDMETHODCALLTYPE* Release)(__FIEventHandler_1_IInspectable* This);
    HRESULT (STDMETHODCALLTYPE* Invoke)(__FIEventHandler_1_IInspectable* This,
        IInspectable* sender,
        IInspectable* args);

    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;

interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __FIEventHandler_1_IInspectable_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __FIEventHandler_1_IInspectable_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __FIEventHandler_1_IInspectable_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __FIEventHandler_1_IInspectable_Invoke(This, sender, args) \
    ((This)->lpVtbl->Invoke(This, sender, args))

#endif /* COBJMACROS */

#endif // ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CUI_CWindowId __x_ABI_CWindows_CUI_CWindowId;

typedef enum __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CRemoteDesktopConnectionStatus __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CRemoteDesktopConnectionStatus;

/*
 *
 * Struct Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 15.0
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000
enum __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CRemoteDesktopConnectionStatus
{
    RemoteDesktopConnectionStatus_Connecting = 0,
    RemoteDesktopConnectionStatus_Connected = 1,
    RemoteDesktopConnectionStatus_UserInputNeeded = 2,
    RemoteDesktopConnectionStatus_Disconnected = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.ICloudPCDisplayInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 17.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.CloudPCDisplayInfo
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_ICloudPCDisplayInfo[] = L"Windows.System.RemoteDesktop.Provider.ICloudPCDisplayInfo";
typedef struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_Name)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_Name)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo* This,
        HSTRING value);

    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_get_Name(This, value) \
    ((This)->lpVtbl->get_Name(This, value))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_put_Name(This, value) \
    ((This)->lpVtbl->put_Name(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.ICloudPCDisplayInfoFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 17.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.CloudPCDisplayInfo
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_ICloudPCDisplayInfoFactory[] = L"Windows.System.RemoteDesktop.Provider.ICloudPCDisplayInfoFactory";
typedef struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactoryVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* CreateInstance)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory* This,
        HSTRING name,
        __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo** value);

    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactoryVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_CreateInstance(This, name, value) \
    ((This)->lpVtbl->CreateInstance(This, name, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.ICloudPCHostService
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 17.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.CloudPCHostService
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_ICloudPCHostService[] = L"Windows.System.RemoteDesktop.Provider.ICloudPCHostService";
typedef struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_DisplayInfo)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService* This,
        __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo** value);
    HRESULT (STDMETHODCALLTYPE* put_DisplayInfo)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService* This,
        __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo* value);
    HRESULT (STDMETHODCALLTYPE* SwitchToCloudPC)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService* This);
    HRESULT (STDMETHODCALLTYPE* add_SwitchToLocalPC)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService* This,
        __FIEventHandler_1_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_SwitchToLocalPC)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService* This,
        EventRegistrationToken token);

    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_get_DisplayInfo(This, value) \
    ((This)->lpVtbl->get_DisplayInfo(This, value))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_put_DisplayInfo(This, value) \
    ((This)->lpVtbl->put_DisplayInfo(This, value))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_SwitchToCloudPC(This) \
    ((This)->lpVtbl->SwitchToCloudPC(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_add_SwitchToLocalPC(This, handler, token) \
    ((This)->lpVtbl->add_SwitchToLocalPC(This, handler, token))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_remove_SwitchToLocalPC(This, token) \
    ((This)->lpVtbl->remove_SwitchToLocalPC(This, token))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.ICloudPCHostServiceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 17.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.CloudPCHostService
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_ICloudPCHostServiceStatics[] = L"Windows.System.RemoteDesktop.Provider.ICloudPCHostServiceStatics";
typedef struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetForWindow)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics* This,
        struct __x_ABI_CWindows_CUI_CWindowId windowId,
        __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostService** result);

    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_GetForWindow(This, windowId, result) \
    ((This)->lpVtbl->GetForWindow(This, windowId, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCHostServiceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 15.0
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo[] = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo";
typedef struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* SetConnectionStatus)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo* This,
        enum __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CRemoteDesktopConnectionStatus value);

    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_SetConnectionStatus(This, value) \
    ((This)->lpVtbl->SetConnectionStatus(This, value))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 17.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfo2[] = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo2";
typedef struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2Vtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* get_DisplayInfo)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2* This,
        __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo** value);
    HRESULT (STDMETHODCALLTYPE* put_DisplayInfo)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2* This,
        __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CICloudPCDisplayInfo* value);
    HRESULT (STDMETHODCALLTYPE* add_SwitchToCloudPC)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2* This,
        __FIEventHandler_1_IInspectable* handler,
        EventRegistrationToken* token);
    HRESULT (STDMETHODCALLTYPE* remove_SwitchToCloudPC)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2* This,
        EventRegistrationToken token);
    HRESULT (STDMETHODCALLTYPE* SwitchToLocalPC)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2* This);

    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2Vtbl;

interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2Vtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_get_DisplayInfo(This, value) \
    ((This)->lpVtbl->get_DisplayInfo(This, value))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_put_DisplayInfo(This, value) \
    ((This)->lpVtbl->put_DisplayInfo(This, value))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_add_SwitchToCloudPC(This, handler, token) \
    ((This)->lpVtbl->add_SwitchToCloudPC(This, handler, token))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_remove_SwitchToCloudPC(This, token) \
    ((This)->lpVtbl->remove_SwitchToCloudPC(This, token))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_SwitchToLocalPC(This) \
    ((This)->lpVtbl->SwitchToLocalPC(This))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Interface Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 15.0
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_Provider_IRemoteDesktopConnectionInfoStatics[] = L"Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfoStatics";
typedef struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStaticsVtbl
{
    BEGIN_INTERFACE

    HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics* This,
        REFIID riid,
        void** ppvObject);
    ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics* This);
    ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics* This);
    HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics* This,
        ULONG* iidCount,
        IID** iids);
    HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics* This,
        HSTRING* className);
    HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics* This,
        TrustLevel* trustLevel);
    HRESULT (STDMETHODCALLTYPE* GetForLaunchUri)(__x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics* This,
        __x_ABI_CWindows_CFoundation_CIUriRuntimeClass* launchUri,
        struct __x_ABI_CWindows_CUI_CWindowId windowId,
        __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfo** result);

    END_INTERFACE
} __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStaticsVtbl* lpVtbl;
};

#ifdef COBJMACROS

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_QueryInterface(This, riid, ppvObject) \
    ((This)->lpVtbl->QueryInterface(This, riid, ppvObject))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_Release(This) \
    ((This)->lpVtbl->Release(This))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_GetIids(This, iidCount, iids) \
    ((This)->lpVtbl->GetIids(This, iidCount, iids))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_GetRuntimeClassName(This, className) \
    ((This)->lpVtbl->GetRuntimeClassName(This, className))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_GetTrustLevel(This, trustLevel) \
    ((This)->lpVtbl->GetTrustLevel(This, trustLevel))

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_GetForLaunchUri(This, launchUri, windowId, result) \
    ((This)->lpVtbl->GetForLaunchUri(This, launchUri, windowId, result))

#endif /* COBJMACROS */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CProvider_CIRemoteDesktopConnectionInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000

/*
 *
 * Class Windows.System.RemoteDesktop.Provider.CloudPCDisplayInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 17.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.RemoteDesktop.Provider.ICloudPCDisplayInfoFactory interface starting with version 17.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteDesktop.Provider.ICloudPCDisplayInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#ifndef RUNTIMECLASS_Windows_System_RemoteDesktop_Provider_CloudPCDisplayInfo_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteDesktop_Provider_CloudPCDisplayInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteDesktop_Provider_CloudPCDisplayInfo[] = L"Windows.System.RemoteDesktop.Provider.CloudPCDisplayInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.System.RemoteDesktop.Provider.CloudPCHostService
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 17.0
 *
 * Type is for evaluation purposes and is subject to change or removal in future updates.
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.RemoteDesktop.Provider.ICloudPCHostServiceStatics interface starting with version 17.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteDesktop.Provider.ICloudPCHostService ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#ifndef RUNTIMECLASS_Windows_System_RemoteDesktop_Provider_CloudPCHostService_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteDesktop_Provider_CloudPCHostService_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteDesktop_Provider_CloudPCHostService[] = L"Windows.System.RemoteDesktop.Provider.CloudPCHostService";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x110000
#endif // defined(ENABLE_WINRT_EXPERIMENTAL_TYPES)

/*
 *
 * Class Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 15.0
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfoStatics interface starting with version 15.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo ** Default Interface **
 *    Windows.System.RemoteDesktop.Provider.IRemoteDesktopConnectionInfo2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000
#ifndef RUNTIMECLASS_Windows_System_RemoteDesktop_Provider_RemoteDesktopConnectionInfo_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteDesktop_Provider_RemoteDesktopConnectionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteDesktop_Provider_RemoteDesktopConnectionInfo[] = L"Windows.System.RemoteDesktop.Provider.RemoteDesktopConnectionInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0xf0000

#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Esystem2Eremotedesktop2Eprovider_p_h__

#endif // __windows2Esystem2Eremotedesktop2Eprovider_h__
