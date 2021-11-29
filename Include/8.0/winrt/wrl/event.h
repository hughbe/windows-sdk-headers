//
// Copyright (C) Microsoft Corporation
// All rights reserved.
//
// Code in details namespace is for internal usage within the library code
//

#ifndef _WRL_EVENT_H_
#define _WRL_EVENT_H_

#ifdef _MSC_VER
#pragma once
#endif  // _MSC_VER

#include <wrl\def.h>
#include <wrl\internal.h>
#include <wrl\client.h>
#include <wrl\implements.h>
#include <wrl\wrappers\corewrappers.h>
#include <eventtoken.h>
#include <roerrorapi.h>

namespace Microsoft { 
namespace WRL {
namespace Details
{

// ArgTraits allows to determine amount of parameters
// on Invoke method of delegate interface
template<typename TMemberFunction>
struct ArgTraits
{
    static const int args = -1; // Indicates that we cannot match Invoke method signature
};

template<typename TDelegateInterface>
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(void)>
{
    static const int args = 0;
};

template<typename TDelegateInterface, typename TArg1>
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1)>
{
    static const int args = 1;
    typedef TArg1 Arg1Type;    
};

template<typename TDelegateInterface, typename TArg1, typename TArg2>
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2)>
{
    static const int args = 2;
    typedef TArg1 Arg1Type;
    typedef TArg2 Arg2Type;
};

template<typename TDelegateInterface, typename TArg1, typename TArg2, typename TArg3>
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3)>
{
    static const int args = 3;
    typedef TArg1 Arg1Type;
    typedef TArg2 Arg2Type;
    typedef TArg3 Arg3Type;
};

template<typename TDelegateInterface, typename TArg1, typename TArg2, typename TArg3, typename TArg4>
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4)>
{
    static const int args = 4;
    typedef TArg1 Arg1Type;
    typedef TArg2 Arg2Type;
    typedef TArg3 Arg3Type;
    typedef TArg4 Arg4Type;
};

template<typename TDelegateInterface, typename TArg1, typename TArg2, typename TArg3, typename TArg4, typename TArg5>
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5)>
{
    static const int args = 5;
    typedef TArg1 Arg1Type;
    typedef TArg2 Arg2Type;
    typedef TArg3 Arg3Type;
    typedef TArg4 Arg4Type;
    typedef TArg5 Arg5Type;
};

template<typename TDelegateInterface, typename TArg1, typename TArg2, typename TArg3, typename TArg4, typename TArg5, typename TArg6>
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6)>
{
    static const int args = 6;
    typedef TArg1 Arg1Type;
    typedef TArg2 Arg2Type;
    typedef TArg3 Arg3Type;
    typedef TArg4 Arg4Type;
    typedef TArg5 Arg5Type;
    typedef TArg6 Arg6Type;
};

template<typename TDelegateInterface, typename TArg1, typename TArg2, typename TArg3, typename TArg4, typename TArg5, typename TArg6, typename TArg7>
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7)>
{
    static const int args = 7;
    typedef TArg1 Arg1Type;
    typedef TArg2 Arg2Type;
    typedef TArg3 Arg3Type;
    typedef TArg4 Arg4Type;
    typedef TArg5 Arg5Type;
    typedef TArg6 Arg6Type;
    typedef TArg7 Arg7Type;
};

template<typename TDelegateInterface, typename TArg1, typename TArg2, typename TArg3, typename TArg4, typename TArg5, typename TArg6, typename TArg7, typename TArg8>
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8)>
{
    static const int args = 8;
    typedef TArg1 Arg1Type;
    typedef TArg2 Arg2Type;
    typedef TArg3 Arg3Type;
    typedef TArg4 Arg4Type;
    typedef TArg5 Arg5Type;
    typedef TArg6 Arg6Type;
    typedef TArg7 Arg7Type;
    typedef TArg8 Arg8Type;
};

template<typename TDelegateInterface, typename TArg1, typename TArg2, typename TArg3, typename TArg4, typename TArg5, typename TArg6, typename TArg7, typename TArg8, typename TArg9>
struct ArgTraits<HRESULT (STDMETHODCALLTYPE TDelegateInterface::*)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8, TArg9)>
{
    static const int args = 9;
    typedef TArg1 Arg1Type;
    typedef TArg2 Arg2Type;
    typedef TArg3 Arg3Type;
    typedef TArg4 Arg4Type;
    typedef TArg5 Arg5Type;
    typedef TArg6 Arg6Type;
    typedef TArg7 Arg7Type;
    typedef TArg8 Arg8Type;
    typedef TArg9 Arg9Type;
};

// Traits factory extract appropriate ArgTraits type 
// for delegate interface
template<typename TDelegateInterface, bool isImplements = __is_base_of(ImplementsBase, TDelegateInterface)>
struct ArgTraitsHelper;

// Specialization for the none Implements based interface
template<typename TDelegateInterface>
struct ArgTraitsHelper<TDelegateInterface, false>
{
    typedef decltype(&TDelegateInterface::Invoke) methodType;
    typedef ArgTraits<methodType> Traits;
    static const int args = Traits::args;
    typedef TDelegateInterface Interface;
    // Make sure that you are using STDMETHOD macro to define delegate interfaces    
    static_assert(args != -1, "Delegate Invoke signature doesn't match. Possible reasons: wrong calling convention, wrong returned type or passed too many parameters to 'Callback'");
};

// Specialization for Implements based interface
template<typename TDelegateInterface>
struct ArgTraitsHelper<TDelegateInterface, true> : ArgTraitsHelper<typename TDelegateInterface::FirstInterface>
{
};

