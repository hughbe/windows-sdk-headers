// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.2.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.Provider.2.h"
#include "winrt/Windows.ApplicationModel.Contacts.h"

namespace winrt::impl {

template <typename D> Windows::ApplicationModel::Contacts::Provider::AddContactResult consume_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI<D>::AddContact(param::hstring const& id, Windows::ApplicationModel::Contacts::Contact const& contact) const
{
    Windows::ApplicationModel::Contacts::Provider::AddContactResult result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::Provider::IContactPickerUI)->AddContact(get_abi(id), get_abi(contact), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI<D>::RemoveContact(param::hstring const& id) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::Provider::IContactPickerUI)->RemoveContact(get_abi(id)));
}

template <typename D> bool consume_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI<D>::ContainsContact(param::hstring const& id) const
{
    bool isContained{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::Provider::IContactPickerUI)->ContainsContact(get_abi(id), &isContained));
    return isContained;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI<D>::DesiredFields() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::Provider::IContactPickerUI)->get_DesiredFields(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactSelectionMode consume_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI<D>::SelectionMode() const
{
    Windows::ApplicationModel::Contacts::ContactSelectionMode value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::Provider::IContactPickerUI)->get_SelectionMode(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI<D>::ContactRemoved(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::Provider::ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::Provider::IContactPickerUI)->add_ContactRemoved(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Contacts::Provider::IContactPickerUI> consume_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI<D>::ContactRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::Provider::ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI>(this, &abi_t<Windows::ApplicationModel::Contacts::Provider::IContactPickerUI>::remove_ContactRemoved, ContactRemoved(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI<D>::ContactRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::Provider::IContactPickerUI)->remove_ContactRemoved(get_abi(token)));
}

template <typename D> Windows::ApplicationModel::Contacts::Provider::AddContactResult consume_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI2<D>::AddContact(Windows::ApplicationModel::Contacts::Contact const& contact) const
{
    Windows::ApplicationModel::Contacts::Provider::AddContactResult result{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2)->AddContact(get_abi(contact), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactFieldType> consume_Windows_ApplicationModel_Contacts_Provider_IContactPickerUI2<D>::DesiredFieldsWithContactFieldType() const
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactFieldType> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2)->get_DesiredFieldsWithContactFieldType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_Provider_IContactRemovedEventArgs<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs)->get_Id(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI> : produce_base<D, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI>
{
    HRESULT __stdcall AddContact(HSTRING id, void* contact, Windows::ApplicationModel::Contacts::Provider::AddContactResult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Contacts::Provider::AddContactResult>(this->shim().AddContact(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall RemoveContact(HSTRING id) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveContact(*reinterpret_cast<hstring const*>(&id));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ContainsContact(HSTRING id, bool* isContained) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *isContained = detach_from<bool>(this->shim().ContainsContact(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredFields(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().DesiredFields());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_SelectionMode(Windows::ApplicationModel::Contacts::ContactSelectionMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Contacts::ContactSelectionMode>(this->shim().SelectionMode());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall add_ContactRemoved(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().ContactRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::Provider::ContactPickerUI, Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_ContactRemoved(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContactRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2> : produce_base<D, Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2>
{
    HRESULT __stdcall AddContact(void* contact, Windows::ApplicationModel::Contacts::Provider::AddContactResult* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Contacts::Provider::AddContactResult>(this->shim().AddContact(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredFieldsWithContactFieldType(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Contacts::ContactFieldType>>(this->shim().DesiredFieldsWithContactFieldType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs> : produce_base<D, Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts::Provider {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::Provider::IContactPickerUI> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Contacts::Provider::IContactPickerUI> {};
template<> struct hash<winrt::Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Contacts::Provider::IContactPickerUI2> {};
template<> struct hash<winrt::Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Contacts::Provider::IContactRemovedEventArgs> {};
template<> struct hash<winrt::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Contacts::Provider::ContactPickerUI> {};
template<> struct hash<winrt::Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs> : winrt::impl::hash_base<winrt::Windows::ApplicationModel::Contacts::Provider::ContactRemovedEventArgs> {};

}

WINRT_WARNING_POP
