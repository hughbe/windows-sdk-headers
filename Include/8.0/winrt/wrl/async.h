//
// Copyright (C) Microsoft Corporation
// All rights reserved.
//
// Code in details namespace is for internal usage within the library code
//
#ifndef _WRL_ASYNC_H_
#define _WRL_ASYNC_H_

#ifdef _MSC_VER
#pragma once
#endif  // _MSC_VER

#include <asyncinfo.h>
#include <winerror.h>
#include <intrin.h>

#include <wrl\def.h>
#include <wrl\internal.h>
#include <wrl\implements.h>
#include <wrl\event.h>

#include <new.h>

#pragma warning(push)
// nonstandard extension used: override specifier 'override'
#pragma warning(disable: 4481)

namespace Microsoft {
namespace WRL {
namespace Details {
// maps internal definitions for AsyncStatus and defines states that are not client visible
enum AsyncStatusInternal 
{
    // non-client visible internal states
    _Undefined = -2,
    _Created = -1,

    // client visible states (must match AsyncStatus exactly)
    _Started = ::ABI::Windows::Foundation::AsyncStatus::Started,
    _Completed = ::ABI::Windows::Foundation::AsyncStatus::Completed,
    _Canceled = ::ABI::Windows::Foundation::AsyncStatus::Canceled,
    _Error = ::ABI::Windows::Foundation::AsyncStatus::Error,

    // non-client visible internal states
    _Closed
};

template < typename T >
struct DerefHelper;

template < typename T >
struct DerefHelper<T*>
{
    typedef T DerefType;
};
} // Details

// designates whether the "GetResults" method returns a single result (after complete fires) or multiple results
// (which are progressively consumable between Start state and before Close is called)
enum AsyncResultType
{
    SingleResult    = 0x0001,
    MultipleResults = 0x0002
};

// indicates how an attempt to transition to a terminal state of Completed or Error should behave with respect to 
// the (client-requested) Canceled state.
enum CancelTransitionPolicy
{
    // If the async operation is presently in a (client-requested) Canceled state, this indicates that
    // it will stay in the Canceled state as opposed to transitioning to a terminal Completed or Error
    // state.
    RemainCanceled = 0,

    // If the async operation is presently in a (client-requested) Canceled state, this indicates that
    // state should transition from that Canceled state to the terminal state of Completed or Error as 
    // determined by the call utilizing this flag.
    TransitionFromCanceled
};

// AsyncBase - base class that implements the WinRT Async state machine
// this base class is designed to be used with WRL to implement an async worker object
template < typename TComplete, typename TProgress = Details::Nil, AsyncResultType resultType = SingleResult >
class AsyncBase : public AsyncBase< TComplete, Details::Nil, resultType >
{
    typedef typename Details::ArgTraitsHelper< TProgress >::Traits ProgressTraits;
    friend class AsyncBase< TComplete, Details::Nil >;

public:

    // since this is designed to be used inside of an RuntimeClass<> template, we can 
    // only have a default ctor
    AsyncBase() : 
        progressDelegate_(nullptr)
    {
    }

    // Delegate Helpers
    STDMETHOD(PutOnProgress)(TProgress* progressHandler)
    {
        HRESULT hr = CheckValidStateForDelegateCall();
        if (SUCCEEDED(hr))
        {
            progressDelegate_ = progressHandler;
        }
        return hr;
    }

    STDMETHOD(GetOnProgress)(TProgress** progressHandler)
    {
        *progressHandler = nullptr;
        HRESULT hr = CheckValidStateForDelegateCall();
        if (SUCCEEDED(hr))
        {
            progressDelegate_.CopyTo(progressHandler);
        }
        return hr;
    }

    void FireProgress(const typename ProgressTraits::Arg2Type arg)
    {
        ComPtr< ::ABI::Windows::Foundation::IAsyncInfo > asyncInfo = this;
        ComPtr<Details::DerefHelper<ProgressTraits::Arg1Type>::DerefType> operationInterface;
        if (progressDelegate_ && SUCCEEDED(asyncInfo.As(&operationInterface)))
        {
            progressDelegate_->Invoke(operationInterface.Get(), arg);
        }
    }