// Invoke helper provide implementation of invoke method
// depending on amount and type of arguments from ArgTraitsHelper
template<typename TDelegateInterface, typename TCallback, unsigned int argCount>
struct InvokeHelper;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 0> : public ::Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
{
    explicit InvokeHelper(TCallback callback) throw() : callback_(callback)
    {
    }

    STDMETHOD(Invoke)()
    {
        return callback_();
    }
    TCallback callback_;
};

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 1> : public ::Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
{    
    typedef typename ArgTraitsHelper<TDelegateInterface>::Traits Traits;

    explicit InvokeHelper(TCallback callback) throw() : callback_(callback)
    {
    }

    STDMETHOD(Invoke)(typename Traits::Arg1Type arg1)
    {
        return (callback_)(arg1);
    }
    TCallback callback_;
};

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 2> : public ::Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
{
    typedef typename ArgTraitsHelper<TDelegateInterface>::Traits Traits;

    explicit InvokeHelper(TCallback callback) throw() : callback_(callback)
    {
    }

    STDMETHOD(Invoke)(
            typename Traits::Arg1Type arg1,
            typename Traits::Arg2Type arg2)
    {
        return callback_(arg1, arg2);
    }
    TCallback callback_;
};

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 3> : public ::Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
{    
    typedef typename ArgTraitsHelper<TDelegateInterface>::Traits Traits;

    explicit InvokeHelper(TCallback callback) throw() : callback_(callback)
    {
    }

    STDMETHOD(Invoke)(
            typename Traits::Arg1Type arg1,
            typename Traits::Arg2Type arg2,
            typename Traits::Arg3Type arg3)
    {
        return callback_(arg1, arg2, arg3);
    }
    TCallback callback_;
};

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 4> : ::Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
{
    typedef typename ArgTraitsHelper<TDelegateInterface>::Traits Traits;

    explicit InvokeHelper(TCallback callback) throw() : callback_(callback)
    {
    }

    STDMETHOD(Invoke)(
            typename Traits::Arg1Type arg1,
            typename Traits::Arg2Type arg2,
            typename Traits::Arg3Type arg3,
            typename Traits::Arg4Type arg4)
    {
        return callback_(arg1, arg2, arg3, arg4);
    }
    TCallback callback_;
};

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 5> : ::Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
{
    typedef typename ArgTraitsHelper<TDelegateInterface>::Traits Traits;

    explicit InvokeHelper(TCallback callback) throw() : callback_(callback) 
    {
    }

    STDMETHOD(Invoke)(
            typename Traits::Arg1Type arg1, 
            typename Traits::Arg2Type arg2, 
            typename Traits::Arg3Type arg3, 
            typename Traits::Arg4Type arg4,
            typename Traits::Arg5Type arg5)
    {
        return callback_(arg1, arg2, arg3, arg4, arg5);
    }
    TCallback callback_;
};

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 6> : ::Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
{
    typedef typename ArgTraitsHelper<TDelegateInterface>::Traits Traits;   

    explicit InvokeHelper(TCallback callback) throw() : callback_(callback)
    {
    }

    STDMETHOD(Invoke)(
            typename Traits::Arg1Type arg1, 
            typename Traits::Arg2Type arg2, 
            typename Traits::Arg3Type arg3, 
            typename Traits::Arg4Type arg4,
            typename Traits::Arg5Type arg5,
            typename Traits::Arg6Type arg6)
    {
        return callback_(arg1, arg2, arg3, arg4, arg5, arg6);
    }
    TCallback callback_;
};

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 7> : ::Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
{
    typedef typename ArgTraitsHelper<TDelegateInterface>::Traits Traits;       

    explicit InvokeHelper(TCallback callback) throw() : callback_(callback)
    {
    }

    STDMETHOD(Invoke)(
            typename Traits::Arg1Type arg1, 
            typename Traits::Arg2Type arg2, 
            typename Traits::Arg3Type arg3, 
            typename Traits::Arg4Type arg4,
            typename Traits::Arg5Type arg5,
            typename Traits::Arg6Type arg6,
            typename Traits::Arg7Type arg7)
    {
        return callback_(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }
    TCallback callback_;
};

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 8> : ::Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
{
    typedef typename ArgTraitsHelper<TDelegateInterface>::Traits Traits;

    explicit InvokeHelper(TCallback callback) throw() : callback_(callback)
    {
    }

    STDMETHOD(Invoke)(
            typename Traits::Arg1Type arg1, 
            typename Traits::Arg2Type arg2, 
            typename Traits::Arg3Type arg3, 
            typename Traits::Arg4Type arg4,
            typename Traits::Arg5Type arg5,
            typename Traits::Arg6Type arg6,
            typename Traits::Arg7Type arg7,
            typename Traits::Arg8Type arg8)
    {
        return callback_(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }
    TCallback callback_;
};

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 9> : ::Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
{
    typedef typename ArgTraitsHelper<TDelegateInterface>::Traits Traits;

    explicit InvokeHelper(TCallback callback) throw() : callback_(callback)
    {
    }

    STDMETHOD(Invoke)(
            typename Traits::Arg1Type arg1, 
            typename Traits::Arg2Type arg2, 
            typename Traits::Arg3Type arg3, 
            typename Traits::Arg4Type arg4,
            typename Traits::Arg5Type arg5,
            typename Traits::Arg6Type arg6,
            typename Traits::Arg7Type arg7,
            typename Traits::Arg8Type arg8,
            typename Traits::Arg9Type arg9)
    {
        return callback_(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }
    TCallback callback_;
};

} // namespace Details

// Implementation of Callback helper that wire delegate interfaces
// and provide object implementation for Invoke method
// Specialization for lambada, funtion pointer and functor
template<typename TDelegateInterface, typename TCallback>
ComPtr<typename Details::ArgTraitsHelper<TDelegateInterface>::Interface> Callback(TCallback callback) throw()
{
    static_assert(__is_base_of(IUnknown, TDelegateInterface) && !__is_base_of(IInspectable, TDelegateInterface), "Delegates objects must be 'IUnknown' base and not 'IInspectable'");

    return Make<Details::InvokeHelper<TDelegateInterface, TCallback, 
        Details::ArgTraitsHelper<TDelegateInterface>::args>>(callback);
}

// Specialization for pointer to the method
template<typename TDelegateInterface, typename TCallbackObject>
ComPtr<typename Details::ArgTraitsHelper<TDelegateInterface>::Interface> Callback(_In_ TCallbackObject *object, _In_ HRESULT (TCallbackObject::* method)()) throw()
{
    static_assert(__is_base_of(IUnknown, TDelegateInterface) && !__is_base_of(IInspectable, TDelegateInterface), "Delegates objects must be 'IUnknown' base and not 'IInspectable'");
    static_assert(Details::ArgTraitsHelper<TDelegateInterface>::Traits::args == 0, "Number of arguments on object method doesn't match number of arguments on Delegate::Invoke");

    struct ComObject : RuntimeClass<RuntimeClassFlags<ClassicCom>, TDelegateInterface>
    {
        ComObject(TCallbackObject *object, HRESULT (TCallbackObject::* method)()) throw() : object_(object), method_(method)
        {
        }

        STDMETHOD(Invoke)()
        {
            return (object_->*method_)();
        }

        TCallbackObject* object_;
        HRESULT (TCallbackObject::* method_)();
    };

    return Make<ComObject>(object, method);
}

template<typename TDelegateInterface, typename TCallbackObject, typename TArg1>
ComPtr<typename Details::ArgTraitsHelper<TDelegateInterface>::Interface> Callback(_In_ TCallbackObject *object, _In_ HRESULT (TCallbackObject::* method)(TArg1)) throw()
{
    static_assert(__is_base_of(IUnknown, TDelegateInterface) && !__is_base_of(IInspectable, TDelegateInterface), "Delegates objects must be 'IUnknown' base and not 'IInspectable'");
    static_assert(Details::ArgTraitsHelper<TDelegateInterface>::Traits::args == 1, "Number of arguments on object method doesn't match number of arguments on Delegate::Invoke");
    static_assert(Details::IsSame<TArg1, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg1Type>::value, "Argument 1 from object method doesn't match Invoke argument 1");
    
    struct ComObject : RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
    {
        ComObject(TCallbackObject *object, HRESULT (TCallbackObject::* method)(TArg1)) throw() : object_(object), method_(method)
        {
        }

        STDMETHOD(Invoke)(TArg1 arg1)
        {
            return (object_->*method_)(arg1);
        }

        TCallbackObject* object_;
        HRESULT (TCallbackObject::* method_)(TArg1);
    };

    return Make<ComObject>(object, method);
}

template<typename TDelegateInterface, typename TCallbackObject, typename TArg1, typename TArg2>
ComPtr<typename Details::ArgTraitsHelper<TDelegateInterface>::Interface> Callback(_In_ TCallbackObject *object, _In_ HRESULT (TCallbackObject::* method)(TArg1, TArg2)) throw()
{    
    static_assert(__is_base_of(IUnknown, TDelegateInterface) && !__is_base_of(IInspectable, TDelegateInterface), "Delegates objects must be 'IUnknown' base and not 'IInspectable'");
    static_assert(Details::ArgTraitsHelper<TDelegateInterface>::Traits::args == 2, "Number of arguments on object method doesn't match number of arguments on Delegate::Invoke");
    static_assert(Details::IsSame<TArg1, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg1Type>::value, "Argument 1 from object method doesn't match Invoke argument 1");
    static_assert(Details::IsSame<TArg2, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg2Type>::value, "Argument 2 from object method doesn't match Invoke argument 2");

    struct ComObject : RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
    {
        ComObject(TCallbackObject *object, HRESULT (TCallbackObject::* method)(TArg1, TArg2)) throw() : object_(object), method_(method)
        {
        }

        STDMETHOD(Invoke)(TArg1 arg1, TArg2 arg2)
        {
            return (object_->*method_)(arg1, arg2);
        }

        TCallbackObject* object_;
        HRESULT (TCallbackObject::* method_)(TArg1, TArg2);
    };

    return Make<ComObject>(object, method);
}

template<typename TDelegateInterface, typename TCallbackObject, typename TArg1, typename TArg2, typename TArg3>
ComPtr<typename Details::ArgTraitsHelper<TDelegateInterface>::Interface> Callback(_In_ TCallbackObject *object, _In_ HRESULT (TCallbackObject::* method)(TArg1, TArg2, TArg3)) throw()
{
    static_assert(__is_base_of(IUnknown, TDelegateInterface) && !__is_base_of(IInspectable, TDelegateInterface), "Delegates objects must be 'IUnknown' base and not 'IInspectable'");
    static_assert(Details::ArgTraitsHelper<TDelegateInterface>::Traits::args == 3, "Number of arguments on object method doesn't match number of arguments on Delegate::Invoke");
    static_assert(Details::IsSame<TArg1, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg1Type>::value, "Argument 1 from object method doesn't match Invoke argument 1");
    static_assert(Details::IsSame<TArg2, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg2Type>::value, "Argument 2 from object method doesn't match Invoke argument 2");
    static_assert(Details::IsSame<TArg3, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg3Type>::value, "Argument 3 from object method doesn't match Invoke argument 3");

    struct ComObject : RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>   
    {
        ComObject(TCallbackObject *object, HRESULT (TCallbackObject::* method)(TArg1, TArg2, TArg3)) throw() : object_(object), method_(method)
        {
        }

        STDMETHOD(Invoke)(TArg1 arg1, TArg2 arg2, TArg3 arg3)
        {
            return (object_->*method_)(arg1, arg2, arg3);
        }

        TCallbackObject* object_;
        HRESULT (TCallbackObject::* method_)(TArg1, TArg2, TArg3);
    };

    return Make<ComObject>(object, method);
}

template<typename TDelegateInterface, typename TCallbackObject, typename TArg1, typename TArg2, typename TArg3, typename TArg4>
ComPtr<typename Details::ArgTraitsHelper<TDelegateInterface>::Interface> Callback(_In_ TCallbackObject *object, _In_ HRESULT (TCallbackObject::* method)(TArg1, TArg2, TArg3, TArg4)) throw()
{
    static_assert(__is_base_of(IUnknown, TDelegateInterface) && !__is_base_of(IInspectable, TDelegateInterface), "Delegates objects must be 'IUnknown' base and not 'IInspectable'");
    static_assert(Details::ArgTraitsHelper<TDelegateInterface>::Traits::args == 4, "Number of arguments on object method doesn't match number of arguments on Delegate::Invoke");
    static_assert(Details::IsSame<TArg1, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg1Type>::value, "Argument 1 from object method doesn't match Invoke argument 1");
    static_assert(Details::IsSame<TArg2, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg2Type>::value, "Argument 2 from object method doesn't match Invoke argument 2");
    static_assert(Details::IsSame<TArg3, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg3Type>::value, "Argument 3 from object method doesn't match Invoke argument 3");
    static_assert(Details::IsSame<TArg4, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg4Type>::value, "Argument 4 from object method doesn't match Invoke argument 4");

    struct ComObject : RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
    {
        ComObject(TCallbackObject *object, HRESULT (TCallbackObject::* method)(TArg1, TArg2, TArg3, TArg4)) throw() : object_(object), method_(method)
        {
        }

        STDMETHOD(Invoke)(TArg1 arg1, TArg2 arg2, TArg3 arg3, TArg4 arg4)
        {
            return (object_->*method_)(arg1, arg2, arg3, arg4);
        }

        TCallbackObject* object_;
        HRESULT (TCallbackObject::* method_)(TArg1, TArg2, TArg3, TArg4);
    };

    return Make<ComObject>(object, method);
}

template<typename TDelegateInterface, typename TCallbackObject, typename TArg1, typename TArg2, typename TArg3, typename TArg4, typename TArg5>
ComPtr<typename Details::ArgTraitsHelper<TDelegateInterface>::Interface> Callback(_In_ TCallbackObject *object, _In_ HRESULT (TCallbackObject::* method)(TArg1, TArg2, TArg3, TArg4, TArg5)) throw()
{
    static_assert(__is_base_of(IUnknown, TDelegateInterface) && !__is_base_of(IInspectable, TDelegateInterface), "Delegates objects must be 'IUnknown' base and not 'IInspectable'");
    static_assert(Details::ArgTraitsHelper<TDelegateInterface>::Traits::args == 5, "Number of arguments on object method doesn't match number of arguments on Delegate::Invoke");
    static_assert(Details::IsSame<TArg1, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg1Type>::value, "Argument 1 from object method doesn't match Invoke argument 1");
    static_assert(Details::IsSame<TArg2, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg2Type>::value, "Argument 2 from object method doesn't match Invoke argument 2");
    static_assert(Details::IsSame<TArg3, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg3Type>::value, "Argument 3 from object method doesn't match Invoke argument 3");
    static_assert(Details::IsSame<TArg4, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg4Type>::value, "Argument 4 from object method doesn't match Invoke argument 4");
    static_assert(Details::IsSame<TArg5, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg5Type>::value, "Argument 5 from object method doesn't match Invoke argument 5");
    
    struct ComObject : RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
    {
        ComObject(TCallbackObject *object, HRESULT (TCallbackObject::* method)(TArg1, TArg2, TArg3, TArg4, TArg5)) throw() : object_(object), method_(method)
        {
        }

        STDMETHOD(Invoke)(TArg1 arg1, TArg2 arg2, TArg3 arg3, TArg4 arg4, TArg5 arg5)
        {
            return (object_->*method_)(arg1, arg2, arg3, arg4, arg5);
        }

        TCallbackObject* object_;
        HRESULT (TCallbackObject::* method_)(TArg1, TArg2, TArg3, TArg4, TArg5);
    };

    return Make<ComObject>(object, method);
}

template<typename TDelegateInterface, typename TCallbackObject, typename TArg1, typename TArg2, typename TArg3, typename TArg4, typename TArg5, typename TArg6>
ComPtr<typename Details::ArgTraitsHelper<TDelegateInterface>::Interface> Callback(_In_ TCallbackObject *object, _In_ HRESULT (TCallbackObject::* method)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6)) throw()
{
    static_assert(__is_base_of(IUnknown, TDelegateInterface) && !__is_base_of(IInspectable, TDelegateInterface), "Delegates objects must be 'IUnknown' base and not 'IInspectable'");
    static_assert(Details::ArgTraitsHelper<TDelegateInterface>::Traits::args == 6, "Number of arguments on object method doesn't match number of arguments on Delegate::Invoke");
    static_assert(Details::IsSame<TArg1, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg1Type>::value, "Argument 1 from object method doesn't match Invoke argument 1");
    static_assert(Details::IsSame<TArg2, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg2Type>::value, "Argument 2 from object method doesn't match Invoke argument 2");
    static_assert(Details::IsSame<TArg3, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg3Type>::value, "Argument 3 from object method doesn't match Invoke argument 3");
    static_assert(Details::IsSame<TArg4, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg4Type>::value, "Argument 4 from object method doesn't match Invoke argument 4");
    static_assert(Details::IsSame<TArg5, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg5Type>::value, "Argument 5 from object method doesn't match Invoke argument 5");
    static_assert(Details::IsSame<TArg6, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg6Type>::value, "Argument 6 from object method doesn't match Invoke argument 6");
    
    struct ComObject : RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
    {
        ComObject(TCallbackObject *object, HRESULT (TCallbackObject::* method)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6)) throw() : object_(object), method_(method)
        {
        }

        STDMETHOD(Invoke)(TArg1 arg1, TArg2 arg2, TArg3 arg3, TArg4 arg4, TArg5 arg5, TArg6 arg6)
        {
            return (object_->*method_)(arg1, arg2, arg3, arg4, arg5, arg6);
        }

        TCallbackObject* object_;
        HRESULT (TCallbackObject::* method_)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6);
    };

    return Make<ComObject>(object, method);
}

