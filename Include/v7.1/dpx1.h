

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* Compiler settings for dpx1.idl:
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
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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

#ifndef __dpx1_h__
#define __dpx1_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDpxJob_FWD_DEFINED__
#define __IDpxJob_FWD_DEFINED__
typedef interface IDpxJob IDpxJob;
#endif 	/* __IDpxJob_FWD_DEFINED__ */


#ifndef __IDpxContainer_FWD_DEFINED__
#define __IDpxContainer_FWD_DEFINED__
typedef interface IDpxContainer IDpxContainer;
#endif 	/* __IDpxContainer_FWD_DEFINED__ */


#ifndef __IDpxFile_FWD_DEFINED__
#define __IDpxFile_FWD_DEFINED__
typedef interface IDpxFile IDpxFile;
#endif 	/* __IDpxFile_FWD_DEFINED__ */


#ifndef __IDpxContainerDirectoryEntry_FWD_DEFINED__
#define __IDpxContainerDirectoryEntry_FWD_DEFINED__
typedef interface IDpxContainerDirectoryEntry IDpxContainerDirectoryEntry;
#endif 	/* __IDpxContainerDirectoryEntry_FWD_DEFINED__ */


#ifndef __IDpxDownloadProvider_FWD_DEFINED__
#define __IDpxDownloadProvider_FWD_DEFINED__
typedef interface IDpxDownloadProvider IDpxDownloadProvider;
#endif 	/* __IDpxDownloadProvider_FWD_DEFINED__ */


#ifndef __IDpxDownloadCallback_FWD_DEFINED__
#define __IDpxDownloadCallback_FWD_DEFINED__
typedef interface IDpxDownloadCallback IDpxDownloadCallback;
#endif 	/* __IDpxDownloadCallback_FWD_DEFINED__ */


#ifndef __IEnumDpxContainers_FWD_DEFINED__
#define __IEnumDpxContainers_FWD_DEFINED__
typedef interface IEnumDpxContainers IEnumDpxContainers;
#endif 	/* __IEnumDpxContainers_FWD_DEFINED__ */


#ifndef __IEnumDpxFiles_FWD_DEFINED__
#define __IEnumDpxFiles_FWD_DEFINED__
typedef interface IEnumDpxFiles IEnumDpxFiles;
#endif 	/* __IEnumDpxFiles_FWD_DEFINED__ */


#ifndef __IEnumDpxContainerDirectoryEntries_FWD_DEFINED__
#define __IEnumDpxContainerDirectoryEntries_FWD_DEFINED__
typedef interface IEnumDpxContainerDirectoryEntries IEnumDpxContainerDirectoryEntries;
#endif 	/* __IEnumDpxContainerDirectoryEntries_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_dpx1_0000_0000 */
/* [local] */ 

// Copyright (c) Microsoft Corporation.  All rights reserved.

#include <SpecStrings.h>
typedef unsigned int ALG_ID;










typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dpx1_0000_0000_0001
    {	DPX_RESUME_AND_DOWNLOAD	= 0,
	DPX_RESUME_UNTIL_DOWNLOAD	= 0x1,
	DPX_RESUME_AND_DOWNLOAD_FALLBACK	= 0x2
    } 	DPX_RESUME_TYPE;

#define DPX_MAX_HASH_SIZE 64
typedef /* [public][public][public][public][public][public][public] */ struct __MIDL___MIDL_itf_dpx1_0000_0000_0002
    {
    ALG_ID AlgorithmId;
    UINT HashSize;
    BYTE HashData[ 64 ];
    } 	DPX_HASH;

typedef /* [public][public][public][public][public] */ struct __MIDL___MIDL_itf_dpx1_0000_0000_0003
    {
    UINT64 Offset;
    UINT64 Length;
    } 	DPX_BYTE_RANGE;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_dpx1_0000_0000_0004
    {	DPX_PHASE_JOB_IDLE	= 0,
	DPX_PHASE_DOWNLOAD_INDEX	= 0x10,
	DPX_PHASE_INVENTORY	= 0x20,
	DPX_PHASE_DOWNLOAD_FILES	= 0x30,
	DPX_PHASE_EXPAND_FILES	= 0x40,
	DPX_PHASE_JOB_INPROGRESS	= 0x50,
	DPX_PHASE_JOB_COMPLETE	= 0x7f00,
	DPX_PHASE_JOB_CANCELLED	= 0xfffe,
	DPX_PHASE_JOB_FAILURE	= 0xffff
    } 	DPX_PROGRESS_PHASE;

typedef /* [public][public][public][public][public][public][public][public][public][public][public][public] */ struct __MIDL___MIDL_itf_dpx1_0000_0000_0005
    {
    UINT64 Completed;
    UINT64 Remaining;
    } 	DPX_PROGRESS_REMAIN;

typedef /* [public][public] */ struct __MIDL___MIDL_itf_dpx1_0000_0000_0006
    {
    DPX_PROGRESS_REMAIN Inventory;
    DPX_PROGRESS_REMAIN Download;
    DPX_PROGRESS_REMAIN Expansion;
    DPX_PROGRESS_REMAIN Files;
    DPX_PROGRESS_REMAIN Overall;
    DPX_PROGRESS_PHASE ePhase;
    } 	DPX_PROGRESS;



extern RPC_IF_HANDLE __MIDL_itf_dpx1_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dpx1_0000_0000_v0_0_s_ifspec;

#ifndef __IDpxJob_INTERFACE_DEFINED__
#define __IDpxJob_INTERFACE_DEFINED__

/* interface IDpxJob */
/* [nocode][unique][object][uuid] */ 


