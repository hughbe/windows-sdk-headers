/* Header file automatically generated from windows.phone.networking.voip.idl */
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
#ifndef __windows2Ephone2Enetworking2Evoip_h__
#define __windows2Ephone2Enetworking2Evoip_h__
#ifndef __windows2Ephone2Enetworking2Evoip_p_h__
#define __windows2Ephone2Enetworking2Evoip_p_h__


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
#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x70000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

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
#include "Windows.Phone.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface ICallAnswerEventArgs;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs ABI::Windows::Phone::Networking::Voip::ICallAnswerEventArgs

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface ICallRejectEventArgs;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs ABI::Windows::Phone::Networking::Voip::ICallRejectEventArgs

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface ICallStateChangeEventArgs;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs ABI::Windows::Phone::Networking::Voip::ICallStateChangeEventArgs

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface IMuteChangeEventArgs;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs ABI::Windows::Phone::Networking::Voip::IMuteChangeEventArgs

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface IQuerySeamlessUpgradeSupportOperation;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation ABI::Windows::Phone::Networking::Voip::IQuerySeamlessUpgradeSupportOperation

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface IVoipCallCoordinator;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator ABI::Windows::Phone::Networking::Voip::IVoipCallCoordinator

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface IVoipCallCoordinator2;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 ABI::Windows::Phone::Networking::Voip::IVoipCallCoordinator2

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface IVoipCallCoordinator3;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 ABI::Windows::Phone::Networking::Voip::IVoipCallCoordinator3

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface IVoipCallCoordinatorStatics;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics ABI::Windows::Phone::Networking::Voip::IVoipCallCoordinatorStatics

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface IVoipCallCoordinatorWithAppDeterminedUpgrade;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade ABI::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithAppDeterminedUpgrade

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface IVoipCallCoordinatorWithUpgrade;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade ABI::Windows::Phone::Networking::Voip::IVoipCallCoordinatorWithUpgrade

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface IVoipOperation;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation ABI::Windows::Phone::Networking::Voip::IVoipOperation

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface IVoipOperationsManager;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager ABI::Windows::Phone::Networking::Voip::IVoipOperationsManager

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface IVoipPhoneCall;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface IVoipPhoneCall2;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall2

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface IVoipPhoneCall3;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall3

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    interface IVoipPhoneCallReady;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady ABI::Windows::Phone::Networking::Voip::IVoipPhoneCallReady

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    class VoipCallCoordinator;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    class MuteChangeEventArgs;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */


#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4603702c-d932-5c2b-b617-66846277a5dc"))
ITypedEventHandler<ABI::Windows::Phone::Networking::Voip::VoipCallCoordinator*,ABI::Windows::Phone::Networking::Voip::MuteChangeEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Networking::Voip::VoipCallCoordinator*, ABI::Windows::Phone::Networking::Voip::IVoipCallCoordinator*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Networking::Voip::MuteChangeEventArgs*, ABI::Windows::Phone::Networking::Voip::IMuteChangeEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Phone.Networking.Voip.VoipCallCoordinator, Windows.Phone.Networking.Voip.MuteChangeEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Phone::Networking::Voip::VoipCallCoordinator*,ABI::Windows::Phone::Networking::Voip::MuteChangeEventArgs*> __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs_t;
#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Networking::Voip::IVoipCallCoordinator*,ABI::Windows::Phone::Networking::Voip::IMuteChangeEventArgs*>
//#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Networking::Voip::IVoipCallCoordinator*,ABI::Windows::Phone::Networking::Voip::IMuteChangeEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs_USE */


#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    class VoipPhoneCall;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    class CallAnswerEventArgs;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */


#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d31bfb3a-4430-5d06-80c8-7b87bba6dac1"))
ITypedEventHandler<ABI::Windows::Phone::Networking::Voip::VoipPhoneCall*,ABI::Windows::Phone::Networking::Voip::CallAnswerEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Networking::Voip::VoipPhoneCall*, ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Networking::Voip::CallAnswerEventArgs*, ABI::Windows::Phone::Networking::Voip::ICallAnswerEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Phone.Networking.Voip.VoipPhoneCall, Windows.Phone.Networking.Voip.CallAnswerEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Phone::Networking::Voip::VoipPhoneCall*,ABI::Windows::Phone::Networking::Voip::CallAnswerEventArgs*> __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs_t;
#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall*,ABI::Windows::Phone::Networking::Voip::ICallAnswerEventArgs*>
//#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall*,ABI::Windows::Phone::Networking::Voip::ICallAnswerEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs_USE */


#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    class CallRejectEventArgs;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */


#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("141863d2-c712-5abe-bf93-36655c935e63"))
ITypedEventHandler<ABI::Windows::Phone::Networking::Voip::VoipPhoneCall*,ABI::Windows::Phone::Networking::Voip::CallRejectEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Networking::Voip::VoipPhoneCall*, ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Networking::Voip::CallRejectEventArgs*, ABI::Windows::Phone::Networking::Voip::ICallRejectEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Phone.Networking.Voip.VoipPhoneCall, Windows.Phone.Networking.Voip.CallRejectEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Phone::Networking::Voip::VoipPhoneCall*,ABI::Windows::Phone::Networking::Voip::CallRejectEventArgs*> __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs_t;
#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall*,ABI::Windows::Phone::Networking::Voip::ICallRejectEventArgs*>
//#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall*,ABI::Windows::Phone::Networking::Voip::ICallRejectEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs_USE */


#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    class CallStateChangeEventArgs;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */


#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("80e8f32d-0b5b-568e-8861-250183b27e8e"))
ITypedEventHandler<ABI::Windows::Phone::Networking::Voip::VoipPhoneCall*,ABI::Windows::Phone::Networking::Voip::CallStateChangeEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Networking::Voip::VoipPhoneCall*, ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Phone::Networking::Voip::CallStateChangeEventArgs*, ABI::Windows::Phone::Networking::Voip::ICallStateChangeEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Phone.Networking.Voip.VoipPhoneCall, Windows.Phone.Networking.Voip.CallStateChangeEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Phone::Networking::Voip::VoipPhoneCall*,ABI::Windows::Phone::Networking::Voip::CallStateChangeEventArgs*> __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs_t;
#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall*,ABI::Windows::Phone::Networking::Voip::ICallStateChangeEventArgs*>
//#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall*,ABI::Windows::Phone::Networking::Voip::ICallStateChangeEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs_USE */