template<typename TDelegateInterface, typename TCallbackObject, typename TArg1, typename TArg2, typename TArg3, typename TArg4, typename TArg5, typename TArg6, typename TArg7>
ComPtr<typename Details::ArgTraitsHelper<TDelegateInterface>::Interface> Callback(_In_ TCallbackObject *object, _In_ HRESULT (TCallbackObject::* method)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7)) throw()
{
    static_assert(__is_base_of(IUnknown, TDelegateInterface) && !__is_base_of(IInspectable, TDelegateInterface), "Delegates objects must be 'IUnknown' base and not 'IInspectable'");
    static_assert(Details::ArgTraitsHelper<TDelegateInterface>::Traits::args == 7, "Number of arguments on object method doesn't match number of arguments on Delegate::Invoke");
    static_assert(Details::IsSame<TArg1, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg1Type>::value, "Argument 1 from object method doesn't match Invoke argument 1");
    static_assert(Details::IsSame<TArg2, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg2Type>::value, "Argument 2 from object method doesn't match Invoke argument 2");
    static_assert(Details::IsSame<TArg3, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg3Type>::value, "Argument 3 from object method doesn't match Invoke argument 3");
    static_assert(Details::IsSame<TArg4, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg4Type>::value, "Argument 4 from object method doesn't match Invoke argument 4");
    static_assert(Details::IsSame<TArg5, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg5Type>::value, "Argument 5 from object method doesn't match Invoke argument 5");
    static_assert(Details::IsSame<TArg6, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg6Type>::value, "Argument 6 from object method doesn't match Invoke argument 6");
    static_assert(Details::IsSame<TArg7, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg7Type>::value, "Argument 7 from object method doesn't match Invoke argument 7");

    struct ComObject : RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
    {
        ComObject(TCallbackObject *object, HRESULT (TCallbackObject::* method)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7)) throw() : object_(object), method_(method)
        {
        }

        STDMETHOD(Invoke)(TArg1 arg1, TArg2 arg2, TArg3 arg3, TArg4 arg4, TArg5 arg5, TArg6 arg6, TArg7 arg7)
        {
            return (object_->*method_)(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        }

        TCallbackObject* object_;
        HRESULT (TCallbackObject::* method_)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7);
    };

    return Make<ComObject>(object, method);
}

