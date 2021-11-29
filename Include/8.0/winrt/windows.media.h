

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


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
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __windows2Emedia_h__
#define __windows2Emedia_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CMedia_CIMediaControl_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaControl_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaControl __x_ABI_CWindows_CMedia_CIMediaControl;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaControl;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CMedia_CIMediaControl_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CMedia_CIMediaExtension_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaExtension_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaExtension __x_ABI_CWindows_CMedia_CIMediaExtension;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaExtension;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CMedia_CIMediaExtension_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CMedia_CIMediaExtensionManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaExtensionManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIMediaExtensionManager __x_ABI_CWindows_CMedia_CIMediaExtensionManager;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IMediaExtensionManager;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CMedia_CIMediaExtensionManager_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIVideoEffectsStatics __x_ABI_CWindows_CMedia_CIVideoEffectsStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IVideoEffectsStatics;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Emedia_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif

interface IInspectable;


/* interface __MIDL_itf_windows2Emedia_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia_0000_0211 */




/* interface __MIDL_itf_windows2Emedia_0000_0211 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia_0000_0211_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia_0000_0211_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia_0000_0001 */
/* [local] */ 

#ifndef DEF___FIEventHandler_1_IInspectable_USE
#define DEF___FIEventHandler_1_IInspectable_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b"))
IEventHandler<IInspectable*> : IEventHandler_impl<IInspectable*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.EventHandler`1<Object>"; }
};
typedef IEventHandler<IInspectable*> __FIEventHandler_1_IInspectable_t;
#define ____FIEventHandler_1_IInspectable_FWD_DEFINED__
#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::__FIEventHandler_1_IInspectable_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIEventHandler_1_IInspectable_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Foundation {
class Uri;
} /*Foundation*/
} /*Windows*/
}
#endif

#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CMedia_CSoundLevel __x_ABI_CWindows_CMedia_CSoundLevel;


#endif /* end if !defined(__cplusplus) */


#endif




#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Media {
class MediaExtensionManager;
} /*Media*/
} /*Windows*/
}
#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CMedia_CSoundLevel
    {
        SoundLevel_Muted	= 0,
        SoundLevel_Low	= 1,
        SoundLevel_Full	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CMedia_CIMediaControl_INTERFACE_DEFINED__)
extern const __declspec(selectany) WCHAR InterfaceName_Windows_Media_IMediaControl[] = L"Windows.Media.IMediaControl";
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaControl_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emedia_0000_0001 */
/* [local] */ 




#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Media {
            
            typedef enum SoundLevel SoundLevel;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif





#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Media {
            
            /* [v1_enum] */ 
            enum SoundLevel
                {
                    SoundLevel_Muted	= 0,
                    SoundLevel_Low	= 1,
                    SoundLevel_Full	= 2
                } ;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia_0000_0001_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CMedia_CIMediaControl_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaControl_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CMedia_CIMediaControl */
/* [uuid][object] */ 



/* interface ABI::Windows::Media::IMediaControl */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Media {
                
                MIDL_INTERFACE("98F1FBE1-7A8D-42CB-B6FE-8FE698264F13")
                IMediaControl : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE add_SoundLevelChanged( 
                        /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                        /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE remove_SoundLevelChanged( 
                        /* [in] */ EventRegistrationToken cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE add_PlayPressed( 
                        /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                        /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE remove_PlayPressed( 
                        /* [in] */ EventRegistrationToken cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE add_PausePressed( 
                        /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                        /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE remove_PausePressed( 
                        /* [in] */ EventRegistrationToken cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE add_StopPressed( 
                        /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                        /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE remove_StopPressed( 
                        /* [in] */ EventRegistrationToken cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE add_PlayPauseTogglePressed( 
                        /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                        /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE remove_PlayPauseTogglePressed( 
                        /* [in] */ EventRegistrationToken cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE add_RecordPressed( 
                        /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                        /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE remove_RecordPressed( 
                        /* [in] */ EventRegistrationToken cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE add_NextTrackPressed( 
                        /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                        /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE remove_NextTrackPressed( 
                        /* [in] */ EventRegistrationToken cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE add_PreviousTrackPressed( 
                        /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                        /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE remove_PreviousTrackPressed( 
                        /* [in] */ EventRegistrationToken cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE add_FastForwardPressed( 
                        /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                        /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE remove_FastForwardPressed( 
                        /* [in] */ EventRegistrationToken cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE add_RewindPressed( 
                        /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                        /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE remove_RewindPressed( 
                        /* [in] */ EventRegistrationToken cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE add_ChannelUpPressed( 
                        /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                        /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE remove_ChannelUpPressed( 
                        /* [in] */ EventRegistrationToken cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE add_ChannelDownPressed( 
                        /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
                        /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE remove_ChannelDownPressed( 
                        /* [in] */ EventRegistrationToken cookie) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SoundLevel( 
                        /* [out][retval] */ __RPC__out ABI::Windows::Media::SoundLevel *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_TrackName( 
                        /* [in] */ __RPC__in HSTRING value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TrackName( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ArtistName( 
                        /* [in] */ __RPC__in HSTRING value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ArtistName( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IsPlaying( 
                        /* [in] */ boolean value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsPlaying( 
                        /* [out][retval] */ __RPC__out boolean *value) = 0;
                    
                    virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AlbumArt( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass *value) = 0;
                    
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AlbumArt( 
                        /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass **value) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IMediaControl = __uuidof(IMediaControl);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CMedia_CIMediaControlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *add_SoundLevelChanged )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_SoundLevelChanged )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_PlayPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_PlayPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_PausePressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_PausePressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_StopPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_StopPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_PlayPauseTogglePressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_PlayPauseTogglePressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_RecordPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_RecordPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_NextTrackPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_NextTrackPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_PreviousTrackPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_PreviousTrackPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_FastForwardPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_FastForwardPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_RewindPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_RewindPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_ChannelUpPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_ChannelUpPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ EventRegistrationToken cookie);
        
        HRESULT ( STDMETHODCALLTYPE *add_ChannelDownPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ __RPC__in_opt __FIEventHandler_1_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_ChannelDownPressed )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ EventRegistrationToken cookie);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SoundLevel )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CMedia_CSoundLevel *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_TrackName )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TrackName )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ArtistName )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArtistName )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsPlaying )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPlaying )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AlbumArt )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AlbumArt )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CMedia_CIMediaControlVtbl;

    interface __x_ABI_CWindows_CMedia_CIMediaControl
    {
        CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaControlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CMedia_CIMediaControl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CMedia_CIMediaControl_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CMedia_CIMediaControl_add_SoundLevelChanged(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_SoundLevelChanged(This,handler,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_SoundLevelChanged(This,cookie)	\
    ( (This)->lpVtbl -> remove_SoundLevelChanged(This,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_add_PlayPressed(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_PlayPressed(This,handler,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_PlayPressed(This,cookie)	\
    ( (This)->lpVtbl -> remove_PlayPressed(This,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_add_PausePressed(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_PausePressed(This,handler,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_PausePressed(This,cookie)	\
    ( (This)->lpVtbl -> remove_PausePressed(This,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_add_StopPressed(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_StopPressed(This,handler,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_StopPressed(This,cookie)	\
    ( (This)->lpVtbl -> remove_StopPressed(This,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_add_PlayPauseTogglePressed(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_PlayPauseTogglePressed(This,handler,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_PlayPauseTogglePressed(This,cookie)	\
    ( (This)->lpVtbl -> remove_PlayPauseTogglePressed(This,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_add_RecordPressed(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_RecordPressed(This,handler,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_RecordPressed(This,cookie)	\
    ( (This)->lpVtbl -> remove_RecordPressed(This,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_add_NextTrackPressed(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_NextTrackPressed(This,handler,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_NextTrackPressed(This,cookie)	\
    ( (This)->lpVtbl -> remove_NextTrackPressed(This,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_add_PreviousTrackPressed(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_PreviousTrackPressed(This,handler,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_PreviousTrackPressed(This,cookie)	\
    ( (This)->lpVtbl -> remove_PreviousTrackPressed(This,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_add_FastForwardPressed(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_FastForwardPressed(This,handler,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_FastForwardPressed(This,cookie)	\
    ( (This)->lpVtbl -> remove_FastForwardPressed(This,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_add_RewindPressed(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_RewindPressed(This,handler,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_RewindPressed(This,cookie)	\
    ( (This)->lpVtbl -> remove_RewindPressed(This,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_add_ChannelUpPressed(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_ChannelUpPressed(This,handler,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_ChannelUpPressed(This,cookie)	\
    ( (This)->lpVtbl -> remove_ChannelUpPressed(This,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_add_ChannelDownPressed(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_ChannelDownPressed(This,handler,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_remove_ChannelDownPressed(This,cookie)	\
    ( (This)->lpVtbl -> remove_ChannelDownPressed(This,cookie) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_get_SoundLevel(This,value)	\
    ( (This)->lpVtbl -> get_SoundLevel(This,value) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_put_TrackName(This,value)	\
    ( (This)->lpVtbl -> put_TrackName(This,value) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_get_TrackName(This,value)	\
    ( (This)->lpVtbl -> get_TrackName(This,value) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_put_ArtistName(This,value)	\
    ( (This)->lpVtbl -> put_ArtistName(This,value) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_get_ArtistName(This,value)	\
    ( (This)->lpVtbl -> get_ArtistName(This,value) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_put_IsPlaying(This,value)	\
    ( (This)->lpVtbl -> put_IsPlaying(This,value) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_get_IsPlaying(This,value)	\
    ( (This)->lpVtbl -> get_IsPlaying(This,value) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_put_AlbumArt(This,value)	\
    ( (This)->lpVtbl -> put_AlbumArt(This,value) ) 

#define __x_ABI_CWindows_CMedia_CIMediaControl_get_AlbumArt(This,value)	\
    ( (This)->lpVtbl -> get_AlbumArt(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CMedia_CIMediaControl_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emedia_0000_0002 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CMedia_CIMediaExtension_INTERFACE_DEFINED__)
extern const __declspec(selectany) WCHAR InterfaceName_Windows_Media_IMediaExtension[] = L"Windows.Media.IMediaExtension";
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaExtension_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emedia_0000_0002 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CMedia_CIMediaExtension_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaExtension_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CMedia_CIMediaExtension */
/* [uuid][object] */ 



/* interface ABI::Windows::Media::IMediaExtension */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaExtension;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Media {
                
                MIDL_INTERFACE("07915118-45DF-442B-8A3F-F7826A6370AB")
                IMediaExtension : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE SetProperties( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet *configuration) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IMediaExtension = __uuidof(IMediaExtension);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CMedia_CIMediaExtensionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *SetProperties )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet *configuration);
        
        END_INTERFACE
    } __x_ABI_CWindows_CMedia_CIMediaExtensionVtbl;

    interface __x_ABI_CWindows_CMedia_CIMediaExtension
    {
        CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaExtensionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CMedia_CIMediaExtension_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtension_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtension_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CMedia_CIMediaExtension_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtension_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtension_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CMedia_CIMediaExtension_SetProperties(This,configuration)	\
    ( (This)->lpVtbl -> SetProperties(This,configuration) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CMedia_CIMediaExtension_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emedia_0000_0003 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CMedia_CIMediaExtensionManager_INTERFACE_DEFINED__)
extern const __declspec(selectany) WCHAR InterfaceName_Windows_Media_IMediaExtensionManager[] = L"Windows.Media.IMediaExtensionManager";
#endif /* !defined(____x_ABI_CWindows_CMedia_CIMediaExtensionManager_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emedia_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia_0000_0003_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CMedia_CIMediaExtensionManager_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIMediaExtensionManager_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CMedia_CIMediaExtensionManager */
/* [uuid][object] */ 



/* interface ABI::Windows::Media::IMediaExtensionManager */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaExtensionManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Media {
                
                MIDL_INTERFACE("4A25EAF5-242D-4DFB-97F4-69B7C42576FF")
                IMediaExtensionManager : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE RegisterSchemeHandler( 
                        /* [in] */ __RPC__in HSTRING activatableClassId,
                        /* [in] */ __RPC__in HSTRING scheme) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE RegisterSchemeHandlerWithSettings( 
                        /* [in] */ __RPC__in HSTRING activatableClassId,
                        /* [in] */ __RPC__in HSTRING scheme,
                        /* [in] */ __RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet *configuration) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE RegisterByteStreamHandler( 
                        /* [in] */ __RPC__in HSTRING activatableClassId,
                        /* [in] */ __RPC__in HSTRING fileExtension,
                        /* [in] */ __RPC__in HSTRING mimeType) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE RegisterByteStreamHandlerWithSettings( 
                        /* [in] */ __RPC__in HSTRING activatableClassId,
                        /* [in] */ __RPC__in HSTRING fileExtension,
                        /* [in] */ __RPC__in HSTRING mimeType,
                        /* [in] */ __RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet *configuration) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE RegisterAudioDecoder( 
                        /* [in] */ __RPC__in HSTRING activatableClassId,
                        /* [in] */ GUID inputSubtype,
                        /* [in] */ GUID outputSubtype) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE RegisterAudioDecoderWithSettings( 
                        /* [in] */ __RPC__in HSTRING activatableClassId,
                        /* [in] */ GUID inputSubtype,
                        /* [in] */ GUID outputSubtype,
                        /* [in] */ __RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet *configuration) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE RegisterAudioEncoder( 
                        /* [in] */ __RPC__in HSTRING activatableClassId,
                        /* [in] */ GUID inputSubtype,
                        /* [in] */ GUID outputSubtype) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE RegisterAudioEncoderWithSettings( 
                        /* [in] */ __RPC__in HSTRING activatableClassId,
                        /* [in] */ GUID inputSubtype,
                        /* [in] */ GUID outputSubtype,
                        /* [in] */ __RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet *configuration) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE RegisterVideoDecoder( 
                        /* [in] */ __RPC__in HSTRING activatableClassId,
                        /* [in] */ GUID inputSubtype,
                        /* [in] */ GUID outputSubtype) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE RegisterVideoDecoderWithSettings( 
                        /* [in] */ __RPC__in HSTRING activatableClassId,
                        /* [in] */ GUID inputSubtype,
                        /* [in] */ GUID outputSubtype,
                        /* [in] */ __RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet *configuration) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE RegisterVideoEncoder( 
                        /* [in] */ __RPC__in HSTRING activatableClassId,
                        /* [in] */ GUID inputSubtype,
                        /* [in] */ GUID outputSubtype) = 0;
                    
                    virtual HRESULT STDMETHODCALLTYPE RegisterVideoEncoderWithSettings( 
                        /* [in] */ __RPC__in HSTRING activatableClassId,
                        /* [in] */ GUID inputSubtype,
                        /* [in] */ GUID outputSubtype,
                        /* [in] */ __RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet *configuration) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IMediaExtensionManager = __uuidof(IMediaExtensionManager);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CMedia_CIMediaExtensionManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterSchemeHandler )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
            /* [in] */ __RPC__in HSTRING activatableClassId,
            /* [in] */ __RPC__in HSTRING scheme);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterSchemeHandlerWithSettings )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
            /* [in] */ __RPC__in HSTRING activatableClassId,
            /* [in] */ __RPC__in HSTRING scheme,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet *configuration);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterByteStreamHandler )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
            /* [in] */ __RPC__in HSTRING activatableClassId,
            /* [in] */ __RPC__in HSTRING fileExtension,
            /* [in] */ __RPC__in HSTRING mimeType);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterByteStreamHandlerWithSettings )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
            /* [in] */ __RPC__in HSTRING activatableClassId,
            /* [in] */ __RPC__in HSTRING fileExtension,
            /* [in] */ __RPC__in HSTRING mimeType,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet *configuration);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterAudioDecoder )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
            /* [in] */ __RPC__in HSTRING activatableClassId,
            /* [in] */ GUID inputSubtype,
            /* [in] */ GUID outputSubtype);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterAudioDecoderWithSettings )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
            /* [in] */ __RPC__in HSTRING activatableClassId,
            /* [in] */ GUID inputSubtype,
            /* [in] */ GUID outputSubtype,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet *configuration);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterAudioEncoder )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
            /* [in] */ __RPC__in HSTRING activatableClassId,
            /* [in] */ GUID inputSubtype,
            /* [in] */ GUID outputSubtype);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterAudioEncoderWithSettings )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
            /* [in] */ __RPC__in HSTRING activatableClassId,
            /* [in] */ GUID inputSubtype,
            /* [in] */ GUID outputSubtype,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet *configuration);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterVideoDecoder )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
            /* [in] */ __RPC__in HSTRING activatableClassId,
            /* [in] */ GUID inputSubtype,
            /* [in] */ GUID outputSubtype);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterVideoDecoderWithSettings )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
            /* [in] */ __RPC__in HSTRING activatableClassId,
            /* [in] */ GUID inputSubtype,
            /* [in] */ GUID outputSubtype,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet *configuration);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterVideoEncoder )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
            /* [in] */ __RPC__in HSTRING activatableClassId,
            /* [in] */ GUID inputSubtype,
            /* [in] */ GUID outputSubtype);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterVideoEncoderWithSettings )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
            /* [in] */ __RPC__in HSTRING activatableClassId,
            /* [in] */ GUID inputSubtype,
            /* [in] */ GUID outputSubtype,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet *configuration);
        
        END_INTERFACE
    } __x_ABI_CWindows_CMedia_CIMediaExtensionManagerVtbl;

    interface __x_ABI_CWindows_CMedia_CIMediaExtensionManager
    {
        CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaExtensionManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterSchemeHandler(This,activatableClassId,scheme)	\
    ( (This)->lpVtbl -> RegisterSchemeHandler(This,activatableClassId,scheme) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterSchemeHandlerWithSettings(This,activatableClassId,scheme,configuration)	\
    ( (This)->lpVtbl -> RegisterSchemeHandlerWithSettings(This,activatableClassId,scheme,configuration) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterByteStreamHandler(This,activatableClassId,fileExtension,mimeType)	\
    ( (This)->lpVtbl -> RegisterByteStreamHandler(This,activatableClassId,fileExtension,mimeType) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterByteStreamHandlerWithSettings(This,activatableClassId,fileExtension,mimeType,configuration)	\
    ( (This)->lpVtbl -> RegisterByteStreamHandlerWithSettings(This,activatableClassId,fileExtension,mimeType,configuration) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterAudioDecoder(This,activatableClassId,inputSubtype,outputSubtype)	\
    ( (This)->lpVtbl -> RegisterAudioDecoder(This,activatableClassId,inputSubtype,outputSubtype) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterAudioDecoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration)	\
    ( (This)->lpVtbl -> RegisterAudioDecoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterAudioEncoder(This,activatableClassId,inputSubtype,outputSubtype)	\
    ( (This)->lpVtbl -> RegisterAudioEncoder(This,activatableClassId,inputSubtype,outputSubtype) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterAudioEncoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration)	\
    ( (This)->lpVtbl -> RegisterAudioEncoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterVideoDecoder(This,activatableClassId,inputSubtype,outputSubtype)	\
    ( (This)->lpVtbl -> RegisterVideoDecoder(This,activatableClassId,inputSubtype,outputSubtype) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterVideoDecoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration)	\
    ( (This)->lpVtbl -> RegisterVideoDecoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterVideoEncoder(This,activatableClassId,inputSubtype,outputSubtype)	\
    ( (This)->lpVtbl -> RegisterVideoEncoder(This,activatableClassId,inputSubtype,outputSubtype) ) 

#define __x_ABI_CWindows_CMedia_CIMediaExtensionManager_RegisterVideoEncoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration)	\
    ( (This)->lpVtbl -> RegisterVideoEncoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CMedia_CIMediaExtensionManager_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emedia_0000_0004 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) WCHAR InterfaceName_Windows_Media_IVideoEffectsStatics[] = L"Windows.Media.IVideoEffectsStatics";
#endif /* !defined(____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emedia_0000_0004 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia_0000_0004_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CMedia_CIVideoEffectsStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Media::IVideoEffectsStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoEffectsStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Media {
                
                MIDL_INTERFACE("1FCDA5E8-BAF1-4521-980C-3BCEBB44CF38")
                IVideoEffectsStatics : public IInspectable
                {
                public:
                    virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_VideoStabilization( 
                        /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IVideoEffectsStatics = __uuidof(IVideoEffectsStatics);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CMedia_CIVideoEffectsStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_VideoStabilization )( 
            __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CMedia_CIVideoEffectsStaticsVtbl;

    interface __x_ABI_CWindows_CMedia_CIVideoEffectsStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CMedia_CIVideoEffectsStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CMedia_CIVideoEffectsStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CMedia_CIVideoEffectsStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CMedia_CIVideoEffectsStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CMedia_CIVideoEffectsStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CMedia_CIVideoEffectsStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CMedia_CIVideoEffectsStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CMedia_CIVideoEffectsStatics_get_VideoStabilization(This,value)	\
    ( (This)->lpVtbl -> get_VideoStabilization(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CMedia_CIVideoEffectsStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emedia_0000_0005 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Media_MediaControl_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaControl_DEFINED
extern const __declspec(selectany) WCHAR RuntimeClass_Windows_Media_MediaControl[] = L"Windows.Media.MediaControl";
#endif
#ifndef RUNTIMECLASS_Windows_Media_MediaExtensionManager_DEFINED
#define RUNTIMECLASS_Windows_Media_MediaExtensionManager_DEFINED
extern const __declspec(selectany) WCHAR RuntimeClass_Windows_Media_MediaExtensionManager[] = L"Windows.Media.MediaExtensionManager";
#endif
#ifndef RUNTIMECLASS_Windows_Media_VideoEffects_DEFINED
#define RUNTIMECLASS_Windows_Media_VideoEffects_DEFINED
extern const __declspec(selectany) WCHAR RuntimeClass_Windows_Media_VideoEffects[] = L"Windows.Media.VideoEffects";
#endif


/* interface __MIDL_itf_windows2Emedia_0000_0005 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia_0000_0005_v0_0_s_ifspec;

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