#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Uri;
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IUriRuntimeClass;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIUriRuntimeClass ABI::Windows::Foundation::IUriRuntimeClass

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__







namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    
                    typedef enum SeamlessCallUpgradeSupport : int SeamlessCallUpgradeSupport;
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    
                    typedef enum VoipCallMedia : unsigned int VoipCallMedia;
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    
                    typedef enum VoipCallRejectReason : int VoipCallRejectReason;
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    
                    typedef enum VoipCallState : int VoipCallState;
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    
                    typedef enum VoipOperationType : int VoipOperationType;
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */






















namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    class QuerySeamlessUpgradeSupportOperation;
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */














/*
 *
 * Struct Windows.Phone.Networking.Voip.SeamlessCallUpgradeSupport
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [v1_enum, contract] */
                    enum SeamlessCallUpgradeSupport : int
                    {
                        SeamlessCallUpgradeSupport_Unknown = 0,
                        SeamlessCallUpgradeSupport_NotSupported = 1,
                        SeamlessCallUpgradeSupport_Supported = 2,
                    };
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Networking.Voip.VoipCallMedia
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [v1_enum, flags, contract] */
                    enum VoipCallMedia : unsigned int
                    {
                        VoipCallMedia_None = 0,
                        VoipCallMedia_Audio = 0x1,
                        VoipCallMedia_Video = 0x2,
                    };
                    
                    DEFINE_ENUM_FLAG_OPERATORS(VoipCallMedia)
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Networking.Voip.VoipCallRejectReason
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [v1_enum, contract] */
                    enum VoipCallRejectReason : int
                    {
                        VoipCallRejectReason_UserIgnored = 0,
                        VoipCallRejectReason_TimedOut = 1,
                        VoipCallRejectReason_OtherIncomingCall = 2,
                        VoipCallRejectReason_EmergencyCallExists = 3,
                        VoipCallRejectReason_InvalidCallState = 4,
                    };
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Networking.Voip.VoipCallState
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [v1_enum, contract] */
                    enum VoipCallState : int
                    {
                        VoipCallState_Ended = 0,
                        VoipCallState_Held = 1,
                        VoipCallState_Active = 2,
                        VoipCallState_Incoming = 3,
                        VoipCallState_Outgoing = 4,
                    };
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Networking.Voip.VoipOperationType
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [v1_enum, contract] */
                    enum VoipOperationType : int
                    {
                        VoipOperationType_QueryRemotePartySeamless = 0,
                    };
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.ICallAnswerEventArgs
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.CallAnswerEventArgs
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_ICallAnswerEventArgs[] = L"Windows.Phone.Networking.Voip.ICallAnswerEventArgs";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("61F132AA-F92A-48FA-AA8F-4F3A17662980"), exclusiveto, contract] */
                    MIDL_INTERFACE("61F132AA-F92A-48FA-AA8F-4F3A17662980")
                    ICallAnswerEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AcceptedMedia(
                            /* [retval, out] */__RPC__out ABI::Windows::Phone::Networking::Voip::VoipCallMedia * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICallAnswerEventArgs=_uuidof(ICallAnswerEventArgs);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.ICallRejectEventArgs
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.CallRejectEventArgs
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_ICallRejectEventArgs[] = L"Windows.Phone.Networking.Voip.ICallRejectEventArgs";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("3E04061A-CE7D-49C2-A2B8-7F49B6EAEBC5"), exclusiveto, contract] */
                    MIDL_INTERFACE("3E04061A-CE7D-49C2-A2B8-7F49B6EAEBC5")
                    ICallRejectEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RejectReason(
                            /* [retval, out] */__RPC__out ABI::Windows::Phone::Networking::Voip::VoipCallRejectReason * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICallRejectEventArgs=_uuidof(ICallRejectEventArgs);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.ICallStateChangeEventArgs
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.CallStateChangeEventArgs
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_ICallStateChangeEventArgs[] = L"Windows.Phone.Networking.Voip.ICallStateChangeEventArgs";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("1F3E87B0-D371-4395-8B6C-1786A42E2F18"), exclusiveto, contract] */
                    MIDL_INTERFACE("1F3E87B0-D371-4395-8B6C-1786A42E2F18")
                    ICallStateChangeEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                            /* [retval, out] */__RPC__out ABI::Windows::Phone::Networking::Voip::VoipCallState * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICallStateChangeEventArgs=_uuidof(ICallStateChangeEventArgs);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IMuteChangeEventArgs
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.MuteChangeEventArgs
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IMuteChangeEventArgs[] = L"Windows.Phone.Networking.Voip.IMuteChangeEventArgs";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("F914EAD4-1C94-458C-ACB7-1926A233F74C"), exclusiveto, contract] */
                    MIDL_INTERFACE("F914EAD4-1C94-458C-ACB7-1926A233F74C")
                    IMuteChangeEventArgs : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Muted(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMuteChangeEventArgs=_uuidof(IMuteChangeEventArgs);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IQuerySeamlessUpgradeSupportOperation
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.QuerySeamlessUpgradeSupportOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Phone.Networking.Voip.IVoipOperation
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IQuerySeamlessUpgradeSupportOperation[] = L"Windows.Phone.Networking.Voip.IQuerySeamlessUpgradeSupportOperation";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("7E7ADCCE-CF2B-4EA0-8475-E1BDB4140379"), exclusiveto, contract] */
                    MIDL_INTERFACE("7E7ADCCE-CF2B-4EA0-8475-E1BDB4140379")
                    IQuerySeamlessUpgradeSupportOperation : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RemoteId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyCompletion(
                            /* [in] */boolean succeeded,
                            /* [in] */ABI::Windows::Phone::Networking::Voip::SeamlessCallUpgradeSupport seamlessCallUpgradeSupport
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IQuerySeamlessUpgradeSupportOperation=_uuidof(IQuerySeamlessUpgradeSupportOperation);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipCallCoordinator
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipCallCoordinator
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinator[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinator";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("0D5F3579-F6DD-4E10-9F25-3D8C91376EE8"), exclusiveto, contract] */
                    MIDL_INTERFACE("0D5F3579-F6DD-4E10-9F25-3D8C91376EE8")
                    IVoipCallCoordinator : public IInspectable
                    {
                    public:
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_MuteRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs * muteChangeHandler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_MuteRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_UnmuteRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs * muteChangeHandler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_UnmuteRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RequestNewIncomingCall(
                            /* [in] */__RPC__in HSTRING context,
                            /* [in] */__RPC__in HSTRING contactName,
                            /* [in] */__RPC__in HSTRING contactNumber,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * contactImage,
                            /* [in] */__RPC__in HSTRING serviceName,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * brandingImage,
                            /* [in] */__RPC__in HSTRING callDetails,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * ringtone,
                            /* [in] */ABI::Windows::Phone::Networking::Voip::VoipCallMedia media,
                            /* [in] */ABI::Windows::Foundation::TimeSpan ringTimeout,
                            /* [out] */__RPC__deref_out_opt ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall * * call
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RequestNewOutgoingCall(
                            /* [in] */__RPC__in HSTRING context,
                            /* [in] */__RPC__in HSTRING contactName,
                            /* [in] */__RPC__in HSTRING serviceName,
                            /* [in] */ABI::Windows::Phone::Networking::Voip::VoipCallMedia media,
                            /* [out] */__RPC__deref_out_opt ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall * * call
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyMuted(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyUnmuted(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVoipCallCoordinator=_uuidof(IVoipCallCoordinator);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipCallCoordinator2
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipCallCoordinator
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Phone.Networking.Voip.IVoipCallCoordinator
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinator2[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinator2";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("0290A9B8-645D-4711-8E32-926BFABF6928"), exclusiveto, contract] */
                    MIDL_INTERFACE("0290A9B8-645D-4711-8E32-926BFABF6928")
                    IVoipCallCoordinator2 : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE SetupNewAcceptedCall(
                            /* [in] */__RPC__in HSTRING context,
                            /* [in] */__RPC__in HSTRING contactName,
                            /* [in] */__RPC__in HSTRING contactNumber,
                            /* [in] */__RPC__in HSTRING serviceName,
                            /* [in] */ABI::Windows::Phone::Networking::Voip::VoipCallMedia media,
                            /* [out] */__RPC__deref_out_opt ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall * * call
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVoipCallCoordinator2=_uuidof(IVoipCallCoordinator2);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipCallCoordinator3
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipCallCoordinator
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Phone.Networking.Voip.IVoipCallCoordinator
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinator3[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinator3";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("80A2EDE6-0D02-40CD-8891-B4CEC6472C82"), exclusiveto, contract] */
                    MIDL_INTERFACE("80A2EDE6-0D02-40CD-8891-B4CEC6472C82")
                    IVoipCallCoordinator3 : public IInspectable
                    {
                    public:
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestNewIncomingCallWithContactRemoteId(
                            /* [in] */__RPC__in HSTRING context,
                            /* [in] */__RPC__in HSTRING contactName,
                            /* [in] */__RPC__in HSTRING contactNumber,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * contactImage,
                            /* [in] */__RPC__in HSTRING serviceName,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * brandingImage,
                            /* [in] */__RPC__in HSTRING callDetails,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * ringtone,
                            /* [in] */ABI::Windows::Phone::Networking::Voip::VoipCallMedia media,
                            /* [in] */ABI::Windows::Foundation::TimeSpan ringTimeout,
                            /* [in] */__RPC__in HSTRING contactRemoteId,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall * * call
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RequestNewAppInitiatedCall(
                            /* [in] */__RPC__in HSTRING context,
                            /* [in] */__RPC__in HSTRING contactName,
                            /* [in] */__RPC__in HSTRING contactNumber,
                            /* [in] */__RPC__in HSTRING serviceName,
                            /* [in] */ABI::Windows::Phone::Networking::Voip::VoipCallMedia media,
                            /* [out] */__RPC__deref_out_opt ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall * * call
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVoipCallCoordinator3=_uuidof(IVoipCallCoordinator3);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipCallCoordinatorStatics
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipCallCoordinator
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinatorStatics[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinatorStatics";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("10FB55BB-E07D-407E-BC39-F7CC3641D979"), exclusiveto, contract] */
                    MIDL_INTERFACE("10FB55BB-E07D-407E-BC39-F7CC3641D979")
                    IVoipCallCoordinatorStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetDefault(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Phone::Networking::Voip::IVoipCallCoordinator * * coordinator
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVoipCallCoordinatorStatics=_uuidof(IVoipCallCoordinatorStatics);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipCallCoordinatorWithAppDeterminedUpgrade
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipCallCoordinator
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinatorWithAppDeterminedUpgrade[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinatorWithAppDeterminedUpgrade";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("4EC3EDA6-9CF0-405C-BCCD-CB7A8632A456"), exclusiveto, contract] */
                    MIDL_INTERFACE("4EC3EDA6-9CF0-405C-BCCD-CB7A8632A456")
                    IVoipCallCoordinatorWithAppDeterminedUpgrade : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE ConfirmNonSeamlessUpgrade(
                            /* [in] */GUID callUpgradeGuid
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CancelUpgrade(
                            /* [in] */GUID callUpgradeGuid
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVoipCallCoordinatorWithAppDeterminedUpgrade=_uuidof(IVoipCallCoordinatorWithAppDeterminedUpgrade);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipCallCoordinatorWithUpgrade
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipCallCoordinator
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinatorWithUpgrade[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinatorWithUpgrade";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("6172CCBC-6DD1-4F8E-B938-5393530C31CA"), exclusiveto, contract] */
                    MIDL_INTERFACE("6172CCBC-6DD1-4F8E-B938-5393530C31CA")
                    IVoipCallCoordinatorWithUpgrade : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE RequestOutgoingUpgradeToVideoCall(
                            /* [in] */GUID callUpgradeGuid,
                            /* [in] */__RPC__in HSTRING context,
                            /* [in] */__RPC__in HSTRING contactName,
                            /* [in] */__RPC__in HSTRING serviceName,
                            /* [out] */__RPC__deref_out_opt ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall * * call
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RequestIncomingUpgradeToVideoCall(
                            /* [in] */__RPC__in HSTRING context,
                            /* [in] */__RPC__in HSTRING contactName,
                            /* [in] */__RPC__in HSTRING contactNumber,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * contactImage,
                            /* [in] */__RPC__in HSTRING serviceName,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * brandingImage,
                            /* [in] */__RPC__in HSTRING callDetails,
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * ringtone,
                            /* [in] */ABI::Windows::Foundation::TimeSpan ringTimeout,
                            /* [out] */__RPC__deref_out_opt ABI::Windows::Phone::Networking::Voip::IVoipPhoneCall * * call
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVoipCallCoordinatorWithUpgrade=_uuidof(IVoipCallCoordinatorWithUpgrade);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipOperation
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipOperation[] = L"Windows.Phone.Networking.Voip.IVoipOperation";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("559B526D-C2CB-44D9-83A5-60CDA4B71D36"), contract] */
                    MIDL_INTERFACE("559B526D-C2CB-44D9-83A5-60CDA4B71D36")
                    IVoipOperation : public IInspectable
                    {
                    public:
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */__RPC__out UINT32 * operationId
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                            /* [retval, out] */__RPC__out ABI::Windows::Phone::Networking::Voip::VoipOperationType * operationType
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVoipOperation=_uuidof(IVoipOperation);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipOperationsManager
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipCallCoordinator
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipOperationsManager[] = L"Windows.Phone.Networking.Voip.IVoipOperationsManager";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("BA77E23C-38D9-4DFB-853F-F901978FF7FA"), exclusiveto, contract] */
                    MIDL_INTERFACE("BA77E23C-38D9-4DFB-853F-F901978FF7FA")
                    IVoipOperationsManager : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetNextOperation(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Phone::Networking::Voip::IVoipOperation * * voipOperation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVoipOperationsManager=_uuidof(IVoipOperationsManager);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipPhoneCall
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipPhoneCall
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipPhoneCall[] = L"Windows.Phone.Networking.Voip.IVoipPhoneCall";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("716654BE-28E8-495E-B657-8053074B4150"), exclusiveto, contract] */
                    MIDL_INTERFACE("716654BE-28E8-495E-B657-8053074B4150")
                    IVoipPhoneCall : public IInspectable
                    {
                    public:
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_EndRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_EndRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_HoldRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_HoldRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ResumeRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ResumeRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AnswerRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs * acceptHandler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AnswerRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RejectRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs * rejectHandler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RejectRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyCallHeld(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyCallActive(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyCallEnded(void) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContactName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ContactName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StartTime(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_StartTime(
                            /* [in] */ABI::Windows::Foundation::DateTime value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CallMedia(
                            /* [retval, out] */__RPC__out ABI::Windows::Phone::Networking::Voip::VoipCallMedia * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CallMedia(
                            /* [in] */ABI::Windows::Phone::Networking::Voip::VoipCallMedia value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVoipPhoneCall=_uuidof(IVoipPhoneCall);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipPhoneCall2
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipPhoneCall
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Phone.Networking.Voip.IVoipPhoneCall
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipPhoneCall2[] = L"Windows.Phone.Networking.Voip.IVoipPhoneCall2";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("1AC5B7DC-C83F-4862-8393-1EA14AF7EFEA"), exclusiveto, contract] */
                    MIDL_INTERFACE("1AC5B7DC-C83F-4862-8393-1EA14AF7EFEA")
                    IVoipPhoneCall2 : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE TryShowAppUI(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVoipPhoneCall2=_uuidof(IVoipPhoneCall2);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipPhoneCall3
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipPhoneCall
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Phone.Networking.Voip.IVoipPhoneCall2
 *     Windows.Phone.Networking.Voip.IVoipPhoneCall
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipPhoneCall3[] = L"Windows.Phone.Networking.Voip.IVoipPhoneCall3";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("A92AB1D1-52FB-4ADF-8225-4D289B866FE0"), exclusiveto, contract] */
                    MIDL_INTERFACE("A92AB1D1-52FB-4ADF-8225-4D289B866FE0")
                    IVoipPhoneCall3 : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE NotifyCallAccepted(
                            /* [in] */ABI::Windows::Phone::Networking::Voip::VoipCallMedia media
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVoipPhoneCall3=_uuidof(IVoipPhoneCall3);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipPhoneCallReady
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipPhoneCall
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipPhoneCallReady[] = L"Windows.Phone.Networking.Voip.IVoipPhoneCallReady";
namespace ABI {
    namespace Windows {
        namespace Phone {
            namespace Networking {
                namespace Voip {
                    /* [object, uuid("B3F5AC79-F40F-4E52-A8EE-E8A9A71F511A"), exclusiveto, contract] */
                    MIDL_INTERFACE("B3F5AC79-F40F-4E52-A8EE-E8A9A71F511A")
                    IVoipPhoneCallReady : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE NotifyCallReady(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IVoipPhoneCallReady=_uuidof(IVoipPhoneCallReady);
                    
                } /* Windows */
            } /* Phone */
        } /* Networking */
    } /* Voip */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Networking.Voip.CallAnswerEventArgs
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Networking.Voip.ICallAnswerEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Networking_Voip_CallAnswerEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Networking_Voip_CallAnswerEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_CallAnswerEventArgs[] = L"Windows.Phone.Networking.Voip.CallAnswerEventArgs";
#endif
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Networking.Voip.CallRejectEventArgs
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Networking.Voip.ICallRejectEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Networking_Voip_CallRejectEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Networking_Voip_CallRejectEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_CallRejectEventArgs[] = L"Windows.Phone.Networking.Voip.CallRejectEventArgs";
#endif
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Networking.Voip.CallStateChangeEventArgs
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Networking.Voip.ICallStateChangeEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Networking_Voip_CallStateChangeEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Networking_Voip_CallStateChangeEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_CallStateChangeEventArgs[] = L"Windows.Phone.Networking.Voip.CallStateChangeEventArgs";
#endif
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Networking.Voip.MuteChangeEventArgs
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Networking.Voip.IMuteChangeEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Networking_Voip_MuteChangeEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Networking_Voip_MuteChangeEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_MuteChangeEventArgs[] = L"Windows.Phone.Networking.Voip.MuteChangeEventArgs";
#endif
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Networking.Voip.QuerySeamlessUpgradeSupportOperation
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Networking.Voip.IVoipOperation
 *    Windows.Phone.Networking.Voip.IQuerySeamlessUpgradeSupportOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Networking_Voip_QuerySeamlessUpgradeSupportOperation_DEFINED
#define RUNTIMECLASS_Windows_Phone_Networking_Voip_QuerySeamlessUpgradeSupportOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_QuerySeamlessUpgradeSupportOperation[] = L"Windows.Phone.Networking.Voip.QuerySeamlessUpgradeSupportOperation";
#endif
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Networking.Voip.VoipCallCoordinator
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Phone.Networking.Voip.IVoipCallCoordinatorStatics interface starting with version 1.0 of the Windows.Phone.PhoneInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Networking.Voip.IVoipCallCoordinator ** Default Interface **
 *    Windows.Phone.Networking.Voip.IVoipCallCoordinatorWithUpgrade
 *    Windows.Phone.Networking.Voip.IVoipOperationsManager
 *    Windows.Phone.Networking.Voip.IVoipCallCoordinatorWithAppDeterminedUpgrade
 *    Windows.Phone.Networking.Voip.IVoipCallCoordinator2
 *    Windows.Phone.Networking.Voip.IVoipCallCoordinator3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Networking_Voip_VoipCallCoordinator_DEFINED
#define RUNTIMECLASS_Windows_Phone_Networking_Voip_VoipCallCoordinator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_VoipCallCoordinator[] = L"Windows.Phone.Networking.Voip.VoipCallCoordinator";
#endif
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Networking.Voip.VoipPhoneCall
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Networking.Voip.IVoipPhoneCall ** Default Interface **
 *    Windows.Phone.Networking.Voip.IVoipPhoneCallReady
 *    Windows.Phone.Networking.Voip.IVoipPhoneCall2
 *    Windows.Phone.Networking.Voip.IVoipPhoneCall3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Networking_Voip_VoipPhoneCall_DEFINED
#define RUNTIMECLASS_Windows_Phone_Networking_Voip_VoipPhoneCall_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_VoipPhoneCall[] = L"Windows.Phone.Networking.Voip.VoipPhoneCall";
#endif
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_FWD_DEFINED__
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady;

#endif // ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000



#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000



#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000



#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000



typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__








typedef enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CSeamlessCallUpgradeSupport __x_ABI_CWindows_CPhone_CNetworking_CVoip_CSeamlessCallUpgradeSupport;


typedef enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia;


typedef enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallRejectReason __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallRejectReason;


typedef enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallState __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallState;


typedef enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipOperationType __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipOperationType;



































/*
 *
 * Struct Windows.Phone.Networking.Voip.SeamlessCallUpgradeSupport
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CSeamlessCallUpgradeSupport
{
    SeamlessCallUpgradeSupport_Unknown = 0,
    SeamlessCallUpgradeSupport_NotSupported = 1,
    SeamlessCallUpgradeSupport_Supported = 2,
};
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Networking.Voip.VoipCallMedia
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia
{
    VoipCallMedia_None = 0,
    VoipCallMedia_Audio = 0x1,
    VoipCallMedia_Video = 0x2,
};
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Networking.Voip.VoipCallRejectReason
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallRejectReason
{
    VoipCallRejectReason_UserIgnored = 0,
    VoipCallRejectReason_TimedOut = 1,
    VoipCallRejectReason_OtherIncomingCall = 2,
    VoipCallRejectReason_EmergencyCallExists = 3,
    VoipCallRejectReason_InvalidCallState = 4,
};
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Networking.Voip.VoipCallState
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallState
{
    VoipCallState_Ended = 0,
    VoipCallState_Held = 1,
    VoipCallState_Active = 2,
    VoipCallState_Incoming = 3,
    VoipCallState_Outgoing = 4,
};
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Phone.Networking.Voip.VoipOperationType
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 */

#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipOperationType
{
    VoipOperationType_QueryRemotePartySeamless = 0,
};
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.ICallAnswerEventArgs
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.CallAnswerEventArgs
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_ICallAnswerEventArgs[] = L"Windows.Phone.Networking.Voip.ICallAnswerEventArgs";
/* [object, uuid("61F132AA-F92A-48FA-AA8F-4F3A17662980"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AcceptedMedia )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgsVtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_get_AcceptedMedia(This,value) \
    ( (This)->lpVtbl->get_AcceptedMedia(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallAnswerEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.ICallRejectEventArgs
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.CallRejectEventArgs
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_ICallRejectEventArgs[] = L"Windows.Phone.Networking.Voip.ICallRejectEventArgs";
/* [object, uuid("3E04061A-CE7D-49C2-A2B8-7F49B6EAEBC5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RejectReason )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallRejectReason * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgsVtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_get_RejectReason(This,value) \
    ( (This)->lpVtbl->get_RejectReason(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallRejectEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.ICallStateChangeEventArgs
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.CallStateChangeEventArgs
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_ICallStateChangeEventArgs[] = L"Windows.Phone.Networking.Voip.ICallStateChangeEventArgs";
/* [object, uuid("1F3E87B0-D371-4395-8B6C-1786A42E2F18"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallState * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgsVtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CICallStateChangeEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IMuteChangeEventArgs
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.MuteChangeEventArgs
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IMuteChangeEventArgs[] = L"Windows.Phone.Networking.Voip.IMuteChangeEventArgs";
/* [object, uuid("F914EAD4-1C94-458C-ACB7-1926A233F74C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Muted )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgsVtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_get_Muted(This,value) \
    ( (This)->lpVtbl->get_Muted(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIMuteChangeEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IQuerySeamlessUpgradeSupportOperation
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.QuerySeamlessUpgradeSupportOperation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Phone.Networking.Voip.IVoipOperation
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IQuerySeamlessUpgradeSupportOperation[] = L"Windows.Phone.Networking.Voip.IQuerySeamlessUpgradeSupportOperation";
/* [object, uuid("7E7ADCCE-CF2B-4EA0-8475-E1BDB4140379"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyCompletion )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation * This,
        /* [in] */boolean succeeded,
        /* [in] */__x_ABI_CWindows_CPhone_CNetworking_CVoip_CSeamlessCallUpgradeSupport seamlessCallUpgradeSupport
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperationVtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_get_RemoteId(This,value) \
    ( (This)->lpVtbl->get_RemoteId(This,value) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_NotifyCompletion(This,succeeded,seamlessCallUpgradeSupport) \
    ( (This)->lpVtbl->NotifyCompletion(This,succeeded,seamlessCallUpgradeSupport) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIQuerySeamlessUpgradeSupportOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipCallCoordinator
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipCallCoordinator
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinator[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinator";
/* [object, uuid("0D5F3579-F6DD-4E10-9F25-3D8C91376EE8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_MuteRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs * muteChangeHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_MuteRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_UnmuteRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipCallCoordinator_Windows__CPhone__CNetworking__CVoip__CMuteChangeEventArgs * muteChangeHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_UnmuteRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *RequestNewIncomingCall )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
        /* [in] */__RPC__in HSTRING context,
        /* [in] */__RPC__in HSTRING contactName,
        /* [in] */__RPC__in HSTRING contactNumber,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * contactImage,
        /* [in] */__RPC__in HSTRING serviceName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * brandingImage,
        /* [in] */__RPC__in HSTRING callDetails,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * ringtone,
        /* [in] */__x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia media,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan ringTimeout,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * * call
        );
    HRESULT ( STDMETHODCALLTYPE *RequestNewOutgoingCall )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This,
        /* [in] */__RPC__in HSTRING context,
        /* [in] */__RPC__in HSTRING contactName,
        /* [in] */__RPC__in HSTRING serviceName,
        /* [in] */__x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia media,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * * call
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyMuted )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyUnmuted )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorVtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_add_MuteRequested(This,muteChangeHandler,token) \
    ( (This)->lpVtbl->add_MuteRequested(This,muteChangeHandler,token) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_remove_MuteRequested(This,token) \
    ( (This)->lpVtbl->remove_MuteRequested(This,token) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_add_UnmuteRequested(This,muteChangeHandler,token) \
    ( (This)->lpVtbl->add_UnmuteRequested(This,muteChangeHandler,token) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_remove_UnmuteRequested(This,token) \
    ( (This)->lpVtbl->remove_UnmuteRequested(This,token) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_RequestNewIncomingCall(This,context,contactName,contactNumber,contactImage,serviceName,brandingImage,callDetails,ringtone,media,ringTimeout,call) \
    ( (This)->lpVtbl->RequestNewIncomingCall(This,context,contactName,contactNumber,contactImage,serviceName,brandingImage,callDetails,ringtone,media,ringTimeout,call) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_RequestNewOutgoingCall(This,context,contactName,serviceName,media,call) \
    ( (This)->lpVtbl->RequestNewOutgoingCall(This,context,contactName,serviceName,media,call) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_NotifyMuted(This) \
    ( (This)->lpVtbl->NotifyMuted(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_NotifyUnmuted(This) \
    ( (This)->lpVtbl->NotifyUnmuted(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipCallCoordinator2
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipCallCoordinator
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Phone.Networking.Voip.IVoipCallCoordinator
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinator2[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinator2";
/* [object, uuid("0290A9B8-645D-4711-8E32-926BFABF6928"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetupNewAcceptedCall )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2 * This,
        /* [in] */__RPC__in HSTRING context,
        /* [in] */__RPC__in HSTRING contactName,
        /* [in] */__RPC__in HSTRING contactNumber,
        /* [in] */__RPC__in HSTRING serviceName,
        /* [in] */__x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia media,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * * call
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2Vtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_SetupNewAcceptedCall(This,context,contactName,contactNumber,serviceName,media,call) \
    ( (This)->lpVtbl->SetupNewAcceptedCall(This,context,contactName,contactNumber,serviceName,media,call) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator2_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipCallCoordinator3
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipCallCoordinator
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Phone.Networking.Voip.IVoipCallCoordinator
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinator3[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinator3";
/* [object, uuid("80A2EDE6-0D02-40CD-8891-B4CEC6472C82"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestNewIncomingCallWithContactRemoteId )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 * This,
        /* [in] */__RPC__in HSTRING context,
        /* [in] */__RPC__in HSTRING contactName,
        /* [in] */__RPC__in HSTRING contactNumber,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * contactImage,
        /* [in] */__RPC__in HSTRING serviceName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * brandingImage,
        /* [in] */__RPC__in HSTRING callDetails,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * ringtone,
        /* [in] */__x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia media,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan ringTimeout,
        /* [in] */__RPC__in HSTRING contactRemoteId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * * call
        );
    HRESULT ( STDMETHODCALLTYPE *RequestNewAppInitiatedCall )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3 * This,
        /* [in] */__RPC__in HSTRING context,
        /* [in] */__RPC__in HSTRING contactName,
        /* [in] */__RPC__in HSTRING contactNumber,
        /* [in] */__RPC__in HSTRING serviceName,
        /* [in] */__x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia media,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * * call
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3Vtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_RequestNewIncomingCallWithContactRemoteId(This,context,contactName,contactNumber,contactImage,serviceName,brandingImage,callDetails,ringtone,media,ringTimeout,contactRemoteId,call) \
    ( (This)->lpVtbl->RequestNewIncomingCallWithContactRemoteId(This,context,contactName,contactNumber,contactImage,serviceName,brandingImage,callDetails,ringtone,media,ringTimeout,contactRemoteId,call) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_RequestNewAppInitiatedCall(This,context,contactName,contactNumber,serviceName,media,call) \
    ( (This)->lpVtbl->RequestNewAppInitiatedCall(This,context,contactName,contactNumber,serviceName,media,call) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator3_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipCallCoordinatorStatics
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipCallCoordinator
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinatorStatics[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinatorStatics";
/* [object, uuid("10FB55BB-E07D-407E-BC39-F7CC3641D979"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinator * * coordinator
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStaticsVtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_GetDefault(This,coordinator) \
    ( (This)->lpVtbl->GetDefault(This,coordinator) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipCallCoordinatorWithAppDeterminedUpgrade
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipCallCoordinator
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinatorWithAppDeterminedUpgrade[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinatorWithAppDeterminedUpgrade";
/* [object, uuid("4EC3EDA6-9CF0-405C-BCCD-CB7A8632A456"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgradeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ConfirmNonSeamlessUpgrade )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade * This,
        /* [in] */GUID callUpgradeGuid
        );
    HRESULT ( STDMETHODCALLTYPE *CancelUpgrade )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade * This,
        /* [in] */GUID callUpgradeGuid
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgradeVtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgradeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_ConfirmNonSeamlessUpgrade(This,callUpgradeGuid) \
    ( (This)->lpVtbl->ConfirmNonSeamlessUpgrade(This,callUpgradeGuid) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_CancelUpgrade(This,callUpgradeGuid) \
    ( (This)->lpVtbl->CancelUpgrade(This,callUpgradeGuid) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithAppDeterminedUpgrade_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipCallCoordinatorWithUpgrade
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipCallCoordinator
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipCallCoordinatorWithUpgrade[] = L"Windows.Phone.Networking.Voip.IVoipCallCoordinatorWithUpgrade";
/* [object, uuid("6172CCBC-6DD1-4F8E-B938-5393530C31CA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgradeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestOutgoingUpgradeToVideoCall )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade * This,
        /* [in] */GUID callUpgradeGuid,
        /* [in] */__RPC__in HSTRING context,
        /* [in] */__RPC__in HSTRING contactName,
        /* [in] */__RPC__in HSTRING serviceName,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * * call
        );
    HRESULT ( STDMETHODCALLTYPE *RequestIncomingUpgradeToVideoCall )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade * This,
        /* [in] */__RPC__in HSTRING context,
        /* [in] */__RPC__in HSTRING contactName,
        /* [in] */__RPC__in HSTRING contactNumber,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * contactImage,
        /* [in] */__RPC__in HSTRING serviceName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * brandingImage,
        /* [in] */__RPC__in HSTRING callDetails,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * ringtone,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan ringTimeout,
        /* [out] */__RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * * call
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgradeVtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgradeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_RequestOutgoingUpgradeToVideoCall(This,callUpgradeGuid,context,contactName,serviceName,call) \
    ( (This)->lpVtbl->RequestOutgoingUpgradeToVideoCall(This,callUpgradeGuid,context,contactName,serviceName,call) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_RequestIncomingUpgradeToVideoCall(This,context,contactName,contactNumber,contactImage,serviceName,brandingImage,callDetails,ringtone,ringTimeout,call) \
    ( (This)->lpVtbl->RequestIncomingUpgradeToVideoCall(This,context,contactName,contactNumber,contactImage,serviceName,brandingImage,callDetails,ringtone,ringTimeout,call) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipCallCoordinatorWithUpgrade_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipOperation
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipOperation[] = L"Windows.Phone.Networking.Voip.IVoipOperation";
/* [object, uuid("559B526D-C2CB-44D9-83A5-60CDA4B71D36"), contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * This,
        /* [retval, out] */__RPC__out UINT32 * operationId
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipOperationType * operationType
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationVtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_get_Id(This,operationId) \
    ( (This)->lpVtbl->get_Id(This,operationId) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_get_Type(This,operationType) \
    ( (This)->lpVtbl->get_Type(This,operationType) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipOperationsManager
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipCallCoordinator
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipOperationsManager[] = L"Windows.Phone.Networking.Voip.IVoipOperationsManager";
/* [object, uuid("BA77E23C-38D9-4DFB-853F-F901978FF7FA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetNextOperation )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperation * * voipOperation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManagerVtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_GetNextOperation(This,voipOperation) \
    ( (This)->lpVtbl->GetNextOperation(This,voipOperation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipOperationsManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipPhoneCall
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipPhoneCall
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipPhoneCall[] = L"Windows.Phone.Networking.Voip.IVoipPhoneCall";
/* [object, uuid("716654BE-28E8-495E-B657-8053074B4150"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_EndRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_EndRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_HoldRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_HoldRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ResumeRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallStateChangeEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ResumeRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AnswerRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallAnswerEventArgs * acceptHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AnswerRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RejectRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CPhone__CNetworking__CVoip__CVoipPhoneCall_Windows__CPhone__CNetworking__CVoip__CCallRejectEventArgs * rejectHandler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RejectRequested )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyCallHeld )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyCallActive )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyCallEnded )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContactName )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ContactName )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CallMedia )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CallMedia )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall * This,
        /* [in] */__x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallVtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_add_EndRequested(This,handler,token) \
    ( (This)->lpVtbl->add_EndRequested(This,handler,token) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_remove_EndRequested(This,token) \
    ( (This)->lpVtbl->remove_EndRequested(This,token) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_add_HoldRequested(This,handler,token) \
    ( (This)->lpVtbl->add_HoldRequested(This,handler,token) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_remove_HoldRequested(This,token) \
    ( (This)->lpVtbl->remove_HoldRequested(This,token) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_add_ResumeRequested(This,handler,token) \
    ( (This)->lpVtbl->add_ResumeRequested(This,handler,token) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_remove_ResumeRequested(This,token) \
    ( (This)->lpVtbl->remove_ResumeRequested(This,token) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_add_AnswerRequested(This,acceptHandler,token) \
    ( (This)->lpVtbl->add_AnswerRequested(This,acceptHandler,token) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_remove_AnswerRequested(This,token) \
    ( (This)->lpVtbl->remove_AnswerRequested(This,token) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_add_RejectRequested(This,rejectHandler,token) \
    ( (This)->lpVtbl->add_RejectRequested(This,rejectHandler,token) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_remove_RejectRequested(This,token) \
    ( (This)->lpVtbl->remove_RejectRequested(This,token) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_NotifyCallHeld(This) \
    ( (This)->lpVtbl->NotifyCallHeld(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_NotifyCallActive(This) \
    ( (This)->lpVtbl->NotifyCallActive(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_NotifyCallEnded(This) \
    ( (This)->lpVtbl->NotifyCallEnded(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_get_ContactName(This,value) \
    ( (This)->lpVtbl->get_ContactName(This,value) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_put_ContactName(This,value) \
    ( (This)->lpVtbl->put_ContactName(This,value) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_get_StartTime(This,value) \
    ( (This)->lpVtbl->get_StartTime(This,value) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_put_StartTime(This,value) \
    ( (This)->lpVtbl->put_StartTime(This,value) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_get_CallMedia(This,value) \
    ( (This)->lpVtbl->get_CallMedia(This,value) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_put_CallMedia(This,value) \
    ( (This)->lpVtbl->put_CallMedia(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipPhoneCall2
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipPhoneCall
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Phone.Networking.Voip.IVoipPhoneCall
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipPhoneCall2[] = L"Windows.Phone.Networking.Voip.IVoipPhoneCall2";
/* [object, uuid("1AC5B7DC-C83F-4862-8393-1EA14AF7EFEA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryShowAppUI )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2 * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2Vtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_TryShowAppUI(This) \
    ( (This)->lpVtbl->TryShowAppUI(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall2_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipPhoneCall3
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipPhoneCall
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Phone.Networking.Voip.IVoipPhoneCall2
 *     Windows.Phone.Networking.Voip.IVoipPhoneCall
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipPhoneCall3[] = L"Windows.Phone.Networking.Voip.IVoipPhoneCall3";
/* [object, uuid("A92AB1D1-52FB-4ADF-8225-4D289B866FE0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *NotifyCallAccepted )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3 * This,
        /* [in] */__x_ABI_CWindows_CPhone_CNetworking_CVoip_CVoipCallMedia media
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3Vtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_NotifyCallAccepted(This,media) \
    ( (This)->lpVtbl->NotifyCallAccepted(This,media) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCall3_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Phone.Networking.Voip.IVoipPhoneCallReady
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Phone.Networking.Voip.VoipPhoneCall
 *
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Phone_Networking_Voip_IVoipPhoneCallReady[] = L"Windows.Phone.Networking.Voip.IVoipPhoneCallReady";
/* [object, uuid("B3F5AC79-F40F-4E52-A8EE-E8A9A71F511A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReadyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *NotifyCallReady )(
        __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReadyVtbl;

interface __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady
{
    CONST_VTBL struct __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReadyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_NotifyCallReady(This) \
    ( (This)->lpVtbl->NotifyCallReady(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady;
#endif /* !defined(____x_ABI_CWindows_CPhone_CNetworking_CVoip_CIVoipPhoneCallReady_INTERFACE_DEFINED__) */
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Networking.Voip.CallAnswerEventArgs
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Networking.Voip.ICallAnswerEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Networking_Voip_CallAnswerEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Networking_Voip_CallAnswerEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_CallAnswerEventArgs[] = L"Windows.Phone.Networking.Voip.CallAnswerEventArgs";
#endif
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Networking.Voip.CallRejectEventArgs
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Networking.Voip.ICallRejectEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Networking_Voip_CallRejectEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Networking_Voip_CallRejectEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_CallRejectEventArgs[] = L"Windows.Phone.Networking.Voip.CallRejectEventArgs";
#endif
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Networking.Voip.CallStateChangeEventArgs
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Networking.Voip.ICallStateChangeEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Networking_Voip_CallStateChangeEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Networking_Voip_CallStateChangeEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_CallStateChangeEventArgs[] = L"Windows.Phone.Networking.Voip.CallStateChangeEventArgs";
#endif
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Networking.Voip.MuteChangeEventArgs
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Networking.Voip.IMuteChangeEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Networking_Voip_MuteChangeEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Phone_Networking_Voip_MuteChangeEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_MuteChangeEventArgs[] = L"Windows.Phone.Networking.Voip.MuteChangeEventArgs";
#endif
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Networking.Voip.QuerySeamlessUpgradeSupportOperation
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Networking.Voip.IVoipOperation
 *    Windows.Phone.Networking.Voip.IQuerySeamlessUpgradeSupportOperation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Networking_Voip_QuerySeamlessUpgradeSupportOperation_DEFINED
#define RUNTIMECLASS_Windows_Phone_Networking_Voip_QuerySeamlessUpgradeSupportOperation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_QuerySeamlessUpgradeSupportOperation[] = L"Windows.Phone.Networking.Voip.QuerySeamlessUpgradeSupportOperation";
#endif
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Networking.Voip.VoipCallCoordinator
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Phone.Networking.Voip.IVoipCallCoordinatorStatics interface starting with version 1.0 of the Windows.Phone.PhoneInternalContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Networking.Voip.IVoipCallCoordinator ** Default Interface **
 *    Windows.Phone.Networking.Voip.IVoipCallCoordinatorWithUpgrade
 *    Windows.Phone.Networking.Voip.IVoipOperationsManager
 *    Windows.Phone.Networking.Voip.IVoipCallCoordinatorWithAppDeterminedUpgrade
 *    Windows.Phone.Networking.Voip.IVoipCallCoordinator2
 *    Windows.Phone.Networking.Voip.IVoipCallCoordinator3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Networking_Voip_VoipCallCoordinator_DEFINED
#define RUNTIMECLASS_Windows_Phone_Networking_Voip_VoipCallCoordinator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_VoipCallCoordinator[] = L"Windows.Phone.Networking.Voip.VoipCallCoordinator";
#endif
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Phone.Networking.Voip.VoipPhoneCall
 *
 * Introduced to Windows.Phone.PhoneInternalContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Phone.Networking.Voip.IVoipPhoneCall ** Default Interface **
 *    Windows.Phone.Networking.Voip.IVoipPhoneCallReady
 *    Windows.Phone.Networking.Voip.IVoipPhoneCall2
 *    Windows.Phone.Networking.Voip.IVoipPhoneCall3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Phone_Networking_Voip_VoipPhoneCall_DEFINED
#define RUNTIMECLASS_Windows_Phone_Networking_Voip_VoipPhoneCall_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Phone_Networking_Voip_VoipPhoneCall[] = L"Windows.Phone.Networking.Voip.VoipPhoneCall";
#endif
#endif // WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Ephone2Enetworking2Evoip_p_h__

#endif // __windows2Ephone2Enetworking2Evoip_h__