EXTERN_C const IID IID_IDpxJob;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ddc1b711-0e55-452f-838e-d1505b866e2b")
    IDpxJob : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTargetPath( 
            /* [out] */ __RPC__deref_out_opt LPWSTR *TargetPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddContainer( 
            /* [in] */ __RPC__in LPCWSTR ContainerPath,
            /* [out] */ __RPC__deref_out_opt IDpxContainer **ppContainer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumContainers( 
            /* [out] */ __RPC__deref_out_opt IEnumDpxContainers **ppEnumContainers) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDownloadProvider( 
            /* [unique][in] */ __RPC__in_opt IDpxDownloadProvider *pDownloadProvider) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDownloadProvider( 
            /* [out] */ __RPC__deref_out_opt IDpxDownloadProvider **ppDownloadProvider) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resume( 
            DPX_RESUME_TYPE eResumeType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Suspend( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgress( 
            /* [out] */ __RPC__out DPX_PROGRESS *pProgress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveJobState( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetUserValue( 
            /* [in] */ UINT64 UserValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUserValue( 
            /* [out] */ __RPC__out UINT64 *pUserValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetOptionValue( 
            /* [in] */ __RPC__in LPCWSTR OptionName,
            /* [unique][in] */ __RPC__in_opt LPCWSTR OptionValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOptionValue( 
            /* [in] */ __RPC__in LPCWSTR OptionName,
            /* [out] */ __RPC__deref_out_opt LPWSTR *pOptionValue) = 0;
        
        virtual /* [local] */ void STDMETHODCALLTYPE FreeMemory( 
            /* [in] */ void *Allocation) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDpxJobVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDpxJob * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDpxJob * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDpxJob * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTargetPath )( 
            __RPC__in IDpxJob * This,
            /* [out] */ __RPC__deref_out_opt LPWSTR *TargetPath);
        
        HRESULT ( STDMETHODCALLTYPE *AddContainer )( 
            __RPC__in IDpxJob * This,
            /* [in] */ __RPC__in LPCWSTR ContainerPath,
            /* [out] */ __RPC__deref_out_opt IDpxContainer **ppContainer);
        
        HRESULT ( STDMETHODCALLTYPE *EnumContainers )( 
            __RPC__in IDpxJob * This,
            /* [out] */ __RPC__deref_out_opt IEnumDpxContainers **ppEnumContainers);
        
        HRESULT ( STDMETHODCALLTYPE *SetDownloadProvider )( 
            __RPC__in IDpxJob * This,
            /* [unique][in] */ __RPC__in_opt IDpxDownloadProvider *pDownloadProvider);
        
        HRESULT ( STDMETHODCALLTYPE *GetDownloadProvider )( 
            __RPC__in IDpxJob * This,
            /* [out] */ __RPC__deref_out_opt IDpxDownloadProvider **ppDownloadProvider);
        
        HRESULT ( STDMETHODCALLTYPE *Resume )( 
            __RPC__in IDpxJob * This,
            DPX_RESUME_TYPE eResumeType);
        
        HRESULT ( STDMETHODCALLTYPE *Suspend )( 
            __RPC__in IDpxJob * This);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            __RPC__in IDpxJob * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgress )( 
            __RPC__in IDpxJob * This,
            /* [out] */ __RPC__out DPX_PROGRESS *pProgress);
        
        HRESULT ( STDMETHODCALLTYPE *SaveJobState )( 
            __RPC__in IDpxJob * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetUserValue )( 
            __RPC__in IDpxJob * This,
            /* [in] */ UINT64 UserValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetUserValue )( 
            __RPC__in IDpxJob * This,
            /* [out] */ __RPC__out UINT64 *pUserValue);
        
        HRESULT ( STDMETHODCALLTYPE *SetOptionValue )( 
            __RPC__in IDpxJob * This,
            /* [in] */ __RPC__in LPCWSTR OptionName,
            /* [unique][in] */ __RPC__in_opt LPCWSTR OptionValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetOptionValue )( 
            __RPC__in IDpxJob * This,
            /* [in] */ __RPC__in LPCWSTR OptionName,
            /* [out] */ __RPC__deref_out_opt LPWSTR *pOptionValue);
        
        /* [local] */ void ( STDMETHODCALLTYPE *FreeMemory )( 
            IDpxJob * This,
            /* [in] */ void *Allocation);
        
        END_INTERFACE
    } IDpxJobVtbl;

    interface IDpxJob
    {
        CONST_VTBL struct IDpxJobVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDpxJob_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDpxJob_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDpxJob_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDpxJob_GetTargetPath(This,TargetPath)	\
    ( (This)->lpVtbl -> GetTargetPath(This,TargetPath) ) 

#define IDpxJob_AddContainer(This,ContainerPath,ppContainer)	\
    ( (This)->lpVtbl -> AddContainer(This,ContainerPath,ppContainer) ) 

#define IDpxJob_EnumContainers(This,ppEnumContainers)	\
    ( (This)->lpVtbl -> EnumContainers(This,ppEnumContainers) ) 

#define IDpxJob_SetDownloadProvider(This,pDownloadProvider)	\
    ( (This)->lpVtbl -> SetDownloadProvider(This,pDownloadProvider) ) 

#define IDpxJob_GetDownloadProvider(This,ppDownloadProvider)	\
    ( (This)->lpVtbl -> GetDownloadProvider(This,ppDownloadProvider) ) 

#define IDpxJob_Resume(This,eResumeType)	\
    ( (This)->lpVtbl -> Resume(This,eResumeType) ) 

#define IDpxJob_Suspend(This)	\
    ( (This)->lpVtbl -> Suspend(This) ) 

#define IDpxJob_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#define IDpxJob_GetProgress(This,pProgress)	\
    ( (This)->lpVtbl -> GetProgress(This,pProgress) ) 

#define IDpxJob_SaveJobState(This)	\
    ( (This)->lpVtbl -> SaveJobState(This) ) 

#define IDpxJob_SetUserValue(This,UserValue)	\
    ( (This)->lpVtbl -> SetUserValue(This,UserValue) ) 

#define IDpxJob_GetUserValue(This,pUserValue)	\
    ( (This)->lpVtbl -> GetUserValue(This,pUserValue) ) 

#define IDpxJob_SetOptionValue(This,OptionName,OptionValue)	\
    ( (This)->lpVtbl -> SetOptionValue(This,OptionName,OptionValue) ) 

#define IDpxJob_GetOptionValue(This,OptionName,pOptionValue)	\
    ( (This)->lpVtbl -> GetOptionValue(This,OptionName,pOptionValue) ) 

#define IDpxJob_FreeMemory(This,Allocation)	\
    ( (This)->lpVtbl -> FreeMemory(This,Allocation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDpxJob_INTERFACE_DEFINED__ */


#ifndef __IDpxContainer_INTERFACE_DEFINED__
#define __IDpxContainer_INTERFACE_DEFINED__

/* interface IDpxContainer */
/* [nocode][unique][object][uuid] */ 


EXTERN_C const IID IID_IDpxContainer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ddc1b712-0e55-452f-838e-d1505b866e2b")
    IDpxContainer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetContainerPath( 
            /* [in] */ __RPC__in LPCWSTR ContainerPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContainerPath( 
            /* [out] */ __RPC__deref_out_opt LPWSTR *pContainerPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddFileToExtract( 
            /* [in] */ __RPC__in LPCWSTR SourceFileName,
            /* [unique][in] */ __RPC__in_opt LPCWSTR TargetFileName,
            /* [unique][in] */ __RPC__in_opt DPX_HASH *TargetFileHash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddFileToExtract2( 
            /* [in] */ __RPC__in LPCWSTR SourceFileName,
            /* [unique][in] */ __RPC__in_opt LPCWSTR TargetFileName,
            /* [out] */ __RPC__deref_out_opt IDpxFile **ppFile) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ExtractAllFiles( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumFilesToExtract( 
            /* [out] */ __RPC__deref_out_opt IEnumDpxFiles **ppEnumFiles) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetExpectedContainerIndexHash( 
            /* [in] */ __RPC__in DPX_HASH *pExpectedHash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExpectedContainerIndexHash( 
            /* [out] */ __RPC__deref_out_opt DPX_HASH **ppExpectedHash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProvideContainerIndex( 
            /* [in] */ UINT IndexSize,
            /* [size_is][in] */ __RPC__in_ecount_full(IndexSize) BYTE IndexData[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProvideContainerIndexByFile( 
            /* [in] */ __RPC__in LPCWSTR IndexFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumDirectoryEntries( 
            /* [out] */ __RPC__deref_out_opt IEnumDpxContainerDirectoryEntries **ppEnumEntries) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Remove( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetUserValue( 
            /* [in] */ UINT64 UserValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUserValue( 
            /* [out] */ __RPC__out UINT64 *pUserValue) = 0;
        
        virtual /* [local] */ void STDMETHODCALLTYPE FreeMemory( 
            /* [in] */ void *Allocation) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDpxContainerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDpxContainer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDpxContainer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDpxContainer * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetContainerPath )( 
            __RPC__in IDpxContainer * This,
            /* [in] */ __RPC__in LPCWSTR ContainerPath);
        
        HRESULT ( STDMETHODCALLTYPE *GetContainerPath )( 
            __RPC__in IDpxContainer * This,
            /* [out] */ __RPC__deref_out_opt LPWSTR *pContainerPath);
        
        HRESULT ( STDMETHODCALLTYPE *AddFileToExtract )( 
            __RPC__in IDpxContainer * This,
            /* [in] */ __RPC__in LPCWSTR SourceFileName,
            /* [unique][in] */ __RPC__in_opt LPCWSTR TargetFileName,
            /* [unique][in] */ __RPC__in_opt DPX_HASH *TargetFileHash);
        
        HRESULT ( STDMETHODCALLTYPE *AddFileToExtract2 )( 
            __RPC__in IDpxContainer * This,
            /* [in] */ __RPC__in LPCWSTR SourceFileName,
            /* [unique][in] */ __RPC__in_opt LPCWSTR TargetFileName,
            /* [out] */ __RPC__deref_out_opt IDpxFile **ppFile);
        
        HRESULT ( STDMETHODCALLTYPE *ExtractAllFiles )( 
            __RPC__in IDpxContainer * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnumFilesToExtract )( 
            __RPC__in IDpxContainer * This,
            /* [out] */ __RPC__deref_out_opt IEnumDpxFiles **ppEnumFiles);
        
        HRESULT ( STDMETHODCALLTYPE *SetExpectedContainerIndexHash )( 
            __RPC__in IDpxContainer * This,
            /* [in] */ __RPC__in DPX_HASH *pExpectedHash);
        
        HRESULT ( STDMETHODCALLTYPE *GetExpectedContainerIndexHash )( 
            __RPC__in IDpxContainer * This,
            /* [out] */ __RPC__deref_out_opt DPX_HASH **ppExpectedHash);
        
        HRESULT ( STDMETHODCALLTYPE *ProvideContainerIndex )( 
            __RPC__in IDpxContainer * This,
            /* [in] */ UINT IndexSize,
            /* [size_is][in] */ __RPC__in_ecount_full(IndexSize) BYTE IndexData[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *ProvideContainerIndexByFile )( 
            __RPC__in IDpxContainer * This,
            /* [in] */ __RPC__in LPCWSTR IndexFileName);
        
        HRESULT ( STDMETHODCALLTYPE *EnumDirectoryEntries )( 
            __RPC__in IDpxContainer * This,
            /* [out] */ __RPC__deref_out_opt IEnumDpxContainerDirectoryEntries **ppEnumEntries);
        
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in IDpxContainer * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetUserValue )( 
            __RPC__in IDpxContainer * This,
            /* [in] */ UINT64 UserValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetUserValue )( 
            __RPC__in IDpxContainer * This,
            /* [out] */ __RPC__out UINT64 *pUserValue);
        
        /* [local] */ void ( STDMETHODCALLTYPE *FreeMemory )( 
            IDpxContainer * This,
            /* [in] */ void *Allocation);
        
        END_INTERFACE
    } IDpxContainerVtbl;

    interface IDpxContainer
    {
        CONST_VTBL struct IDpxContainerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDpxContainer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDpxContainer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDpxContainer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDpxContainer_SetContainerPath(This,ContainerPath)	\
    ( (This)->lpVtbl -> SetContainerPath(This,ContainerPath) ) 

#define IDpxContainer_GetContainerPath(This,pContainerPath)	\
    ( (This)->lpVtbl -> GetContainerPath(This,pContainerPath) ) 

#define IDpxContainer_AddFileToExtract(This,SourceFileName,TargetFileName,TargetFileHash)	\
    ( (This)->lpVtbl -> AddFileToExtract(This,SourceFileName,TargetFileName,TargetFileHash) ) 

#define IDpxContainer_AddFileToExtract2(This,SourceFileName,TargetFileName,ppFile)	\
    ( (This)->lpVtbl -> AddFileToExtract2(This,SourceFileName,TargetFileName,ppFile) ) 

#define IDpxContainer_ExtractAllFiles(This)	\
    ( (This)->lpVtbl -> ExtractAllFiles(This) ) 

#define IDpxContainer_EnumFilesToExtract(This,ppEnumFiles)	\
    ( (This)->lpVtbl -> EnumFilesToExtract(This,ppEnumFiles) ) 

#define IDpxContainer_SetExpectedContainerIndexHash(This,pExpectedHash)	\
    ( (This)->lpVtbl -> SetExpectedContainerIndexHash(This,pExpectedHash) ) 

#define IDpxContainer_GetExpectedContainerIndexHash(This,ppExpectedHash)	\
    ( (This)->lpVtbl -> GetExpectedContainerIndexHash(This,ppExpectedHash) ) 

#define IDpxContainer_ProvideContainerIndex(This,IndexSize,IndexData)	\
    ( (This)->lpVtbl -> ProvideContainerIndex(This,IndexSize,IndexData) ) 

#define IDpxContainer_ProvideContainerIndexByFile(This,IndexFileName)	\
    ( (This)->lpVtbl -> ProvideContainerIndexByFile(This,IndexFileName) ) 

#define IDpxContainer_EnumDirectoryEntries(This,ppEnumEntries)	\
    ( (This)->lpVtbl -> EnumDirectoryEntries(This,ppEnumEntries) ) 

#define IDpxContainer_Remove(This)	\
    ( (This)->lpVtbl -> Remove(This) ) 

#define IDpxContainer_SetUserValue(This,UserValue)	\
    ( (This)->lpVtbl -> SetUserValue(This,UserValue) ) 

#define IDpxContainer_GetUserValue(This,pUserValue)	\
    ( (This)->lpVtbl -> GetUserValue(This,pUserValue) ) 

#define IDpxContainer_FreeMemory(This,Allocation)	\
    ( (This)->lpVtbl -> FreeMemory(This,Allocation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDpxContainer_INTERFACE_DEFINED__ */


#ifndef __IDpxFile_INTERFACE_DEFINED__
#define __IDpxFile_INTERFACE_DEFINED__

/* interface IDpxFile */
/* [nocode][unique][object][uuid] */ 


EXTERN_C const IID IID_IDpxFile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ddc1b713-0e55-452f-838e-d1505b866e2b")
    IDpxFile : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSourceFileName( 
            /* [out] */ __RPC__deref_out_opt LPWSTR *pSourceFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTargetFileName( 
            /* [out] */ __RPC__deref_out_opt LPWSTR *pTargetFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetExpectedHash( 
            /* [in] */ __RPC__in DPX_HASH *pExpectedHash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetExpectedHash( 
            /* [out] */ __RPC__deref_out_opt DPX_HASH **ppExpectedHash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Remove( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetUserValue( 
            /* [in] */ UINT64 UserValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUserValue( 
            /* [out] */ __RPC__out UINT64 *pUserValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [out] */ __RPC__out HRESULT *pStatus) = 0;
        
        virtual /* [local] */ void STDMETHODCALLTYPE FreeMemory( 
            /* [in] */ void *Allocation) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDpxFileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDpxFile * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDpxFile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDpxFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSourceFileName )( 
            __RPC__in IDpxFile * This,
            /* [out] */ __RPC__deref_out_opt LPWSTR *pSourceFileName);
        
        HRESULT ( STDMETHODCALLTYPE *GetTargetFileName )( 
            __RPC__in IDpxFile * This,
            /* [out] */ __RPC__deref_out_opt LPWSTR *pTargetFileName);
        
        HRESULT ( STDMETHODCALLTYPE *SetExpectedHash )( 
            __RPC__in IDpxFile * This,
            /* [in] */ __RPC__in DPX_HASH *pExpectedHash);
        
        HRESULT ( STDMETHODCALLTYPE *GetExpectedHash )( 
            __RPC__in IDpxFile * This,
            /* [out] */ __RPC__deref_out_opt DPX_HASH **ppExpectedHash);
        
        HRESULT ( STDMETHODCALLTYPE *Remove )( 
            __RPC__in IDpxFile * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetUserValue )( 
            __RPC__in IDpxFile * This,
            /* [in] */ UINT64 UserValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetUserValue )( 
            __RPC__in IDpxFile * This,
            /* [out] */ __RPC__out UINT64 *pUserValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            __RPC__in IDpxFile * This,
            /* [out] */ __RPC__out HRESULT *pStatus);
        
        /* [local] */ void ( STDMETHODCALLTYPE *FreeMemory )( 
            IDpxFile * This,
            /* [in] */ void *Allocation);
        
        END_INTERFACE
    } IDpxFileVtbl;

    interface IDpxFile
    {
        CONST_VTBL struct IDpxFileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDpxFile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDpxFile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDpxFile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDpxFile_GetSourceFileName(This,pSourceFileName)	\
    ( (This)->lpVtbl -> GetSourceFileName(This,pSourceFileName) ) 

#define IDpxFile_GetTargetFileName(This,pTargetFileName)	\
    ( (This)->lpVtbl -> GetTargetFileName(This,pTargetFileName) ) 

#define IDpxFile_SetExpectedHash(This,pExpectedHash)	\
    ( (This)->lpVtbl -> SetExpectedHash(This,pExpectedHash) ) 

#define IDpxFile_GetExpectedHash(This,ppExpectedHash)	\
    ( (This)->lpVtbl -> GetExpectedHash(This,ppExpectedHash) ) 

#define IDpxFile_Remove(This)	\
    ( (This)->lpVtbl -> Remove(This) ) 

#define IDpxFile_SetUserValue(This,UserValue)	\
    ( (This)->lpVtbl -> SetUserValue(This,UserValue) ) 

#define IDpxFile_GetUserValue(This,pUserValue)	\
    ( (This)->lpVtbl -> GetUserValue(This,pUserValue) ) 

#define IDpxFile_GetStatus(This,pStatus)	\
    ( (This)->lpVtbl -> GetStatus(This,pStatus) ) 

#define IDpxFile_FreeMemory(This,Allocation)	\
    ( (This)->lpVtbl -> FreeMemory(This,Allocation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDpxFile_INTERFACE_DEFINED__ */


#ifndef __IDpxContainerDirectoryEntry_INTERFACE_DEFINED__
#define __IDpxContainerDirectoryEntry_INTERFACE_DEFINED__

/* interface IDpxContainerDirectoryEntry */
/* [nocode][unique][object][uuid] */ 


EXTERN_C const IID IID_IDpxContainerDirectoryEntry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ddc1b715-0e55-452f-838e-d1505b866e2b")
    IDpxContainerDirectoryEntry : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [out] */ __RPC__deref_out_opt LPWSTR *pDirEntryName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHash( 
            /* [out] */ __RPC__deref_out_opt DPX_HASH **pDirEntryHash) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSize( 
            /* [out] */ __RPC__out UINT64 *pDirEntrySize) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTime( 
            /* [out] */ __RPC__out FILETIME *pDirEntryTime) = 0;
        
        virtual /* [local] */ void STDMETHODCALLTYPE FreeMemory( 
            /* [in] */ void *Allocation) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDpxContainerDirectoryEntryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDpxContainerDirectoryEntry * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDpxContainerDirectoryEntry * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDpxContainerDirectoryEntry * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IDpxContainerDirectoryEntry * This,
            /* [out] */ __RPC__deref_out_opt LPWSTR *pDirEntryName);
        
        HRESULT ( STDMETHODCALLTYPE *GetHash )( 
            __RPC__in IDpxContainerDirectoryEntry * This,
            /* [out] */ __RPC__deref_out_opt DPX_HASH **pDirEntryHash);
        
        HRESULT ( STDMETHODCALLTYPE *GetSize )( 
            __RPC__in IDpxContainerDirectoryEntry * This,
            /* [out] */ __RPC__out UINT64 *pDirEntrySize);
        
        HRESULT ( STDMETHODCALLTYPE *GetTime )( 
            __RPC__in IDpxContainerDirectoryEntry * This,
            /* [out] */ __RPC__out FILETIME *pDirEntryTime);
        
        /* [local] */ void ( STDMETHODCALLTYPE *FreeMemory )( 
            IDpxContainerDirectoryEntry * This,
            /* [in] */ void *Allocation);
        
        END_INTERFACE
    } IDpxContainerDirectoryEntryVtbl;

    interface IDpxContainerDirectoryEntry
    {
        CONST_VTBL struct IDpxContainerDirectoryEntryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDpxContainerDirectoryEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDpxContainerDirectoryEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDpxContainerDirectoryEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDpxContainerDirectoryEntry_GetName(This,pDirEntryName)	\
    ( (This)->lpVtbl -> GetName(This,pDirEntryName) ) 

#define IDpxContainerDirectoryEntry_GetHash(This,pDirEntryHash)	\
    ( (This)->lpVtbl -> GetHash(This,pDirEntryHash) ) 

#define IDpxContainerDirectoryEntry_GetSize(This,pDirEntrySize)	\
    ( (This)->lpVtbl -> GetSize(This,pDirEntrySize) ) 

#define IDpxContainerDirectoryEntry_GetTime(This,pDirEntryTime)	\
    ( (This)->lpVtbl -> GetTime(This,pDirEntryTime) ) 

#define IDpxContainerDirectoryEntry_FreeMemory(This,Allocation)	\
    ( (This)->lpVtbl -> FreeMemory(This,Allocation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDpxContainerDirectoryEntry_INTERFACE_DEFINED__ */


#ifndef __IDpxDownloadProvider_INTERFACE_DEFINED__
#define __IDpxDownloadProvider_INTERFACE_DEFINED__

/* interface IDpxDownloadProvider */
/* [nocode][unique][object][uuid] */ 


EXTERN_C const IID IID_IDpxDownloadProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ddc1b716-0e55-452f-838e-d1505b866e2b")
    IDpxDownloadProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetProvideDataCallback( 
            /* [in] */ __RPC__in_opt IDpxDownloadCallback *pProvideData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProvideDataCallback( 
            /* [out] */ __RPC__deref_out_opt IDpxDownloadCallback **ppProvideData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddContainer( 
            /* [in] */ __RPC__in LPCWSTR ContainerFilePath,
            /* [in] */ UINT64 ContainerId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddRanges( 
            /* [in] */ UINT64 ContainerId,
            /* [in] */ UINT RangeCount,
            /* [size_is][in] */ __RPC__in_ecount_full(RangeCount) DPX_BYTE_RANGE RangeList[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContainers( 
            /* [out] */ __RPC__out UINT *ContainerCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*ContainerCount) UINT64 **ppContainerIdArray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetContainerPath( 
            /* [in] */ UINT64 ContainerId,
            /* [out] */ __RPC__deref_out_opt LPWSTR *ContainerPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRanges( 
            /* [in] */ UINT64 ContainerId,
            /* [in] */ BOOL IncludeCompletedRanges,
            /* [out] */ __RPC__out UINT *RangeCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*RangeCount) DPX_BYTE_RANGE **ppRangeArray) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Resume( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Suspend( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WaitForCompletion( 
            /* [in] */ DWORD TimeoutMilliseconds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProgress( 
            /* [out] */ __RPC__out DPX_PROGRESS_REMAIN *pDownloadProgress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ClearRequest( void) = 0;
        
        virtual /* [local] */ void STDMETHODCALLTYPE FreeMemory( 
            /* [in] */ void *Allocation) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDpxDownloadProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDpxDownloadProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDpxDownloadProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDpxDownloadProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetProvideDataCallback )( 
            __RPC__in IDpxDownloadProvider * This,
            /* [in] */ __RPC__in_opt IDpxDownloadCallback *pProvideData);
        
        HRESULT ( STDMETHODCALLTYPE *GetProvideDataCallback )( 
            __RPC__in IDpxDownloadProvider * This,
            /* [out] */ __RPC__deref_out_opt IDpxDownloadCallback **ppProvideData);
        
        HRESULT ( STDMETHODCALLTYPE *AddContainer )( 
            __RPC__in IDpxDownloadProvider * This,
            /* [in] */ __RPC__in LPCWSTR ContainerFilePath,
            /* [in] */ UINT64 ContainerId);
        
        HRESULT ( STDMETHODCALLTYPE *AddRanges )( 
            __RPC__in IDpxDownloadProvider * This,
            /* [in] */ UINT64 ContainerId,
            /* [in] */ UINT RangeCount,
            /* [size_is][in] */ __RPC__in_ecount_full(RangeCount) DPX_BYTE_RANGE RangeList[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *GetContainers )( 
            __RPC__in IDpxDownloadProvider * This,
            /* [out] */ __RPC__out UINT *ContainerCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*ContainerCount) UINT64 **ppContainerIdArray);
        
        HRESULT ( STDMETHODCALLTYPE *GetContainerPath )( 
            __RPC__in IDpxDownloadProvider * This,
            /* [in] */ UINT64 ContainerId,
            /* [out] */ __RPC__deref_out_opt LPWSTR *ContainerPath);
        
        HRESULT ( STDMETHODCALLTYPE *GetRanges )( 
            __RPC__in IDpxDownloadProvider * This,
            /* [in] */ UINT64 ContainerId,
            /* [in] */ BOOL IncludeCompletedRanges,
            /* [out] */ __RPC__out UINT *RangeCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*RangeCount) DPX_BYTE_RANGE **ppRangeArray);
        
        HRESULT ( STDMETHODCALLTYPE *Resume )( 
            __RPC__in IDpxDownloadProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *Suspend )( 
            __RPC__in IDpxDownloadProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            __RPC__in IDpxDownloadProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *WaitForCompletion )( 
            __RPC__in IDpxDownloadProvider * This,
            /* [in] */ DWORD TimeoutMilliseconds);
        
        HRESULT ( STDMETHODCALLTYPE *GetProgress )( 
            __RPC__in IDpxDownloadProvider * This,
            /* [out] */ __RPC__out DPX_PROGRESS_REMAIN *pDownloadProgress);
        
        HRESULT ( STDMETHODCALLTYPE *ClearRequest )( 
            __RPC__in IDpxDownloadProvider * This);
        
        /* [local] */ void ( STDMETHODCALLTYPE *FreeMemory )( 
            IDpxDownloadProvider * This,
            /* [in] */ void *Allocation);
        
        END_INTERFACE
    } IDpxDownloadProviderVtbl;

    interface IDpxDownloadProvider
    {
        CONST_VTBL struct IDpxDownloadProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDpxDownloadProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDpxDownloadProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDpxDownloadProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDpxDownloadProvider_SetProvideDataCallback(This,pProvideData)	\
    ( (This)->lpVtbl -> SetProvideDataCallback(This,pProvideData) ) 

#define IDpxDownloadProvider_GetProvideDataCallback(This,ppProvideData)	\
    ( (This)->lpVtbl -> GetProvideDataCallback(This,ppProvideData) ) 

#define IDpxDownloadProvider_AddContainer(This,ContainerFilePath,ContainerId)	\
    ( (This)->lpVtbl -> AddContainer(This,ContainerFilePath,ContainerId) ) 

#define IDpxDownloadProvider_AddRanges(This,ContainerId,RangeCount,RangeList)	\
    ( (This)->lpVtbl -> AddRanges(This,ContainerId,RangeCount,RangeList) ) 

#define IDpxDownloadProvider_GetContainers(This,ContainerCount,ppContainerIdArray)	\
    ( (This)->lpVtbl -> GetContainers(This,ContainerCount,ppContainerIdArray) ) 

#define IDpxDownloadProvider_GetContainerPath(This,ContainerId,ContainerPath)	\
    ( (This)->lpVtbl -> GetContainerPath(This,ContainerId,ContainerPath) ) 

#define IDpxDownloadProvider_GetRanges(This,ContainerId,IncludeCompletedRanges,RangeCount,ppRangeArray)	\
    ( (This)->lpVtbl -> GetRanges(This,ContainerId,IncludeCompletedRanges,RangeCount,ppRangeArray) ) 

#define IDpxDownloadProvider_Resume(This)	\
    ( (This)->lpVtbl -> Resume(This) ) 

#define IDpxDownloadProvider_Suspend(This)	\
    ( (This)->lpVtbl -> Suspend(This) ) 

#define IDpxDownloadProvider_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#define IDpxDownloadProvider_WaitForCompletion(This,TimeoutMilliseconds)	\
    ( (This)->lpVtbl -> WaitForCompletion(This,TimeoutMilliseconds) ) 

#define IDpxDownloadProvider_GetProgress(This,pDownloadProgress)	\
    ( (This)->lpVtbl -> GetProgress(This,pDownloadProgress) ) 

#define IDpxDownloadProvider_ClearRequest(This)	\
    ( (This)->lpVtbl -> ClearRequest(This) ) 

#define IDpxDownloadProvider_FreeMemory(This,Allocation)	\
    ( (This)->lpVtbl -> FreeMemory(This,Allocation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDpxDownloadProvider_INTERFACE_DEFINED__ */


#ifndef __IDpxDownloadCallback_INTERFACE_DEFINED__
#define __IDpxDownloadCallback_INTERFACE_DEFINED__

/* interface IDpxDownloadCallback */
/* [nocode][unique][object][uuid] */ 


EXTERN_C const IID IID_IDpxDownloadCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ddc1b717-0e55-452f-838e-d1505b866e2b")
    IDpxDownloadCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ProvideRequestedData( 
            /* [in] */ UINT64 ContainerId,
            /* [in] */ UINT RangeCount,
            /* [size_is][in] */ __RPC__in_ecount_full(RangeCount) DPX_BYTE_RANGE RangeList[  ],
            /* [size_is][in] */ __RPC__in_ecount_full(RangeCount) const BYTE *RangeData[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProvideRequestedDataByFile( 
            /* [in] */ UINT64 ContainerId,
            /* [in] */ __RPC__in LPCWSTR ResponseFilePath,
            /* [in] */ UINT RangeCount,
            /* [size_is][in] */ __RPC__in_ecount_full(RangeCount) DPX_BYTE_RANGE RangeArray[  ],
            /* [size_is][in] */ __RPC__in_ecount_full(RangeCount) UINT64 OffsetInResponseFile[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProvideRequestedDataByPackedRangeFile( 
            /* [in] */ UINT64 ContainerId,
            /* [in] */ __RPC__in LPCWSTR ResponseFilePath) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDpxDownloadCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDpxDownloadCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDpxDownloadCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDpxDownloadCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *ProvideRequestedData )( 
            __RPC__in IDpxDownloadCallback * This,
            /* [in] */ UINT64 ContainerId,
            /* [in] */ UINT RangeCount,
            /* [size_is][in] */ __RPC__in_ecount_full(RangeCount) DPX_BYTE_RANGE RangeList[  ],
            /* [size_is][in] */ __RPC__in_ecount_full(RangeCount) const BYTE *RangeData[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *ProvideRequestedDataByFile )( 
            __RPC__in IDpxDownloadCallback * This,
            /* [in] */ UINT64 ContainerId,
            /* [in] */ __RPC__in LPCWSTR ResponseFilePath,
            /* [in] */ UINT RangeCount,
            /* [size_is][in] */ __RPC__in_ecount_full(RangeCount) DPX_BYTE_RANGE RangeArray[  ],
            /* [size_is][in] */ __RPC__in_ecount_full(RangeCount) UINT64 OffsetInResponseFile[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *ProvideRequestedDataByPackedRangeFile )( 
            __RPC__in IDpxDownloadCallback * This,
            /* [in] */ UINT64 ContainerId,
            /* [in] */ __RPC__in LPCWSTR ResponseFilePath);
        
        END_INTERFACE
    } IDpxDownloadCallbackVtbl;

    interface IDpxDownloadCallback
    {
        CONST_VTBL struct IDpxDownloadCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDpxDownloadCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDpxDownloadCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDpxDownloadCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDpxDownloadCallback_ProvideRequestedData(This,ContainerId,RangeCount,RangeList,RangeData)	\
    ( (This)->lpVtbl -> ProvideRequestedData(This,ContainerId,RangeCount,RangeList,RangeData) ) 

#define IDpxDownloadCallback_ProvideRequestedDataByFile(This,ContainerId,ResponseFilePath,RangeCount,RangeArray,OffsetInResponseFile)	\
    ( (This)->lpVtbl -> ProvideRequestedDataByFile(This,ContainerId,ResponseFilePath,RangeCount,RangeArray,OffsetInResponseFile) ) 

#define IDpxDownloadCallback_ProvideRequestedDataByPackedRangeFile(This,ContainerId,ResponseFilePath)	\
    ( (This)->lpVtbl -> ProvideRequestedDataByPackedRangeFile(This,ContainerId,ResponseFilePath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDpxDownloadCallback_INTERFACE_DEFINED__ */


#ifndef __IEnumDpxContainers_INTERFACE_DEFINED__
#define __IEnumDpxContainers_INTERFACE_DEFINED__

/* interface IEnumDpxContainers */
/* [nocode][unique][object][uuid] */ 


EXTERN_C const IID IID_IEnumDpxContainers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ddc1b722-0e55-452f-838e-d1505b866e2b")
    IEnumDpxContainers : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ UINT ItemCount,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(ItemCount, *pFetchedCount) IDpxContainer **ppContainers,
            /* [out] */ __RPC__out UINT *pFetchedCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ UINT ItemCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumDpxContainers **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ __RPC__out UINT *pItemCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumDpxContainersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumDpxContainers * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumDpxContainers * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumDpxContainers * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            __RPC__in IEnumDpxContainers * This,
            /* [in] */ UINT ItemCount,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(ItemCount, *pFetchedCount) IDpxContainer **ppContainers,
            /* [out] */ __RPC__out UINT *pFetchedCount);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumDpxContainers * This,
            /* [in] */ UINT ItemCount);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumDpxContainers * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumDpxContainers * This,
            /* [out] */ __RPC__deref_out_opt IEnumDpxContainers **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            __RPC__in IEnumDpxContainers * This,
            /* [out] */ __RPC__out UINT *pItemCount);
        
        END_INTERFACE
    } IEnumDpxContainersVtbl;

    interface IEnumDpxContainers
    {
        CONST_VTBL struct IEnumDpxContainersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDpxContainers_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumDpxContainers_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumDpxContainers_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumDpxContainers_Next(This,ItemCount,ppContainers,pFetchedCount)	\
    ( (This)->lpVtbl -> Next(This,ItemCount,ppContainers,pFetchedCount) ) 

#define IEnumDpxContainers_Skip(This,ItemCount)	\
    ( (This)->lpVtbl -> Skip(This,ItemCount) ) 

#define IEnumDpxContainers_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumDpxContainers_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#define IEnumDpxContainers_GetCount(This,pItemCount)	\
    ( (This)->lpVtbl -> GetCount(This,pItemCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumDpxContainers_INTERFACE_DEFINED__ */


#ifndef __IEnumDpxFiles_INTERFACE_DEFINED__
#define __IEnumDpxFiles_INTERFACE_DEFINED__

/* interface IEnumDpxFiles */
/* [nocode][unique][object][uuid] */ 


EXTERN_C const IID IID_IEnumDpxFiles;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ddc1b723-0e55-452f-838e-d1505b866e2b")
    IEnumDpxFiles : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ UINT ItemCount,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(ItemCount, *pFetchedCount) IDpxFile **ppFiles,
            /* [out] */ __RPC__out UINT *pFetchedCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ UINT ItemCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumDpxFiles **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ __RPC__out UINT *pItemCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumDpxFilesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumDpxFiles * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumDpxFiles * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumDpxFiles * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            __RPC__in IEnumDpxFiles * This,
            /* [in] */ UINT ItemCount,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(ItemCount, *pFetchedCount) IDpxFile **ppFiles,
            /* [out] */ __RPC__out UINT *pFetchedCount);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumDpxFiles * This,
            /* [in] */ UINT ItemCount);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumDpxFiles * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumDpxFiles * This,
            /* [out] */ __RPC__deref_out_opt IEnumDpxFiles **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            __RPC__in IEnumDpxFiles * This,
            /* [out] */ __RPC__out UINT *pItemCount);
        
        END_INTERFACE
    } IEnumDpxFilesVtbl;

    interface IEnumDpxFiles
    {
        CONST_VTBL struct IEnumDpxFilesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDpxFiles_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumDpxFiles_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumDpxFiles_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumDpxFiles_Next(This,ItemCount,ppFiles,pFetchedCount)	\
    ( (This)->lpVtbl -> Next(This,ItemCount,ppFiles,pFetchedCount) ) 

#define IEnumDpxFiles_Skip(This,ItemCount)	\
    ( (This)->lpVtbl -> Skip(This,ItemCount) ) 

#define IEnumDpxFiles_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumDpxFiles_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#define IEnumDpxFiles_GetCount(This,pItemCount)	\
    ( (This)->lpVtbl -> GetCount(This,pItemCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumDpxFiles_INTERFACE_DEFINED__ */


#ifndef __IEnumDpxContainerDirectoryEntries_INTERFACE_DEFINED__
#define __IEnumDpxContainerDirectoryEntries_INTERFACE_DEFINED__

/* interface IEnumDpxContainerDirectoryEntries */
/* [nocode][unique][object][uuid] */ 


EXTERN_C const IID IID_IEnumDpxContainerDirectoryEntries;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ddc1b725-0e55-452f-838e-d1505b866e2b")
    IEnumDpxContainerDirectoryEntries : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ UINT ItemCount,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(ItemCount, *pFetchedCount) IDpxContainerDirectoryEntry **ppDirectoryEntries,
            /* [out] */ __RPC__out UINT *pFetchedCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ UINT ItemCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumDpxContainerDirectoryEntries **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [out] */ __RPC__out UINT *pItemCount) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumDpxContainerDirectoryEntriesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumDpxContainerDirectoryEntries * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumDpxContainerDirectoryEntries * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumDpxContainerDirectoryEntries * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            __RPC__in IEnumDpxContainerDirectoryEntries * This,
            /* [in] */ UINT ItemCount,
            /* [length_is][size_is][out] */ __RPC__out_ecount_part(ItemCount, *pFetchedCount) IDpxContainerDirectoryEntry **ppDirectoryEntries,
            /* [out] */ __RPC__out UINT *pFetchedCount);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumDpxContainerDirectoryEntries * This,
            /* [in] */ UINT ItemCount);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumDpxContainerDirectoryEntries * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumDpxContainerDirectoryEntries * This,
            /* [out] */ __RPC__deref_out_opt IEnumDpxContainerDirectoryEntries **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            __RPC__in IEnumDpxContainerDirectoryEntries * This,
            /* [out] */ __RPC__out UINT *pItemCount);
        
        END_INTERFACE
    } IEnumDpxContainerDirectoryEntriesVtbl;

    interface IEnumDpxContainerDirectoryEntries
    {
        CONST_VTBL struct IEnumDpxContainerDirectoryEntriesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumDpxContainerDirectoryEntries_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumDpxContainerDirectoryEntries_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumDpxContainerDirectoryEntries_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumDpxContainerDirectoryEntries_Next(This,ItemCount,ppDirectoryEntries,pFetchedCount)	\
    ( (This)->lpVtbl -> Next(This,ItemCount,ppDirectoryEntries,pFetchedCount) ) 

#define IEnumDpxContainerDirectoryEntries_Skip(This,ItemCount)	\
    ( (This)->lpVtbl -> Skip(This,ItemCount) ) 

#define IEnumDpxContainerDirectoryEntries_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumDpxContainerDirectoryEntries_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#define IEnumDpxContainerDirectoryEntries_GetCount(This,pItemCount)	\
    ( (This)->lpVtbl -> GetCount(This,pItemCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumDpxContainerDirectoryEntries_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif



