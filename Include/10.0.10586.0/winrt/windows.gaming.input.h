

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0613 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __windows2Egaming2Einput_h__
#define __windows2Egaming2Einput_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIIterator_1_Windows__CGaming__CInput__CGamepad_FWD_DEFINED__
#define ____FIIterator_1_Windows__CGaming__CInput__CGamepad_FWD_DEFINED__
typedef interface __FIIterator_1_Windows__CGaming__CInput__CGamepad __FIIterator_1_Windows__CGaming__CInput__CGamepad;

#endif 	/* ____FIIterator_1_Windows__CGaming__CInput__CGamepad_FWD_DEFINED__ */


#ifndef ____FIIterable_1_Windows__CGaming__CInput__CGamepad_FWD_DEFINED__
#define ____FIIterable_1_Windows__CGaming__CInput__CGamepad_FWD_DEFINED__
typedef interface __FIIterable_1_Windows__CGaming__CInput__CGamepad __FIIterable_1_Windows__CGaming__CInput__CGamepad;

#endif 	/* ____FIIterable_1_Windows__CGaming__CInput__CGamepad_FWD_DEFINED__ */


#ifndef ____FIVectorView_1_Windows__CGaming__CInput__CGamepad_FWD_DEFINED__
#define ____FIVectorView_1_Windows__CGaming__CInput__CGamepad_FWD_DEFINED__
typedef interface __FIVectorView_1_Windows__CGaming__CInput__CGamepad __FIVectorView_1_Windows__CGaming__CInput__CGamepad;

#endif 	/* ____FIVectorView_1_Windows__CGaming__CInput__CGamepad_FWD_DEFINED__ */


#ifndef ____FIEventHandler_1_Windows__CGaming__CInput__CGamepad_FWD_DEFINED__
#define ____FIEventHandler_1_Windows__CGaming__CInput__CGamepad_FWD_DEFINED__
typedef interface __FIEventHandler_1_Windows__CGaming__CInput__CGamepad __FIEventHandler_1_Windows__CGaming__CInput__CGamepad;

#endif 	/* ____FIEventHandler_1_Windows__CGaming__CInput__CGamepad_FWD_DEFINED__ */


#ifndef ____FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_FWD_DEFINED__
#define ____FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_FWD_DEFINED__
typedef interface __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset;

#endif 	/* ____FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGameController_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGameController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGameController __x_ABI_CWindows_CGaming_CInput_CIGameController;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IGameController;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CGaming_CInput_CIGameController_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGamepad_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepad_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGamepad __x_ABI_CWindows_CGaming_CInput_CIGamepad;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IGamepad;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CGaming_CInput_CIGamepad_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IGamepadStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CGaming_CInput_CIHeadset_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIHeadset_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CIHeadset __x_ABI_CWindows_CGaming_CInput_CIHeadset;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                interface IHeadset;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CGaming_CInput_CIHeadset_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.System.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Gaming {
namespace Input {
class Gamepad;
} /*Input*/
} /*Gaming*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Gaming {
namespace Input {
interface IGamepad;
} /*Input*/
} /*Gaming*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_2533 */




/* interface __MIDL_itf_windows2Egaming2Einput_0000_2533 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2533_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2533_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_0001 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CGaming__CInput__CGamepad_USE
#define DEF___FIIterator_1_Windows__CGaming__CInput__CGamepad_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("246737e8-12bc-5c64-af52-06db4b13fa2f"))
IIterator<ABI::Windows::Gaming::Input::Gamepad*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::Gamepad*, ABI::Windows::Gaming::Input::IGamepad*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Windows.Gaming.Input.Gamepad>"; }
};
typedef IIterator<ABI::Windows::Gaming::Input::Gamepad*> __FIIterator_1_Windows__CGaming__CInput__CGamepad_t;
#define ____FIIterator_1_Windows__CGaming__CInput__CGamepad_FWD_DEFINED__
#define __FIIterator_1_Windows__CGaming__CInput__CGamepad ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGaming__CInput__CGamepad_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Windows__CGaming__CInput__CGamepad_USE */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_2534 */