template<typename TDelegateInterface, typename TCallbackObject, typename TArg1, typename TArg2, typename TArg3, typename TArg4, typename TArg5, typename TArg6, typename TArg7, typename TArg8>
ComPtr<typename Details::ArgTraitsHelper<TDelegateInterface>::Interface> Callback(_In_ TCallbackObject *object, _In_ HRESULT (TCallbackObject::* method)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8)) throw()
{
    static_assert(__is_base_of(IUnknown, TDelegateInterface) && !__is_base_of(IInspectable, TDelegateInterface), "Delegates objects must be 'IUnknown' base and not 'IInspectable'");
    static_assert(Details::ArgTraitsHelper<TDelegateInterface>::Traits::args == 8, "Number of arguments on object method doesn't match number of arguments on Delegate::Invoke");
    static_assert(Details::IsSame<TArg1, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg1Type>::value, "Argument 1 from object method doesn't match Invoke argument 1");
    static_assert(Details::IsSame<TArg2, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg2Type>::value, "Argument 2 from object method doesn't match Invoke argument 2");
    static_assert(Details::IsSame<TArg3, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg3Type>::value, "Argument 3 from object method doesn't match Invoke argument 3");
    static_assert(Details::IsSame<TArg4, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg4Type>::value, "Argument 4 from object method doesn't match Invoke argument 4");
    static_assert(Details::IsSame<TArg5, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg5Type>::value, "Argument 5 from object method doesn't match Invoke argument 5");
    static_assert(Details::IsSame<TArg6, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg6Type>::value, "Argument 6 from object method doesn't match Invoke argument 6");
    static_assert(Details::IsSame<TArg7, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg7Type>::value, "Argument 7 from object method doesn't match Invoke argument 7");
    static_assert(Details::IsSame<TArg8, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg8Type>::value, "Argument 8 from object method doesn't match Invoke argument 8");

    struct ComObject : RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
    {
        ComObject(TCallbackObject *object, HRESULT (TCallbackObject::* method)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8)) throw() : object_(object), method_(method)
        {
        }

        STDMETHOD(Invoke)(TArg1 arg1, TArg2 arg2, TArg3 arg3, TArg4 arg4, TArg5 arg5, TArg6 arg6, TArg7 arg7, TArg8 arg8)
        {
            return (object_->*method_)(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
        }

        TCallbackObject* object_;
        HRESULT (TCallbackObject::* method_)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8);
    };

    return Make<ComObject>(object, method);
}

