

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
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

#ifndef __windows2Eui2Einput2Ecore_h__
#define __windows2Eui2Einput2Ecore_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Core {
                    interface IRadialControllerIndependentInputSource;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Core {
                    interface IRadialControllerIndependentInputSourceStatics;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.ApplicationModel.Core.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eui2Einput2Ecore_0000_0000 */
/* [local] */ 

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Eapplicationmodel2Ecore_h__)
#include <Windows.ApplicationModel.Core.h>
#endif // !defined(__windows2Eapplicationmodel2Ecore_h__)
#if !defined(__windows2Eui2Ecore_h__)
#include <Windows.UI.Core.h>
#endif // !defined(__windows2Eui2Ecore_h__)
#if !defined(__windows2Eui2Einput_h__)
#include <Windows.UI.Input.h>
#endif // !defined(__windows2Eui2Einput_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace ApplicationModel {
namespace Core {
class CoreApplicationView;
} /*Core*/
} /*ApplicationModel*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Core {
class CoreDispatcher;
} /*Core*/
} /*UI*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Input {
class RadialController;
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
namespace Core {
class RadialControllerIndependentInputSource;
} /*Core*/
} /*Input*/
} /*UI*/
} /*Windows*/
}
#endif
#if !defined(____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Core_IRadialControllerIndependentInputSource[] = L"Windows.UI.Input.Core.IRadialControllerIndependentInputSource";
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eui2Einput2Ecore_0000_0000 */
/* [local] */ 








extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Einput2Ecore_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Einput2Ecore_0000_0000_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource */
/* [uuid][object] */ 



/* interface ABI::Windows::UI::Input::Core::IRadialControllerIndependentInputSource */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace UI {
                namespace Input {
                    namespace Core {
                        
                        MIDL_INTERFACE("3D577EF6-4CEE-11E6-B535-001BDC06AB3B")
                        IRadialControllerIndependentInputSource : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Controller( 
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::UI::Input::IRadialController **value) = 0;
                            
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Dispatcher( 
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::UI::Core::ICoreDispatcher **value) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IRadialControllerIndependentInputSource = __uuidof(IRadialControllerIndependentInputSource);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Controller )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialController **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dispatcher )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreDispatcher **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceVtbl;

    interface __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_get_Controller(This,value)	\
    ( (This)->lpVtbl -> get_Controller(This,value) ) 

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_get_Dispatcher(This,value)	\
    ( (This)->lpVtbl -> get_Dispatcher(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Einput2Ecore_0000_0001 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Core_IRadialControllerIndependentInputSourceStatics[] = L"Windows.UI.Input.Core.IRadialControllerIndependentInputSourceStatics";
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eui2Einput2Ecore_0000_0001 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Einput2Ecore_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Einput2Ecore_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace UI {
                namespace Input {
                    namespace Core {
                        
                        MIDL_INTERFACE("3D577EF5-4CEE-11E6-B535-001BDC06AB3B")
                        IRadialControllerIndependentInputSourceStatics : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE CreateForView( 
                                /* [in] */ __RPC__in_opt ABI::Windows::ApplicationModel::Core::ICoreApplicationView *view,
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::UI::Input::Core::IRadialControllerIndependentInputSource **result) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IRadialControllerIndependentInputSourceStatics = __uuidof(IRadialControllerIndependentInputSourceStatics);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateForView )( 
            __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView *view,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource **result);
        
        END_INTERFACE
    } __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStaticsVtbl;

    interface __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_CreateForView(This,view,result)	\
    ( (This)->lpVtbl -> CreateForView(This,view,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Einput2Ecore_0000_0002 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_UI_Input_Core_RadialControllerIndependentInputSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Core_RadialControllerIndependentInputSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Core_RadialControllerIndependentInputSource[] = L"Windows.UI.Input.Core.RadialControllerIndependentInputSource";
#endif


/* interface __MIDL_itf_windows2Eui2Einput2Ecore_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Einput2Ecore_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Einput2Ecore_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