    void FireCompletion(void) override
    {
        AsyncBase< TComplete, Details::Nil, resultType >::FireCompletion();
        if (progressDelegate_)
        {
            progressDelegate_ = nullptr;
        }
    }

private:
    ::Microsoft::WRL::ComPtr<TProgress> progressDelegate_;
};

template < typename TComplete, AsyncResultType resultType >
class AsyncBase< TComplete, Details::Nil, resultType > : public ::Microsoft::WRL::Implements< ::ABI::Windows::Foundation::IAsyncInfo >
{
    typedef typename Details::ArgTraitsHelper< TComplete >::Traits CompleteTraits;

public:
    // since this is designed to be used inside of a RuntimeClass<> template, we can 
    // only have a default ctor
    AsyncBase() : 
        currentStatus_(Details::AsyncStatusInternal::_Created), 
        id_(1), 
        errorCode_(S_OK),
        completeDelegate_(nullptr),
        cCompleteDelegateAssigned_(0),
        cCallbackMade_(0)
    {     
    }

    // IAsyncInfo::put_Id
    STDMETHOD(put_Id)(const unsigned int id)
    {
        if (id == 0)
        {
            return E_INVALIDARG;
        }
        id_ = id;

        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);

        return (current == Details::_Created ? S_OK : E_ILLEGAL_METHOD_CALL);
    }

    // IAsyncInfo::get_Id
    STDMETHOD(get_Id)(unsigned int *id) override
    {
        *id = id_;
        return CheckValidStateForAsyncInfoCall();
    }

    // IAsyncInfo::get_Status
    STDMETHOD(get_Status)(::ABI::Windows::Foundation::AsyncStatus *status) override
    {
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);
        *status = static_cast< ::ABI::Windows::Foundation::AsyncStatus >(current);
        return CheckValidStateForAsyncInfoCall();
    }

    // IAsyncInfo::get_ErrorCode
    STDMETHOD(get_ErrorCode)(HRESULT* errorCode) override
    {
        HRESULT hr = CheckValidStateForAsyncInfoCall();
        if (SUCCEEDED(hr))
        {
            ErrorCode(errorCode);
        }
        else
        {
            // Do not propagate the error and error info associated with the async error if this call generated
            // a specific error itself.
            *errorCode = hr;
        }
        return hr;
    }

protected:
    // Start - this is not externally visible since async operations "hot start" before returning to the caller
    STDMETHOD(Start)(void)
    {
        HRESULT hr = S_OK;
        if (TransitionToState(Details::_Started))
        {
            hr = OnStart();
        }
        else
        {
            hr = E_ILLEGAL_STATE_CHANGE;
        }
        return hr;
    }

public:
    // IAsyncInfo::Cancel
    STDMETHOD(Cancel)(void)
    {
        if (TransitionToState(Details::_Canceled))
        {
            OnCancel();
        }
        return S_OK;
    }

    // IAsyncInfo::Close
    STDMETHOD(Close)(void) override
    {
        HRESULT hr = S_OK;
        if (TransitionToState(Details::_Closed)) 
        {
            OnClose();
        }
        else    // illegal state change
        {
            Details::AsyncStatusInternal current = Details::_Undefined;
            CurrentStatus(&current);
            
            if (current == Details::_Closed)
            {
                hr = S_OK;          // Closed => Closed transiiton is just ignored
            }
            else
            {
                hr = E_ILLEGAL_STATE_CHANGE;
            }
        }
        return hr;    
    }

