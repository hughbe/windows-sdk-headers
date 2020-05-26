

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* Compiler settings for mftransform.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
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

#ifndef __mftransform_h__
#define __mftransform_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMFTransform_FWD_DEFINED__
#define __IMFTransform_FWD_DEFINED__
typedef interface IMFTransform IMFTransform;
#endif 	/* __IMFTransform_FWD_DEFINED__ */


/* header files for imported files */
#include "mfobjects.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_mftransform_0000_0000 */
/* [local] */ 


enum _MFT_INPUT_DATA_BUFFER_FLAGS
    {	MFT_INPUT_DATA_BUFFER_PLACEHOLDER	= 0xffffffff
    } ;

enum _MFT_OUTPUT_DATA_BUFFER_FLAGS
    {	MFT_OUTPUT_DATA_BUFFER_INCOMPLETE	= 0x1000000,
	MFT_OUTPUT_DATA_BUFFER_FORMAT_CHANGE	= 0x100,
	MFT_OUTPUT_DATA_BUFFER_STREAM_END	= 0x200,
	MFT_OUTPUT_DATA_BUFFER_NO_SAMPLE	= 0x300
    } ;

enum _MFT_INPUT_STATUS_FLAGS
    {	MFT_INPUT_STATUS_ACCEPT_DATA	= 0x1
    } ;

enum _MFT_OUTPUT_STATUS_FLAGS
    {	MFT_OUTPUT_STATUS_SAMPLE_READY	= 0x1
    } ;

enum _MFT_INPUT_STREAM_INFO_FLAGS
    {	MFT_INPUT_STREAM_WHOLE_SAMPLES	= 0x1,
	MFT_INPUT_STREAM_SINGLE_SAMPLE_PER_BUFFER	= 0x2,
	MFT_INPUT_STREAM_FIXED_SAMPLE_SIZE	= 0x4,
	MFT_INPUT_STREAM_HOLDS_BUFFERS	= 0x8,
	MFT_INPUT_STREAM_DOES_NOT_ADDREF	= 0x100,
	MFT_INPUT_STREAM_REMOVABLE	= 0x200,
	MFT_INPUT_STREAM_OPTIONAL	= 0x400,
	MFT_INPUT_STREAM_PROCESSES_IN_PLACE	= 0x800
    } ;

enum _MFT_OUTPUT_STREAM_INFO_FLAGS
    {	MFT_OUTPUT_STREAM_WHOLE_SAMPLES	= 0x1,
	MFT_OUTPUT_STREAM_SINGLE_SAMPLE_PER_BUFFER	= 0x2,
	MFT_OUTPUT_STREAM_FIXED_SAMPLE_SIZE	= 0x4,
	MFT_OUTPUT_STREAM_DISCARDABLE	= 0x8,
	MFT_OUTPUT_STREAM_OPTIONAL	= 0x10,
	MFT_OUTPUT_STREAM_PROVIDES_SAMPLES	= 0x100,
	MFT_OUTPUT_STREAM_CAN_PROVIDE_SAMPLES	= 0x200,
	MFT_OUTPUT_STREAM_LAZY_READ	= 0x400,
	MFT_OUTPUT_STREAM_REMOVABLE	= 0x800
    } ;

enum _MFT_SET_TYPE_FLAGS
    {	MFT_SET_TYPE_TEST_ONLY	= 0x1
    } ;

enum _MFT_PROCESS_OUTPUT_FLAGS
    {	MFT_PROCESS_OUTPUT_DISCARD_WHEN_NO_BUFFER	= 0x1
    } ;

enum _MFT_PROCESS_OUTPUT_STATUS
    {	MFT_PROCESS_OUTPUT_STATUS_NEW_STREAMS	= 0x100
    } ;

enum _MFT_DRAIN_TYPE
    {	MFT_DRAIN_PRODUCE_TAILS	= 0,
	MFT_DRAIN_NO_TAILS	= 0x1
    } ;