template<typename TDelegateInterface, typename TCallbackObject, typename TArg1, typename TArg2, typename TArg3, typename TArg4, typename TArg5, typename TArg6, typename TArg7, typename TArg8, typename TArg9>
ComPtr<typename Details::ArgTraitsHelper<TDelegateInterface>::Interface> Callback(_In_ TCallbackObject *object, _In_ HRESULT (TCallbackObject::* method)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8, TArg9)) throw()
{
    static_assert(__is_base_of(IUnknown, TDelegateInterface) && !__is_base_of(IInspectable, TDelegateInterface), "Delegates objects must be 'IUnknown' base and not 'IInspectable'");
    static_assert(Details::ArgTraitsHelper<TDelegateInterface>::Traits::args == 9, "Number of arguments on object method doesn't match number of arguments on Delegate::Invoke");
    static_assert(Details::IsSame<TArg1, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg1Type>::value, "Argument 1 from object method doesn't match Invoke argument 1");
    static_assert(Details::IsSame<TArg2, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg2Type>::value, "Argument 2 from object method doesn't match Invoke argument 2");
    static_assert(Details::IsSame<TArg3, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg3Type>::value, "Argument 3 from object method doesn't match Invoke argument 3");
    static_assert(Details::IsSame<TArg4, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg4Type>::value, "Argument 4 from object method doesn't match Invoke argument 4");
    static_assert(Details::IsSame<TArg5, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg5Type>::value, "Argument 5 from object method doesn't match Invoke argument 5");
    static_assert(Details::IsSame<TArg6, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg6Type>::value, "Argument 6 from object method doesn't match Invoke argument 6");
    static_assert(Details::IsSame<TArg7, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg7Type>::value, "Argument 7 from object method doesn't match Invoke argument 7");
    static_assert(Details::IsSame<TArg8, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg8Type>::value, "Argument 8 from object method doesn't match Invoke argument 8");
    static_assert(Details::IsSame<TArg9, Details::ArgTraitsHelper<TDelegateInterface>::Traits::Arg9Type>::value, "Argument 9 from object method doesn't match Invoke argument 9");
    
    struct ComObject : RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>
    {
        ComObject(TCallbackObject *object, HRESULT (TCallbackObject::* method)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8, TArg9)) throw() : object_(object), method_(method)
        {
        }

        STDMETHOD(Invoke)(TArg1 arg1, TArg2 arg2, TArg3 arg3, TArg4 arg4, TArg5 arg5, TArg6 arg6, TArg7 arg7, TArg8 arg8, TArg9 arg9)
        {
            return (object_->*method_)(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
        }

        TCallbackObject* object_;
        HRESULT (TCallbackObject::* method_)(TArg1, TArg2, TArg3, TArg4, TArg5, TArg6, TArg7, TArg8, TArg9);
    };

    return Make<ComObject>(object, method);
}