    // Delegate helpers
    STDMETHOD(PutOnComplete)(TComplete* completeHandler)
    {
        HRESULT hr = CheckValidStateForDelegateCall();
        if (SUCCEEDED(hr))
        {
            // this delegate property is "write once"
            if (InterlockedIncrement(&cCompleteDelegateAssigned_) == 1)
            {
                completeDelegate_ = completeHandler;

                // Guarantee that the write of completeDelegate_ is ordered with respect to the read of state below
                // as perceived from FireCompletion on another thread.
                MemoryBarrier();

                // in the "hot start" case, put_Completed could have been called after the async operation has hit
                // a terminal state.  If so, fire the completion immediately. 
                if (IsTerminalState())
                {
                    FireCompletion();
                }
            }
            else
            {
                hr = E_ILLEGAL_DELEGATE_ASSIGNMENT;
            }
        }
        return hr;
    }

    STDMETHOD(GetOnComplete)(TComplete** completeHandler)
    {
        *completeHandler = nullptr;
        HRESULT hr = CheckValidStateForDelegateCall();
        if (SUCCEEDED(hr))
        {
            completeDelegate_.CopyTo(completeHandler);
        }
        return hr;
    }

    virtual void FireCompletion()
    {
        // must do this *before* the InterlockedIncrement!
        TryTransitionToCompleted();

        __WRL_ASSERT__(IsTerminalState() && "Must only call FireCompletion when operation is in terminal state");

        // we guarantee that completion can only ever be fired once 
        if (completeDelegate_ != nullptr && InterlockedIncrement(&cCallbackMade_) == 1)
        {
            ComPtr< ::ABI::Windows::Foundation::IAsyncInfo> asyncInfo = this;
            ComPtr<Details::DerefHelper<CompleteTraits::Arg1Type>::DerefType> operationInterface;

            if (SUCCEEDED(asyncInfo.As(&operationInterface)))
            {
                Details::AsyncStatusInternal current = Details::_Undefined;
                CurrentStatus(&current);

                HRESULT hr = completeDelegate_->Invoke(operationInterface.Get(), static_cast< ::ABI::Windows::Foundation::AsyncStatus>(current));
                if(FAILED(hr))
                {
                    ::RoTransformError(hr, S_OK, nullptr);
                }
                completeDelegate_ = nullptr;
            }
        }
    }

protected:

    inline void CurrentStatus(Details::AsyncStatusInternal *status) 
    {
        ::_InterlockedCompareExchange(reinterpret_cast<LONG*>(status), currentStatus_, static_cast<LONG>(*status));
        __WRL_ASSERT__(*status != Details::_Undefined);
    }

    // This method returns the error code stored as a result of a transition into the error state.
    // In addition, if there is any restricted error information associated with the error that was captured at the time
    // of the error transition, it will be associated with the calling thread via a SetRestrictedErrorInfo call.
    inline void ErrorCode(HRESULT *error) 
    {
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);

