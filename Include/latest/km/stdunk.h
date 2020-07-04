/*****************************************************************************
 * stdunk.h - standard IUnknown implementaton definitions
 *****************************************************************************
 * Copyright (c) Microsoft Corporation. All rights reserved.
 */

#ifndef _STDUNK_H_
#define _STDUNK_H_

#include "punknown.h"

// VSTS 14847240: Locally suppress individual -Wv:17 compiler warnings.
// For more information, visit https://osgwiki.com/wiki/Windows_C%2B%2B_Toolset_Status.
#pragma warning(push)
#pragma warning(disable:4595) // non-member operator new or delete functions may not be declared inline




#if (NTDDI_VERSION >= NTDDI_WIN2K)
/*****************************************************************************
 * Interfaces
 */

/*****************************************************************************
 * INonDelegatingUnknown
 *****************************************************************************
 * Non-delegating unknown interface.
 */
DECLARE_INTERFACE(INonDelegatingUnknown)
{
    STDMETHOD_(NTSTATUS,NonDelegatingQueryInterface)
    (   THIS_
        _In_             REFIID,
        _COM_Outptr_     PVOID *
    )   PURE;

    STDMETHOD_(ULONG,NonDelegatingAddRef)
    (   THIS
    )   PURE;

    STDMETHOD_(ULONG,NonDelegatingRelease)
    (   THIS
    )   PURE;
};

typedef INonDelegatingUnknown *PNONDELEGATINGUNKNOWN;





/*****************************************************************************
 * Classes
 */

/*****************************************************************************
 * CUnknown
 *****************************************************************************
 * Base INonDelegatingUnknown implementation.
 */
class CUnknown : public INonDelegatingUnknown
{
private:

    LONG            m_lRefCount;        // Reference count.
    PUNKNOWN        m_pUnknownOuter;    // Outer IUnknown.

public:

    /*************************************************************************
         * CUnknown methods.
     */
    CUnknown(PUNKNOWN pUnknownOuter);
        virtual ~CUnknown(void);
    PUNKNOWN GetOuterUnknown(void)
    {
        return m_pUnknownOuter;
    }

    /*************************************************************************
         * INonDelegatingUnknown methods.
     */
        STDMETHODIMP_(ULONG) NonDelegatingAddRef
    (   void
    );
        STDMETHODIMP_(ULONG) NonDelegatingRelease
    (   void
    );
    STDMETHODIMP_(NTSTATUS) NonDelegatingQueryInterface
        (
                _In_            REFIID      rIID,
                _COM_Outptr_    PVOID *     ppVoid
        );
};





/*****************************************************************************
 * Macros
 */

/*****************************************************************************
 * DECLARE_STD_UNKNOWN
 *****************************************************************************
 * Various declarations for standard objects based on CUnknown.
 */
#define DECLARE_STD_UNKNOWN()                                   \
    STDMETHODIMP_(NTSTATUS) NonDelegatingQueryInterface         \
        (                                                       \
                _In_            REFIID          iid,            \
                _COM_Outptr_    PVOID *     ppvObject           \
        );                                                      \
    STDMETHODIMP_(NTSTATUS) QueryInterface(_In_ REFIID riid, _COM_Outptr_ void **ppv)        \
    {                                                           \
        return GetOuterUnknown()->QueryInterface(riid,ppv);     \
    };                                                          \
    STDMETHODIMP_(ULONG) AddRef()                               \
    {                                                           \
        return GetOuterUnknown()->AddRef();                     \
    };                                                          \
    STDMETHODIMP_(ULONG) Release()                              \
    {                                                           \
        return GetOuterUnknown()->Release();                    \
    };

#define DEFINE_STD_CONSTRUCTOR(Class)                           \
    Class(PUNKNOWN pUnknownOuter)                               \
    :   CUnknown(pUnknownOuter)                                 \
    {                                                           \
    }

#define QICAST(Type)                                            \
    PVOID((Type)(this))

#define QICASTUNKNOWN(Type)                                     \
    PVOID(PUNKNOWN((Type)(this)))

#define STD_CREATE_BODY_WITH_TAG_(Class,ppUnknown,pUnknownOuter,poolType,tag,base)   \
    NTSTATUS ntStatus;                                                  \
    Class *p = new(poolType,tag) Class(pUnknownOuter);                  \
    if (p)                                                              \
    {                                                                   \
        *ppUnknown = PUNKNOWN((base)(p));                               \
        (*ppUnknown)->AddRef();                                         \
        ntStatus = STATUS_SUCCESS;                                      \
    }                                                                   \
    else                                                                \
    {                                                                   \
        ntStatus = STATUS_INSUFFICIENT_RESOURCES;                       \
    }                                                                   \
    return ntStatus

