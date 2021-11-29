

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

#ifndef __windows2Eui2Einput2Einking2Ecore_h__
#define __windows2Eui2Einput2Einking2Ecore_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        interface ICoreInkIndependentInputSource;
                    } /* end namespace */
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        interface ICoreInkIndependentInputSourceStatics;
                    } /* end namespace */
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.UI.Core.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_0000 */
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
namespace UI {
namespace Input {
namespace Inking {
namespace Core {
class CoreInkIndependentInputSource;
} /*Core*/
} /*Inking*/
} /*Input*/
} /*UI*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Input {
namespace Inking {
namespace Core {
interface ICoreInkIndependentInputSource;
} /*Core*/
} /*Inking*/
} /*Input*/
} /*UI*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Core {
class PointerEventArgs;
} /*Core*/
} /*UI*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Core {
interface IPointerEventArgs;
} /*Core*/
} /*UI*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_0000 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_2492 */




/* interface __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_2492 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_2492_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_2492_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_0001 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b83fbe98-882a-5b69-bd1c-c66690707fef"))
ITypedEventHandler<ABI::Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource*,ABI::Windows::UI::Core::PointerEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource*, ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::PointerEventArgs*, ABI::Windows::UI::Core::IPointerEventArgs*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Inking.Core.CoreInkIndependentInputSource, Windows.UI.Core.PointerEventArgs>"; }
};
typedef ITypedEventHandler<ABI::Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource*,ABI::Windows::UI::Core::PointerEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_t;
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_FWD_DEFINED__
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Eui2Ecore_h__)
#include <Windows.UI.Core.h>
#endif // !defined(__windows2Eui2Ecore_h__)
#if !defined(__windows2Eui2Einput2Einking_h__)
#include <Windows.UI.Input.Inking.h>
#endif // !defined(__windows2Eui2Einput2Einking_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Input {
namespace Inking {
class InkPresenter;
} /*Inking*/
} /*Input*/
} /*UI*/
} /*Windows*/
}
#endif


#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource[] = L"Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSource";
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_0001 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource */
/* [uuid][object] */ 



/* interface ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace UI {
                namespace Input {
                    namespace Inking {
                        namespace Core {
                            
                            MIDL_INTERFACE("39B38DA9-7639-4499-A5B5-191D00E35B16")
                            ICoreInkIndependentInputSource : public IInspectable
                            {
                            public:
                                virtual HRESULT STDMETHODCALLTYPE add_PointerEntering( 
                                    /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs *handler,
                                    /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE remove_PointerEntering( 
                                    /* [in] */ EventRegistrationToken cookie) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE add_PointerHovering( 
                                    /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs *handler,
                                    /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE remove_PointerHovering( 
                                    /* [in] */ EventRegistrationToken cookie) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE add_PointerExiting( 
                                    /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs *handler,
                                    /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE remove_PointerExiting( 
                                    /* [in] */ EventRegistrationToken cookie) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE add_PointerPressing( 
                                    /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs *handler,
                                    /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE remove_PointerPressing( 
                                    /* [in] */ EventRegistrationToken cookie) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE add_PointerMoving( 
                                    /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs *handler,
                                    /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE remove_PointerMoving( 
                                    /* [in] */ EventRegistrationToken cookie) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE add_PointerReleasing( 
                                    /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs *handler,
                                    /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE remove_PointerReleasing( 
                                    /* [in] */ EventRegistrationToken cookie) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE add_PointerLost( 
                                    /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs *handler,
                                    /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                                
                                virtual HRESULT STDMETHODCALLTYPE remove_PointerLost( 
                                    /* [in] */ EventRegistrationToken cookie) = 0;
                                
                                virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_InkPresenter( 
                                    /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkPresenter **value) = 0;
                                
                            };

                            extern const __declspec(selectany) IID & IID_ICoreInkIndependentInputSource = __uuidof(ICoreInkIndependentInputSource);

                            
                        }  /* end namespace */
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *add_PointerEntering )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_PointerEntering )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_PointerHovering )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_PointerHovering )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_PointerExiting )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_PointerExiting )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_PointerPressing )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_PointerPressing )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_PointerMoving )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_PointerMoving )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_PointerReleasing )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_PointerReleasing )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_PointerLost )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_PointerLost )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [in] */ EventRegistrationToken cookie);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_InkPresenter )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceVtbl;

    interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_add_PointerEntering(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_PointerEntering(This,handler,cookie) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_remove_PointerEntering(This,cookie)	\
    ( (This)->lpVtbl -> remove_PointerEntering(This,cookie) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_add_PointerHovering(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_PointerHovering(This,handler,cookie) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_remove_PointerHovering(This,cookie)	\
    ( (This)->lpVtbl -> remove_PointerHovering(This,cookie) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_add_PointerExiting(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_PointerExiting(This,handler,cookie) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_remove_PointerExiting(This,cookie)	\
    ( (This)->lpVtbl -> remove_PointerExiting(This,cookie) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_add_PointerPressing(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_PointerPressing(This,handler,cookie) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_remove_PointerPressing(This,cookie)	\
    ( (This)->lpVtbl -> remove_PointerPressing(This,cookie) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_add_PointerMoving(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_PointerMoving(This,handler,cookie) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_remove_PointerMoving(This,cookie)	\
    ( (This)->lpVtbl -> remove_PointerMoving(This,cookie) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_add_PointerReleasing(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_PointerReleasing(This,handler,cookie) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_remove_PointerReleasing(This,cookie)	\
    ( (This)->lpVtbl -> remove_PointerReleasing(This,cookie) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_add_PointerLost(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_PointerLost(This,handler,cookie) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_remove_PointerLost(This,cookie)	\
    ( (This)->lpVtbl -> remove_PointerLost(This,cookie) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_get_InkPresenter(This,value)	\
    ( (This)->lpVtbl -> get_InkPresenter(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_0002 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSourceStatics[] = L"Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSourceStatics";
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace UI {
                namespace Input {
                    namespace Inking {
                        namespace Core {
                            
                            MIDL_INTERFACE("73E6011B-80C0-4DFB-9B66-10BA7F3F9C84")
                            ICoreInkIndependentInputSourceStatics : public IInspectable
                            {
                            public:
                                virtual HRESULT STDMETHODCALLTYPE Create( 
                                    /* [in] */ __RPC__in_opt ABI::Windows::UI::Input::Inking::IInkPresenter *inkPresenter,
                                    /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource **inkIndependentInputSource) = 0;
                                
                            };

                            extern const __declspec(selectany) IID & IID_ICoreInkIndependentInputSourceStatics = __uuidof(ICoreInkIndependentInputSourceStatics);

                            
                        }  /* end namespace */
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *Create )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter *inkPresenter,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource **inkIndependentInputSource);
        
        END_INTERFACE
    } __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStaticsVtbl;

    interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_Create(This,inkPresenter,inkIndependentInputSource)	\
    ( (This)->lpVtbl -> Create(This,inkPresenter,inkIndependentInputSource) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_0003 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreInkIndependentInputSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreInkIndependentInputSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Core_CoreInkIndependentInputSource[] = L"Windows.UI.Input.Inking.Core.CoreInkIndependentInputSource";
#endif


/* interface __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Einput2Einking2Ecore_0000_0003_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


