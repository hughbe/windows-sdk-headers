// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.Xaml.Interop.2.h"
#include "winrt/Windows.UI.Xaml.h"

namespace winrt::impl {

template <typename D> Windows::UI::Xaml::Interop::IBindableIterator consume_Windows_UI_Xaml_Interop_IBindableIterable<D>::First() const
{
    Windows::UI::Xaml::Interop::IBindableIterator returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableIterable)->First(put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Interop_IBindableIterator<D>::Current() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableIterator)->get_Current(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Interop_IBindableIterator<D>::HasCurrent() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableIterator)->get_HasCurrent(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Interop_IBindableIterator<D>::MoveNext() const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableIterator)->MoveNext(&returnValue));
    return returnValue;
}

template <typename D> event_token consume_Windows_UI_Xaml_Interop_IBindableObservableVector<D>::VectorChanged(Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableObservableVector)->add_VectorChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Interop::IBindableObservableVector> consume_Windows_UI_Xaml_Interop_IBindableObservableVector<D>::VectorChanged(auto_revoke_t, Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Interop::IBindableObservableVector>(this, &abi_t<Windows::UI::Xaml::Interop::IBindableObservableVector>::remove_VectorChanged, VectorChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Interop_IBindableObservableVector<D>::VectorChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableObservableVector)->remove_VectorChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Interop_IBindableVector<D>::GetAt(uint32_t index) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->GetAt(index, put_abi(returnValue)));
    return returnValue;
}

template <typename D> uint32_t consume_Windows_UI_Xaml_Interop_IBindableVector<D>::Size() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->get_Size(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Interop::IBindableVectorView consume_Windows_UI_Xaml_Interop_IBindableVector<D>::GetView() const
{
    Windows::UI::Xaml::Interop::IBindableVectorView returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->GetView(put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Interop_IBindableVector<D>::IndexOf(Windows::Foundation::IInspectable const& value, uint32_t& index) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->IndexOf(get_abi(value), &index, &returnValue));
    return returnValue;
}

template <typename D> void consume_Windows_UI_Xaml_Interop_IBindableVector<D>::SetAt(uint32_t index, Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->SetAt(index, get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Interop_IBindableVector<D>::InsertAt(uint32_t index, Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->InsertAt(index, get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Interop_IBindableVector<D>::RemoveAt(uint32_t index) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->RemoveAt(index));
}

template <typename D> void consume_Windows_UI_Xaml_Interop_IBindableVector<D>::Append(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->Append(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Xaml_Interop_IBindableVector<D>::RemoveAtEnd() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->RemoveAtEnd());
}

template <typename D> void consume_Windows_UI_Xaml_Interop_IBindableVector<D>::Clear() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableVector)->Clear());
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Interop_IBindableVectorView<D>::GetAt(uint32_t index) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableVectorView)->GetAt(index, put_abi(returnValue)));
    return returnValue;
}

template <typename D> uint32_t consume_Windows_UI_Xaml_Interop_IBindableVectorView<D>::Size() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableVectorView)->get_Size(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Interop_IBindableVectorView<D>::IndexOf(Windows::Foundation::IInspectable const& value, uint32_t& index) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::IBindableVectorView)->IndexOf(get_abi(value), &index, &returnValue));
    return returnValue;
}