/* interface __MIDL_itf_windows2Egaming2Einput_0000_2534 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2534_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2534_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_0002 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CGaming__CInput__CGamepad_USE
#define DEF___FIIterable_1_Windows__CGaming__CInput__CGamepad_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("47132ba0-6b17-5cd2-a8bd-b5d3443ccb13"))
IIterable<ABI::Windows::Gaming::Input::Gamepad*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::Gamepad*, ABI::Windows::Gaming::Input::IGamepad*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Windows.Gaming.Input.Gamepad>"; }
};
typedef IIterable<ABI::Windows::Gaming::Input::Gamepad*> __FIIterable_1_Windows__CGaming__CInput__CGamepad_t;
#define ____FIIterable_1_Windows__CGaming__CInput__CGamepad_FWD_DEFINED__
#define __FIIterable_1_Windows__CGaming__CInput__CGamepad ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGaming__CInput__CGamepad_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Windows__CGaming__CInput__CGamepad_USE */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_2535 */




/* interface __MIDL_itf_windows2Egaming2Einput_0000_2535 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2535_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2535_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_0003 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Windows__CGaming__CInput__CGamepad_USE
#define DEF___FIVectorView_1_Windows__CGaming__CInput__CGamepad_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("eb97bb69-09c9-5a99-86b2-3e36085284d4"))
IVectorView<ABI::Windows::Gaming::Input::Gamepad*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::Gamepad*, ABI::Windows::Gaming::Input::IGamepad*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Input.Gamepad>"; }
};
typedef IVectorView<ABI::Windows::Gaming::Input::Gamepad*> __FIVectorView_1_Windows__CGaming__CInput__CGamepad_t;
#define ____FIVectorView_1_Windows__CGaming__CInput__CGamepad_FWD_DEFINED__
#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGaming__CInput__CGamepad_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_Windows__CGaming__CInput__CGamepad_USE */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_2536 */




/* interface __MIDL_itf_windows2Egaming2Einput_0000_2536 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2536_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2536_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_0004 */
/* [local] */ 

#ifndef DEF___FIEventHandler_1_Windows__CGaming__CInput__CGamepad_USE
#define DEF___FIEventHandler_1_Windows__CGaming__CInput__CGamepad_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8a7639ee-624a-501a-bb53-562d1ec11b52"))
IEventHandler<ABI::Windows::Gaming::Input::Gamepad*> : IEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::Gamepad*, ABI::Windows::Gaming::Input::IGamepad*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.EventHandler`1<Windows.Gaming.Input.Gamepad>"; }
};
typedef IEventHandler<ABI::Windows::Gaming::Input::Gamepad*> __FIEventHandler_1_Windows__CGaming__CInput__CGamepad_t;
#define ____FIEventHandler_1_Windows__CGaming__CInput__CGamepad_FWD_DEFINED__
#define __FIEventHandler_1_Windows__CGaming__CInput__CGamepad ABI::Windows::Foundation::__FIEventHandler_1_Windows__CGaming__CInput__CGamepad_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIEventHandler_1_Windows__CGaming__CInput__CGamepad_USE */

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Gaming {
namespace Input {
interface IGameController;
} /*Input*/
} /*Gaming*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Gaming {
namespace Input {
class Headset;
} /*Input*/
} /*Gaming*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Gaming {
namespace Input {
interface IHeadset;
} /*Input*/
} /*Gaming*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0004 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_2537 */




/* interface __MIDL_itf_windows2Egaming2Einput_0000_2537 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2537_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2537_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_0005 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_USE
#define DEF___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("07b2f2b7-8825-5c4e-a052-fcfedf3aeea1"))
ITypedEventHandler<ABI::Windows::Gaming::Input::IGameController*,ABI::Windows::Gaming::Input::Headset*> : ITypedEventHandler_impl<ABI::Windows::Gaming::Input::IGameController*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Input::Headset*, ABI::Windows::Gaming::Input::IHeadset*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.TypedEventHandler`2<Windows.Gaming.Input.IGameController, Windows.Gaming.Input.Headset>"; }
};
typedef ITypedEventHandler<ABI::Windows::Gaming::Input::IGameController*,ABI::Windows::Gaming::Input::Headset*> __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_t;
#define ____FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_FWD_DEFINED__
#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_USE */
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace System {
class UserChangedEventArgs;
} /*System*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace System {
interface IUserChangedEventArgs;
} /*System*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0005 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_2538 */




