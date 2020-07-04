﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct StorageFile;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store {

enum class FulfillmentResult : int32_t
{
    Succeeded = 0,
    NothingToFulfill = 1,
    PurchasePending = 2,
    PurchaseReverted = 3,
    ServerError = 4,
};

enum class ProductPurchaseStatus : int32_t
{
    Succeeded = 0,
    AlreadyPurchased = 1,
    NotFulfilled = 2,
    NotPurchased = 3,
};

enum class ProductType : int32_t
{
    Unknown = 0,
    Durable = 1,
    Consumable = 2,
};

struct ICurrentApp;
struct ICurrentApp2Statics;
struct ICurrentAppSimulator;
struct ICurrentAppSimulatorStaticsWithFiltering;
struct ICurrentAppSimulatorWithCampaignId;
struct ICurrentAppSimulatorWithConsumables;
struct ICurrentAppStaticsWithFiltering;
struct ICurrentAppWithCampaignId;
struct ICurrentAppWithConsumables;
struct ILicenseInformation;
struct IListingInformation;
struct IListingInformation2;
struct IProductLicense;
struct IProductLicenseWithFulfillment;
struct IProductListing;
struct IProductListing2;
struct IProductListingWithConsumables;
struct IProductListingWithMetadata;
struct IProductPurchaseDisplayProperties;
struct IProductPurchaseDisplayPropertiesFactory;
struct IPurchaseResults;
struct IUnfulfilledConsumable;
struct CurrentApp;
struct CurrentAppSimulator;
struct LicenseInformation;
struct ListingInformation;
struct ProductLicense;
struct ProductListing;
struct ProductPurchaseDisplayProperties;
struct PurchaseResults;
struct UnfulfilledConsumable;
struct LicenseChangedEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Store::ICurrentApp>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::ICurrentApp2Statics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::ICurrentAppSimulator>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithCampaignId>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::ICurrentAppWithCampaignId>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::ICurrentAppWithConsumables>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::ILicenseInformation>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::IListingInformation>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::IListingInformation2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::IProductLicense>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::IProductLicenseWithFulfillment>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::IProductListing>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::IProductListing2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::IProductListingWithConsumables>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::IProductListingWithMetadata>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::IProductPurchaseDisplayPropertiesFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::IPurchaseResults>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::IUnfulfilledConsumable>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Store::CurrentApp>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::CurrentAppSimulator>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::LicenseInformation>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::ListingInformation>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::ProductLicense>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::ProductListing>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::PurchaseResults>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::UnfulfilledConsumable>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Store::FulfillmentResult>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Store::ProductPurchaseStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Store::ProductType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Store::LicenseChangedEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::ApplicationModel::Store::ICurrentApp>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.ICurrentApp" }; };
template <> struct name<Windows::ApplicationModel::Store::ICurrentApp2Statics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.ICurrentApp2Statics" }; };
template <> struct name<Windows::ApplicationModel::Store::ICurrentAppSimulator>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.ICurrentAppSimulator" }; };
template <> struct name<Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.ICurrentAppSimulatorStaticsWithFiltering" }; };
template <> struct name<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithCampaignId>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.ICurrentAppSimulatorWithCampaignId" }; };
template <> struct name<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.ICurrentAppSimulatorWithConsumables" }; };
template <> struct name<Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.ICurrentAppStaticsWithFiltering" }; };
template <> struct name<Windows::ApplicationModel::Store::ICurrentAppWithCampaignId>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.ICurrentAppWithCampaignId" }; };
template <> struct name<Windows::ApplicationModel::Store::ICurrentAppWithConsumables>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.ICurrentAppWithConsumables" }; };
template <> struct name<Windows::ApplicationModel::Store::ILicenseInformation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.ILicenseInformation" }; };
template <> struct name<Windows::ApplicationModel::Store::IListingInformation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.IListingInformation" }; };
template <> struct name<Windows::ApplicationModel::Store::IListingInformation2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.IListingInformation2" }; };
template <> struct name<Windows::ApplicationModel::Store::IProductLicense>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.IProductLicense" }; };
template <> struct name<Windows::ApplicationModel::Store::IProductLicenseWithFulfillment>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.IProductLicenseWithFulfillment" }; };
template <> struct name<Windows::ApplicationModel::Store::IProductListing>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.IProductListing" }; };
template <> struct name<Windows::ApplicationModel::Store::IProductListing2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.IProductListing2" }; };
template <> struct name<Windows::ApplicationModel::Store::IProductListingWithConsumables>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.IProductListingWithConsumables" }; };
template <> struct name<Windows::ApplicationModel::Store::IProductListingWithMetadata>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.IProductListingWithMetadata" }; };
template <> struct name<Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.IProductPurchaseDisplayProperties" }; };
template <> struct name<Windows::ApplicationModel::Store::IProductPurchaseDisplayPropertiesFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.IProductPurchaseDisplayPropertiesFactory" }; };
template <> struct name<Windows::ApplicationModel::Store::IPurchaseResults>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.IPurchaseResults" }; };
template <> struct name<Windows::ApplicationModel::Store::IUnfulfilledConsumable>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.IUnfulfilledConsumable" }; };
template <> struct name<Windows::ApplicationModel::Store::CurrentApp>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.CurrentApp" }; };
template <> struct name<Windows::ApplicationModel::Store::CurrentAppSimulator>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.CurrentAppSimulator" }; };
template <> struct name<Windows::ApplicationModel::Store::LicenseInformation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseInformation" }; };
template <> struct name<Windows::ApplicationModel::Store::ListingInformation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.ListingInformation" }; };
template <> struct name<Windows::ApplicationModel::Store::ProductLicense>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.ProductLicense" }; };
template <> struct name<Windows::ApplicationModel::Store::ProductListing>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.ProductListing" }; };
template <> struct name<Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.ProductPurchaseDisplayProperties" }; };
template <> struct name<Windows::ApplicationModel::Store::PurchaseResults>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.PurchaseResults" }; };
template <> struct name<Windows::ApplicationModel::Store::UnfulfilledConsumable>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.UnfulfilledConsumable" }; };
template <> struct name<Windows::ApplicationModel::Store::FulfillmentResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.FulfillmentResult" }; };
template <> struct name<Windows::ApplicationModel::Store::ProductPurchaseStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.ProductPurchaseStatus" }; };
template <> struct name<Windows::ApplicationModel::Store::ProductType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.ProductType" }; };
template <> struct name<Windows::ApplicationModel::Store::LicenseChangedEventHandler>{ static constexpr auto & value{ L"Windows.ApplicationModel.Store.LicenseChangedEventHandler" }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::ICurrentApp>{ static constexpr guid value{ 0xD52DC065,0xDA3F,0x4685,{ 0x99,0x5E,0x9B,0x48,0x2E,0xB5,0xE6,0x03 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::ICurrentApp2Statics>{ static constexpr guid value{ 0xDF4E6E2D,0x3171,0x4AD3,{ 0x86,0x14,0x2C,0x61,0x24,0x43,0x73,0xCB } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::ICurrentAppSimulator>{ static constexpr guid value{ 0xF17F9DB1,0x74CD,0x4787,{ 0x97,0x87,0x19,0x86,0x6E,0x9A,0x55,0x59 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering>{ static constexpr guid value{ 0x617E70E2,0xF86F,0x4B54,{ 0x96,0x66,0xDD,0xE2,0x85,0x09,0x2C,0x68 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithCampaignId>{ static constexpr guid value{ 0x84678A43,0xDF00,0x4672,{ 0xA4,0x3F,0xB2,0x5B,0x14,0x41,0xCF,0xCF } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables>{ static constexpr guid value{ 0x4E51F0AB,0x20E7,0x4412,{ 0x9B,0x85,0x59,0xBB,0x78,0x38,0x86,0x67 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering>{ static constexpr guid value{ 0xD36D6542,0x9085,0x438E,{ 0x97,0xBA,0xA2,0x5C,0x97,0x6B,0xE2,0xFD } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::ICurrentAppWithCampaignId>{ static constexpr guid value{ 0x312F4CD0,0x36C1,0x44A6,{ 0xB3,0x2B,0x43,0x2D,0x60,0x8E,0x4D,0xD6 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::ICurrentAppWithConsumables>{ static constexpr guid value{ 0x844E0071,0x9E4F,0x4F79,{ 0x99,0x5A,0x5F,0x91,0x17,0x2E,0x6C,0xEF } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::ILicenseInformation>{ static constexpr guid value{ 0x8EB7DC30,0xF170,0x4ED5,{ 0x8E,0x21,0x15,0x16,0xDA,0x3F,0xD3,0x67 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::IListingInformation>{ static constexpr guid value{ 0x588B4ABF,0xBC74,0x4383,{ 0xB7,0x8C,0x99,0x60,0x63,0x23,0xDE,0xCE } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::IListingInformation2>{ static constexpr guid value{ 0xC0FD2C1D,0xB30E,0x4384,{ 0x84,0xEA,0x72,0xFE,0xFA,0x82,0x22,0x3E } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::IProductLicense>{ static constexpr guid value{ 0x363308C7,0x2BCF,0x4C0E,{ 0x8F,0x2F,0xE8,0x08,0xAA,0xA8,0xF9,0x9D } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::IProductLicenseWithFulfillment>{ static constexpr guid value{ 0xFC535C8A,0xF667,0x40F3,{ 0xBA,0x3C,0x04,0x5A,0x63,0xAB,0xB3,0xAC } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::IProductListing>{ static constexpr guid value{ 0x45A7D6AD,0xC750,0x4D9C,{ 0x94,0x7C,0xB0,0x0D,0xCB,0xF9,0xE9,0xC2 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::IProductListing2>{ static constexpr guid value{ 0xF89E290F,0x73FE,0x494D,{ 0xA9,0x39,0x08,0xA9,0xB2,0x49,0x5A,0xBE } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::IProductListingWithConsumables>{ static constexpr guid value{ 0xEB9E9790,0x8F6B,0x481F,{ 0x93,0xA7,0x5C,0x3A,0x63,0x06,0x81,0x49 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::IProductListingWithMetadata>{ static constexpr guid value{ 0x124DA567,0x23F8,0x423E,{ 0x95,0x32,0x18,0x99,0x43,0xC4,0x0A,0xCE } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties>{ static constexpr guid value{ 0xD70B7420,0xBC92,0x401B,{ 0xA8,0x09,0xC9,0xB2,0xE5,0xDB,0xBD,0xAF } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::IProductPurchaseDisplayPropertiesFactory>{ static constexpr guid value{ 0x6F491DF4,0x32D6,0x4B40,{ 0xB4,0x74,0xB8,0x30,0x38,0xA4,0xD9,0xCF } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::IPurchaseResults>{ static constexpr guid value{ 0xED50B37E,0x8656,0x4F65,{ 0xB8,0xC8,0xAC,0x7E,0x0C,0xB1,0xA1,0xC2 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::IUnfulfilledConsumable>{ static constexpr guid value{ 0x2DF7FBBB,0x1CDD,0x4CB8,{ 0xA0,0x14,0x7B,0x9C,0xF8,0x98,0x69,0x27 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Store::LicenseChangedEventHandler>{ static constexpr guid value{ 0xD4A50255,0x1369,0x4C36,{ 0x83,0x2F,0x6F,0x2D,0x88,0xE3,0x65,0x9B } }; };
template <> struct default_interface<Windows::ApplicationModel::Store::LicenseInformation>{ using type = Windows::ApplicationModel::Store::ILicenseInformation; };
template <> struct default_interface<Windows::ApplicationModel::Store::ListingInformation>{ using type = Windows::ApplicationModel::Store::IListingInformation; };
template <> struct default_interface<Windows::ApplicationModel::Store::ProductLicense>{ using type = Windows::ApplicationModel::Store::IProductLicense; };
template <> struct default_interface<Windows::ApplicationModel::Store::ProductListing>{ using type = Windows::ApplicationModel::Store::IProductListing; };
template <> struct default_interface<Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties>{ using type = Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties; };
template <> struct default_interface<Windows::ApplicationModel::Store::PurchaseResults>{ using type = Windows::ApplicationModel::Store::IPurchaseResults; };
template <> struct default_interface<Windows::ApplicationModel::Store::UnfulfilledConsumable>{ using type = Windows::ApplicationModel::Store::IUnfulfilledConsumable; };

template <> struct abi<Windows::ApplicationModel::Store::ICurrentApp>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_LicenseInformation(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_LinkUri(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AppId(winrt::guid* value) noexcept = 0;
    virtual int32_t WINRT_CALL RequestAppPurchaseAsync(bool includeReceipt, void** requestAppPurchaseOperation) noexcept = 0;
    virtual int32_t WINRT_CALL RequestProductPurchaseAsync(void* productId, bool includeReceipt, void** requestProductPurchaseOperation) noexcept = 0;
    virtual int32_t WINRT_CALL LoadListingInformationAsync(void** loadListingOperation) noexcept = 0;
    virtual int32_t WINRT_CALL GetAppReceiptAsync(void** appReceiptOperation) noexcept = 0;
    virtual int32_t WINRT_CALL GetProductReceiptAsync(void* productId, void** getProductReceiptOperation) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::ICurrentApp2Statics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetCustomerPurchaseIdAsync(void* serviceTicket, void* publisherUserId, void** operation) noexcept = 0;
    virtual int32_t WINRT_CALL GetCustomerCollectionsIdAsync(void* serviceTicket, void* publisherUserId, void** operation) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::ICurrentAppSimulator>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_LicenseInformation(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_LinkUri(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AppId(winrt::guid* value) noexcept = 0;
    virtual int32_t WINRT_CALL RequestAppPurchaseAsync(bool includeReceipt, void** requestAppPurchaseOperation) noexcept = 0;
    virtual int32_t WINRT_CALL RequestProductPurchaseAsync(void* productId, bool includeReceipt, void** requestProductPurchaseOperation) noexcept = 0;
    virtual int32_t WINRT_CALL LoadListingInformationAsync(void** loadListingOperation) noexcept = 0;
    virtual int32_t WINRT_CALL GetAppReceiptAsync(void** appReceiptOperation) noexcept = 0;
    virtual int32_t WINRT_CALL GetProductReceiptAsync(void* productId, void** getProductReceiptOperation) noexcept = 0;
    virtual int32_t WINRT_CALL ReloadSimulatorAsync(void* simulatorSettingsFile, void** reloadSimulatorOperation) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL LoadListingInformationByProductIdsAsync(void* productIds, void** loadListingOperation) noexcept = 0;
    virtual int32_t WINRT_CALL LoadListingInformationByKeywordsAsync(void* keywords, void** loadListingOperation) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithCampaignId>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetAppPurchaseCampaignIdAsync(void** operation) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL ReportConsumableFulfillmentAsync(void* productId, winrt::guid transactionId, void** reportConsumableFulfillmentOperation) noexcept = 0;
    virtual int32_t WINRT_CALL RequestProductPurchaseWithResultsAsync(void* productId, void** requestProductPurchaseWithResultsOperation) noexcept = 0;
    virtual int32_t WINRT_CALL RequestProductPurchaseWithDisplayPropertiesAsync(void* productId, void* offerId, void* displayProperties, void** requestProductPurchaseWithDisplayPropertiesOperation) noexcept = 0;
    virtual int32_t WINRT_CALL GetUnfulfilledConsumablesAsync(void** getUnfulfilledConsumablesOperation) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL LoadListingInformationByProductIdsAsync(void* productIds, void** loadListingOperation) noexcept = 0;
    virtual int32_t WINRT_CALL LoadListingInformationByKeywordsAsync(void* keywords, void** loadListingOperation) noexcept = 0;
    virtual int32_t WINRT_CALL ReportProductFulfillment(void* productId) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::ICurrentAppWithCampaignId>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetAppPurchaseCampaignIdAsync(void** operation) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::ICurrentAppWithConsumables>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL ReportConsumableFulfillmentAsync(void* productId, winrt::guid transactionId, void** reportConsumableFulfillmentOperation) noexcept = 0;
    virtual int32_t WINRT_CALL RequestProductPurchaseWithResultsAsync(void* productId, void** requestProductPurchaseWithResultsOperation) noexcept = 0;
    virtual int32_t WINRT_CALL RequestProductPurchaseWithDisplayPropertiesAsync(void* productId, void* offerId, void* displayProperties, void** requestProductPurchaseWithDisplayPropertiesOperation) noexcept = 0;
    virtual int32_t WINRT_CALL GetUnfulfilledConsumablesAsync(void** getUnfulfilledConsumablesOperation) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::ILicenseInformation>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ProductLicenses(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsActive(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsTrial(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ExpirationDate(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL add_LicenseChanged(void* handler, winrt::event_token* cookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_LicenseChanged(winrt::event_token cookie) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::IListingInformation>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_CurrentMarket(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Description(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ProductListings(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_FormattedPrice(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Name(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AgeRating(uint32_t* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::IListingInformation2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_FormattedBasePrice(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SaleEndDate(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsOnSale(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CurrencyCode(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::IProductLicense>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ProductId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsActive(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ExpirationDate(Windows::Foundation::DateTime* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::IProductLicenseWithFulfillment>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_IsConsumable(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::IProductListing>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ProductId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_FormattedPrice(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Name(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::IProductListing2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_FormattedBasePrice(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SaleEndDate(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsOnSale(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CurrencyCode(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::IProductListingWithConsumables>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ProductType(Windows::ApplicationModel::Store::ProductType* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::IProductListingWithMetadata>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Description(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Keywords(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ProductType(Windows::ApplicationModel::Store::ProductType* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Tag(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ImageUri(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Name(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Name(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Description(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Description(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Image(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Image(void* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::IProductPurchaseDisplayPropertiesFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateProductPurchaseDisplayProperties(void* name, void** displayProperties) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::IPurchaseResults>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Status(Windows::ApplicationModel::Store::ProductPurchaseStatus* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TransactionId(winrt::guid* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ReceiptXml(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_OfferId(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::IUnfulfilledConsumable>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ProductId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TransactionId(winrt::guid* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_OfferId(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Store::LicenseChangedEventHandler>{ struct type : IUnknown
{
    virtual int32_t WINRT_CALL Invoke() noexcept = 0;
};};

template <typename D>
struct consume_Windows_ApplicationModel_Store_ICurrentApp
{
    Windows::ApplicationModel::Store::LicenseInformation LicenseInformation() const;
    Windows::Foundation::Uri LinkUri() const;
    winrt::guid AppId() const;
    Windows::Foundation::IAsyncOperation<hstring> RequestAppPurchaseAsync(bool includeReceipt) const;
    Windows::Foundation::IAsyncOperation<hstring> RequestProductPurchaseAsync(param::hstring const& productId, bool includeReceipt) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> GetAppReceiptAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> GetProductReceiptAsync(param::hstring const& productId) const;
};
template <> struct consume<Windows::ApplicationModel::Store::ICurrentApp> { template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentApp<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_ICurrentApp2Statics
{
    Windows::Foundation::IAsyncOperation<hstring> GetCustomerPurchaseIdAsync(param::hstring const& serviceTicket, param::hstring const& publisherUserId) const;
    Windows::Foundation::IAsyncOperation<hstring> GetCustomerCollectionsIdAsync(param::hstring const& serviceTicket, param::hstring const& publisherUserId) const;
};
template <> struct consume<Windows::ApplicationModel::Store::ICurrentApp2Statics> { template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentApp2Statics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_ICurrentAppSimulator
{
    Windows::ApplicationModel::Store::LicenseInformation LicenseInformation() const;
    Windows::Foundation::Uri LinkUri() const;
    winrt::guid AppId() const;
    Windows::Foundation::IAsyncOperation<hstring> RequestAppPurchaseAsync(bool includeReceipt) const;
    Windows::Foundation::IAsyncOperation<hstring> RequestProductPurchaseAsync(param::hstring const& productId, bool includeReceipt) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> GetAppReceiptAsync() const;
    Windows::Foundation::IAsyncOperation<hstring> GetProductReceiptAsync(param::hstring const& productId) const;
    Windows::Foundation::IAsyncAction ReloadSimulatorAsync(Windows::Storage::StorageFile const& simulatorSettingsFile) const;
};
template <> struct consume<Windows::ApplicationModel::Store::ICurrentAppSimulator> { template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentAppSimulator<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorStaticsWithFiltering
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationByProductIdsAsync(param::async_iterable<hstring> const& productIds) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationByKeywordsAsync(param::async_iterable<hstring> const& keywords) const;
};
template <> struct consume<Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering> { template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorStaticsWithFiltering<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithCampaignId
{
    Windows::Foundation::IAsyncOperation<hstring> GetAppPurchaseCampaignIdAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithCampaignId> { template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithCampaignId<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithConsumables
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::FulfillmentResult> ReportConsumableFulfillmentAsync(param::hstring const& productId, winrt::guid const& transactionId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> RequestProductPurchaseAsync(param::hstring const& productId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> RequestProductPurchaseAsync(param::hstring const& productId, param::hstring const& offerId, Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties const& displayProperties) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::UnfulfilledConsumable>> GetUnfulfilledConsumablesAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables> { template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithConsumables<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_ICurrentAppStaticsWithFiltering
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationByProductIdsAsync(param::async_iterable<hstring> const& productIds) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation> LoadListingInformationByKeywordsAsync(param::async_iterable<hstring> const& keywords) const;
    void ReportProductFulfillment(param::hstring const& productId) const;
};
template <> struct consume<Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering> { template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentAppStaticsWithFiltering<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_ICurrentAppWithCampaignId
{
    Windows::Foundation::IAsyncOperation<hstring> GetAppPurchaseCampaignIdAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Store::ICurrentAppWithCampaignId> { template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentAppWithCampaignId<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_ICurrentAppWithConsumables
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::FulfillmentResult> ReportConsumableFulfillmentAsync(param::hstring const& productId, winrt::guid const& transactionId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> RequestProductPurchaseAsync(param::hstring const& productId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults> RequestProductPurchaseAsync(param::hstring const& productId, param::hstring const& offerId, Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties const& displayProperties) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::UnfulfilledConsumable>> GetUnfulfilledConsumablesAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Store::ICurrentAppWithConsumables> { template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentAppWithConsumables<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_ILicenseInformation
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Store::ProductLicense> ProductLicenses() const;
    bool IsActive() const;
    bool IsTrial() const;
    Windows::Foundation::DateTime ExpirationDate() const;
    winrt::event_token LicenseChanged(Windows::ApplicationModel::Store::LicenseChangedEventHandler const& handler) const;
    using LicenseChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Store::ILicenseInformation, &impl::abi_t<Windows::ApplicationModel::Store::ILicenseInformation>::remove_LicenseChanged>;
    LicenseChanged_revoker LicenseChanged(auto_revoke_t, Windows::ApplicationModel::Store::LicenseChangedEventHandler const& handler) const;
    void LicenseChanged(winrt::event_token const& cookie) const noexcept;
};
template <> struct consume<Windows::ApplicationModel::Store::ILicenseInformation> { template <typename D> using type = consume_Windows_ApplicationModel_Store_ILicenseInformation<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_IListingInformation
{
    hstring CurrentMarket() const;
    hstring Description() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Store::ProductListing> ProductListings() const;
    hstring FormattedPrice() const;
    hstring Name() const;
    uint32_t AgeRating() const;
};
template <> struct consume<Windows::ApplicationModel::Store::IListingInformation> { template <typename D> using type = consume_Windows_ApplicationModel_Store_IListingInformation<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_IListingInformation2
{
    hstring FormattedBasePrice() const;
    Windows::Foundation::DateTime SaleEndDate() const;
    bool IsOnSale() const;
    hstring CurrencyCode() const;
};
template <> struct consume<Windows::ApplicationModel::Store::IListingInformation2> { template <typename D> using type = consume_Windows_ApplicationModel_Store_IListingInformation2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_IProductLicense
{
    hstring ProductId() const;
    bool IsActive() const;
    Windows::Foundation::DateTime ExpirationDate() const;
};
template <> struct consume<Windows::ApplicationModel::Store::IProductLicense> { template <typename D> using type = consume_Windows_ApplicationModel_Store_IProductLicense<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_IProductLicenseWithFulfillment
{
    bool IsConsumable() const;
};
template <> struct consume<Windows::ApplicationModel::Store::IProductLicenseWithFulfillment> { template <typename D> using type = consume_Windows_ApplicationModel_Store_IProductLicenseWithFulfillment<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_IProductListing
{
    hstring ProductId() const;
    hstring FormattedPrice() const;
    hstring Name() const;
};
template <> struct consume<Windows::ApplicationModel::Store::IProductListing> { template <typename D> using type = consume_Windows_ApplicationModel_Store_IProductListing<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_IProductListing2
{
    hstring FormattedBasePrice() const;
    Windows::Foundation::DateTime SaleEndDate() const;
    bool IsOnSale() const;
    hstring CurrencyCode() const;
};
template <> struct consume<Windows::ApplicationModel::Store::IProductListing2> { template <typename D> using type = consume_Windows_ApplicationModel_Store_IProductListing2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_IProductListingWithConsumables
{
    Windows::ApplicationModel::Store::ProductType ProductType() const;
};
template <> struct consume<Windows::ApplicationModel::Store::IProductListingWithConsumables> { template <typename D> using type = consume_Windows_ApplicationModel_Store_IProductListingWithConsumables<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_IProductListingWithMetadata
{
    hstring Description() const;
    Windows::Foundation::Collections::IIterable<hstring> Keywords() const;
    Windows::ApplicationModel::Store::ProductType ProductType() const;
    hstring Tag() const;
    Windows::Foundation::Uri ImageUri() const;
};
template <> struct consume<Windows::ApplicationModel::Store::IProductListingWithMetadata> { template <typename D> using type = consume_Windows_ApplicationModel_Store_IProductListingWithMetadata<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_IProductPurchaseDisplayProperties
{
    hstring Name() const;
    void Name(param::hstring const& value) const;
    hstring Description() const;
    void Description(param::hstring const& value) const;
    Windows::Foundation::Uri Image() const;
    void Image(Windows::Foundation::Uri const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties> { template <typename D> using type = consume_Windows_ApplicationModel_Store_IProductPurchaseDisplayProperties<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_IProductPurchaseDisplayPropertiesFactory
{
    Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties CreateProductPurchaseDisplayProperties(param::hstring const& name) const;
};
template <> struct consume<Windows::ApplicationModel::Store::IProductPurchaseDisplayPropertiesFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Store_IProductPurchaseDisplayPropertiesFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_IPurchaseResults
{
    Windows::ApplicationModel::Store::ProductPurchaseStatus Status() const;
    winrt::guid TransactionId() const;
    hstring ReceiptXml() const;
    hstring OfferId() const;
};
template <> struct consume<Windows::ApplicationModel::Store::IPurchaseResults> { template <typename D> using type = consume_Windows_ApplicationModel_Store_IPurchaseResults<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Store_IUnfulfilledConsumable
{
    hstring ProductId() const;
    winrt::guid TransactionId() const;
    hstring OfferId() const;
};
template <> struct consume<Windows::ApplicationModel::Store::IUnfulfilledConsumable> { template <typename D> using type = consume_Windows_ApplicationModel_Store_IUnfulfilledConsumable<D>; };

}
