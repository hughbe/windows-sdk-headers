// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.UI.Popups.2.h"
#include "winrt/Windows.UI.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_UI_Popups_IMessageDialog<D>::Title() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IMessageDialog)->get_Title(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Popups_IMessageDialog<D>::Title(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IMessageDialog)->put_Title(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> consume_Windows_UI_Popups_IMessageDialog<D>::Commands() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IMessageDialog)->get_Commands(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Popups_IMessageDialog<D>::DefaultCommandIndex() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IMessageDialog)->get_DefaultCommandIndex(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Popups_IMessageDialog<D>::DefaultCommandIndex(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IMessageDialog)->put_DefaultCommandIndex(value));
}

template <typename D> uint32_t consume_Windows_UI_Popups_IMessageDialog<D>::CancelCommandIndex() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IMessageDialog)->get_CancelCommandIndex(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Popups_IMessageDialog<D>::CancelCommandIndex(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IMessageDialog)->put_CancelCommandIndex(value));
}

template <typename D> hstring consume_Windows_UI_Popups_IMessageDialog<D>::Content() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IMessageDialog)->get_Content(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Popups_IMessageDialog<D>::Content(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IMessageDialog)->put_Content(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> consume_Windows_UI_Popups_IMessageDialog<D>::ShowAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> messageDialogAsyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IMessageDialog)->ShowAsync(put_abi(messageDialogAsyncOperation)));
    return messageDialogAsyncOperation;
}

template <typename D> Windows::UI::Popups::MessageDialogOptions consume_Windows_UI_Popups_IMessageDialog<D>::Options() const
{
    Windows::UI::Popups::MessageDialogOptions value{};
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IMessageDialog)->get_Options(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Popups_IMessageDialog<D>::Options(Windows::UI::Popups::MessageDialogOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IMessageDialog)->put_Options(get_abi(value)));
}

template <typename D> Windows::UI::Popups::MessageDialog consume_Windows_UI_Popups_IMessageDialogFactory<D>::Create(param::hstring const& content) const
{
    Windows::UI::Popups::MessageDialog messageDialog{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IMessageDialogFactory)->Create(get_abi(content), put_abi(messageDialog)));
    return messageDialog;
}

template <typename D> Windows::UI::Popups::MessageDialog consume_Windows_UI_Popups_IMessageDialogFactory<D>::CreateWithTitle(param::hstring const& content, param::hstring const& title) const
{
    Windows::UI::Popups::MessageDialog messageDialog{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IMessageDialogFactory)->CreateWithTitle(get_abi(content), get_abi(title), put_abi(messageDialog)));
    return messageDialog;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> consume_Windows_UI_Popups_IPopupMenu<D>::Commands() const
{
    Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IPopupMenu)->get_Commands(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> consume_Windows_UI_Popups_IPopupMenu<D>::ShowAsync(Windows::Foundation::Point const& invocationPoint) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IPopupMenu)->ShowAsync(get_abi(invocationPoint), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> consume_Windows_UI_Popups_IPopupMenu<D>::ShowForSelectionAsync(Windows::Foundation::Rect const& selection) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IPopupMenu)->ShowAsyncWithRect(get_abi(selection), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> consume_Windows_UI_Popups_IPopupMenu<D>::ShowForSelectionAsync(Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const
{
    Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand> asyncOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IPopupMenu)->ShowAsyncWithRectAndPlacement(get_abi(selection), get_abi(preferredPlacement), put_abi(asyncOperation)));
    return asyncOperation;
}

template <typename D> hstring consume_Windows_UI_Popups_IUICommand<D>::Label() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IUICommand)->get_Label(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Popups_IUICommand<D>::Label(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IUICommand)->put_Label(get_abi(value)));
}

template <typename D> Windows::UI::Popups::UICommandInvokedHandler consume_Windows_UI_Popups_IUICommand<D>::Invoked() const
{
    Windows::UI::Popups::UICommandInvokedHandler value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IUICommand)->get_Invoked(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Popups_IUICommand<D>::Invoked(Windows::UI::Popups::UICommandInvokedHandler const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IUICommand)->put_Invoked(get_abi(value)));
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Popups_IUICommand<D>::Id() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IUICommand)->get_Id(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Popups_IUICommand<D>::Id(Windows::Foundation::IInspectable const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IUICommand)->put_Id(get_abi(value)));
}