#define MFT_STREAMS_UNLIMITED       0xFFFFFFFF
#define MFT_OUTPUT_BOUND_LOWER_UNBOUNDED MINLONGLONG
#define MFT_OUTPUT_BOUND_UPPER_UNBOUNDED MAXLONGLONG
typedef 
enum _MFT_MESSAGE_TYPE
    {	MFT_MESSAGE_COMMAND_FLUSH	= 0,
	MFT_MESSAGE_COMMAND_DRAIN	= 0x1,
	MFT_MESSAGE_SET_D3D_MANAGER	= 0x2,
	MFT_MESSAGE_DROP_SAMPLES	= 0x3,
	MFT_MESSAGE_NOTIFY_BEGIN_STREAMING	= 0x10000000,
	MFT_MESSAGE_NOTIFY_END_STREAMING	= 0x10000001,
	MFT_MESSAGE_NOTIFY_END_OF_STREAM	= 0x10000002,
	MFT_MESSAGE_NOTIFY_START_OF_STREAM	= 0x10000003,
	MFT_MESSAGE_COMMAND_MARKER	= 0x20000000
    } 	MFT_MESSAGE_TYPE;

typedef struct _MFT_INPUT_STREAM_INFO
    {
    LONGLONG hnsMaxLatency;
    DWORD dwFlags;
    DWORD cbSize;
    DWORD cbMaxLookahead;
    DWORD cbAlignment;
    } 	MFT_INPUT_STREAM_INFO;

typedef struct _MFT_OUTPUT_STREAM_INFO
    {
    DWORD dwFlags;
    DWORD cbSize;
    DWORD cbAlignment;
    } 	MFT_OUTPUT_STREAM_INFO;

typedef struct _MFT_OUTPUT_DATA_BUFFER
    {
    DWORD dwStreamID;
    IMFSample *pSample;
    DWORD dwStatus;
    IMFCollection *pEvents;
    } 	MFT_OUTPUT_DATA_BUFFER;

typedef struct _MFT_OUTPUT_DATA_BUFFER *PMFT_OUTPUT_DATA_BUFFER;

//
// redefine all the method names to have MFT at the beginning so they don't class with DMO methods.
//
#ifdef MFT_UNIQUE_METHOD_NAMES
#define GetStreamLimits         MFTGetStreamLimits
#define GetStreamCount          MFTGetStreamCount
#define GetStreamIDs            MFTGetStreamIDs
#define GetInputStreamInfo      MFTGetInputStreamInfo
#define GetOutputStreamInfo     MFTGetOutputStreamInfo
#define DeleteInputStream       MFTDeleteInputStream
#define AddInputStreams         MFTAddInputStreams
#define GetInputAvailableType   MFTGetInputAvailableType
#define GetOutputAvailableType  MFTGetOutputAvailableType
#define SetInputType            MFTSetInputType
#define SetOutputType           MFTSetOutputType
#define GetInputCurrentType     MFTGetInputCurrentType
#define GetOutputCurrentType    MFTGetOutputCurrentType
#define GetInputStatus          MFTGetInputStatus
#define GetOutputStatus         MFTGetOutputStatus
#define SetOutputBounds         MFTSetOutputBounds
#define ProcessEvent            MFTProcessEvent
#define ProcessMessage          MFTProcessMessage
#define ProcessInput            MFTProcessInput
#define ProcessOutput           MFTProcessOutput
#endif


extern RPC_IF_HANDLE __MIDL_itf_mftransform_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mftransform_0000_0000_v0_0_s_ifspec;

#ifndef __IMFTransform_INTERFACE_DEFINED__
#define __IMFTransform_INTERFACE_DEFINED__

/* interface IMFTransform */
/* [uuid][object] */ 