/* interface __MIDL_itf_windows2Egaming2Einput_0000_2538 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2538_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2538_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_0006 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cb753f2c-2f36-5a8f-adad-057beae73aa4"))
ITypedEventHandler<ABI::Windows::Gaming::Input::IGameController*,ABI::Windows::System::UserChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Gaming::Input::IGameController*,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::System::UserChangedEventArgs*, ABI::Windows::System::IUserChangedEventArgs*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.TypedEventHandler`2<Windows.Gaming.Input.IGameController, Windows.System.UserChangedEventArgs>"; }
};
typedef ITypedEventHandler<ABI::Windows::Gaming::Input::IGameController*,ABI::Windows::System::UserChangedEventArgs*> __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_t;
#define ____FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_FWD_DEFINED__
#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Esystem_h__)
#include <Windows.System.h>
#endif // !defined(__windows2Esystem_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace System {
class User;
} /*System*/
} /*Windows*/
}
#endif

#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CGaming_CInput_CGamepadButtons __x_ABI_CWindows_CGaming_CInput_CGamepadButtons;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CGaming_CInput_CGamepadReading __x_ABI_CWindows_CGaming_CInput_CGamepadReading;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CGaming_CInput_CGamepadVibration __x_ABI_CWindows_CGaming_CInput_CGamepadVibration;

#endif



/* interface __MIDL_itf_windows2Egaming2Einput_0000_0006 */
/* [local] */ 



#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef enum GamepadButtons GamepadButtons;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef struct GamepadReading GamepadReading;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef struct GamepadVibration GamepadVibration;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_2539 */