namespace Details
{
// EventTargetArray is used to keep array of event targets. This array is fixed-length.
// Every time element is added/removed from array EventSource allocate new array. This array
// is optimize-for-invoke lock strategy in EventSource
class EventTargetArray : public ::Microsoft::WRL::RuntimeClass< ::Microsoft::WRL::RuntimeClassFlags<ClassicCom>, IUnknown >
{
    public:
        EventTargetArray() throw() : begin_(nullptr), end_(nullptr)
        {
        }
        
        HRESULT RuntimeClassInitialize(size_t items) throw()
        {
            begin_ = new(std::nothrow) ComPtr<IUnknown>[items];
            if (begin_ == nullptr)
            {
                return E_OUTOFMEMORY;
            }

            end_ = begin_;
            return S_OK;
        }

        ~EventTargetArray() throw()
        {
            // Don't check against nullptr because delete does it
            delete[] begin_;
        }

        ComPtr<IUnknown>* Begin() throw()
        {
            return begin_;
        }

        ComPtr<IUnknown>* End() throw()
        {
            return end_;
        }

        void AddTail(_In_ IUnknown* element) throw()
        {
            // We'll run over the end if you call AddTail too many times, but the alternate would be an extra variable
            // to keep track of the number of items allocated. This class is only privately used by EventSourceBase.
            *end_ = element;
            end_++;
        }         

        size_t Length() throw()
        {
            return (end_ - begin_);
        }

    private:
        ComPtr<IUnknown>*  begin_;
        ComPtr<IUnknown>*  end_;
};

} // namespace Details

template<typename TDelegateInterface>
class EventSource
{
public:
    EventSource() throw() :
         targets_(nullptr)
    {
    }