EXTERN_C const IID IID_IMFTransform;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bf94c121-5b05-4e6f-8000-ba598961414d")
    IMFTransform : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStreamLimits( 
            /* [out] */ __RPC__out DWORD *pdwInputMinimum,
            /* [out] */ __RPC__out DWORD *pdwInputMaximum,
            /* [out] */ __RPC__out DWORD *pdwOutputMinimum,
            /* [out] */ __RPC__out DWORD *pdwOutputMaximum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStreamCount( 
            /* [out] */ __RPC__out DWORD *pcInputStreams,
            /* [out] */ __RPC__out DWORD *pcOutputStreams) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStreamIDs( 
            DWORD dwInputIDArraySize,
            /* [size_is][out] */ __RPC__out_ecount_full(dwInputIDArraySize) DWORD *pdwInputIDs,
            DWORD dwOutputIDArraySize,
            /* [size_is][out] */ __RPC__out_ecount_full(dwOutputIDArraySize) DWORD *pdwOutputIDs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputStreamInfo( 
            DWORD dwInputStreamID,
            /* [out] */ __RPC__out MFT_INPUT_STREAM_INFO *pStreamInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOutputStreamInfo( 
            DWORD dwOutputStreamID,
            /* [out] */ __RPC__out MFT_OUTPUT_STREAM_INFO *pStreamInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttributes( 
            /* [out] */ __RPC__deref_out_opt IMFAttributes **pAttributes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputStreamAttributes( 
            DWORD dwInputStreamID,
            /* [out] */ __RPC__deref_out_opt IMFAttributes **pAttributes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOutputStreamAttributes( 
            DWORD dwOutputStreamID,
            /* [out] */ __RPC__deref_out_opt IMFAttributes **pAttributes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteInputStream( 
            DWORD dwStreamID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddInputStreams( 
            DWORD cStreams,
            /* [in] */ __RPC__in DWORD *adwStreamIDs) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputAvailableType( 
            DWORD dwInputStreamID,
            DWORD dwTypeIndex,
            /* [out] */ __RPC__deref_out_opt IMFMediaType **ppType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOutputAvailableType( 
            DWORD dwOutputStreamID,
            DWORD dwTypeIndex,
            /* [out] */ __RPC__deref_out_opt IMFMediaType **ppType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInputType( 
            DWORD dwInputStreamID,
            /* [in] */ __RPC__in_opt IMFMediaType *pType,
            DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOutputType( 
            DWORD dwOutputStreamID,
            /* [in] */ __RPC__in_opt IMFMediaType *pType,
            DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputCurrentType( 
            DWORD dwInputStreamID,
            /* [out] */ __RPC__deref_out_opt IMFMediaType **ppType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOutputCurrentType( 
            DWORD dwOutputStreamID,
            /* [out] */ __RPC__deref_out_opt IMFMediaType **ppType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputStatus( 
            DWORD dwInputStreamID,
            /* [out] */ __RPC__out DWORD *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOutputStatus( 
            /* [out] */ __RPC__out DWORD *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOutputBounds( 
            LONGLONG hnsLowerBound,
            LONGLONG hnsUpperBound) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessEvent( 
            DWORD dwInputStreamID,
            /* [in] */ __RPC__in_opt IMFMediaEvent *pEvent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessMessage( 
            MFT_MESSAGE_TYPE eMessage,
            ULONG_PTR ulParam) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE ProcessInput( 
            DWORD dwInputStreamID,
            IMFSample *pSample,
            DWORD dwFlags) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE ProcessOutput( 
            DWORD dwFlags,
            DWORD cOutputBufferCount,
            /* [size_is][out][in] */ MFT_OUTPUT_DATA_BUFFER *pOutputSamples,
            /* [out] */ DWORD *pdwStatus) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMFTransformVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IMFTransform * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IMFTransform * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IMFTransform * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetStreamLimits )( 
            __RPC__in IMFTransform * This,
            /* [out] */ __RPC__out DWORD *pdwInputMinimum,
            /* [out] */ __RPC__out DWORD *pdwInputMaximum,
            /* [out] */ __RPC__out DWORD *pdwOutputMinimum,
            /* [out] */ __RPC__out DWORD *pdwOutputMaximum);
        
        HRESULT ( STDMETHODCALLTYPE *GetStreamCount )( 
            __RPC__in IMFTransform * This,
            /* [out] */ __RPC__out DWORD *pcInputStreams,
            /* [out] */ __RPC__out DWORD *pcOutputStreams);
        
        HRESULT ( STDMETHODCALLTYPE *GetStreamIDs )( 
            __RPC__in IMFTransform * This,
            DWORD dwInputIDArraySize,
            /* [size_is][out] */ __RPC__out_ecount_full(dwInputIDArraySize) DWORD *pdwInputIDs,
            DWORD dwOutputIDArraySize,
            /* [size_is][out] */ __RPC__out_ecount_full(dwOutputIDArraySize) DWORD *pdwOutputIDs);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputStreamInfo )( 
            __RPC__in IMFTransform * This,
            DWORD dwInputStreamID,
            /* [out] */ __RPC__out MFT_INPUT_STREAM_INFO *pStreamInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetOutputStreamInfo )( 
            __RPC__in IMFTransform * This,
            DWORD dwOutputStreamID,
            /* [out] */ __RPC__out MFT_OUTPUT_STREAM_INFO *pStreamInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )( 
            __RPC__in IMFTransform * This,
            /* [out] */ __RPC__deref_out_opt IMFAttributes **pAttributes);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputStreamAttributes )( 
            __RPC__in IMFTransform * This,
            DWORD dwInputStreamID,
            /* [out] */ __RPC__deref_out_opt IMFAttributes **pAttributes);
        
        HRESULT ( STDMETHODCALLTYPE *GetOutputStreamAttributes )( 
            __RPC__in IMFTransform * This,
            DWORD dwOutputStreamID,
            /* [out] */ __RPC__deref_out_opt IMFAttributes **pAttributes);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteInputStream )( 
            __RPC__in IMFTransform * This,
            DWORD dwStreamID);
        
        HRESULT ( STDMETHODCALLTYPE *AddInputStreams )( 
            __RPC__in IMFTransform * This,
            DWORD cStreams,
            /* [in] */ __RPC__in DWORD *adwStreamIDs);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputAvailableType )( 
            __RPC__in IMFTransform * This,
            DWORD dwInputStreamID,
            DWORD dwTypeIndex,
            /* [out] */ __RPC__deref_out_opt IMFMediaType **ppType);
        
        HRESULT ( STDMETHODCALLTYPE *GetOutputAvailableType )( 
            __RPC__in IMFTransform * This,
            DWORD dwOutputStreamID,
            DWORD dwTypeIndex,
            /* [out] */ __RPC__deref_out_opt IMFMediaType **ppType);
        
        HRESULT ( STDMETHODCALLTYPE *SetInputType )( 
            __RPC__in IMFTransform * This,
            DWORD dwInputStreamID,
            /* [in] */ __RPC__in_opt IMFMediaType *pType,
            DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetOutputType )( 
            __RPC__in IMFTransform * This,
            DWORD dwOutputStreamID,
            /* [in] */ __RPC__in_opt IMFMediaType *pType,
            DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputCurrentType )( 
            __RPC__in IMFTransform * This,
            DWORD dwInputStreamID,
            /* [out] */ __RPC__deref_out_opt IMFMediaType **ppType);
        
        HRESULT ( STDMETHODCALLTYPE *GetOutputCurrentType )( 
            __RPC__in IMFTransform * This,
            DWORD dwOutputStreamID,
            /* [out] */ __RPC__deref_out_opt IMFMediaType **ppType);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputStatus )( 
            __RPC__in IMFTransform * This,
            DWORD dwInputStreamID,
            /* [out] */ __RPC__out DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *GetOutputStatus )( 
            __RPC__in IMFTransform * This,
            /* [out] */ __RPC__out DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *SetOutputBounds )( 
            __RPC__in IMFTransform * This,
            LONGLONG hnsLowerBound,
            LONGLONG hnsUpperBound);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessEvent )( 
            __RPC__in IMFTransform * This,
            DWORD dwInputStreamID,
            /* [in] */ __RPC__in_opt IMFMediaEvent *pEvent);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessMessage )( 
            __RPC__in IMFTransform * This,
            MFT_MESSAGE_TYPE eMessage,
            ULONG_PTR ulParam);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *ProcessInput )( 
            IMFTransform * This,
            DWORD dwInputStreamID,
            IMFSample *pSample,
            DWORD dwFlags);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *ProcessOutput )( 
            IMFTransform * This,
            DWORD dwFlags,
            DWORD cOutputBufferCount,
            /* [size_is][out][in] */ MFT_OUTPUT_DATA_BUFFER *pOutputSamples,
            /* [out] */ DWORD *pdwStatus);
        
        END_INTERFACE
    } IMFTransformVtbl;

    interface IMFTransform
    {
        CONST_VTBL struct IMFTransformVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMFTransform_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMFTransform_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMFTransform_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMFTransform_GetStreamLimits(This,pdwInputMinimum,pdwInputMaximum,pdwOutputMinimum,pdwOutputMaximum)	\
    ( (This)->lpVtbl -> GetStreamLimits(This,pdwInputMinimum,pdwInputMaximum,pdwOutputMinimum,pdwOutputMaximum) ) 

#define IMFTransform_GetStreamCount(This,pcInputStreams,pcOutputStreams)	\
    ( (This)->lpVtbl -> GetStreamCount(This,pcInputStreams,pcOutputStreams) ) 

#define IMFTransform_GetStreamIDs(This,dwInputIDArraySize,pdwInputIDs,dwOutputIDArraySize,pdwOutputIDs)	\
    ( (This)->lpVtbl -> GetStreamIDs(This,dwInputIDArraySize,pdwInputIDs,dwOutputIDArraySize,pdwOutputIDs) ) 

#define IMFTransform_GetInputStreamInfo(This,dwInputStreamID,pStreamInfo)	\
    ( (This)->lpVtbl -> GetInputStreamInfo(This,dwInputStreamID,pStreamInfo) ) 

#define IMFTransform_GetOutputStreamInfo(This,dwOutputStreamID,pStreamInfo)	\
    ( (This)->lpVtbl -> GetOutputStreamInfo(This,dwOutputStreamID,pStreamInfo) ) 

#define IMFTransform_GetAttributes(This,pAttributes)	\
    ( (This)->lpVtbl -> GetAttributes(This,pAttributes) ) 

#define IMFTransform_GetInputStreamAttributes(This,dwInputStreamID,pAttributes)	\
    ( (This)->lpVtbl -> GetInputStreamAttributes(This,dwInputStreamID,pAttributes) ) 

#define IMFTransform_GetOutputStreamAttributes(This,dwOutputStreamID,pAttributes)	\
    ( (This)->lpVtbl -> GetOutputStreamAttributes(This,dwOutputStreamID,pAttributes) ) 

#define IMFTransform_DeleteInputStream(This,dwStreamID)	\
    ( (This)->lpVtbl -> DeleteInputStream(This,dwStreamID) ) 

#define IMFTransform_AddInputStreams(This,cStreams,adwStreamIDs)	\
    ( (This)->lpVtbl -> AddInputStreams(This,cStreams,adwStreamIDs) ) 

#define IMFTransform_GetInputAvailableType(This,dwInputStreamID,dwTypeIndex,ppType)	\
    ( (This)->lpVtbl -> GetInputAvailableType(This,dwInputStreamID,dwTypeIndex,ppType) ) 

#define IMFTransform_GetOutputAvailableType(This,dwOutputStreamID,dwTypeIndex,ppType)	\
    ( (This)->lpVtbl -> GetOutputAvailableType(This,dwOutputStreamID,dwTypeIndex,ppType) ) 

#define IMFTransform_SetInputType(This,dwInputStreamID,pType,dwFlags)	\
    ( (This)->lpVtbl -> SetInputType(This,dwInputStreamID,pType,dwFlags) ) 

#define IMFTransform_SetOutputType(This,dwOutputStreamID,pType,dwFlags)	\
    ( (This)->lpVtbl -> SetOutputType(This,dwOutputStreamID,pType,dwFlags) ) 

#define IMFTransform_GetInputCurrentType(This,dwInputStreamID,ppType)	\
    ( (This)->lpVtbl -> GetInputCurrentType(This,dwInputStreamID,ppType) ) 

#define IMFTransform_GetOutputCurrentType(This,dwOutputStreamID,ppType)	\
    ( (This)->lpVtbl -> GetOutputCurrentType(This,dwOutputStreamID,ppType) ) 

#define IMFTransform_GetInputStatus(This,dwInputStreamID,pdwFlags)	\
    ( (This)->lpVtbl -> GetInputStatus(This,dwInputStreamID,pdwFlags) ) 

#define IMFTransform_GetOutputStatus(This,pdwFlags)	\
    ( (This)->lpVtbl -> GetOutputStatus(This,pdwFlags) ) 

#define IMFTransform_SetOutputBounds(This,hnsLowerBound,hnsUpperBound)	\
    ( (This)->lpVtbl -> SetOutputBounds(This,hnsLowerBound,hnsUpperBound) ) 

#define IMFTransform_ProcessEvent(This,dwInputStreamID,pEvent)	\
    ( (This)->lpVtbl -> ProcessEvent(This,dwInputStreamID,pEvent) ) 

#define IMFTransform_ProcessMessage(This,eMessage,ulParam)	\
    ( (This)->lpVtbl -> ProcessMessage(This,eMessage,ulParam) ) 

#define IMFTransform_ProcessInput(This,dwInputStreamID,pSample,dwFlags)	\
    ( (This)->lpVtbl -> ProcessInput(This,dwInputStreamID,pSample,dwFlags) ) 

#define IMFTransform_ProcessOutput(This,dwFlags,cOutputBufferCount,pOutputSamples,pdwStatus)	\
    ( (This)->lpVtbl -> ProcessOutput(This,dwFlags,cOutputBufferCount,pOutputSamples,pdwStatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMFTransform_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_mftransform_0000_0001 */
/* [local] */ 

#if (WINVER >= _WIN32_WINNT_WIN7) 
typedef struct _STREAM_MEDIUM
    {
    GUID gidMedium;
    UINT32 unMediumInstance;
    } 	STREAM_MEDIUM;

typedef struct _STREAM_MEDIUM *PSTREAM_MEDIUM;

#endif // (WINVER >= _WIN32_WINNT_WIN7) 
//
// Define the MFT methods back so we don't accidentally hose the IMediaObject interface.
//
#ifdef MFT_UNIQUE_METHOD_NAMES
#undef GetStreamLimits        
#undef GetStreamCount         
#undef GetStreamIDs           
#undef GetInputStreamInfo     
#undef GetOutputStreamInfo    
#undef DeleteInputStream      
#undef AddInputStreams        
#undef GetInputAvailableType  
#undef GetOutputAvailableType 
#undef SetInputType           
#undef SetOutputType          
#undef GetInputCurrentType    
#undef GetOutputCurrentType   
#undef GetInputStatus         
#undef GetOutputStatus        
#undef SetOutputBounds        
#undef ProcessMessage         
#undef ProcessInput           
#undef ProcessOutput          
#endif
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_CLSID = { { 0xc57a84c0, 0x1a80, 0x40a3, {0x97, 0xb5, 0x92, 0x72, 0xa4, 0x3, 0xc8, 0xae} }, 0x01 }; 
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_CATEGORY = { { 0xc57a84c0, 0x1a80, 0x40a3, {0x97, 0xb5, 0x92, 0x72, 0xa4, 0x3, 0xc8, 0xae} }, 0x02 }; 
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_EXATTRIBUTE_SUPPORTED = { { 0x456fe843, 0x3c87, 0x40c0, {0x94, 0x9d, 0x14, 0x9, 0xc9, 0x7d, 0xab, 0x2c} }, 0x01 }; 
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_MULTICHANNEL_CHANNEL_MASK  = { { 0x58bdaf8c, 0x3224, 0x4692, { 0x86, 0xd0, 0x44, 0xd6, 0x5c, 0x5b, 0xf8, 0x2b } }, 0x01 }; 
EXTERN_C const DECLSPEC_SELECTANY GUID MF_SA_D3D_AWARE = { 0xeaa35c29,  0x775e, 0x488e, { 0x9b, 0x61, 0xb3, 0x28, 0x3e, 0x49, 0x58, 0x3b } }; 
EXTERN_C const DECLSPEC_SELECTANY GUID MF_SA_REQUIRED_SAMPLE_COUNT = { 0x18802c61, 0x324b, 0x4952, { 0xab, 0xd0, 0x17, 0x6f, 0xf5, 0xc6, 0x96, 0xff } };
#if (WINVER >= _WIN32_WINNT_WIN7) 
EXTERN_C const DECLSPEC_SELECTANY GUID MF_TRANSFORM_ASYNC = { 0xf81a699a, 0x649a, 0x497d, { 0x8c, 0x73, 0x29, 0xf8, 0xfe, 0xd6, 0xad, 0x7a } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_TRANSFORM_ASYNC_UNLOCK = { 0xe5666d6b, 0x3422, 0x4eb6, { 0xa4, 0x21, 0xda, 0x7d, 0xb1, 0xf8, 0xe2, 0x7 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_TRANSFORM_FLAGS_Attribute = { 0x9359bb7e, 0x6275, 0x46c4, { 0xa0, 0x25, 0x1c, 0x1, 0xe4, 0x5f, 0x1a, 0x86 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MF_TRANSFORM_CATEGORY_Attribute = { 0xceabba49, 0x506d, 0x4757, { 0xa6, 0xff, 0x66, 0xc1, 0x84, 0x98, 0x7e, 0x4e } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_TRANSFORM_CLSID_Attribute = { 0x6821c42b, 0x65a4, 0x4e82, { 0x99, 0xbc, 0x9a, 0x88, 0x20, 0x5e, 0xcd, 0xc } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_INPUT_TYPES_Attributes = { 0x4276c9b1, 0x759d, 0x4bf3, { 0x9c, 0xd0, 0xd, 0x72, 0x3d, 0x13, 0x8f, 0x96 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_OUTPUT_TYPES_Attributes = { 0x8eae8cf3, 0xa44f, 0x4306, { 0xba, 0x5c, 0xbf, 0x5d, 0xda, 0x24, 0x28, 0x18 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_ENUM_HARDWARE_URL_Attribute = { 0x2fb866ac, 0xb078, 0x4942, { 0xab, 0x6c, 0x0, 0x3d, 0x5, 0xcd, 0xa6, 0x74 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_FRIENDLY_NAME_Attribute = { 0x314ffbae, 0x5b41, 0x4c95, { 0x9c, 0x19, 0x4e, 0x7d, 0x58, 0x6f, 0xac, 0xe3 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_CONNECTED_STREAM_ATTRIBUTE  = { 0x71eeb820, 0xa59f, 0x4de2, {0xbc, 0xec, 0x38, 0xdb, 0x1d, 0xd6, 0x11, 0xa4} };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_CONNECTED_TO_HW_STREAM = { 0x34e6e728, 0x6d6, 0x4491, { 0xa5, 0x53, 0x47, 0x95, 0x65, 0xd, 0xb9, 0x12 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_PREFERRED_OUTPUTTYPE_Attribute = { 0x7e700499, 0x396a, 0x49ee, { 0xb1, 0xb4, 0xf6, 0x28, 0x2, 0x1e, 0x8c, 0x9d } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_PROCESS_LOCAL_Attribute = { 0x543186e4, 0x4649, 0x4e65, { 0xb5, 0x88, 0x4a, 0xa3, 0x52, 0xaf, 0xf3, 0x79 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_PREFERRED_ENCODER_PROFILE = { 0x53004909, 0x1ef5, 0x46d7, { 0xa1, 0x8e, 0x5a, 0x75, 0xf8, 0xb5, 0x90, 0x5f } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_HW_TIMESTAMP_WITH_QPC_Attribute = { 0x8d030fb8, 0xcc43, 0x4258, { 0xa2, 0x2e, 0x92, 0x10, 0xbe, 0xf8, 0x9b, 0xe4 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_FIELDOFUSE_UNLOCK_Attribute = { 0x8ec2e9fd, 0x9148, 0x410d, { 0x83, 0x1e, 0x70, 0x24, 0x39, 0x46, 0x1a, 0x8e } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_CODEC_MERIT_Attribute = { 0x88a7cb15, 0x7b07, 0x4a34, { 0x91, 0x28, 0xe6, 0x4c, 0x67, 0x3, 0xc4, 0xd3 } };
EXTERN_C const DECLSPEC_SELECTANY GUID MFT_ENUM_TRANSCODE_ONLY_ATTRIBUTE = { 0x111ea8cd, 0xb62a, 0x4bdb, { 0x89, 0xf6, 0x67, 0xff, 0xcd, 0xc2, 0x45, 0x8b } };
STDAPI
MFCreateTransformActivate(
    __out IMFActivate** ppActivate
    );
#endif // (WINVER >= _WIN32_WINNT_WIN7) 


extern RPC_IF_HANDLE __MIDL_itf_mftransform_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mftransform_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