        // Do not allow visibility of the error until such point as we have had a successful state transition into the error state.
        // The error + information is not a single atomic quantity.  It is not considered "published" until we are actively in the error state.
        if (current != Details::_Error)
        {
            *error = S_OK;
        }
        else
        {
            ::_InterlockedCompareExchange(reinterpret_cast<LONG*>(error), errorCode_, static_cast<LONG>(*error));
            if (errorInfo_ != nullptr)
            {
                SetRestrictedErrorInfo(errorInfo_.Get());
            }
        }
    }

    bool TryTransitionToCompleted(CancelTransitionPolicy cancelBehavior = CancelTransitionPolicy::RemainCanceled)
    {
        bool bTransition = TransitionToState(Details::AsyncStatusInternal::_Completed);
        if (!bTransition && cancelBehavior == CancelTransitionPolicy::TransitionFromCanceled)
        {
            bTransition = TransitionCanceledToCompleted();
        }
        return bTransition;
    }

    bool TryTransitionToError(const HRESULT error, CancelTransitionPolicy cancelBehavior = CancelTransitionPolicy::RemainCanceled)
    {
        // In addition to the result being transitioned to, there might be restricted error information associated with the error.  It
        // is assumed that such is on the calling thread.  If we successfully transition to the error state with "error" as the code,
        // we must also capture the error info and funnel it over to callers of GetResults / ErrorCode.  Our call to
        // GetRestrictedErrorInfo below will capture the error info after which, it is owned by this async operation.
        //
        // Since there are multiple pieces of information and the capturing of these are not atomic, no one from the outside is allowed
        // to view these until the state transition to error is complete.  This happens in two parts:
        //
        // - A successful CAS from S_OK to error (meaning that this error is the one being captures)
        // - A successful state change into the error state (via the Transition* call below)

        bool bTransition = false;
        if (::_InterlockedCompareExchange(reinterpret_cast<volatile LONG*>(&errorCode_), error, S_OK) == S_OK)
        {
            (void)GetRestrictedErrorInfo(&errorInfo_);

            // This thread is the "owner" of the rights to transition to the error state.
            bTransition = TransitionToState(Details::AsyncStatusInternal::_Error);
            if (!bTransition && cancelBehavior == CancelTransitionPolicy::TransitionFromCanceled)
            {
                bTransition = TransitionCanceledToError();
            }
        }

        // if we return true, then we did a valid state transition
        // queue firing of completed event (cannot be done from this call frame)
        // otherwise we are already in a terminal state: error, canceled, completed, or closed
        // and we ignore the transition request to the Error state
        return bTransition;
    }

    // This method checks to see if the delegate properties can be 
    // modified in the current state and generates the appropriate 
    // errro hr in the case of violation.
    inline HRESULT CheckValidStateForDelegateCall()
    {
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);
        if (current == Details::_Closed)
        {
            return E_ILLEGAL_METHOD_CALL;
        }
        return S_OK;
    }

    // This method checks to see if results can be collected in the 
    // current state and generates the appropriate error hr in 
    // the case of a violation.
    inline HRESULT CheckValidStateForResultsCall()
    {
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);

        if (current == Details::_Error)
        {
            HRESULT hr;

            // Make sure to propagate any restricted error info associated with the asynchronous failure.
            ErrorCode(&hr);
            return hr;
        }
#pragma warning(push)
#pragma warning(disable: 4127) // Conditional expression is constant
        // single result only legal in Completed state
        if (resultType == SingleResult)
#pragma warning(pop)
        {
            if (current != Details::_Completed)
            {
                return E_ILLEGAL_METHOD_CALL;
            }
        }
        // multiple results can be called after async operation is running (started) and before/after Completed
        else if (current != Details::_Started && 
                 current != Details::_Canceled && 
                 current != Details::_Completed)
        {
            return E_ILLEGAL_METHOD_CALL;
        }
        return S_OK;
    }
    
    // This method can be called by derived classes periodically to determine 
    // whether the asynchronous operation should continue processing or should 
    // be halted.
    inline bool ContinueAsyncOperation()
    {
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);
        return (current == Details::_Started);
    }

    // These methods are used to allow the async worker implementation do work on
    // state transitions. No real "work" should be done in these methods. In other words
    // they should not block for a long time on UI timescales.
    virtual HRESULT OnStart(void) = 0;
    virtual void OnClose(void) = 0;
    virtual void OnCancel(void) = 0;

