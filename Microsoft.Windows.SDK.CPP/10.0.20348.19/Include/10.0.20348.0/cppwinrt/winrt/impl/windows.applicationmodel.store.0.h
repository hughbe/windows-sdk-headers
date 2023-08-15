// C++/WinRT v2.0.200609.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Store_0_H
#define WINRT_Windows_ApplicationModel_Store_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct StorageFile;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Store
{
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
namespace winrt::impl
{
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
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::CurrentApp> = L"Windows.ApplicationModel.Store.CurrentApp";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::CurrentAppSimulator> = L"Windows.ApplicationModel.Store.CurrentAppSimulator";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::LicenseInformation> = L"Windows.ApplicationModel.Store.LicenseInformation";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::ListingInformation> = L"Windows.ApplicationModel.Store.ListingInformation";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::ProductLicense> = L"Windows.ApplicationModel.Store.ProductLicense";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::ProductListing> = L"Windows.ApplicationModel.Store.ProductListing";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties> = L"Windows.ApplicationModel.Store.ProductPurchaseDisplayProperties";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::PurchaseResults> = L"Windows.ApplicationModel.Store.PurchaseResults";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::UnfulfilledConsumable> = L"Windows.ApplicationModel.Store.UnfulfilledConsumable";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::FulfillmentResult> = L"Windows.ApplicationModel.Store.FulfillmentResult";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::ProductPurchaseStatus> = L"Windows.ApplicationModel.Store.ProductPurchaseStatus";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::ProductType> = L"Windows.ApplicationModel.Store.ProductType";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::ICurrentApp> = L"Windows.ApplicationModel.Store.ICurrentApp";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::ICurrentApp2Statics> = L"Windows.ApplicationModel.Store.ICurrentApp2Statics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::ICurrentAppSimulator> = L"Windows.ApplicationModel.Store.ICurrentAppSimulator";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering> = L"Windows.ApplicationModel.Store.ICurrentAppSimulatorStaticsWithFiltering";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithCampaignId> = L"Windows.ApplicationModel.Store.ICurrentAppSimulatorWithCampaignId";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables> = L"Windows.ApplicationModel.Store.ICurrentAppSimulatorWithConsumables";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering> = L"Windows.ApplicationModel.Store.ICurrentAppStaticsWithFiltering";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::ICurrentAppWithCampaignId> = L"Windows.ApplicationModel.Store.ICurrentAppWithCampaignId";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::ICurrentAppWithConsumables> = L"Windows.ApplicationModel.Store.ICurrentAppWithConsumables";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::ILicenseInformation> = L"Windows.ApplicationModel.Store.ILicenseInformation";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::IListingInformation> = L"Windows.ApplicationModel.Store.IListingInformation";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::IListingInformation2> = L"Windows.ApplicationModel.Store.IListingInformation2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::IProductLicense> = L"Windows.ApplicationModel.Store.IProductLicense";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::IProductLicenseWithFulfillment> = L"Windows.ApplicationModel.Store.IProductLicenseWithFulfillment";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::IProductListing> = L"Windows.ApplicationModel.Store.IProductListing";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::IProductListing2> = L"Windows.ApplicationModel.Store.IProductListing2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::IProductListingWithConsumables> = L"Windows.ApplicationModel.Store.IProductListingWithConsumables";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::IProductListingWithMetadata> = L"Windows.ApplicationModel.Store.IProductListingWithMetadata";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties> = L"Windows.ApplicationModel.Store.IProductPurchaseDisplayProperties";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::IProductPurchaseDisplayPropertiesFactory> = L"Windows.ApplicationModel.Store.IProductPurchaseDisplayPropertiesFactory";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::IPurchaseResults> = L"Windows.ApplicationModel.Store.IPurchaseResults";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::IUnfulfilledConsumable> = L"Windows.ApplicationModel.Store.IUnfulfilledConsumable";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Store::LicenseChangedEventHandler> = L"Windows.ApplicationModel.Store.LicenseChangedEventHandler";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::ICurrentApp>{ 0xD52DC065,0xDA3F,0x4685,{ 0x99,0x5E,0x9B,0x48,0x2E,0xB5,0xE6,0x03 } }; // D52DC065-DA3F-4685-995E-9B482EB5E603
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::ICurrentApp2Statics>{ 0xDF4E6E2D,0x3171,0x4AD3,{ 0x86,0x14,0x2C,0x61,0x24,0x43,0x73,0xCB } }; // DF4E6E2D-3171-4AD3-8614-2C61244373CB
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::ICurrentAppSimulator>{ 0xF17F9DB1,0x74CD,0x4787,{ 0x97,0x87,0x19,0x86,0x6E,0x9A,0x55,0x59 } }; // F17F9DB1-74CD-4787-9787-19866E9A5559
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering>{ 0x617E70E2,0xF86F,0x4B54,{ 0x96,0x66,0xDD,0xE2,0x85,0x09,0x2C,0x68 } }; // 617E70E2-F86F-4B54-9666-DDE285092C68
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithCampaignId>{ 0x84678A43,0xDF00,0x4672,{ 0xA4,0x3F,0xB2,0x5B,0x14,0x41,0xCF,0xCF } }; // 84678A43-DF00-4672-A43F-B25B1441CFCF
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables>{ 0x4E51F0AB,0x20E7,0x4412,{ 0x9B,0x85,0x59,0xBB,0x78,0x38,0x86,0x67 } }; // 4E51F0AB-20E7-4412-9B85-59BB78388667
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering>{ 0xD36D6542,0x9085,0x438E,{ 0x97,0xBA,0xA2,0x5C,0x97,0x6B,0xE2,0xFD } }; // D36D6542-9085-438E-97BA-A25C976BE2FD
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::ICurrentAppWithCampaignId>{ 0x312F4CD0,0x36C1,0x44A6,{ 0xB3,0x2B,0x43,0x2D,0x60,0x8E,0x4D,0xD6 } }; // 312F4CD0-36C1-44A6-B32B-432D608E4DD6
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::ICurrentAppWithConsumables>{ 0x844E0071,0x9E4F,0x4F79,{ 0x99,0x5A,0x5F,0x91,0x17,0x2E,0x6C,0xEF } }; // 844E0071-9E4F-4F79-995A-5F91172E6CEF
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::ILicenseInformation>{ 0x8EB7DC30,0xF170,0x4ED5,{ 0x8E,0x21,0x15,0x16,0xDA,0x3F,0xD3,0x67 } }; // 8EB7DC30-F170-4ED5-8E21-1516DA3FD367
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::IListingInformation>{ 0x588B4ABF,0xBC74,0x4383,{ 0xB7,0x8C,0x99,0x60,0x63,0x23,0xDE,0xCE } }; // 588B4ABF-BC74-4383-B78C-99606323DECE
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::IListingInformation2>{ 0xC0FD2C1D,0xB30E,0x4384,{ 0x84,0xEA,0x72,0xFE,0xFA,0x82,0x22,0x3E } }; // C0FD2C1D-B30E-4384-84EA-72FEFA82223E
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::IProductLicense>{ 0x363308C7,0x2BCF,0x4C0E,{ 0x8F,0x2F,0xE8,0x08,0xAA,0xA8,0xF9,0x9D } }; // 363308C7-2BCF-4C0E-8F2F-E808AAA8F99D
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::IProductLicenseWithFulfillment>{ 0xFC535C8A,0xF667,0x40F3,{ 0xBA,0x3C,0x04,0x5A,0x63,0xAB,0xB3,0xAC } }; // FC535C8A-F667-40F3-BA3C-045A63ABB3AC
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::IProductListing>{ 0x45A7D6AD,0xC750,0x4D9C,{ 0x94,0x7C,0xB0,0x0D,0xCB,0xF9,0xE9,0xC2 } }; // 45A7D6AD-C750-4D9C-947C-B00DCBF9E9C2
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::IProductListing2>{ 0xF89E290F,0x73FE,0x494D,{ 0xA9,0x39,0x08,0xA9,0xB2,0x49,0x5A,0xBE } }; // F89E290F-73FE-494D-A939-08A9B2495ABE
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::IProductListingWithConsumables>{ 0xEB9E9790,0x8F6B,0x481F,{ 0x93,0xA7,0x5C,0x3A,0x63,0x06,0x81,0x49 } }; // EB9E9790-8F6B-481F-93A7-5C3A63068149
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::IProductListingWithMetadata>{ 0x124DA567,0x23F8,0x423E,{ 0x95,0x32,0x18,0x99,0x43,0xC4,0x0A,0xCE } }; // 124DA567-23F8-423E-9532-189943C40ACE
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties>{ 0xD70B7420,0xBC92,0x401B,{ 0xA8,0x09,0xC9,0xB2,0xE5,0xDB,0xBD,0xAF } }; // D70B7420-BC92-401B-A809-C9B2E5DBBDAF
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::IProductPurchaseDisplayPropertiesFactory>{ 0x6F491DF4,0x32D6,0x4B40,{ 0xB4,0x74,0xB8,0x30,0x38,0xA4,0xD9,0xCF } }; // 6F491DF4-32D6-4B40-B474-B83038A4D9CF
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::IPurchaseResults>{ 0xED50B37E,0x8656,0x4F65,{ 0xB8,0xC8,0xAC,0x7E,0x0C,0xB1,0xA1,0xC2 } }; // ED50B37E-8656-4F65-B8C8-AC7E0CB1A1C2
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::IUnfulfilledConsumable>{ 0x2DF7FBBB,0x1CDD,0x4CB8,{ 0xA0,0x14,0x7B,0x9C,0xF8,0x98,0x69,0x27 } }; // 2DF7FBBB-1CDD-4CB8-A014-7B9CF8986927
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Store::LicenseChangedEventHandler>{ 0xD4A50255,0x1369,0x4C36,{ 0x83,0x2F,0x6F,0x2D,0x88,0xE3,0x65,0x9B } }; // D4A50255-1369-4C36-832F-6F2D88E3659B
    template <> struct default_interface<Windows::ApplicationModel::Store::LicenseInformation>{ using type = Windows::ApplicationModel::Store::ILicenseInformation; };
    template <> struct default_interface<Windows::ApplicationModel::Store::ListingInformation>{ using type = Windows::ApplicationModel::Store::IListingInformation; };
    template <> struct default_interface<Windows::ApplicationModel::Store::ProductLicense>{ using type = Windows::ApplicationModel::Store::IProductLicense; };
    template <> struct default_interface<Windows::ApplicationModel::Store::ProductListing>{ using type = Windows::ApplicationModel::Store::IProductListing; };
    template <> struct default_interface<Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties>{ using type = Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties; };
    template <> struct default_interface<Windows::ApplicationModel::Store::PurchaseResults>{ using type = Windows::ApplicationModel::Store::IPurchaseResults; };
    template <> struct default_interface<Windows::ApplicationModel::Store::UnfulfilledConsumable>{ using type = Windows::ApplicationModel::Store::IUnfulfilledConsumable; };
    template <> struct abi<Windows::ApplicationModel::Store::ICurrentApp>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LicenseInformation(void**) noexcept = 0;
            virtual int32_t __stdcall get_LinkUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall RequestAppPurchaseAsync(bool, void**) noexcept = 0;
            virtual int32_t __stdcall RequestProductPurchaseAsync(void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall LoadListingInformationAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAppReceiptAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetProductReceiptAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::ICurrentApp2Statics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCustomerPurchaseIdAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetCustomerCollectionsIdAsync(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::ICurrentAppSimulator>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LicenseInformation(void**) noexcept = 0;
            virtual int32_t __stdcall get_LinkUri(void**) noexcept = 0;
            virtual int32_t __stdcall get_AppId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall RequestAppPurchaseAsync(bool, void**) noexcept = 0;
            virtual int32_t __stdcall RequestProductPurchaseAsync(void*, bool, void**) noexcept = 0;
            virtual int32_t __stdcall LoadListingInformationAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetAppReceiptAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetProductReceiptAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReloadSimulatorAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LoadListingInformationByProductIdsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadListingInformationByKeywordsAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithCampaignId>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAppPurchaseCampaignIdAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportConsumableFulfillmentAsync(void*, winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall RequestProductPurchaseWithResultsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestProductPurchaseWithDisplayPropertiesAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetUnfulfilledConsumablesAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall LoadListingInformationByProductIdsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall LoadListingInformationByKeywordsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ReportProductFulfillment(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::ICurrentAppWithCampaignId>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAppPurchaseCampaignIdAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::ICurrentAppWithConsumables>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ReportConsumableFulfillmentAsync(void*, winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall RequestProductPurchaseWithResultsAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestProductPurchaseWithDisplayPropertiesAsync(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetUnfulfilledConsumablesAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::ILicenseInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProductLicenses(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsActive(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsTrial(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ExpirationDate(int64_t*) noexcept = 0;
            virtual int32_t __stdcall add_LicenseChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LicenseChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::IListingInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentMarket(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProductListings(void**) noexcept = 0;
            virtual int32_t __stdcall get_FormattedPrice(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_AgeRating(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::IListingInformation2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FormattedBasePrice(void**) noexcept = 0;
            virtual int32_t __stdcall get_SaleEndDate(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsOnSale(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CurrencyCode(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::IProductLicense>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProductId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsActive(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ExpirationDate(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::IProductLicenseWithFulfillment>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsConsumable(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::IProductListing>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProductId(void**) noexcept = 0;
            virtual int32_t __stdcall get_FormattedPrice(void**) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::IProductListing2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FormattedBasePrice(void**) noexcept = 0;
            virtual int32_t __stdcall get_SaleEndDate(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsOnSale(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CurrencyCode(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::IProductListingWithConsumables>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProductType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::IProductListingWithMetadata>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall get_Keywords(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProductType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Tag(void**) noexcept = 0;
            virtual int32_t __stdcall get_ImageUri(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall put_Name(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Image(void**) noexcept = 0;
            virtual int32_t __stdcall put_Image(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::IProductPurchaseDisplayPropertiesFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateProductPurchaseDisplayProperties(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::IPurchaseResults>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_TransactionId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_ReceiptXml(void**) noexcept = 0;
            virtual int32_t __stdcall get_OfferId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::IUnfulfilledConsumable>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ProductId(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransactionId(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_OfferId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Store::LicenseChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke() noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_ICurrentApp
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Store::LicenseInformation) LicenseInformation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) LinkUri() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) AppId() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) RequestAppPurchaseAsync(bool includeReceipt) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) RequestProductPurchaseAsync(param::hstring const& productId, bool includeReceipt) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation>) LoadListingInformationAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) GetAppReceiptAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) GetProductReceiptAsync(param::hstring const& productId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::ICurrentApp>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentApp<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_ICurrentApp2Statics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) GetCustomerPurchaseIdAsync(param::hstring const& serviceTicket, param::hstring const& publisherUserId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) GetCustomerCollectionsIdAsync(param::hstring const& serviceTicket, param::hstring const& publisherUserId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::ICurrentApp2Statics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentApp2Statics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_ICurrentAppSimulator
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Store::LicenseInformation) LicenseInformation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) LinkUri() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) AppId() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) RequestAppPurchaseAsync(bool includeReceipt) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) RequestProductPurchaseAsync(param::hstring const& productId, bool includeReceipt) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation>) LoadListingInformationAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) GetAppReceiptAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) GetProductReceiptAsync(param::hstring const& productId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) ReloadSimulatorAsync(Windows::Storage::StorageFile const& simulatorSettingsFile) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::ICurrentAppSimulator>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentAppSimulator<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorStaticsWithFiltering
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation>) LoadListingInformationByProductIdsAsync(param::async_iterable<hstring> const& productIds) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation>) LoadListingInformationByKeywordsAsync(param::async_iterable<hstring> const& keywords) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorStaticsWithFiltering<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithCampaignId
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) GetAppPurchaseCampaignIdAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithCampaignId>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithCampaignId<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithConsumables
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::FulfillmentResult>) ReportConsumableFulfillmentAsync(param::hstring const& productId, winrt::guid const& transactionId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults>) RequestProductPurchaseAsync(param::hstring const& productId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults>) RequestProductPurchaseAsync(param::hstring const& productId, param::hstring const& offerId, Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties const& displayProperties) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::UnfulfilledConsumable>>) GetUnfulfilledConsumablesAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithConsumables<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_ICurrentAppStaticsWithFiltering
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation>) LoadListingInformationByProductIdsAsync(param::async_iterable<hstring> const& productIds) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::ListingInformation>) LoadListingInformationByKeywordsAsync(param::async_iterable<hstring> const& keywords) const;
        WINRT_IMPL_AUTO(void) ReportProductFulfillment(param::hstring const& productId) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentAppStaticsWithFiltering<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_ICurrentAppWithCampaignId
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<hstring>) GetAppPurchaseCampaignIdAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::ICurrentAppWithCampaignId>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentAppWithCampaignId<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_ICurrentAppWithConsumables
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::FulfillmentResult>) ReportConsumableFulfillmentAsync(param::hstring const& productId, winrt::guid const& transactionId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults>) RequestProductPurchaseAsync(param::hstring const& productId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Store::PurchaseResults>) RequestProductPurchaseAsync(param::hstring const& productId, param::hstring const& offerId, Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties const& displayProperties) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::UnfulfilledConsumable>>) GetUnfulfilledConsumablesAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::ICurrentAppWithConsumables>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_ICurrentAppWithConsumables<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_ILicenseInformation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Store::ProductLicense>) ProductLicenses() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsActive() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsTrial() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) ExpirationDate() const;
        WINRT_IMPL_AUTO(winrt::event_token) LicenseChanged(Windows::ApplicationModel::Store::LicenseChangedEventHandler const& handler) const;
        using LicenseChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Store::ILicenseInformation, &impl::abi_t<Windows::ApplicationModel::Store::ILicenseInformation>::remove_LicenseChanged>;
        [[nodiscard]] LicenseChanged_revoker LicenseChanged(auto_revoke_t, Windows::ApplicationModel::Store::LicenseChangedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) LicenseChanged(winrt::event_token const& cookie) const noexcept;
    };
    template <> struct consume<Windows::ApplicationModel::Store::ILicenseInformation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_ILicenseInformation<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_IListingInformation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CurrentMarket() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Store::ProductListing>) ProductListings() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FormattedPrice() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) AgeRating() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::IListingInformation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_IListingInformation<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_IListingInformation2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FormattedBasePrice() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) SaleEndDate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsOnSale() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CurrencyCode() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::IListingInformation2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_IListingInformation2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_IProductLicense
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProductId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsActive() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) ExpirationDate() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::IProductLicense>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_IProductLicense<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_IProductLicenseWithFulfillment
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsConsumable() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::IProductLicenseWithFulfillment>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_IProductLicenseWithFulfillment<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_IProductListing
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProductId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FormattedPrice() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::IProductListing>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_IProductListing<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_IProductListing2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FormattedBasePrice() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::DateTime) SaleEndDate() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsOnSale() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CurrencyCode() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::IProductListing2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_IProductListing2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_IProductListingWithConsumables
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Store::ProductType) ProductType() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::IProductListingWithConsumables>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_IProductListingWithConsumables<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_IProductListingWithMetadata
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IIterable<hstring>) Keywords() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Store::ProductType) ProductType() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Tag() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) ImageUri() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::IProductListingWithMetadata>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_IProductListingWithMetadata<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_IProductPurchaseDisplayProperties
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Name() const;
        WINRT_IMPL_AUTO(void) Name(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) Image() const;
        WINRT_IMPL_AUTO(void) Image(Windows::Foundation::Uri const& value) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_IProductPurchaseDisplayProperties<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_IProductPurchaseDisplayPropertiesFactory
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Store::ProductPurchaseDisplayProperties) CreateProductPurchaseDisplayProperties(param::hstring const& name) const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::IProductPurchaseDisplayPropertiesFactory>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_IProductPurchaseDisplayPropertiesFactory<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_IPurchaseResults
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Store::ProductPurchaseStatus) Status() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) TransactionId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ReceiptXml() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) OfferId() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::IPurchaseResults>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_IPurchaseResults<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Store_IUnfulfilledConsumable
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ProductId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::guid) TransactionId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) OfferId() const;
    };
    template <> struct consume<Windows::ApplicationModel::Store::IUnfulfilledConsumable>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Store_IUnfulfilledConsumable<D>;
    };
}
#endif