#define STD_CREATE_BODY_WITH_TAG(Class,ppUnknown,pUnknownOuter,poolType,tag) \
    STD_CREATE_BODY_WITH_TAG_(Class,ppUnknown,pUnknownOuter,poolType,tag,PUNKNOWN)

#define STD_CREATE_BODY_(Class,ppUnknown,pUnknownOuter,poolType,base) \
    STD_CREATE_BODY_WITH_TAG_(Class,ppUnknown,pUnknownOuter,poolType,'rCcP',base)

#define STD_CREATE_BODY(Class,ppUnknown,pUnknownOuter,poolType) \
    STD_CREATE_BODY_(Class,ppUnknown,pUnknownOuter,poolType,PUNKNOWN)






/*****************************************************************************
 * Functions
 */
#ifndef PC_KDEXT    // this is not needed for the KD extensions.
#ifndef _NEW_DELETE_OPERATORS_
#define _NEW_DELETE_OPERATORS_

// Note: Since VS2015 Update 2 overloaded operator new and operator delete may not 
// be declared inline (Level 1 (/W1) on-by-default, warning C4595).
// See https://msdn.microsoft.com/en-us/library/mt656697.aspx
//
// To mitigate this issue, add "#define _NEW_DELETE_OPERATORS_" before "#include <stdunk.h>"
// and implement non-inline operator new and operator delete locally.

#pragma message(__FILE__ " WARNING: operator new and operator delete will be removed soon")

/*****************************************************************************
 * ::new()
 *****************************************************************************
 * New function for creating objects with a specified allocation tag.
 */
inline PVOID operator new
(
    size_t          iSize,
    _When_((poolType & NonPagedPoolMustSucceed) != 0,
       __drv_reportError("Must succeed pool allocations are forbidden. "
			 "Allocation failures cause a system crash"))
    POOL_TYPE       poolType
)
{
    PVOID result = ExAllocatePoolWithTag(poolType,iSize,'wNcP');

    if (result)
    {
        RtlZeroMemory(result,iSize);
    }

    return result;
}

/*****************************************************************************
 * ::new()
 *****************************************************************************
 * New function for creating objects with a specified allocation tag.
 */
inline PVOID operator new
(
    size_t          iSize,
    _When_((poolType & NonPagedPoolMustSucceed) != 0,
       __drv_reportError("Must succeed pool allocations are forbidden. "
			 "Allocation failures cause a system crash"))
    POOL_TYPE       poolType,
    ULONG           tag
)
{
    PVOID result = ExAllocatePoolWithTag(poolType,iSize,tag);

    if (result)
    {
        RtlZeroMemory(result,iSize);
    }

    return result;
}

/*****************************************************************************
 * ::delete()
 *****************************************************************************
 * Delete function.
 */
inline void __cdecl operator delete
(
    PVOID pVoid
)
{
    if (pVoid)
    {
        ExFreePool(pVoid);
    }
}

/*****************************************************************************
 * ::delete()
 *****************************************************************************
 * Delete function.
 */
inline void __cdecl operator delete
(
    PVOID pVoid,
    ULONG tag
)
{
    if (pVoid)
    {
        ExFreePoolWithTag(pVoid,tag);
    }
}

inline void __cdecl operator delete
(
    _Pre_maybenull_ __drv_freesMem(Mem) PVOID pVoid,
    _In_ size_t cbSize
)
{
    UNREFERENCED_PARAMETER(cbSize);

    if (pVoid)
    {
        ExFreePool(pVoid);
    }
}

inline void __cdecl operator delete[]
(
    _Pre_maybenull_ __drv_freesMem(Mem) PVOID pVoid
)
{
    if (pVoid)
    {
        ExFreePool(pVoid);
    }
}

inline void __cdecl operator delete[]
(
    _Pre_maybenull_ __drv_freesMem(Mem) PVOID pVoid,
    _In_ size_t cbSize
)
{
    UNREFERENCED_PARAMETER(cbSize);

    if (pVoid)
    {
        ExFreePool(pVoid);
    }
}

#endif //!_NEW_DELETE_OPERATORS_

#endif  // PC_KDEXT


#endif  // NTDDI

#pragma warning(pop) // Wv:17 Warnings

#endif