template <typename D> event_token consume_Windows_UI_Xaml_Interop_INotifyCollectionChanged<D>::CollectionChanged(Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::INotifyCollectionChanged)->add_CollectionChanged(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Interop::INotifyCollectionChanged> consume_Windows_UI_Xaml_Interop_INotifyCollectionChanged<D>::CollectionChanged(auto_revoke_t, Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Interop::INotifyCollectionChanged>(this, &abi_t<Windows::UI::Xaml::Interop::INotifyCollectionChanged>::remove_CollectionChanged, CollectionChanged(value));
}

template <typename D> void consume_Windows_UI_Xaml_Interop_INotifyCollectionChanged<D>::CollectionChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::INotifyCollectionChanged)->remove_CollectionChanged(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Interop::NotifyCollectionChangedAction consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs<D>::Action() const
{
    Windows::UI::Xaml::Interop::NotifyCollectionChangedAction value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs)->get_Action(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Interop::IBindableVector consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs<D>::NewItems() const
{
    Windows::UI::Xaml::Interop::IBindableVector value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs)->get_NewItems(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Interop::IBindableVector consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs<D>::OldItems() const
{
    Windows::UI::Xaml::Interop::IBindableVector value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs)->get_OldItems(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs<D>::NewStartingIndex() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs)->get_NewStartingIndex(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs<D>::OldStartingIndex() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs)->get_OldStartingIndex(&value));
    return value;
}

template <typename D> Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgsFactory<D>::CreateInstanceWithAllParameters(Windows::UI::Xaml::Interop::NotifyCollectionChangedAction const& action, Windows::UI::Xaml::Interop::IBindableVector const& newItems, Windows::UI::Xaml::Interop::IBindableVector const& oldItems, int32_t newIndex, int32_t oldIndex, Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory)->CreateInstanceWithAllParameters(get_abi(action), get_abi(newItems), get_abi(oldItems), newIndex, oldIndex, get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <> struct delegate<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* vector, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::UI::Xaml::Interop::IBindableObservableVector const*>(&vector), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* sender, void* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&sender), *reinterpret_cast<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Interop::IBindableIterable> : produce_base<D, Windows::UI::Xaml::Interop::IBindableIterable>
{
    HRESULT __stdcall First(void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Interop::IBindableIterator>(this->shim().First());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Interop::IBindableIterator> : produce_base<D, Windows::UI::Xaml::Interop::IBindableIterator>
{
    HRESULT __stdcall get_Current(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Current());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_HasCurrent(bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().HasCurrent());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall MoveNext(bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().MoveNext());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Interop::IBindableObservableVector> : produce_base<D, Windows::UI::Xaml::Interop::IBindableObservableVector>
{
    HRESULT __stdcall add_VectorChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().VectorChanged(*reinterpret_cast<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_VectorChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VectorChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Interop::IBindableVector> : produce_base<D, Windows::UI::Xaml::Interop::IBindableVector>
{
    HRESULT __stdcall GetAt(uint32_t index, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IInspectable>(this->shim().GetAt(index));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Size(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetView(void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::UI::Xaml::Interop::IBindableVectorView>(this->shim().GetView());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IndexOf(void* value, uint32_t* index, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().IndexOf(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value), *index));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SetAt(uint32_t index, void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAt(index, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall InsertAt(uint32_t index, void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertAt(index, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveAt(uint32_t index) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAt(index);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Append(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Append(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveAtEnd() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveAtEnd();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall Clear() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Clear();
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Interop::IBindableVectorView> : produce_base<D, Windows::UI::Xaml::Interop::IBindableVectorView>
{
    HRESULT __stdcall GetAt(uint32_t index, void** returnValue) noexcept final
    {
        try
        {
            *returnValue = nullptr;
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<Windows::Foundation::IInspectable>(this->shim().GetAt(index));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Size(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IndexOf(void* value, uint32_t* index, bool* returnValue) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_from<bool>(this->shim().IndexOf(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value), *index));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Interop::INotifyCollectionChanged> : produce_base<D, Windows::UI::Xaml::Interop::INotifyCollectionChanged>
{
    HRESULT __stdcall add_CollectionChanged(void* value, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().CollectionChanged(*reinterpret_cast<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_CollectionChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CollectionChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs> : produce_base<D, Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs>
{
    HRESULT __stdcall get_Action(Windows::UI::Xaml::Interop::NotifyCollectionChangedAction* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Interop::NotifyCollectionChangedAction>(this->shim().Action());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NewItems(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Interop::IBindableVector>(this->shim().NewItems());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OldItems(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Xaml::Interop::IBindableVector>(this->shim().OldItems());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_NewStartingIndex(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().NewStartingIndex());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_OldStartingIndex(int32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().OldStartingIndex());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory> : produce_base<D, Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory>
{
    HRESULT __stdcall CreateInstanceWithAllParameters(Windows::UI::Xaml::Interop::NotifyCollectionChangedAction action, void* newItems, void* oldItems, int32_t newIndex, int32_t oldIndex, void* outer, void** inner, void** instance) noexcept final
    {
        try
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_from<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs>(this->shim().CreateInstanceWithAllParameters(*reinterpret_cast<Windows::UI::Xaml::Interop::NotifyCollectionChangedAction const*>(&action), *reinterpret_cast<Windows::UI::Xaml::Interop::IBindableVector const*>(&newItems), *reinterpret_cast<Windows::UI::Xaml::Interop::IBindableVector const*>(&oldItems), newIndex, oldIndex, *reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Interop {

inline NotifyCollectionChangedEventArgs::NotifyCollectionChangedEventArgs(Windows::UI::Xaml::Interop::NotifyCollectionChangedAction const& action, Windows::UI::Xaml::Interop::IBindableVector const& newItems, Windows::UI::Xaml::Interop::IBindableVector const& oldItems, int32_t newIndex, int32_t oldIndex)
{
    Windows::Foundation::IInspectable outer, inner;
    *this = get_activation_factory<NotifyCollectionChangedEventArgs, Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory>().CreateInstanceWithAllParameters(action, newItems, oldItems, newIndex, oldIndex, outer, inner);
}

template <typename L> BindableVectorChangedEventHandler::BindableVectorChangedEventHandler(L handler) :
    BindableVectorChangedEventHandler(impl::make_delegate<BindableVectorChangedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> BindableVectorChangedEventHandler::BindableVectorChangedEventHandler(F* handler) :
    BindableVectorChangedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> BindableVectorChangedEventHandler::BindableVectorChangedEventHandler(O* object, M method) :
    BindableVectorChangedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void BindableVectorChangedEventHandler::operator()(Windows::UI::Xaml::Interop::IBindableObservableVector const& vector, Windows::Foundation::IInspectable const& e) const
{
    check_hresult((*(impl::abi_t<BindableVectorChangedEventHandler>**)this)->Invoke(get_abi(vector), get_abi(e)));
}

template <typename L> NotifyCollectionChangedEventHandler::NotifyCollectionChangedEventHandler(L handler) :
    NotifyCollectionChangedEventHandler(impl::make_delegate<NotifyCollectionChangedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> NotifyCollectionChangedEventHandler::NotifyCollectionChangedEventHandler(F* handler) :
    NotifyCollectionChangedEventHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> NotifyCollectionChangedEventHandler::NotifyCollectionChangedEventHandler(O* object, M method) :
    NotifyCollectionChangedEventHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void NotifyCollectionChangedEventHandler::operator()(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs const& e) const
{
    check_hresult((*(impl::abi_t<NotifyCollectionChangedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

template <typename D, typename... Interfaces>
struct NotifyCollectionChangedEventArgsT :
    implements<D, Windows::Foundation::IInspectable, composing, Interfaces...>,
    impl::require<D, Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs>
{
    using composable = NotifyCollectionChangedEventArgs;

protected:
    NotifyCollectionChangedEventArgsT(Windows::UI::Xaml::Interop::NotifyCollectionChangedAction const& action, Windows::UI::Xaml::Interop::IBindableVector const& newItems, Windows::UI::Xaml::Interop::IBindableVector const& oldItems, int32_t newIndex, int32_t oldIndex)
    {
        get_activation_factory<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs, Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory>().CreateInstanceWithAllParameters(action, newItems, oldItems, newIndex, oldIndex, *this, this->m_inner);
    }
};

}

namespace winrt::impl
{
    template <typename T>
    struct xaml_typename_name
    {
        static constexpr std::wstring_view value() noexcept
        {
            return name_of<T>();
        }
    };
    template <>
    struct xaml_typename_name<Windows::Foundation::Point>
    {
        static constexpr std::wstring_view value() noexcept
        {
            return L"Point"sv;
        }
    };
    template <>
    struct xaml_typename_name<Windows::Foundation::Size>
    {
        static constexpr std::wstring_view value() noexcept
        {
            return L"Size"sv;
        }
    };
    template <>
    struct xaml_typename_name<Windows::Foundation::Rect>
    {
        static constexpr std::wstring_view value() noexcept
        {
            return L"Rect"sv;
        }
    };
    template <>
    struct xaml_typename_name<Windows::Foundation::DateTime>
    {
        static constexpr std::wstring_view value() noexcept
        {
            return L"DateTime"sv;
        }
    };
    template <>
    struct xaml_typename_name<Windows::Foundation::TimeSpan>
    {
        static constexpr std::wstring_view value() noexcept
        {
            return L"TimeSpan"sv;
        }
    };

    template <typename T>
    struct xaml_typename_kind
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Metadata;
    };
    template<>
    struct xaml_typename_kind<bool>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<char16_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<uint8_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<int8_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<uint16_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<int16_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<uint32_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<int32_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<uint64_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<int64_t>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<float>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<double>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<hstring>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
    template<>
    struct xaml_typename_kind<GUID>
    {
        static constexpr Windows::UI::Xaml::Interop::TypeKind value = Windows::UI::Xaml::Interop::TypeKind::Primitive;
    };
}

namespace winrt
{
    template <typename T>
    inline Windows::UI::Xaml::Interop::TypeName xaml_typename()
    {
        static_assert(impl::has_category_v<T>, "T must be WinRT type.");
        static const Windows::UI::Xaml::Interop::TypeName name{ hstring{ impl::xaml_typename_name<T>::value() }, impl::xaml_typename_kind<T>::value };
        return name;
    }
}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Interop::IBindableIterable> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Interop::IBindableIterable> {};
template<> struct hash<winrt::Windows::UI::Xaml::Interop::IBindableIterator> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Interop::IBindableIterator> {};
template<> struct hash<winrt::Windows::UI::Xaml::Interop::IBindableObservableVector> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Interop::IBindableObservableVector> {};
template<> struct hash<winrt::Windows::UI::Xaml::Interop::IBindableVector> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Interop::IBindableVector> {};
template<> struct hash<winrt::Windows::UI::Xaml::Interop::IBindableVectorView> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Interop::IBindableVectorView> {};
template<> struct hash<winrt::Windows::UI::Xaml::Interop::INotifyCollectionChanged> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Interop::INotifyCollectionChanged> {};
template<> struct hash<winrt::Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs> {};
template<> struct hash<winrt::Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory> {};
template<> struct hash<winrt::Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs> {};

}

WINRT_WARNING_POP
