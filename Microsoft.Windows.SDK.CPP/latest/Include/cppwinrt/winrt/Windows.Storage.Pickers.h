// C++/WinRT v1.0.180821.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include "winrt/base.h"

#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Pickers.2.h"
#include "winrt/Windows.Storage.h"

namespace winrt::impl {

template <typename D> Windows::Storage::Pickers::PickerViewMode consume_Windows_Storage_Pickers_IFileOpenPicker<D>::ViewMode() const
{
    Windows::Storage::Pickers::PickerViewMode value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->get_ViewMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileOpenPicker<D>::ViewMode(Windows::Storage::Pickers::PickerViewMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->put_ViewMode(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFileOpenPicker<D>::SettingsIdentifier() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->get_SettingsIdentifier(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileOpenPicker<D>::SettingsIdentifier(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->put_SettingsIdentifier(get_abi(value)));
}

template <typename D> Windows::Storage::Pickers::PickerLocationId consume_Windows_Storage_Pickers_IFileOpenPicker<D>::SuggestedStartLocation() const
{
    Windows::Storage::Pickers::PickerLocationId value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->get_SuggestedStartLocation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileOpenPicker<D>::SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->put_SuggestedStartLocation(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFileOpenPicker<D>::CommitButtonText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->get_CommitButtonText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileOpenPicker<D>::CommitButtonText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->put_CommitButtonText(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_Pickers_IFileOpenPicker<D>::FileTypeFilter() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->get_FileTypeFilter(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_Pickers_IFileOpenPicker<D>::PickSingleFileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> pickSingleFileOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->PickSingleFileAsync(put_abi(pickSingleFileOperation)));
    return pickSingleFileOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> consume_Windows_Storage_Pickers_IFileOpenPicker<D>::PickMultipleFilesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> pickMultipleFilesOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->PickMultipleFilesAsync(put_abi(pickMultipleFilesOperation)));
    return pickMultipleFilesOperation;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_Storage_Pickers_IFileOpenPicker2<D>::ContinuationData() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker2)->get_ContinuationData(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileOpenPicker2<D>::PickSingleFileAndContinue() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker2)->PickSingleFileAndContinue());
}

template <typename D> void consume_Windows_Storage_Pickers_IFileOpenPicker2<D>::PickMultipleFilesAndContinue() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker2)->PickMultipleFilesAndContinue());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_Pickers_IFileOpenPickerStatics<D>::ResumePickSingleFileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> pickSingleFileOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPickerStatics)->ResumePickSingleFileAsync(put_abi(pickSingleFileOperation)));
    return pickSingleFileOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_Pickers_IFileOpenPickerWithOperationId<D>::PickSingleFileAsync(param::hstring const& pickerOperationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> pickSingleFileOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPickerWithOperationId)->PickSingleFileAsync(get_abi(pickerOperationId), put_abi(pickSingleFileOperation)));
    return pickSingleFileOperation;
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFileSavePicker<D>::SettingsIdentifier() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->get_SettingsIdentifier(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileSavePicker<D>::SettingsIdentifier(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->put_SettingsIdentifier(get_abi(value)));
}