    HRESULT Add(_In_opt_ TDelegateInterface* delegateInterface, _Out_ EventRegistrationToken* token) throw()
    {
        // Clear token value
        token->value = 0;

        // Make sure that delegate interface pointer is not null
        if (delegateInterface == nullptr)
        {
            return E_INVALIDARG;
        }

        // This must be defined outside of the scope where the addRemoveLock is taken to ensure that it's destructor is called after the lock is released
        ComPtr<Details::EventTargetArray> pTempList;

        { // lock scope for addRemoveLock
            // We are doing "copy to new list and add" so as not to disturb the list that may be 
            // currently undergoing a walk and fire (invoke). 

            // The addRemoveLock_ prevents multiple threads from doing simultaneous adds.  
            // An invoke may be occurring during an add or remove operation.
            Wrappers::SRWLock::SyncLockExclusive addRemoveLock = addRemoveLock_.LockExclusive();
            
            ComPtr<Details::EventTargetArray> pNewList;

            // Allocate event array
            HRESULT hr = MakeAndInitialize<Details::EventTargetArray>(pNewList.GetAddressOf(), targets_ == nullptr ? 1 : targets_->Length() + 1);
            // Make sure allocation succeeded
            if (FAILED(hr))
            {
                return hr;
            }

            // The list may not exist if nobody has registered
            if (targets_)
            {
                for (auto element = targets_->Begin(); element != targets_->End(); element++)
                {
                    // The ComPtr<TDelegateInterface> contained in the current targets_ node
                    // is assigned to a ComPtr<TDelegateInterface> of a new node in pNewList
                    // the net result is an addref on the interface.

                    pNewList->AddTail(element->Get());
                }
            }

            // Get unique token value
            token->value = reinterpret_cast<__int64>(delegateInterface);

            // AddTail operation will take a reference which will result in 
            // this function adding one reference count on delegateInterface.
            pNewList->AddTail(delegateInterface);            

            {
                // lock scope for targetsPointerLock
                // The targetsPointerLock_ protects the exchanging of the new list (with the addition)
                // for the old list (which could be used currently for firing events)
                Wrappers::SRWLock::SyncLockExclusive targetsPointerLock = targetsPointerLock_.LockExclusive();

                // We move targets_ to pTempList so that we can actually delete the list while 
                // not holding any locks. The InvokeAll method may still have a reference to targets_ so 
                // even when pTempList releases, this might not delete what was in targets_.
                pTempList = Details::Move(targets_);

                // We're done with pNewList, so just move it to targets_.
                targets_ = Details::Move(pNewList);
                
            } // end lock scope for targetsPointerLock
        } // end lock scope for addRemoveLock

        // Destroys pTempList here (this is the old targets_)

        return S_OK;
    }

    HRESULT Remove(EventRegistrationToken token) throw()
    {
        // Used for deleting the current array without holding the addRemoveLock.
        ComPtr<Details::EventTargetArray> pTempList;
        { // lock scope for addRemoveLock_
            // The addRemoveLock_ prevents multiple threads from doing simultaneous adds/removes.
            // An invoke may be occurring during an add or remove operation.
            Wrappers::SRWLock::SyncLockExclusive addRemoveLock = addRemoveLock_.LockExclusive();

            if (targets_ == nullptr)
            {
                return S_OK; // List is currently empty - thus token wasn't found, just return
            }

            ComPtr<Details::EventTargetArray> pNewList;
            size_t availableSlots = targets_->Length() - 1;
            bool removed = false;
            // If one element in the array
            if (availableSlots == 0)
            {
                if (reinterpret_cast<__int64>(targets_->Begin()->Get()) == token.value)
                {
                    removed = true;
                }
            }
            else
            {
                // Instantiate EventTargetArray
                HRESULT hr = MakeAndInitialize<Details::EventTargetArray>(pNewList.GetAddressOf(), availableSlots);
                if (FAILED(hr))
                {
                    return hr;
                }

                for (auto element = targets_->Begin(); element != targets_->End(); element++)
                {
                    if (!removed && token.value == reinterpret_cast<__int64>(element->Get()))
                    {
                        removed = true;
                        continue;
                    }

                    // The ComPtr<TDelegateInterface> contained in p is assigned to a 
                    // ComPtr<TDelegateInterface> of a new node in pNewList. The net result is 
                    // an addref on the interface.
                    if (availableSlots == 0)
                    {
                        // We don't have any availableSlots left in the target array, hence every item was copied
                        // from the source array. 
                        // This means we didn't find the item in the list - just return.
                        __WRL_ASSERT__(!removed && "Attempt to remove token that was not added to this EventSource<>");
                        break;
                    }

                    // Copy every registrant from old list except the item being removed
                    // The ComPtr<TDelegateInterface> contained in p is assigned to a 
                    // ComPtr<TDelegateInterface> of a new node in pNewList. The net result is 
                    // an addref on the interface.
                    pNewList->AddTail(element->Get());
                    availableSlots--;
                }
            }

            if (removed)
            {
                // lock scope for targetsPointerLock
                // The targetsPointerLock_ protects the exchanging of the new list (with the removal)
                // for the old list (which could be used currently for firing events)
                Wrappers::SRWLock::SyncLockExclusive targetsPointerLock = targetsPointerLock_.LockExclusive();

                // We move targets_ to pTempList so that we can actually delete the list while 
                // not holding any locks. The InvokeAll method may still have a reference to targets_ so 
                // even when pTempList releases, this might not delete what was in targets_.
                pTempList = Details::Move(targets_);

                // We still have some items left inside pNewList, so move it to targets_.
                targets_ = Details::Move(pNewList);

                // If we don't have any items added, the Details::Move(targets_) above already set targets_ to nullptr. The result
                // is that now when pTempList destructs, it will cause what used to be targets_ to be freed.

            } // end lock scope for targetsPointerLock

        } // end lock scope for addRemoveLock

        // Destroys pTempList here (this is the old targets_)

        return S_OK;
    }

private:
    // TInvokeMethod is a functor that performs the appropriate invoke, depending on the
    // number of arguments specified.
    template <typename TInvokeMethod>
    void DoInvoke(TInvokeMethod invokeOne) throw()
    {
        // The targetsPointerLock_ protects the acquisition of an AddRef'd pointer to
        // "current list".  An Add/Remove operation may occur during the
        // firing of events (but occurs on a copy of the list).  i.e. both
        // InvokeAll/invoke and Add/Remove are readers of the "current list". 
        // NOTE:  EventSource<TDelegateInterface>::InvokeAll(...) must never take the addRemoveLock_.
        ComPtr<Details::EventTargetArray> targets;

        // Scoping for lock
        {
            Wrappers::SRWLock::SyncLockExclusive targetsPointerLock = targetsPointerLock_.LockExclusive();
            targets = targets_;
        }

        // The list may not exist if nobody has registered
        if (targets)
        {  
            for (auto element = targets->Begin(); element != targets->End(); element++)
            {
                HRESULT hr = (invokeOne)(*element);
                if (FAILED(hr)) 
                {
                    ::RoTransformError(hr, S_OK, nullptr);                    
                    // Remove event that is already disconnected
                    if (hr == RPC_E_DISCONNECTED ||
                        hr == HRESULT_FROM_WIN32(RPC_S_SERVER_UNAVAILABLE))
                    {
                        EventRegistrationToken token;
                        token.value = reinterpret_cast<__int64>(element->Get());
                        Remove(token);
                    }
                }
            }
        }
    }

public:
    void InvokeAll() throw()
    {
        DoInvoke([](ComPtr<IUnknown>& p) -> HRESULT { return static_cast<TDelegateInterface*>(p.Get())->Invoke(); });
    }