/* interface __MIDL_itf_windows2Egaming2Einput_0000_2539 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2539_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2539_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_0007 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CGaming__CInput__CGamepad
#define DEF___FIIterator_1_Windows__CGaming__CInput__CGamepad
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0007 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0007_v0_0_s_ifspec;

#ifndef ____FIIterator_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__
#define ____FIIterator_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__

/* interface __FIIterator_1_Windows__CGaming__CInput__CGamepad */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1_Windows__CGaming__CInput__CGamepad */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CInput__CGamepad;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("246737e8-12bc-5c64-af52-06db4b13fa2f")
    __FIIterator_1_Windows__CGaming__CInput__CGamepad : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Windows::Gaming::Input::IGamepad **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Windows::Gaming::Input::IGamepad **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1_Windows__CGaming__CInput__CGamepadVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIGamepad **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIIterator_1_Windows__CGaming__CInput__CGamepad * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIGamepad **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1_Windows__CGaming__CInput__CGamepadVtbl;

    interface __FIIterator_1_Windows__CGaming__CInput__CGamepad
    {
        CONST_VTBL struct __FIIterator_1_Windows__CGaming__CInput__CGamepadVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CInput__CGamepad_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0008 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1_Windows__CGaming__CInput__CGamepad */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0008 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0008_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_2540 */




/* interface __MIDL_itf_windows2Egaming2Einput_0000_2540 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2540_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2540_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_0009 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CGaming__CInput__CGamepad
#define DEF___FIIterable_1_Windows__CGaming__CInput__CGamepad
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0009 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0009_v0_0_s_ifspec;

#ifndef ____FIIterable_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__
#define ____FIIterable_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__

/* interface __FIIterable_1_Windows__CGaming__CInput__CGamepad */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1_Windows__CGaming__CInput__CGamepad */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CInput__CGamepad;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47132ba0-6b17-5cd2-a8bd-b5d3443ccb13")
    __FIIterable_1_Windows__CGaming__CInput__CGamepad : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CGamepad **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1_Windows__CGaming__CInput__CGamepadVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __RPC__in __FIIterable_1_Windows__CGaming__CInput__CGamepad * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CInput__CGamepad **first);
        
        END_INTERFACE
    } __FIIterable_1_Windows__CGaming__CInput__CGamepadVtbl;

    interface __FIIterable_1_Windows__CGaming__CInput__CGamepad
    {
        CONST_VTBL struct __FIIterable_1_Windows__CGaming__CInput__CGamepadVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1_Windows__CGaming__CInput__CGamepad_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CGamepad_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CGamepad_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CGamepad_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CGamepad_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGaming__CInput__CGamepad_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGaming__CInput__CGamepad_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0010 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1_Windows__CGaming__CInput__CGamepad */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0010 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0010_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_2541 */




/* interface __MIDL_itf_windows2Egaming2Einput_0000_2541 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2541_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2541_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_0011 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Windows__CGaming__CInput__CGamepad
#define DEF___FIVectorView_1_Windows__CGaming__CInput__CGamepad
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0011 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0011_v0_0_s_ifspec;

#ifndef ____FIVectorView_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__
#define ____FIVectorView_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__

/* interface __FIVectorView_1_Windows__CGaming__CInput__CGamepad */
/* [unique][uuid][object] */ 



/* interface __FIVectorView_1_Windows__CGaming__CInput__CGamepad */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CInput__CGamepad;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("eb97bb69-09c9-5a99-86b2-3e36085284d4")
    __FIVectorView_1_Windows__CGaming__CInput__CGamepad : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt ABI::Windows::Gaming::Input::IGamepad **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ __RPC__out unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ __RPC__in_opt ABI::Windows::Gaming::Input::IGamepad *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Windows::Gaming::Input::IGamepad **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1_Windows__CGaming__CInput__CGamepadVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIGamepad **item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
            /* [retval][out] */ __RPC__out unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGamepad *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CInput__CGamepad * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CInput_CIGamepad **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIVectorView_1_Windows__CGaming__CInput__CGamepadVtbl;

    interface __FIVectorView_1_Windows__CGaming__CInput__CGamepad
    {
        CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CInput__CGamepadVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGaming__CInput__CGamepad_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0012 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1_Windows__CGaming__CInput__CGamepad */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0012 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0012_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_2542 */




/* interface __MIDL_itf_windows2Egaming2Einput_0000_2542 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2542_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2542_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_0013 */
/* [local] */ 

#ifndef DEF___FIEventHandler_1_Windows__CGaming__CInput__CGamepad
#define DEF___FIEventHandler_1_Windows__CGaming__CInput__CGamepad
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0013 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0013_v0_0_s_ifspec;

#ifndef ____FIEventHandler_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__
#define ____FIEventHandler_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__

/* interface __FIEventHandler_1_Windows__CGaming__CInput__CGamepad */
/* [unique][uuid][object] */ 



/* interface __FIEventHandler_1_Windows__CGaming__CInput__CGamepad */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIEventHandler_1_Windows__CGaming__CInput__CGamepad;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8a7639ee-624a-501a-bb53-562d1ec11b52")
    __FIEventHandler_1_Windows__CGaming__CInput__CGamepad : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt IInspectable *sender,
            /* [in] */ __RPC__in_opt ABI::Windows::Gaming::Input::IGamepad *e) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIEventHandler_1_Windows__CGaming__CInput__CGamepadVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIEventHandler_1_Windows__CGaming__CInput__CGamepad * This,
            /* [in] */ __RPC__in_opt IInspectable *sender,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGamepad *e);
        
        END_INTERFACE
    } __FIEventHandler_1_Windows__CGaming__CInput__CGamepadVtbl;

    interface __FIEventHandler_1_Windows__CGaming__CInput__CGamepad
    {
        CONST_VTBL struct __FIEventHandler_1_Windows__CGaming__CInput__CGamepadVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIEventHandler_1_Windows__CGaming__CInput__CGamepad_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIEventHandler_1_Windows__CGaming__CInput__CGamepad_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIEventHandler_1_Windows__CGaming__CInput__CGamepad_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIEventHandler_1_Windows__CGaming__CInput__CGamepad_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIEventHandler_1_Windows__CGaming__CInput__CGamepad_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0014 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIEventHandler_1_Windows__CGaming__CInput__CGamepad */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0014 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0014_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_2543 */




/* interface __MIDL_itf_windows2Egaming2Einput_0000_2543 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2543_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_2543_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Egaming2Einput_0000_0015 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset
#define DEF___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0015 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0015_v0_0_s_ifspec;

#ifndef ____FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_INTERFACE_DEFINED__
#define ____FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_INTERFACE_DEFINED__

/* interface __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset */
/* [unique][uuid][object] */ 



/* interface __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07b2f2b7-8825-5c4e-a052-fcfedf3aeea1")
    __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt ABI::Windows::Gaming::Input::IGameController *sender,
            /* [in] */ __RPC__in_opt ABI::Windows::Gaming::Input::IHeadset *e) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadsetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIGameController *sender,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CIHeadset *e);
        
        END_INTERFACE
    } __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadsetVtbl;

    interface __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset
    {
        CONST_VTBL struct __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadsetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0016 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset */
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CGaming_CInput_CGamepadButtons
    {
        GamepadButtons_None	= 0,
        GamepadButtons_Menu	= 0x1,
        GamepadButtons_View	= 0x2,
        GamepadButtons_A	= 0x4,
        GamepadButtons_B	= 0x8,
        GamepadButtons_X	= 0x10,
        GamepadButtons_Y	= 0x20,
        GamepadButtons_DPadUp	= 0x40,
        GamepadButtons_DPadDown	= 0x80,
        GamepadButtons_DPadLeft	= 0x100,
        GamepadButtons_DPadRight	= 0x200,
        GamepadButtons_LeftShoulder	= 0x400,
        GamepadButtons_RightShoulder	= 0x800,
        GamepadButtons_LeftThumbstick	= 0x1000,
        GamepadButtons_RightThumbstick	= 0x2000
    } ;
#endif /* end if !defined(__cplusplus) */

#else
namespace ABI {
namespace Windows {
namespace Gaming {
namespace Input {
enum GamepadButtons;
DEFINE_ENUM_FLAG_OPERATORS(GamepadButtons)
} /*Input*/
} /*Gaming*/
} /*Windows*/
}
#endif
#if !defined(__cplusplus)
struct __x_ABI_CWindows_CGaming_CInput_CGamepadReading
    {
    UINT64 Timestamp;
    __x_ABI_CWindows_CGaming_CInput_CGamepadButtons Buttons;
    DOUBLE LeftTrigger;
    DOUBLE RightTrigger;
    DOUBLE LeftThumbstickX;
    DOUBLE LeftThumbstickY;
    DOUBLE RightThumbstickX;
    DOUBLE RightThumbstickY;
    } ;
#endif
#if !defined(__cplusplus)
struct __x_ABI_CWindows_CGaming_CInput_CGamepadVibration
    {
    DOUBLE LeftMotor;
    DOUBLE RightMotor;
    DOUBLE LeftTrigger;
    DOUBLE RightTrigger;
    } ;
#endif
#if !defined(____x_ABI_CWindows_CGaming_CInput_CIGameController_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGameController[] = L"Windows.Gaming.Input.IGameController";
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIGameController_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0016 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                /* [v1_enum] */ 
                enum GamepadButtons
                    {
                        GamepadButtons_None	= 0,
                        GamepadButtons_Menu	= 0x1,
                        GamepadButtons_View	= 0x2,
                        GamepadButtons_A	= 0x4,
                        GamepadButtons_B	= 0x8,
                        GamepadButtons_X	= 0x10,
                        GamepadButtons_Y	= 0x20,
                        GamepadButtons_DPadUp	= 0x40,
                        GamepadButtons_DPadDown	= 0x80,
                        GamepadButtons_DPadLeft	= 0x100,
                        GamepadButtons_DPadRight	= 0x200,
                        GamepadButtons_LeftShoulder	= 0x400,
                        GamepadButtons_RightShoulder	= 0x800,
                        GamepadButtons_LeftThumbstick	= 0x1000,
                        GamepadButtons_RightThumbstick	= 0x2000
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                struct GamepadReading
                    {
                    UINT64 Timestamp;
                    GamepadButtons Buttons;
                    DOUBLE LeftTrigger;
                    DOUBLE RightTrigger;
                    DOUBLE LeftThumbstickX;
                    DOUBLE LeftThumbstickY;
                    DOUBLE RightThumbstickX;
                    DOUBLE RightThumbstickY;
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                struct GamepadVibration
                    {
                    DOUBLE LeftMotor;
                    DOUBLE RightMotor;
                    DOUBLE LeftTrigger;
                    DOUBLE RightTrigger;
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0016_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGameController_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGameController_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CGaming_CInput_CIGameController */
/* [uuid][object] */ 



/* interface ABI::Windows::Gaming::Input::IGameController */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGameController;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Gaming {
                namespace Input {
                    
                    MIDL_INTERFACE("1BAF6522-5F64-42C5-8267-B9FE2215BFBD")
                    IGameController : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE add_HeadsetConnected( 
                            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset *value,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_HeadsetConnected( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_HeadsetDisconnected( 
                            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset *value,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_HeadsetDisconnected( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_UserChanged( 
                            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs *value,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_UserChanged( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Headset( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Gaming::Input::IHeadset **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsWireless( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_User( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::System::IUser **value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IGameController = __uuidof(IGameController);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CGaming_CInput_CIGameControllerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *add_HeadsetConnected )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset *value,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_HeadsetConnected )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *add_HeadsetDisconnected )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CGaming__CInput__CHeadset *value,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_HeadsetDisconnected )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *add_UserChanged )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CGaming__CInput__CIGameController_Windows__CSystem__CUserChangedEventArgs *value,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_UserChanged )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
            /* [in] */ EventRegistrationToken token);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Headset )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGaming_CInput_CIHeadset **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsWireless )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_User )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGameController * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIUser **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CGaming_CInput_CIGameControllerVtbl;

    interface __x_ABI_CWindows_CGaming_CInput_CIGameController
    {
        CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIGameControllerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CGaming_CInput_CIGameController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CGaming_CInput_CIGameController_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CGaming_CInput_CIGameController_add_HeadsetConnected(This,value,token)	\
    ( (This)->lpVtbl -> add_HeadsetConnected(This,value,token) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_remove_HeadsetConnected(This,token)	\
    ( (This)->lpVtbl -> remove_HeadsetConnected(This,token) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_add_HeadsetDisconnected(This,value,token)	\
    ( (This)->lpVtbl -> add_HeadsetDisconnected(This,value,token) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_remove_HeadsetDisconnected(This,token)	\
    ( (This)->lpVtbl -> remove_HeadsetDisconnected(This,token) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_add_UserChanged(This,value,token)	\
    ( (This)->lpVtbl -> add_UserChanged(This,value,token) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_remove_UserChanged(This,token)	\
    ( (This)->lpVtbl -> remove_UserChanged(This,token) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_get_Headset(This,value)	\
    ( (This)->lpVtbl -> get_Headset(This,value) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_get_IsWireless(This,value)	\
    ( (This)->lpVtbl -> get_IsWireless(This,value) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGameController_get_User(This,value)	\
    ( (This)->lpVtbl -> get_User(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CGaming_CInput_CIGameController_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0017 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepad_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGamepad[] = L"Windows.Gaming.Input.IGamepad";
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepad_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0017 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0017_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGamepad_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepad_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CGaming_CInput_CIGamepad */
/* [uuid][object] */ 



/* interface ABI::Windows::Gaming::Input::IGamepad */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGamepad;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Gaming {
                namespace Input {
                    
                    MIDL_INTERFACE("BC7BB43C-0A69-3903-9E9D-A50F86A45DE5")
                    IGamepad : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Vibration( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Gaming::Input::GamepadVibration *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Vibration( 
                            /* [in] */ ABI::Windows::Gaming::Input::GamepadVibration value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetCurrentReading( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Gaming::Input::GamepadReading *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IGamepad = __uuidof(IGamepad);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CGaming_CInput_CIGamepadVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Vibration )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CGamepadVibration *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Vibration )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
            /* [in] */ __x_ABI_CWindows_CGaming_CInput_CGamepadVibration value);
        
        HRESULT ( STDMETHODCALLTYPE *GetCurrentReading )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepad * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CGaming_CInput_CGamepadReading *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CGaming_CInput_CIGamepadVtbl;

    interface __x_ABI_CWindows_CGaming_CInput_CIGamepad
    {
        CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIGamepadVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_get_Vibration(This,value)	\
    ( (This)->lpVtbl -> get_Vibration(This,value) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_put_Vibration(This,value)	\
    ( (This)->lpVtbl -> put_Vibration(This,value) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGamepad_GetCurrentReading(This,value)	\
    ( (This)->lpVtbl -> GetCurrentReading(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CGaming_CInput_CIGamepad_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0018 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IGamepadStatics[] = L"Windows.Gaming.Input.IGamepadStatics";
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0018 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0018_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Gaming::Input::IGamepadStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIGamepadStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Gaming {
                namespace Input {
                    
                    MIDL_INTERFACE("8BBCE529-D49C-39E9-9560-E47DDE96B7C8")
                    IGamepadStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE add_GamepadAdded( 
                            /* [in] */ __RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CGamepad *value,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_GamepadAdded( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE add_GamepadRemoved( 
                            /* [in] */ __RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CGamepad *value,
                            /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE remove_GamepadRemoved( 
                            /* [in] */ EventRegistrationToken token) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Gamepads( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CGamepad **value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IGamepadStatics = __uuidof(IGamepadStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CGaming_CInput_CIGamepadStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *add_GamepadAdded )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CGamepad *value,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_GamepadAdded )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *add_GamepadRemoved )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_Windows__CGaming__CInput__CGamepad *value,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_GamepadRemoved )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
            /* [in] */ EventRegistrationToken token);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Gamepads )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CGaming__CInput__CGamepad **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CGaming_CInput_CIGamepadStaticsVtbl;

    interface __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIGamepadStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_add_GamepadAdded(This,value,token)	\
    ( (This)->lpVtbl -> add_GamepadAdded(This,value,token) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_remove_GamepadAdded(This,token)	\
    ( (This)->lpVtbl -> remove_GamepadAdded(This,token) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_add_GamepadRemoved(This,value,token)	\
    ( (This)->lpVtbl -> add_GamepadRemoved(This,value,token) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_remove_GamepadRemoved(This,token)	\
    ( (This)->lpVtbl -> remove_GamepadRemoved(This,token) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_get_Gamepads(This,value)	\
    ( (This)->lpVtbl -> get_Gamepads(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CGaming_CInput_CIGamepadStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0019 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CGaming_CInput_CIHeadset_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_IHeadset[] = L"Windows.Gaming.Input.IHeadset";
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CIHeadset_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0019 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0019_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CGaming_CInput_CIHeadset_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CIHeadset_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CGaming_CInput_CIHeadset */
/* [uuid][object] */ 



/* interface ABI::Windows::Gaming::Input::IHeadset */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CIHeadset;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Gaming {
                namespace Input {
                    
                    MIDL_INTERFACE("3FD156EF-6925-3FA8-9181-029C5223AE3B")
                    IHeadset : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CaptureDeviceId( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RenderDeviceId( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IHeadset = __uuidof(IHeadset);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CGaming_CInput_CIHeadsetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CaptureDeviceId )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RenderDeviceId )( 
            __RPC__in __x_ABI_CWindows_CGaming_CInput_CIHeadset * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CGaming_CInput_CIHeadsetVtbl;

    interface __x_ABI_CWindows_CGaming_CInput_CIHeadset
    {
        CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CIHeadsetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CGaming_CInput_CIHeadset_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIHeadset_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIHeadset_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CGaming_CInput_CIHeadset_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIHeadset_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIHeadset_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CGaming_CInput_CIHeadset_get_CaptureDeviceId(This,value)	\
    ( (This)->lpVtbl -> get_CaptureDeviceId(This,value) ) 

#define __x_ABI_CWindows_CGaming_CInput_CIHeadset_get_RenderDeviceId(This,value)	\
    ( (This)->lpVtbl -> get_RenderDeviceId(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CGaming_CInput_CIHeadset_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0020 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Gaming_Input_Headset_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Headset_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Headset[] = L"Windows.Gaming.Input.Headset";
#endif
#ifndef RUNTIMECLASS_Windows_Gaming_Input_Gamepad_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Gamepad_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Gamepad[] = L"Windows.Gaming.Input.Gamepad";
#endif


/* interface __MIDL_itf_windows2Egaming2Einput_0000_0020 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Egaming2Einput_0000_0020_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

unsigned long             __RPC_USER  HSTRING_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree64(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