private:

    // This method is used to check if calls to the AsyncInfo properties
    // (id, status, errorcode) are legal in the current state. It also 
    // generates the appropriate error hr to return in the case of an 
    // illegal call.
    inline HRESULT CheckValidStateForAsyncInfoCall()
    {
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);
        if (current == Details::_Closed)
        {
            return E_ILLEGAL_METHOD_CALL;
        }
        else if (current == Details::_Created)  // error in async ABI object - returned to caller not started
        {
            return E_ASYNC_OPERATION_NOT_STARTED;
        }

        return S_OK;
    }

    inline bool TransitionToState(const Details::AsyncStatusInternal newState)
    {
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);

        // This enforces the valid state transitions of the asynchronous worker object 
        // state machine.
        switch(newState)
        {
        case Details::_Started:
            if (current != Details::_Created) 
            {
                return false;
            }
            break;
        case Details::_Completed:
            if (current != Details::_Started) 
            {
                return false;
            }
            break;
        case Details::_Canceled:
            if (current != Details::_Started) 
            {
                return false;
            }
            break;
        case Details::_Error:
            if (current != Details::_Started) 
            {
                return false;
            }
            break;
        case Details::_Closed:
            if (!IsTerminalState(current)) 
            {
                return false;
            }
            break;
        default:
            return false;
            break;
        }
        // attempt the transition to the new state
        // Note: if currentStatus_ == current, then there was no intervening write 
        // by the async work object and the swap succeeded. 
        Details::AsyncStatusInternal retState = static_cast<Details::AsyncStatusInternal>(
                ::_InterlockedCompareExchange(reinterpret_cast<volatile LONG*>(&currentStatus_), 
                                            newState, 
                                            static_cast<LONG>(current)));

        // ICE returns the former state, if the returned state and the 
        // state we captured at the beginning of this method are the same, 
        // the swap succeeded.
        return (retState == current);
    }

protected:

    // It is legal for an async operation object to transition from (client-requested) Canceled 
    // state to Completed if, for example, the operation completed near the time of the cancellation request.
    // An operation which is no longer responsive to client requests to cancel and intends to complete 
    // successfully despite any new incoming requests to cancel should call TryTransitionToCompleted and
    // pass TransitionFromCanceled instead of using this method.
    inline bool TransitionCanceledToCompleted()
    {
        // this is somewhat overly pessimistic since the client cannot possibly transition
        // the operation out of the canceled state (only the async operation itself can call 
        // this method)
        Details::AsyncStatusInternal retState = static_cast<Details::AsyncStatusInternal>(
                ::_InterlockedCompareExchange(reinterpret_cast<volatile LONG*>(&currentStatus_), 
                                            Details::AsyncStatusInternal::_Completed, 
                                            Details::AsyncStatusInternal::_Canceled));
        return (retState == Details::AsyncStatusInternal::_Canceled);
    }

    // It is legal for an async operation object to transition from (client-requested) Canceled 
    // state to the error state if, for example, the operation encountered an error near the time 
    // of the cancellation request.  An operation which is no longer responsive to client requests to cancel
    // and intends to complete with an error despite any new incoming requests to cancel should call
    // TryTransitionToError and pass TransitionFromCanceled instead of using this method.
    inline bool TransitionCanceledToError()
    {
        Details::AsyncStatusInternal retState = static_cast<Details::AsyncStatusInternal>(
                ::_InterlockedCompareExchange(reinterpret_cast<volatile LONG*>(&currentStatus_), 
                                            Details::AsyncStatusInternal::_Error, 
                                            Details::AsyncStatusInternal::_Canceled));
        return (retState == Details::AsyncStatusInternal::_Canceled);
    }

    inline bool IsTerminalState()
    {
        Details::AsyncStatusInternal current = Details::_Undefined;
        CurrentStatus(&current);
        return IsTerminalState(current);
    }

    inline bool IsTerminalState(Details::AsyncStatusInternal status)
    {
        return (status == Details::_Error || 
                status == Details::_Canceled || 
                status == Details::_Completed || 
                status == Details::_Closed);
    }

    long                                  cCallbackMade_;
    long                                  cCompleteDelegateAssigned_;

private:
    ::Microsoft::WRL::ComPtr<TComplete>     completeDelegate_;
    ::Microsoft::WRL::ComPtr<IRestrictedErrorInfo> errorInfo_;
    Details::AsyncStatusInternal volatile currentStatus_;
    HRESULT volatile                      errorCode_;
    unsigned int id_;
};

}} // namespace Microsoft::WRL

#pragma warning(pop)

#endif // _WRL_ASYNC_H_