template <typename D> Windows::UI::Popups::UICommand consume_Windows_UI_Popups_IUICommandFactory<D>::Create(param::hstring const& label) const
{
    Windows::UI::Popups::UICommand instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IUICommandFactory)->Create(get_abi(label), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Popups::UICommand consume_Windows_UI_Popups_IUICommandFactory<D>::CreateWithHandler(param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& action) const
{
    Windows::UI::Popups::UICommand instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IUICommandFactory)->CreateWithHandler(get_abi(label), get_abi(action), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Popups::UICommand consume_Windows_UI_Popups_IUICommandFactory<D>::CreateWithHandlerAndId(param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& action, Windows::Foundation::IInspectable const& commandId) const
{
    Windows::UI::Popups::UICommand instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Popups::IUICommandFactory)->CreateWithHandlerAndId(get_abi(label), get_abi(action), get_abi(commandId), put_abi(instance)));
    return instance;
}

template <> struct delegate<Windows::UI::Popups::UICommandInvokedHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::UI::Popups::UICommandInvokedHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::UI::Popups::UICommandInvokedHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(void* command) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::UI::Popups::IUICommand const*>(&command));
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
struct produce<D, Windows::UI::Popups::IMessageDialog> : produce_base<D, Windows::UI::Popups::IMessageDialog>
{
    HRESULT __stdcall get_Title(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Title(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Commands(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand>>(this->shim().Commands());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultCommandIndex(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().DefaultCommandIndex());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultCommandIndex(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultCommandIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_CancelCommandIndex(uint32_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().CancelCommandIndex());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_CancelCommandIndex(uint32_t value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CancelCommandIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Content(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Content());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Content(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Content(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowAsync(void** messageDialogAsyncOperation) noexcept final
    {
        try
        {
            *messageDialogAsyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *messageDialogAsyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>>(this->shim().ShowAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Options(Windows::UI::Popups::MessageDialogOptions* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Popups::MessageDialogOptions>(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Options(Windows::UI::Popups::MessageDialogOptions value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Options(*reinterpret_cast<Windows::UI::Popups::MessageDialogOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Popups::IMessageDialogFactory> : produce_base<D, Windows::UI::Popups::IMessageDialogFactory>
{
    HRESULT __stdcall Create(HSTRING content, void** messageDialog) noexcept final
    {
        try
        {
            *messageDialog = nullptr;
            typename D::abi_guard guard(this->shim());
            *messageDialog = detach_from<Windows::UI::Popups::MessageDialog>(this->shim().Create(*reinterpret_cast<hstring const*>(&content)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithTitle(HSTRING content, HSTRING title, void** messageDialog) noexcept final
    {
        try
        {
            *messageDialog = nullptr;
            typename D::abi_guard guard(this->shim());
            *messageDialog = detach_from<Windows::UI::Popups::MessageDialog>(this->shim().CreateWithTitle(*reinterpret_cast<hstring const*>(&content), *reinterpret_cast<hstring const*>(&title)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Popups::IPopupMenu> : produce_base<D, Windows::UI::Popups::IPopupMenu>
{
    HRESULT __stdcall get_Commands(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::UI::Popups::IUICommand>>(this->shim().Commands());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowAsync(Windows::Foundation::Point invocationPoint, void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>>(this->shim().ShowAsync(*reinterpret_cast<Windows::Foundation::Point const*>(&invocationPoint)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowAsyncWithRect(Windows::Foundation::Rect selection, void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>>(this->shim().ShowForSelectionAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall ShowAsyncWithRectAndPlacement(Windows::Foundation::Rect selection, Windows::UI::Popups::Placement preferredPlacement, void** asyncOperation) noexcept final
    {
        try
        {
            *asyncOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            *asyncOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::UI::Popups::IUICommand>>(this->shim().ShowForSelectionAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&selection), *reinterpret_cast<Windows::UI::Popups::Placement const*>(&preferredPlacement)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Popups::IUICommand> : produce_base<D, Windows::UI::Popups::IUICommand>
{
    HRESULT __stdcall get_Label(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Label());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Label(HSTRING value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Label(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Invoked(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Popups::UICommandInvokedHandler>(this->shim().Invoked());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Invoked(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Invoked(*reinterpret_cast<Windows::UI::Popups::UICommandInvokedHandler const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Id(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Id(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Popups::IUICommandFactory> : produce_base<D, Windows::UI::Popups::IUICommandFactory>
{
    HRESULT __stdcall Create(HSTRING label, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Popups::UICommand>(this->shim().Create(*reinterpret_cast<hstring const*>(&label)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithHandler(HSTRING label, void* action, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Popups::UICommand>(this->shim().CreateWithHandler(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::UI::Popups::UICommandInvokedHandler const*>(&action)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateWithHandlerAndId(HSTRING label, void* action, void* commandId, void** instance) noexcept final
    {
        try
        {
            *instance = nullptr;
            typename D::abi_guard guard(this->shim());
            *instance = detach_from<Windows::UI::Popups::UICommand>(this->shim().CreateWithHandlerAndId(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::UI::Popups::UICommandInvokedHandler const*>(&action), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&commandId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Popups {

inline MessageDialog::MessageDialog(param::hstring const& content) :
    MessageDialog(get_activation_factory<MessageDialog, Windows::UI::Popups::IMessageDialogFactory>().Create(content))
{}

inline MessageDialog::MessageDialog(param::hstring const& content, param::hstring const& title) :
    MessageDialog(get_activation_factory<MessageDialog, Windows::UI::Popups::IMessageDialogFactory>().CreateWithTitle(content, title))
{}

inline PopupMenu::PopupMenu() :
    PopupMenu(get_activation_factory<PopupMenu>().ActivateInstance<PopupMenu>())
{}

inline UICommand::UICommand() :
    UICommand(get_activation_factory<UICommand>().ActivateInstance<UICommand>())
{}

inline UICommand::UICommand(param::hstring const& label) :
    UICommand(get_activation_factory<UICommand, Windows::UI::Popups::IUICommandFactory>().Create(label))
{}

inline UICommand::UICommand(param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& action) :
    UICommand(get_activation_factory<UICommand, Windows::UI::Popups::IUICommandFactory>().CreateWithHandler(label, action))
{}

inline UICommand::UICommand(param::hstring const& label, Windows::UI::Popups::UICommandInvokedHandler const& action, Windows::Foundation::IInspectable const& commandId) :
    UICommand(get_activation_factory<UICommand, Windows::UI::Popups::IUICommandFactory>().CreateWithHandlerAndId(label, action, commandId))
{}

inline UICommandSeparator::UICommandSeparator() :
    UICommandSeparator(get_activation_factory<UICommandSeparator>().ActivateInstance<UICommandSeparator>())
{}

template <typename L> UICommandInvokedHandler::UICommandInvokedHandler(L handler) :
    UICommandInvokedHandler(impl::make_delegate<UICommandInvokedHandler>(std::forward<L>(handler)))
{}

template <typename F> UICommandInvokedHandler::UICommandInvokedHandler(F* handler) :
    UICommandInvokedHandler([=](auto&&... args) { handler(args...); })
{}

template <typename O, typename M> UICommandInvokedHandler::UICommandInvokedHandler(O* object, M method) :
    UICommandInvokedHandler([=](auto&&... args) { ((*object).*(method))(args...); })
{}

inline void UICommandInvokedHandler::operator()(Windows::UI::Popups::IUICommand const& command) const
{
    check_hresult((*(impl::abi_t<UICommandInvokedHandler>**)this)->Invoke(get_abi(command)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Popups::IMessageDialog> : winrt::impl::hash_base<winrt::Windows::UI::Popups::IMessageDialog> {};
template<> struct hash<winrt::Windows::UI::Popups::IMessageDialogFactory> : winrt::impl::hash_base<winrt::Windows::UI::Popups::IMessageDialogFactory> {};
template<> struct hash<winrt::Windows::UI::Popups::IPopupMenu> : winrt::impl::hash_base<winrt::Windows::UI::Popups::IPopupMenu> {};
template<> struct hash<winrt::Windows::UI::Popups::IUICommand> : winrt::impl::hash_base<winrt::Windows::UI::Popups::IUICommand> {};
template<> struct hash<winrt::Windows::UI::Popups::IUICommandFactory> : winrt::impl::hash_base<winrt::Windows::UI::Popups::IUICommandFactory> {};
template<> struct hash<winrt::Windows::UI::Popups::MessageDialog> : winrt::impl::hash_base<winrt::Windows::UI::Popups::MessageDialog> {};
template<> struct hash<winrt::Windows::UI::Popups::PopupMenu> : winrt::impl::hash_base<winrt::Windows::UI::Popups::PopupMenu> {};
template<> struct hash<winrt::Windows::UI::Popups::UICommand> : winrt::impl::hash_base<winrt::Windows::UI::Popups::UICommand> {};
template<> struct hash<winrt::Windows::UI::Popups::UICommandSeparator> : winrt::impl::hash_base<winrt::Windows::UI::Popups::UICommandSeparator> {};

}

WINRT_WARNING_POP