    template < typename T0 > void InvokeAll(T0 arg0) throw()
    {
        DoInvoke([arg0]( ComPtr<IUnknown>& p) -> HRESULT {
            return static_cast<TDelegateInterface*>(p.Get())->Invoke(arg0); 
        });
    }

    template < typename T0, typename T1 > void InvokeAll(T0 arg0, T1 arg1) throw()
    {
        DoInvoke([arg0, arg1]( ComPtr<IUnknown>& p) -> HRESULT {
            return static_cast<TDelegateInterface*>(p.Get())->Invoke(arg0, arg1);
        });
    }

    template < typename T0, typename T1, typename T2 > void InvokeAll(T0 arg0, T1 arg1, T2 arg2) throw()
    {
        DoInvoke([arg0, arg1, arg2]( ComPtr<IUnknown>& p) -> HRESULT { 
            return static_cast<TDelegateInterface*>(p.Get())->Invoke(arg0, arg1, arg2);
        });
    }

    template < typename T0, typename T1, typename T2, typename T3> void InvokeAll(T0 arg0, T1 arg1, T2 arg2, T3 arg3) throw()
    {
        DoInvoke([arg0, arg1, arg2, arg3]( ComPtr<IUnknown>& p) -> HRESULT {
            return static_cast<TDelegateInterface*>(p.Get())->Invoke(arg0, arg1, arg2, arg3);
        });
    }

    template < typename T0, typename T1, typename T2, typename T3, typename T4> 
        void InvokeAll(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4) throw()
    {
        DoInvoke([arg0, arg1, arg2, arg3, arg4]( ComPtr<IUnknown>& p) -> HRESULT {
            return static_cast<TDelegateInterface*>(p.Get())->Invoke(arg0, arg1, arg2, arg3, arg4);
        });
    }

    template < typename T0, typename T1, typename T2, typename T3, typename T4, typename T5> 
        void InvokeAll(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5) throw()
    {
        DoInvoke([arg0, arg1, arg2, arg3, arg4, arg5]( ComPtr<IUnknown>& p) -> HRESULT {
            return static_cast<TDelegateInterface*>(p.Get())->Invoke(arg0, arg1, arg2, arg3, arg4, arg5);
        });
    }

    template < typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> 
        void InvokeAll(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) throw()
    {
        DoInvoke([arg0, arg1, arg2, arg3, arg4, arg5, arg6]( ComPtr<IUnknown>& p) -> HRESULT {
            return static_cast<TDelegateInterface*>(p.Get())->Invoke(arg0, arg1, arg2, arg3, arg4, arg5, arg6); 
        });
    }

    template < typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> 
        void InvokeAll(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7) throw()
    {
        DoInvoke([arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7]( ComPtr<IUnknown>& p) -> HRESULT {
            return static_cast<TDelegateInterface*>(p.Get())->Invoke(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        });
    }

    template < typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> 
        void InvokeAll(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8) throw()
    {
        DoInvoke([arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8]( ComPtr<IUnknown>& p) -> HRESULT {
            return static_cast<TDelegateInterface*>(p.Get())->Invoke(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
        });
    }

    template < typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9 > 
        void InvokeAll(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9) throw()
    {
        DoInvoke([arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9]( ComPtr<IUnknown>& p) -> HRESULT {            
            return static_cast<TDelegateInterface*>(p.Get())->Invoke(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9); 
        });
    }

    size_t GetSize() const throw()
    {
        return targets_ == nullptr ? 0 : targets_->Length();
    }
protected:
    ComPtr<Details::EventTargetArray> targets_;
    Wrappers::SRWLock targetsPointerLock_;
    Wrappers::SRWLock addRemoveLock_;
};

} } // namespace ::Microsoft::WRL
    
#endif // _WRL_EVENT_H_