template <typename D> Windows::Storage::Pickers::PickerLocationId consume_Windows_Storage_Pickers_IFileSavePicker<D>::SuggestedStartLocation() const
{
    Windows::Storage::Pickers::PickerLocationId value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->get_SuggestedStartLocation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileSavePicker<D>::SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->put_SuggestedStartLocation(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFileSavePicker<D>::CommitButtonText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->get_CommitButtonText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileSavePicker<D>::CommitButtonText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->put_CommitButtonText(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>> consume_Windows_Storage_Pickers_IFileSavePicker<D>::FileTypeChoices() const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->get_FileTypeChoices(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFileSavePicker<D>::DefaultFileExtension() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->get_DefaultFileExtension(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileSavePicker<D>::DefaultFileExtension(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->put_DefaultFileExtension(get_abi(value)));
}

template <typename D> Windows::Storage::StorageFile consume_Windows_Storage_Pickers_IFileSavePicker<D>::SuggestedSaveFile() const
{
    Windows::Storage::StorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->get_SuggestedSaveFile(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileSavePicker<D>::SuggestedSaveFile(Windows::Storage::StorageFile const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->put_SuggestedSaveFile(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFileSavePicker<D>::SuggestedFileName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->get_SuggestedFileName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileSavePicker<D>::SuggestedFileName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->put_SuggestedFileName(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_Pickers_IFileSavePicker<D>::PickSaveFileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> pickSaveFileOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->PickSaveFileAsync(put_abi(pickSaveFileOperation)));
    return pickSaveFileOperation;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_Storage_Pickers_IFileSavePicker2<D>::ContinuationData() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker2)->get_ContinuationData(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileSavePicker2<D>::PickSaveFileAndContinue() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker2)->PickSaveFileAndContinue());
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFileSavePicker3<D>::EnterpriseId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker3)->get_EnterpriseId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileSavePicker3<D>::EnterpriseId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker3)->put_EnterpriseId(get_abi(value)));
}

template <typename D> Windows::Storage::Pickers::PickerViewMode consume_Windows_Storage_Pickers_IFolderPicker<D>::ViewMode() const
{
    Windows::Storage::Pickers::PickerViewMode value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->get_ViewMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFolderPicker<D>::ViewMode(Windows::Storage::Pickers::PickerViewMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->put_ViewMode(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFolderPicker<D>::SettingsIdentifier() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->get_SettingsIdentifier(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFolderPicker<D>::SettingsIdentifier(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->put_SettingsIdentifier(get_abi(value)));
}

template <typename D> Windows::Storage::Pickers::PickerLocationId consume_Windows_Storage_Pickers_IFolderPicker<D>::SuggestedStartLocation() const
{
    Windows::Storage::Pickers::PickerLocationId value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->get_SuggestedStartLocation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFolderPicker<D>::SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->put_SuggestedStartLocation(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFolderPicker<D>::CommitButtonText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->get_CommitButtonText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFolderPicker<D>::CommitButtonText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->put_CommitButtonText(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_Pickers_IFolderPicker<D>::FileTypeFilter() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->get_FileTypeFilter(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> consume_Windows_Storage_Pickers_IFolderPicker<D>::PickSingleFolderAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> pickSingleFolderOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->PickSingleFolderAsync(put_abi(pickSingleFolderOperation)));
    return pickSingleFolderOperation;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_Storage_Pickers_IFolderPicker2<D>::ContinuationData() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker2)->get_ContinuationData(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFolderPicker2<D>::PickFolderAndContinue() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker2)->PickFolderAndContinue());
}

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileOpenPicker> : produce_base<D, Windows::Storage::Pickers::IFileOpenPicker>
{
    int32_t WINRT_CALL get_ViewMode(Windows::Storage::Pickers::PickerViewMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ViewMode, WINRT_WRAP(Windows::Storage::Pickers::PickerViewMode));
            *value = detach_from<Windows::Storage::Pickers::PickerViewMode>(this->shim().ViewMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_ViewMode(Windows::Storage::Pickers::PickerViewMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ViewMode, WINRT_WRAP(void), Windows::Storage::Pickers::PickerViewMode const&);
            this->shim().ViewMode(*reinterpret_cast<Windows::Storage::Pickers::PickerViewMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_SettingsIdentifier(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SettingsIdentifier, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().SettingsIdentifier());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_SettingsIdentifier(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SettingsIdentifier, WINRT_WRAP(void), hstring const&);
            this->shim().SettingsIdentifier(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SuggestedStartLocation, WINRT_WRAP(Windows::Storage::Pickers::PickerLocationId));
            *value = detach_from<Windows::Storage::Pickers::PickerLocationId>(this->shim().SuggestedStartLocation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SuggestedStartLocation, WINRT_WRAP(void), Windows::Storage::Pickers::PickerLocationId const&);
            this->shim().SuggestedStartLocation(*reinterpret_cast<Windows::Storage::Pickers::PickerLocationId const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_CommitButtonText(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CommitButtonText, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().CommitButtonText());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_CommitButtonText(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CommitButtonText, WINRT_WRAP(void), hstring const&);
            this->shim().CommitButtonText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_FileTypeFilter(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FileTypeFilter, WINRT_WRAP(Windows::Foundation::Collections::IVector<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().FileTypeFilter());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL PickSingleFileAsync(void** pickSingleFileOperation) noexcept final
    {
        try
        {
            *pickSingleFileOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(PickSingleFileAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>));
            *pickSingleFileOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>>(this->shim().PickSingleFileAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL PickMultipleFilesAsync(void** pickMultipleFilesOperation) noexcept final
    {
        try
        {
            *pickMultipleFilesOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(PickMultipleFilesAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>>));
            *pickMultipleFilesOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>>>(this->shim().PickMultipleFilesAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileOpenPicker2> : produce_base<D, Windows::Storage::Pickers::IFileOpenPicker2>
{
    int32_t WINRT_CALL get_ContinuationData(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ContinuationData, WINRT_WRAP(Windows::Foundation::Collections::ValueSet));
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().ContinuationData());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL PickSingleFileAndContinue() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(PickSingleFileAndContinue, WINRT_WRAP(void));
            this->shim().PickSingleFileAndContinue();
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL PickMultipleFilesAndContinue() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(PickMultipleFilesAndContinue, WINRT_WRAP(void));
            this->shim().PickMultipleFilesAndContinue();
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileOpenPickerStatics> : produce_base<D, Windows::Storage::Pickers::IFileOpenPickerStatics>
{
    int32_t WINRT_CALL ResumePickSingleFileAsync(void** pickSingleFileOperation) noexcept final
    {
        try
        {
            *pickSingleFileOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ResumePickSingleFileAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>));
            *pickSingleFileOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>>(this->shim().ResumePickSingleFileAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileOpenPickerWithOperationId> : produce_base<D, Windows::Storage::Pickers::IFileOpenPickerWithOperationId>
{
    int32_t WINRT_CALL PickSingleFileAsync(void* pickerOperationId, void** pickSingleFileOperation) noexcept final
    {
        try
        {
            *pickSingleFileOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(PickSingleFileAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>), hstring const);
            *pickSingleFileOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>>(this->shim().PickSingleFileAsync(*reinterpret_cast<hstring const*>(&pickerOperationId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileSavePicker> : produce_base<D, Windows::Storage::Pickers::IFileSavePicker>
{
    int32_t WINRT_CALL get_SettingsIdentifier(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SettingsIdentifier, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().SettingsIdentifier());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_SettingsIdentifier(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SettingsIdentifier, WINRT_WRAP(void), hstring const&);
            this->shim().SettingsIdentifier(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SuggestedStartLocation, WINRT_WRAP(Windows::Storage::Pickers::PickerLocationId));
            *value = detach_from<Windows::Storage::Pickers::PickerLocationId>(this->shim().SuggestedStartLocation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SuggestedStartLocation, WINRT_WRAP(void), Windows::Storage::Pickers::PickerLocationId const&);
            this->shim().SuggestedStartLocation(*reinterpret_cast<Windows::Storage::Pickers::PickerLocationId const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_CommitButtonText(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CommitButtonText, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().CommitButtonText());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_CommitButtonText(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CommitButtonText, WINRT_WRAP(void), hstring const&);
            this->shim().CommitButtonText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_FileTypeChoices(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FileTypeChoices, WINRT_WRAP(Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>>));
            *value = detach_from<Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>>>(this->shim().FileTypeChoices());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_DefaultFileExtension(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(DefaultFileExtension, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().DefaultFileExtension());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_DefaultFileExtension(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(DefaultFileExtension, WINRT_WRAP(void), hstring const&);
            this->shim().DefaultFileExtension(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_SuggestedSaveFile(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SuggestedSaveFile, WINRT_WRAP(Windows::Storage::StorageFile));
            *value = detach_from<Windows::Storage::StorageFile>(this->shim().SuggestedSaveFile());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_SuggestedSaveFile(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SuggestedSaveFile, WINRT_WRAP(void), Windows::Storage::StorageFile const&);
            this->shim().SuggestedSaveFile(*reinterpret_cast<Windows::Storage::StorageFile const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_SuggestedFileName(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SuggestedFileName, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().SuggestedFileName());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_SuggestedFileName(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SuggestedFileName, WINRT_WRAP(void), hstring const&);
            this->shim().SuggestedFileName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL PickSaveFileAsync(void** pickSaveFileOperation) noexcept final
    {
        try
        {
            *pickSaveFileOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(PickSaveFileAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>));
            *pickSaveFileOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>>(this->shim().PickSaveFileAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileSavePicker2> : produce_base<D, Windows::Storage::Pickers::IFileSavePicker2>
{
    int32_t WINRT_CALL get_ContinuationData(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ContinuationData, WINRT_WRAP(Windows::Foundation::Collections::ValueSet));
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().ContinuationData());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL PickSaveFileAndContinue() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(PickSaveFileAndContinue, WINRT_WRAP(void));
            this->shim().PickSaveFileAndContinue();
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileSavePicker3> : produce_base<D, Windows::Storage::Pickers::IFileSavePicker3>
{
    int32_t WINRT_CALL get_EnterpriseId(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(EnterpriseId, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().EnterpriseId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_EnterpriseId(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(EnterpriseId, WINRT_WRAP(void), hstring const&);
            this->shim().EnterpriseId(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFolderPicker> : produce_base<D, Windows::Storage::Pickers::IFolderPicker>
{
    int32_t WINRT_CALL get_ViewMode(Windows::Storage::Pickers::PickerViewMode* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ViewMode, WINRT_WRAP(Windows::Storage::Pickers::PickerViewMode));
            *value = detach_from<Windows::Storage::Pickers::PickerViewMode>(this->shim().ViewMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_ViewMode(Windows::Storage::Pickers::PickerViewMode value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ViewMode, WINRT_WRAP(void), Windows::Storage::Pickers::PickerViewMode const&);
            this->shim().ViewMode(*reinterpret_cast<Windows::Storage::Pickers::PickerViewMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_SettingsIdentifier(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SettingsIdentifier, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().SettingsIdentifier());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_SettingsIdentifier(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SettingsIdentifier, WINRT_WRAP(void), hstring const&);
            this->shim().SettingsIdentifier(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SuggestedStartLocation, WINRT_WRAP(Windows::Storage::Pickers::PickerLocationId));
            *value = detach_from<Windows::Storage::Pickers::PickerLocationId>(this->shim().SuggestedStartLocation());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(SuggestedStartLocation, WINRT_WRAP(void), Windows::Storage::Pickers::PickerLocationId const&);
            this->shim().SuggestedStartLocation(*reinterpret_cast<Windows::Storage::Pickers::PickerLocationId const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_CommitButtonText(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CommitButtonText, WINRT_WRAP(hstring));
            *value = detach_from<hstring>(this->shim().CommitButtonText());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL put_CommitButtonText(void* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(CommitButtonText, WINRT_WRAP(void), hstring const&);
            this->shim().CommitButtonText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL get_FileTypeFilter(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(FileTypeFilter, WINRT_WRAP(Windows::Foundation::Collections::IVector<hstring>));
            *value = detach_from<Windows::Foundation::Collections::IVector<hstring>>(this->shim().FileTypeFilter());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL PickSingleFolderAsync(void** pickSingleFolderOperation) noexcept final
    {
        try
        {
            *pickSingleFolderOperation = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(PickSingleFolderAsync, WINRT_WRAP(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>));
            *pickSingleFolderOperation = detach_from<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder>>(this->shim().PickSingleFolderAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFolderPicker2> : produce_base<D, Windows::Storage::Pickers::IFolderPicker2>
{
    int32_t WINRT_CALL get_ContinuationData(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(ContinuationData, WINRT_WRAP(Windows::Foundation::Collections::ValueSet));
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().ContinuationData());
            return 0;
        }
        catch (...) { return to_hresult(); }
    }

    int32_t WINRT_CALL PickFolderAndContinue() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            WINRT_ASSERT_DECLARATION(PickFolderAndContinue, WINRT_WRAP(void));
            this->shim().PickFolderAndContinue();
            return 0;
        }
        catch (...) { return to_hresult(); }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Storage::Pickers {

inline FileOpenPicker::FileOpenPicker() :
    FileOpenPicker(impl::call_factory<FileOpenPicker>([](auto&& f) { return f.template ActivateInstance<FileOpenPicker>(); }))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> FileOpenPicker::ResumePickSingleFileAsync()
{
    return impl::call_factory<FileOpenPicker, Windows::Storage::Pickers::IFileOpenPickerStatics>([&](auto&& f) { return f.ResumePickSingleFileAsync(); });
}

inline FileSavePicker::FileSavePicker() :
    FileSavePicker(impl::call_factory<FileSavePicker>([](auto&& f) { return f.template ActivateInstance<FileSavePicker>(); }))
{}

inline FolderPicker::FolderPicker() :
    FolderPicker(impl::call_factory<FolderPicker>([](auto&& f) { return f.template ActivateInstance<FolderPicker>(); }))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Storage::Pickers::IFileOpenPicker> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::IFileOpenPicker> {};
template<> struct hash<winrt::Windows::Storage::Pickers::IFileOpenPicker2> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::IFileOpenPicker2> {};
template<> struct hash<winrt::Windows::Storage::Pickers::IFileOpenPickerStatics> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::IFileOpenPickerStatics> {};
template<> struct hash<winrt::Windows::Storage::Pickers::IFileOpenPickerWithOperationId> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::IFileOpenPickerWithOperationId> {};
template<> struct hash<winrt::Windows::Storage::Pickers::IFileSavePicker> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::IFileSavePicker> {};
template<> struct hash<winrt::Windows::Storage::Pickers::IFileSavePicker2> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::IFileSavePicker2> {};
template<> struct hash<winrt::Windows::Storage::Pickers::IFileSavePicker3> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::IFileSavePicker3> {};
template<> struct hash<winrt::Windows::Storage::Pickers::IFolderPicker> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::IFolderPicker> {};
template<> struct hash<winrt::Windows::Storage::Pickers::IFolderPicker2> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::IFolderPicker2> {};
template<> struct hash<winrt::Windows::Storage::Pickers::FileExtensionVector> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::FileExtensionVector> {};
template<> struct hash<winrt::Windows::Storage::Pickers::FileOpenPicker> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::FileOpenPicker> {};
template<> struct hash<winrt::Windows::Storage::Pickers::FilePickerFileTypesOrderedMap> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::FilePickerFileTypesOrderedMap> {};
template<> struct hash<winrt::Windows::Storage::Pickers::FilePickerSelectedFilesArray> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::FilePickerSelectedFilesArray> {};
template<> struct hash<winrt::Windows::Storage::Pickers::FileSavePicker> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::FileSavePicker> {};
template<> struct hash<winrt::Windows::Storage::Pickers::FolderPicker> : winrt::impl::hash_base<winrt::Windows::Storage::Pickers::FolderPicker> {};

}
