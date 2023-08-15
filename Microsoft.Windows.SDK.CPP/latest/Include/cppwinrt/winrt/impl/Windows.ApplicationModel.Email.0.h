﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments {

struct AppointmentRecurrence;

}

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates {

struct Certificate;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Email {

enum class EmailAttachmentDownloadState : int32_t
{
    NotDownloaded = 0,
    Downloading = 1,
    Downloaded = 2,
    Failed = 3,
};

enum class EmailBatchStatus : int32_t
{
    Success = 0,
    ServerSearchSyncManagerError = 1,
    ServerSearchUnknownError = 2,
};

enum class EmailCertificateValidationStatus : int32_t
{
    Success = 0,
    NoMatch = 1,
    InvalidUsage = 2,
    InvalidCertificate = 3,
    Revoked = 4,
    ChainRevoked = 5,
    RevocationServerFailure = 6,
    Expired = 7,
    Untrusted = 8,
    ServerError = 9,
    UnknownFailure = 10,
};

enum class EmailFlagState : int32_t
{
    Unflagged = 0,
    Flagged = 1,
    Completed = 2,
    Cleared = 3,
};

enum class EmailImportance : int32_t
{
    Normal = 0,
    High = 1,
    Low = 2,
};

enum class EmailMailboxActionKind : int32_t
{
    MarkMessageAsSeen = 0,
    MarkMessageRead = 1,
    ChangeMessageFlagState = 2,
    MoveMessage = 3,
    SaveDraft = 4,
    SendMessage = 5,
    CreateResponseReplyMessage = 6,
    CreateResponseReplyAllMessage = 7,
    CreateResponseForwardMessage = 8,
    MoveFolder = 9,
    MarkFolderForSyncEnabled = 10,
};

enum class EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation : int32_t
{
    None = 0,
    StrongAlgorithm = 1,
    AnyAlgorithm = 2,
};

enum class EmailMailboxAutoReplyMessageResponseKind : int32_t
{
    Html = 0,
    PlainText = 1,
};

enum class EmailMailboxChangeType : int32_t
{
    MessageCreated = 0,
    MessageModified = 1,
    MessageDeleted = 2,
    FolderCreated = 3,
    FolderModified = 4,
    FolderDeleted = 5,
    ChangeTrackingLost = 6,
};

enum class EmailMailboxCreateFolderStatus : int32_t
{
    Success = 0,
    NetworkError = 1,
    PermissionsError = 2,
    ServerError = 3,
    UnknownFailure = 4,
    NameCollision = 5,
    ServerRejected = 6,
};

enum class EmailMailboxDeleteFolderStatus : int32_t
{
    Success = 0,
    NetworkError = 1,
    PermissionsError = 2,
    ServerError = 3,
    UnknownFailure = 4,
    CouldNotDeleteEverything = 5,
};

enum class EmailMailboxEmptyFolderStatus : int32_t
{
    Success = 0,
    NetworkError = 1,
    PermissionsError = 2,
    ServerError = 3,
    UnknownFailure = 4,
    CouldNotDeleteEverything = 5,
};

enum class EmailMailboxOtherAppReadAccess : int32_t
{
    SystemOnly = 0,
    Full = 1,
    None = 2,
};

enum class EmailMailboxOtherAppWriteAccess : int32_t
{
    None = 0,
    Limited = 1,
};

enum class EmailMailboxSmimeEncryptionAlgorithm : int32_t
{
    Any = 0,
    TripleDes = 1,
    Des = 2,
    RC2128Bit = 3,
    RC264Bit = 4,
    RC240Bit = 5,
};

enum class EmailMailboxSmimeSigningAlgorithm : int32_t
{
    Any = 0,
    Sha1 = 1,
    MD5 = 2,
};

enum class EmailMailboxSyncStatus : int32_t
{
    Idle = 0,
    Syncing = 1,
    UpToDate = 2,
    AuthenticationError = 3,
    PolicyError = 4,
    UnknownError = 5,
    ManualAccountRemovalRequired = 6,
};

enum class EmailMeetingResponseType : int32_t
{
    Accept = 0,
    Decline = 1,
    Tentative = 2,
};

enum class EmailMessageBodyKind : int32_t
{
    Html = 0,
    PlainText = 1,
};

enum class EmailMessageDownloadState : int32_t
{
    PartiallyDownloaded = 0,
    Downloading = 1,
    Downloaded = 2,
    Failed = 3,
};

enum class EmailMessageResponseKind : int32_t
{
    None = 0,
    Reply = 1,
    ReplyAll = 2,
    Forward = 3,
};

enum class EmailMessageSmimeKind : int32_t
{
    None = 0,
    ClearSigned = 1,
    OpaqueSigned = 2,
    Encrypted = 3,
};

enum class EmailQueryKind : int32_t
{
    All = 0,
    Important = 1,
    Flagged = 2,
    Unread = 3,
    Read = 4,
    Unseen = 5,
};

enum class EmailQuerySearchFields : uint32_t
{
    None = 0x0,
    Subject = 0x1,
    Sender = 0x2,
    Preview = 0x4,
    Recipients = 0x8,
    All = 0xFFFFFFFF,
};

enum class EmailQuerySearchScope : int32_t
{
    Local = 0,
    Server = 1,
};

enum class EmailQuerySortDirection : int32_t
{
    Descending = 0,
    Ascending = 1,
};

enum class EmailQuerySortProperty : int32_t
{
    Date = 0,
};

enum class EmailRecipientResolutionStatus : int32_t
{
    Success = 0,
    RecipientNotFound = 1,
    AmbiguousRecipient = 2,
    NoCertificate = 3,
    CertificateRequestLimitReached = 4,
    CannotResolveDistributionList = 5,
    ServerError = 6,
    UnknownFailure = 7,
};

enum class EmailSpecialFolderKind : int32_t
{
    None = 0,
    Root = 1,
    Inbox = 2,
    Outbox = 3,
    Drafts = 4,
    DeletedItems = 5,
    Sent = 6,
};

enum class EmailStoreAccessType : int32_t
{
    AppMailboxesReadWrite = 0,
    AllMailboxesLimitedReadWrite = 1,
};

struct IEmailAttachment;
struct IEmailAttachment2;
struct IEmailAttachmentFactory;
struct IEmailAttachmentFactory2;
struct IEmailConversation;
struct IEmailConversationBatch;
struct IEmailConversationReader;
struct IEmailFolder;
struct IEmailIrmInfo;
struct IEmailIrmInfoFactory;
struct IEmailIrmTemplate;
struct IEmailIrmTemplateFactory;
struct IEmailItemCounts;
struct IEmailMailbox;
struct IEmailMailbox2;
struct IEmailMailbox3;
struct IEmailMailbox4;
struct IEmailMailbox5;
struct IEmailMailboxAction;
struct IEmailMailboxAutoReply;
struct IEmailMailboxAutoReplySettings;
struct IEmailMailboxCapabilities;
struct IEmailMailboxCapabilities2;
struct IEmailMailboxCapabilities3;
struct IEmailMailboxChange;
struct IEmailMailboxChangeReader;
struct IEmailMailboxChangeTracker;
struct IEmailMailboxChangedDeferral;
struct IEmailMailboxChangedEventArgs;
struct IEmailMailboxCreateFolderResult;
struct IEmailMailboxPolicies;
struct IEmailMailboxPolicies2;
struct IEmailMailboxPolicies3;
struct IEmailMailboxSyncManager;
struct IEmailMailboxSyncManager2;
struct IEmailManagerForUser;
struct IEmailManagerStatics;
struct IEmailManagerStatics2;
struct IEmailManagerStatics3;
struct IEmailMeetingInfo;
struct IEmailMeetingInfo2;
struct IEmailMessage;
struct IEmailMessage2;
struct IEmailMessage3;
struct IEmailMessage4;
struct IEmailMessageBatch;
struct IEmailMessageReader;
struct IEmailQueryOptions;
struct IEmailQueryOptionsFactory;
struct IEmailQueryTextSearch;
struct IEmailRecipient;
struct IEmailRecipientFactory;
struct IEmailRecipientResolutionResult;
struct IEmailRecipientResolutionResult2;
struct IEmailStore;
struct IEmailStoreNotificationTriggerDetails;
struct EmailAttachment;
struct EmailConversation;
struct EmailConversationBatch;
struct EmailConversationReader;
struct EmailFolder;
struct EmailIrmInfo;
struct EmailIrmTemplate;
struct EmailItemCounts;
struct EmailMailbox;
struct EmailMailboxAction;
struct EmailMailboxAutoReply;
struct EmailMailboxAutoReplySettings;
struct EmailMailboxCapabilities;
struct EmailMailboxChange;
struct EmailMailboxChangeReader;
struct EmailMailboxChangeTracker;
struct EmailMailboxChangedDeferral;
struct EmailMailboxChangedEventArgs;
struct EmailMailboxCreateFolderResult;
struct EmailMailboxPolicies;
struct EmailMailboxSyncManager;
struct EmailManager;
struct EmailManagerForUser;
struct EmailMeetingInfo;
struct EmailMessage;
struct EmailMessageBatch;
struct EmailMessageReader;
struct EmailQueryOptions;
struct EmailQueryTextSearch;
struct EmailRecipient;
struct EmailRecipientResolutionResult;
struct EmailStore;
struct EmailStoreNotificationTriggerDetails;

}

namespace winrt::impl {

template<> struct is_enum_flag<Windows::ApplicationModel::Email::EmailQuerySearchFields> : std::true_type {};
template <> struct category<Windows::ApplicationModel::Email::IEmailAttachment>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailAttachment2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailAttachmentFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailAttachmentFactory2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailConversation>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailConversationBatch>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailConversationReader>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailFolder>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailIrmInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailIrmInfoFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailIrmTemplate>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailIrmTemplateFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailItemCounts>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailbox>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailbox2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailbox3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailbox4>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailbox5>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxAction>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxAutoReply>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxCapabilities>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxChange>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxChangeReader>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxChangeTracker>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxPolicies>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxPolicies2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxPolicies3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxSyncManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailManagerForUser>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailManagerStatics3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMeetingInfo>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMeetingInfo2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMessage>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMessage2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMessage3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMessage4>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMessageBatch>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailMessageReader>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailQueryOptions>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailQueryOptionsFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailQueryTextSearch>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailRecipient>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailRecipientFactory>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailStore>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailAttachment>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailConversation>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailConversationBatch>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailConversationReader>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailFolder>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailIrmInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailIrmTemplate>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailItemCounts>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailbox>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxAction>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxAutoReply>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxCapabilities>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxChange>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxChangeReader>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxChangeTracker>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxChangedDeferral>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxPolicies>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxSyncManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailManagerForUser>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMeetingInfo>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMessage>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMessageBatch>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMessageReader>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailQueryOptions>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailQueryTextSearch>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailRecipient>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailRecipientResolutionResult>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailStore>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailStoreNotificationTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailAttachmentDownloadState>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailBatchStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailCertificateValidationStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailFlagState>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailImportance>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxActionKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxChangeType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMailboxSyncStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMeetingResponseType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMessageBodyKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMessageDownloadState>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMessageResponseKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailMessageSmimeKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailQueryKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailQuerySearchFields>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailQuerySearchScope>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailQuerySortDirection>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailQuerySortProperty>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailRecipientResolutionStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailSpecialFolderKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Email::EmailStoreAccessType>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::Email::IEmailAttachment>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailAttachment" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailAttachment2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailAttachment2" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailAttachmentFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailAttachmentFactory" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailAttachmentFactory2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailAttachmentFactory2" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailConversation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailConversation" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailConversationBatch>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailConversationBatch" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailConversationReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailConversationReader" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailFolder>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailFolder" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailIrmInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailIrmInfo" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailIrmInfoFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailIrmInfoFactory" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailIrmTemplate>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailIrmTemplate" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailIrmTemplateFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailIrmTemplateFactory" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailItemCounts>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailItemCounts" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailbox>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailbox" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailbox2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailbox2" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailbox3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailbox3" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailbox4>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailbox4" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailbox5>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailbox5" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxAction>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxAction" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxAutoReply>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxAutoReply" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxAutoReplySettings" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxCapabilities>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxCapabilities" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxCapabilities2" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxCapabilities3" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxChange>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxChange" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxChangeReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxChangeReader" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxChangeTracker>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxChangeTracker" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxChangedDeferral" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxCreateFolderResult" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxPolicies>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxPolicies" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxPolicies2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxPolicies2" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxPolicies3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxPolicies3" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxSyncManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxSyncManager" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMailboxSyncManager2" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailManagerForUser>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailManagerForUser" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailManagerStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailManagerStatics2" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailManagerStatics3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailManagerStatics3" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMeetingInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMeetingInfo" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMeetingInfo2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMeetingInfo2" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMessage>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMessage" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMessage2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMessage2" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMessage3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMessage3" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMessage4>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMessage4" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMessageBatch>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMessageBatch" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailMessageReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailMessageReader" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailQueryOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailQueryOptions" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailQueryOptionsFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailQueryOptionsFactory" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailQueryTextSearch>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailQueryTextSearch" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailRecipient>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailRecipient" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailRecipientFactory>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailRecipientFactory" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailRecipientResolutionResult" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailRecipientResolutionResult2" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailStore" }; };
template <> struct name<Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.IEmailStoreNotificationTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailAttachment>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailAttachment" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailConversation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailConversation" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailConversationBatch>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailConversationBatch" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailConversationReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailConversationReader" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailFolder>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailFolder" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailIrmInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailIrmInfo" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailIrmTemplate>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailIrmTemplate" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailItemCounts>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailItemCounts" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailbox>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailbox" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxAction>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxAction" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxAutoReply>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxAutoReply" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxAutoReplySettings" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxCapabilities>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxCapabilities" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxChange>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxChange" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxChangeReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxChangeReader" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxChangeTracker>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxChangeTracker" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxChangedDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxChangedDeferral" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxCreateFolderResult" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxPolicies>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxPolicies" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxSyncManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxSyncManager" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailManager" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailManagerForUser>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailManagerForUser" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMeetingInfo>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMeetingInfo" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMessage>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMessage" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMessageBatch>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMessageBatch" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMessageReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMessageReader" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailQueryOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailQueryOptions" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailQueryTextSearch>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailQueryTextSearch" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailRecipient>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailRecipient" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailRecipientResolutionResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailRecipientResolutionResult" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailStore" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailStoreNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailStoreNotificationTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailAttachmentDownloadState>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailAttachmentDownloadState" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailBatchStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailBatchStatus" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailCertificateValidationStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailCertificateValidationStatus" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailFlagState>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailFlagState" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailImportance>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailImportance" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxActionKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxActionKind" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxAutoReplyMessageResponseKind" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxChangeType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxChangeType" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxCreateFolderStatus" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxDeleteFolderStatus" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxEmptyFolderStatus" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxOtherAppReadAccess" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxOtherAppWriteAccess" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxSmimeEncryptionAlgorithm" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxSmimeSigningAlgorithm" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMailboxSyncStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMailboxSyncStatus" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMeetingResponseType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMeetingResponseType" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMessageBodyKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMessageBodyKind" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMessageDownloadState>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMessageDownloadState" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMessageResponseKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMessageResponseKind" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailMessageSmimeKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailMessageSmimeKind" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailQueryKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailQueryKind" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailQuerySearchFields>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailQuerySearchFields" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailQuerySearchScope>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailQuerySearchScope" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailQuerySortDirection>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailQuerySortDirection" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailQuerySortProperty>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailQuerySortProperty" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailRecipientResolutionStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailRecipientResolutionStatus" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailSpecialFolderKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailSpecialFolderKind" }; };
template <> struct name<Windows::ApplicationModel::Email::EmailStoreAccessType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Email.EmailStoreAccessType" }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailAttachment>{ static constexpr guid value{ 0xF353CAF9,0x57C8,0x4ADB,{ 0xB9,0x92,0x60,0xFC,0xEB,0x58,0x4F,0x54 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailAttachment2>{ static constexpr guid value{ 0x225F1070,0xB0FF,0x4571,{ 0x9D,0x54,0xA7,0x06,0xC4,0x8D,0x55,0xC6 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailAttachmentFactory>{ static constexpr guid value{ 0x796EAC46,0xED56,0x4979,{ 0x87,0x08,0xAB,0xB8,0xBC,0x85,0x4B,0x7D } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailAttachmentFactory2>{ static constexpr guid value{ 0x23259435,0x51F9,0x427D,{ 0xAD,0xCD,0x24,0x10,0x23,0xC8,0xCF,0xB7 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailConversation>{ static constexpr guid value{ 0xDA18C248,0xA0BC,0x4349,{ 0x90,0x2D,0x90,0xF6,0x63,0x89,0xF5,0x1B } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailConversationBatch>{ static constexpr guid value{ 0xB8C1AB81,0x01C5,0x432A,{ 0x9D,0xF1,0xFE,0x85,0xD9,0x8A,0x27,0x9A } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailConversationReader>{ static constexpr guid value{ 0xB4630F82,0x2875,0x44C8,{ 0x9B,0x8C,0x85,0xBE,0xB3,0xA3,0xC6,0x53 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailFolder>{ static constexpr guid value{ 0xA24F7771,0x996C,0x4864,{ 0xB1,0xBA,0xED,0x12,0x40,0xE5,0x7D,0x11 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailIrmInfo>{ static constexpr guid value{ 0x90F52193,0xB1A0,0x4EBD,{ 0xA6,0xB6,0xDD,0xCA,0x55,0x60,0x6E,0x0E } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailIrmInfoFactory>{ static constexpr guid value{ 0x314BB18C,0xE3E6,0x4D7B,{ 0xBE,0x8D,0x91,0xA9,0x63,0x11,0xB0,0x1B } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailIrmTemplate>{ static constexpr guid value{ 0xF327758D,0x546D,0x4BEA,{ 0xA9,0x63,0x54,0xA3,0x8B,0x2C,0xC0,0x16 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailIrmTemplateFactory>{ static constexpr guid value{ 0x3DA31876,0x8738,0x4418,{ 0xB9,0xCB,0x47,0x1B,0x93,0x6F,0xE7,0x1E } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailItemCounts>{ static constexpr guid value{ 0x5BD13321,0xFEC8,0x4BAB,{ 0x83,0xBA,0x0B,0xAF,0x3C,0x1F,0x6C,0xBD } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailbox>{ static constexpr guid value{ 0xA8790649,0xCF5B,0x411B,{ 0x80,0xB1,0x4A,0x6A,0x14,0x84,0xCE,0x25 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailbox2>{ static constexpr guid value{ 0x14F8E404,0x6CA2,0x4AB2,{ 0x92,0x41,0x79,0xCD,0x7B,0xF4,0x63,0x46 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailbox3>{ static constexpr guid value{ 0x3DA5897B,0x458B,0x408A,{ 0x8E,0x37,0xAC,0x8B,0x05,0xD8,0xAF,0x56 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailbox4>{ static constexpr guid value{ 0x5D1F301B,0xF222,0x48A7,{ 0xB7,0xB6,0x71,0x63,0x56,0xCD,0x26,0xA1 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailbox5>{ static constexpr guid value{ 0x39967087,0x0092,0x49BE,{ 0xBD,0x0E,0x5D,0x4D,0xC9,0xD9,0x6D,0x90 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxAction>{ static constexpr guid value{ 0xAC9889FA,0x21FA,0x4927,{ 0x92,0x10,0xD4,0x10,0x58,0x2F,0xDF,0x3E } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxAutoReply>{ static constexpr guid value{ 0xE223254C,0x8AB4,0x485B,{ 0xB3,0x1F,0x04,0xD1,0x54,0x76,0xBD,0x59 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings>{ static constexpr guid value{ 0xA87A9FA8,0x0AC6,0x4B77,{ 0xBA,0x77,0xA6,0xB9,0x9E,0x9A,0x27,0xB8 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxCapabilities>{ static constexpr guid value{ 0xEEDEC3A6,0x89DB,0x4305,{ 0x82,0xC4,0x43,0x9E,0x0A,0x33,0xDA,0x11 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>{ static constexpr guid value{ 0x69723EE4,0x2F21,0x4CBC,{ 0x88,0xAB,0x2E,0x76,0x02,0xA4,0x80,0x6B } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>{ static constexpr guid value{ 0xF690E944,0x56F2,0x45AA,{ 0x87,0x2C,0x0C,0xE9,0xF3,0xDB,0x0B,0x5C } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxChange>{ static constexpr guid value{ 0x61EDF54B,0x11EF,0x400C,{ 0xAD,0xDE,0x8C,0xDE,0x65,0xC8,0x5E,0x66 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxChangeReader>{ static constexpr guid value{ 0xBDBD0EBB,0xC53D,0x4331,{ 0x97,0xBE,0xBE,0x75,0xA2,0x14,0x6A,0x75 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxChangeTracker>{ static constexpr guid value{ 0x7AE48638,0x5166,0x42B7,{ 0x88,0x82,0xFD,0x21,0xC9,0x2B,0xDD,0x4B } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral>{ static constexpr guid value{ 0x779A74C1,0x97C5,0x4B54,{ 0xB3,0x0D,0x30,0x62,0x32,0x62,0x3E,0x6D } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs>{ static constexpr guid value{ 0x3CFD5F6E,0x01D4,0x4E4A,{ 0xA4,0x4C,0xB2,0x2D,0xD4,0x2E,0xC2,0x07 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult>{ static constexpr guid value{ 0xB228557F,0x2885,0x4998,{ 0xB5,0x95,0x8A,0x2D,0x37,0x4C,0xE9,0x50 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxPolicies>{ static constexpr guid value{ 0x1F3345C5,0x1C3B,0x4DC7,{ 0xB4,0x10,0x63,0x73,0x78,0x3E,0x54,0x5D } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxPolicies2>{ static constexpr guid value{ 0xBAB58AFB,0xA14B,0x497C,{ 0xA8,0xE2,0x55,0xEA,0xC2,0x9C,0xC4,0xB5 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxPolicies3>{ static constexpr guid value{ 0xBDD4A01F,0x4867,0x414A,{ 0x81,0xA2,0x80,0x39,0x19,0xC4,0x41,0x91 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxSyncManager>{ static constexpr guid value{ 0x517AC55A,0x3591,0x4B5D,{ 0x85,0xBC,0xC7,0x1D,0xDE,0x86,0x22,0x63 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>{ static constexpr guid value{ 0xCD8DC97E,0x95C1,0x4F89,{ 0x81,0xB7,0xE6,0xAE,0xCB,0x66,0x95,0xFC } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailManagerForUser>{ static constexpr guid value{ 0xF773DE9F,0x3CA5,0x4B0F,{ 0x90,0xC1,0x15,0x6E,0x40,0x17,0x4C,0xE5 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailManagerStatics>{ static constexpr guid value{ 0xF5128654,0x55C5,0x4890,{ 0xA8,0x24,0x21,0x6C,0x26,0x18,0xCE,0x7F } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailManagerStatics2>{ static constexpr guid value{ 0xAC052DA3,0xB194,0x425D,{ 0xB6,0xD9,0xD0,0xF0,0x41,0x35,0xED,0xA2 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailManagerStatics3>{ static constexpr guid value{ 0x4A722395,0x843E,0x4945,{ 0xB3,0xAA,0x34,0x9E,0x07,0xA3,0x62,0xC5 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMeetingInfo>{ static constexpr guid value{ 0x31C03FA9,0x7933,0x415F,{ 0xA2,0x75,0xD1,0x65,0xBA,0x07,0x02,0x6B } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMeetingInfo2>{ static constexpr guid value{ 0x7E59386D,0xB0D9,0x4FE5,{ 0x86,0x7C,0xE3,0x1E,0xD2,0xB5,0x88,0xB8 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMessage>{ static constexpr guid value{ 0x6C6D948D,0x80B5,0x48F8,{ 0xB0,0xB1,0xE0,0x4E,0x43,0x0F,0x44,0xE5 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMessage2>{ static constexpr guid value{ 0xFDC8248B,0x9F1A,0x44DB,{ 0xBD,0x3C,0x65,0xC3,0x84,0x77,0x0F,0x86 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMessage3>{ static constexpr guid value{ 0xA1EA675C,0xE598,0x4D29,{ 0xA0,0x18,0xFC,0x7B,0x7E,0xEC,0xE0,0xA1 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMessage4>{ static constexpr guid value{ 0x317CF181,0x3E7F,0x4A05,{ 0x83,0x94,0x3E,0x10,0x33,0x6D,0xD4,0x35 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMessageBatch>{ static constexpr guid value{ 0x605CD08F,0x25D9,0x4F1B,{ 0x9E,0x51,0x05,0x14,0xC0,0x14,0x96,0x53 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailMessageReader>{ static constexpr guid value{ 0x2F4ABE9F,0x6213,0x4A85,{ 0xA3,0xB0,0xF9,0x2D,0x1A,0x83,0x9D,0x19 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailQueryOptions>{ static constexpr guid value{ 0x45504B9B,0x3E7F,0x4D52,{ 0xB6,0xDD,0xD6,0xFD,0x4E,0x1F,0xBD,0x9A } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailQueryOptionsFactory>{ static constexpr guid value{ 0x88F1A1B8,0x78AB,0x4EE8,{ 0xB4,0xE3,0x04,0x6D,0x6E,0x2F,0xE5,0xE2 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailQueryTextSearch>{ static constexpr guid value{ 0x9FA0A288,0x3C5D,0x46A5,{ 0xA6,0xE2,0x31,0xD6,0xFD,0x17,0xE5,0x40 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailRecipient>{ static constexpr guid value{ 0xCAE825B3,0x4478,0x4814,{ 0xB9,0x00,0xC9,0x02,0xB5,0xE1,0x9B,0x53 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailRecipientFactory>{ static constexpr guid value{ 0x5500B84D,0xC79A,0x4EF8,{ 0xB9,0x09,0x72,0x2E,0x18,0xE3,0x93,0x5D } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult>{ static constexpr guid value{ 0x918338FA,0x8D8D,0x4573,{ 0x80,0xD1,0x07,0x17,0x2A,0x34,0xB9,0x8D } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2>{ static constexpr guid value{ 0x5E420BB6,0xCE5B,0x4BDE,{ 0xB9,0xD4,0xE1,0x6D,0xA0,0xB0,0x9F,0xCA } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailStore>{ static constexpr guid value{ 0xF803226E,0x9137,0x4F8B,{ 0xA4,0x70,0x27,0x9A,0xC3,0x05,0x8E,0xB6 } }; };
template <> struct guid_storage<Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails>{ static constexpr guid value{ 0xCE17563C,0x46E6,0x43C9,{ 0x96,0xF7,0xFA,0xCF,0x7D,0xD7,0x10,0xCB } }; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailAttachment>{ using type = Windows::ApplicationModel::Email::IEmailAttachment; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailConversation>{ using type = Windows::ApplicationModel::Email::IEmailConversation; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailConversationBatch>{ using type = Windows::ApplicationModel::Email::IEmailConversationBatch; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailConversationReader>{ using type = Windows::ApplicationModel::Email::IEmailConversationReader; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailFolder>{ using type = Windows::ApplicationModel::Email::IEmailFolder; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailIrmInfo>{ using type = Windows::ApplicationModel::Email::IEmailIrmInfo; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailIrmTemplate>{ using type = Windows::ApplicationModel::Email::IEmailIrmTemplate; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailItemCounts>{ using type = Windows::ApplicationModel::Email::IEmailItemCounts; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailbox>{ using type = Windows::ApplicationModel::Email::IEmailMailbox; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxAction>{ using type = Windows::ApplicationModel::Email::IEmailMailboxAction; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxAutoReply>{ using type = Windows::ApplicationModel::Email::IEmailMailboxAutoReply; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings>{ using type = Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxCapabilities>{ using type = Windows::ApplicationModel::Email::IEmailMailboxCapabilities; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxChange>{ using type = Windows::ApplicationModel::Email::IEmailMailboxChange; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxChangeReader>{ using type = Windows::ApplicationModel::Email::IEmailMailboxChangeReader; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxChangeTracker>{ using type = Windows::ApplicationModel::Email::IEmailMailboxChangeTracker; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxChangedDeferral>{ using type = Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs>{ using type = Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult>{ using type = Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxPolicies>{ using type = Windows::ApplicationModel::Email::IEmailMailboxPolicies; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMailboxSyncManager>{ using type = Windows::ApplicationModel::Email::IEmailMailboxSyncManager; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailManagerForUser>{ using type = Windows::ApplicationModel::Email::IEmailManagerForUser; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMeetingInfo>{ using type = Windows::ApplicationModel::Email::IEmailMeetingInfo; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMessage>{ using type = Windows::ApplicationModel::Email::IEmailMessage; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMessageBatch>{ using type = Windows::ApplicationModel::Email::IEmailMessageBatch; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailMessageReader>{ using type = Windows::ApplicationModel::Email::IEmailMessageReader; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailQueryOptions>{ using type = Windows::ApplicationModel::Email::IEmailQueryOptions; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailQueryTextSearch>{ using type = Windows::ApplicationModel::Email::IEmailQueryTextSearch; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailRecipient>{ using type = Windows::ApplicationModel::Email::IEmailRecipient; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailRecipientResolutionResult>{ using type = Windows::ApplicationModel::Email::IEmailRecipientResolutionResult; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailStore>{ using type = Windows::ApplicationModel::Email::IEmailStore; };
template <> struct default_interface<Windows::ApplicationModel::Email::EmailStoreNotificationTriggerDetails>{ using type = Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails; };

template <> struct abi<Windows::ApplicationModel::Email::IEmailAttachment>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_FileName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_FileName(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Data(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Data(void* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailAttachment2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Id(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ContentId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_ContentId(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ContentLocation(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_ContentLocation(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DownloadState(Windows::ApplicationModel::Email::EmailAttachmentDownloadState* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_DownloadState(Windows::ApplicationModel::Email::EmailAttachmentDownloadState value) noexcept = 0;
    virtual int32_t WINRT_CALL get_EstimatedDownloadSizeInBytes(uint64_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_EstimatedDownloadSizeInBytes(uint64_t value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsFromBaseMessage(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsInline(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsInline(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MimeType(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_MimeType(void* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailAttachmentFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(void* fileName, void* data, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailAttachmentFactory2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(void* fileName, void* data, void* mimeType, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailConversation>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Id(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MailboxId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_FlagState(Windows::ApplicationModel::Email::EmailFlagState* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_HasAttachment(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Importance(Windows::ApplicationModel::Email::EmailImportance* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_LastEmailResponseKind(Windows::ApplicationModel::Email::EmailMessageResponseKind* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MessageCount(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MostRecentMessageId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MostRecentMessageTime(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Preview(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_LatestSender(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Subject(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_UnreadMessageCount(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL FindMessagesAsync(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL FindMessagesWithCountAsync(uint32_t count, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailConversationBatch>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Conversations(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Status(Windows::ApplicationModel::Email::EmailBatchStatus* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailConversationReader>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL ReadBatchAsync(void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailFolder>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Id(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RemoteId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_RemoteId(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MailboxId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ParentFolderId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DisplayName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_DisplayName(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsSyncEnabled(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsSyncEnabled(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_LastSuccessfulSyncTime(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_LastSuccessfulSyncTime(Windows::Foundation::DateTime value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Kind(Windows::ApplicationModel::Email::EmailSpecialFolderKind* value) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFolderAsync(void* name, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL DeleteAsync(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL FindChildFoldersAsync(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetConversationReader(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetConversationReaderWithOptions(void* options, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetMessageAsync(void* id, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetMessageReader(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetMessageReaderWithOptions(void* options, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetMessageCountsAsync(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL TryMoveAsync(void* newParentFolder, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL TryMoveWithNewNameAsync(void* newParentFolder, void* newFolderName, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL TrySaveAsync(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL SaveMessageAsync(void* message, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailIrmInfo>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_CanEdit(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanEdit(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanExtractData(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanExtractData(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanForward(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanForward(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanModifyRecipientsOnResponse(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanModifyRecipientsOnResponse(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanPrintData(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanPrintData(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanRemoveIrmOnResponse(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanRemoveIrmOnResponse(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanReply(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanReply(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanReplyAll(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanReplyAll(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ExpirationDate(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_ExpirationDate(Windows::Foundation::DateTime value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsIrmOriginator(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsIrmOriginator(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsProgramaticAccessAllowed(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsProgramaticAccessAllowed(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Template(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Template(void* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailIrmInfoFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(Windows::Foundation::DateTime expiration, void* irmTemplate, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailIrmTemplate>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Id(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Id(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Description(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Description(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Name(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Name(void* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailIrmTemplateFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(void* id, void* name, void* description, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailItemCounts>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Flagged(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Important(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Total(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Unread(uint32_t* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailbox>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Capabilities(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ChangeTracker(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DisplayName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_DisplayName(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Id(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsOwnedByCurrentApp(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsDataEncryptedUnderLock(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MailAddress(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_MailAddress(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MailAddressAliases(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_OtherAppReadAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_OtherAppReadAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess value) noexcept = 0;
    virtual int32_t WINRT_CALL get_OtherAppWriteAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_OtherAppWriteAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Policies(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SourceDisplayName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SyncManager(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_UserDataAccountId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL GetConversationReader(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetConversationReaderWithOptions(void* options, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetMessageReader(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetMessageReaderWithOptions(void* options, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL DeleteAsync(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetConversationAsync(void* id, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetFolderAsync(void* id, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetMessageAsync(void* id, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetSpecialFolderAsync(Windows::ApplicationModel::Email::EmailSpecialFolderKind folderType, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL SaveAsync(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL MarkMessageAsSeenAsync(void* messageId, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL MarkFolderAsSeenAsync(void* folderId, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL MarkMessageReadAsync(void* messageId, bool isRead, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL ChangeMessageFlagStateAsync(void* messageId, Windows::ApplicationModel::Email::EmailFlagState flagState, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL TryMoveMessageAsync(void* messageId, void* newParentFolderId, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL TryMoveFolderAsync(void* folderId, void* newParentFolderId, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL TryMoveFolderWithNewNameAsync(void* folderId, void* newParentFolderId, void* newFolderName, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL DeleteMessageAsync(void* messageId, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL MarkFolderSyncEnabledAsync(void* folderId, bool isSyncEnabled, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL SendMessageAsync(void* message, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL SaveDraftAsync(void* message, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL DownloadMessageAsync(void* messageId, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL DownloadAttachmentAsync(void* attachmentId, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateResponseMessageAsync(void* messageId, Windows::ApplicationModel::Email::EmailMessageResponseKind responseType, void* subject, Windows::ApplicationModel::Email::EmailMessageBodyKind responseHeaderType, void* responseHeader, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL TryUpdateMeetingResponseAsync(void* meeting, Windows::ApplicationModel::Email::EmailMeetingResponseType response, void* subject, void* comment, bool sendUpdate, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL TryForwardMeetingAsync(void* meeting, void* recipients, void* subject, Windows::ApplicationModel::Email::EmailMessageBodyKind forwardHeaderType, void* forwardHeader, void* comment, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL TryProposeNewTimeForMeetingAsync(void* meeting, Windows::Foundation::DateTime newStartTime, Windows::Foundation::TimeSpan newDuration, void* subject, void* comment, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL add_MailboxChanged(void* pHandler, winrt::event_token* pToken) noexcept = 0;
    virtual int32_t WINRT_CALL remove_MailboxChanged(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL SmartSendMessageAsync(void* message, bool smartSend, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL TrySetAutoReplySettingsAsync(void* autoReplySettings, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL TryGetAutoReplySettingsAsync(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind requestedFormat, void** autoReplySettings) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailbox2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_LinkedMailboxId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_NetworkAccountId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_NetworkId(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailbox3>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL ResolveRecipientsAsync(void* recipients, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL ValidateCertificatesAsync(void* certificates, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL TryEmptyFolderAsync(void* folderId, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL TryCreateFolderAsync(void* parentFolderId, void* name, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL TryDeleteFolderAsync(void* folderId, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailbox4>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL RegisterSyncManagerAsync(void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailbox5>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetChangeTracker(void* identity, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxAction>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Kind(Windows::ApplicationModel::Email::EmailMailboxActionKind* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ChangeNumber(uint64_t* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxAutoReply>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_IsEnabled(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsEnabled(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Response(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Response(void* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_IsEnabled(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsEnabled(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ResponseKind(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_ResponseKind(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind value) noexcept = 0;
    virtual int32_t WINRT_CALL get_StartTime(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_StartTime(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_EndTime(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_EndTime(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_InternalReply(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_KnownExternalReply(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_UnknownExternalReply(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxCapabilities>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_CanForwardMeetings(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanGetAndSetExternalAutoReplies(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanGetAndSetInternalAutoReplies(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanUpdateMeetingResponses(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanServerSearchFolders(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanServerSearchMailbox(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanProposeNewTimeForMeetings(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanSmartSend(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxCapabilities2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_CanResolveRecipients(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanValidateCertificates(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanEmptyFolder(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanCreateFolder(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanDeleteFolder(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanMoveFolder(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxCapabilities3>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_CanForwardMeetings(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanGetAndSetExternalAutoReplies(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanGetAndSetInternalAutoReplies(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanUpdateMeetingResponses(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanServerSearchFolders(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanServerSearchMailbox(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanProposeNewTimeForMeetings(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanSmartSend(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanResolveRecipients(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanValidateCertificates(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanEmptyFolder(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanCreateFolder(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanDeleteFolder(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanMoveFolder(bool value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxChange>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ChangeType(Windows::ApplicationModel::Email::EmailMailboxChangeType* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MailboxActions(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Message(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Folder(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxChangeReader>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL AcceptChanges() noexcept = 0;
    virtual int32_t WINRT_CALL AcceptChangesThrough(void* lastChangeToAcknowledge) noexcept = 0;
    virtual int32_t WINRT_CALL ReadBatchAsync(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxChangeTracker>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_IsTracking(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL Enable() noexcept = 0;
    virtual int32_t WINRT_CALL GetChangeReader(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL Reset() noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Complete() noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetDeferral(void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Status(Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Folder(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxPolicies>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_AllowedSmimeEncryptionAlgorithmNegotiation(Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AllowSmimeSoftCertificates(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RequiredSmimeEncryptionAlgorithm(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RequiredSmimeSigningAlgorithm(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxPolicies2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_MustEncryptSmimeMessages(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MustSignSmimeMessages(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxPolicies3>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_AllowedSmimeEncryptionAlgorithmNegotiation(Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation value) noexcept = 0;
    virtual int32_t WINRT_CALL put_AllowSmimeSoftCertificates(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL put_RequiredSmimeEncryptionAlgorithm(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_RequiredSmimeSigningAlgorithm(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_MustEncryptSmimeMessages(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL put_MustSignSmimeMessages(bool value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxSyncManager>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Status(Windows::ApplicationModel::Email::EmailMailboxSyncStatus* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_LastSuccessfulSyncTime(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_LastAttemptedSyncTime(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL SyncAsync(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL add_SyncStatusChanged(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_SyncStatusChanged(winrt::event_token token) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMailboxSyncManager2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_Status(Windows::ApplicationModel::Email::EmailMailboxSyncStatus value) noexcept = 0;
    virtual int32_t WINRT_CALL put_LastSuccessfulSyncTime(Windows::Foundation::DateTime value) noexcept = 0;
    virtual int32_t WINRT_CALL put_LastAttemptedSyncTime(Windows::Foundation::DateTime value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailManagerForUser>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL ShowComposeNewEmailAsync(void* message, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType accessType, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL get_User(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailManagerStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL ShowComposeNewEmailAsync(void* message, void** asyncAction) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailManagerStatics2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType accessType, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailManagerStatics3>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL GetForUser(void* user, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMeetingInfo>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_AllowNewTimeProposal(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_AllowNewTimeProposal(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AppointmentRoamingId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_AppointmentRoamingId(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AppointmentOriginalStartTime(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_AppointmentOriginalStartTime(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Duration(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Duration(Windows::Foundation::TimeSpan value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsAllDay(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsAllDay(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsResponseRequested(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsResponseRequested(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Location(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Location(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ProposedStartTime(void** proposedStartTime) noexcept = 0;
    virtual int32_t WINRT_CALL put_ProposedStartTime(void* proposedStartTime) noexcept = 0;
    virtual int32_t WINRT_CALL get_ProposedDuration(void** duration) noexcept = 0;
    virtual int32_t WINRT_CALL put_ProposedDuration(void* duration) noexcept = 0;
    virtual int32_t WINRT_CALL get_RecurrenceStartTime(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_RecurrenceStartTime(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Recurrence(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Recurrence(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RemoteChangeNumber(uint64_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_RemoteChangeNumber(uint64_t value) noexcept = 0;
    virtual int32_t WINRT_CALL get_StartTime(Windows::Foundation::DateTime* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_StartTime(Windows::Foundation::DateTime value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMeetingInfo2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_IsReportedOutOfDateByServer(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMessage>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Subject(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Subject(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Body(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Body(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_To(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CC(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Bcc(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Attachments(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMessage2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Id(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RemoteId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_RemoteId(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MailboxId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ConversationId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_FolderId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AllowInternetImages(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_AllowInternetImages(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ChangeNumber(uint64_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DownloadState(Windows::ApplicationModel::Email::EmailMessageDownloadState* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_DownloadState(Windows::ApplicationModel::Email::EmailMessageDownloadState value) noexcept = 0;
    virtual int32_t WINRT_CALL get_EstimatedDownloadSizeInBytes(uint32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_EstimatedDownloadSizeInBytes(uint32_t value) noexcept = 0;
    virtual int32_t WINRT_CALL get_FlagState(Windows::ApplicationModel::Email::EmailFlagState* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_FlagState(Windows::ApplicationModel::Email::EmailFlagState value) noexcept = 0;
    virtual int32_t WINRT_CALL get_HasPartialBodies(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Importance(Windows::ApplicationModel::Email::EmailImportance* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Importance(Windows::ApplicationModel::Email::EmailImportance value) noexcept = 0;
    virtual int32_t WINRT_CALL get_InResponseToMessageId(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IrmInfo(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IrmInfo(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsDraftMessage(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsRead(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsRead(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsSeen(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsSeen(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsServerSearchMessage(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsSmartSendable(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MessageClass(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_MessageClass(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_NormalizedSubject(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_OriginalCodePage(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_OriginalCodePage(int32_t value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Preview(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Preview(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_LastResponseKind(Windows::ApplicationModel::Email::EmailMessageResponseKind* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_LastResponseKind(Windows::ApplicationModel::Email::EmailMessageResponseKind value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Sender(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Sender(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SentTime(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_SentTime(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MeetingInfo(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_MeetingInfo(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL GetBodyStream(Windows::ApplicationModel::Email::EmailMessageBodyKind type, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL SetBodyStream(Windows::ApplicationModel::Email::EmailMessageBodyKind type, void* stream) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMessage3>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_SmimeData(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_SmimeData(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SmimeKind(Windows::ApplicationModel::Email::EmailMessageSmimeKind* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_SmimeKind(Windows::ApplicationModel::Email::EmailMessageSmimeKind value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMessage4>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ReplyTo(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SentRepresenting(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_SentRepresenting(void* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMessageBatch>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Messages(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Status(Windows::ApplicationModel::Email::EmailBatchStatus* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailMessageReader>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL ReadBatchAsync(void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailQueryOptions>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_TextSearch(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SortDirection(Windows::ApplicationModel::Email::EmailQuerySortDirection* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_SortDirection(Windows::ApplicationModel::Email::EmailQuerySortDirection value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SortProperty(Windows::ApplicationModel::Email::EmailQuerySortProperty* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_SortProperty(Windows::ApplicationModel::Email::EmailQuerySortProperty value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Kind(Windows::ApplicationModel::Email::EmailQueryKind* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Kind(Windows::ApplicationModel::Email::EmailQueryKind value) noexcept = 0;
    virtual int32_t WINRT_CALL get_FolderIds(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailQueryOptionsFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateWithText(void* text, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateWithTextAndFields(void* text, Windows::ApplicationModel::Email::EmailQuerySearchFields fields, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailQueryTextSearch>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Fields(Windows::ApplicationModel::Email::EmailQuerySearchFields* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Fields(Windows::ApplicationModel::Email::EmailQuerySearchFields value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SearchScope(Windows::ApplicationModel::Email::EmailQuerySearchScope* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_SearchScope(Windows::ApplicationModel::Email::EmailQuerySearchScope value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Text(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Text(void* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailRecipient>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Name(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Name(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Address(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Address(void* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailRecipientFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(void* address, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateWithName(void* address, void* name, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Status(Windows::ApplicationModel::Email::EmailRecipientResolutionStatus* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_PublicKeys(void** value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_Status(Windows::ApplicationModel::Email::EmailRecipientResolutionStatus value) noexcept = 0;
    virtual int32_t WINRT_CALL SetPublicKeys(void* value) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailStore>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL FindMailboxesAsync(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetConversationReader(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetConversationReaderWithOptions(void* options, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetMessageReader(void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetMessageReaderWithOptions(void* options, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetMailboxAsync(void* id, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetConversationAsync(void* id, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetFolderAsync(void* id, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL GetMessageAsync(void* id, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateMailboxAsync(void* accountName, void* accountAddress, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateMailboxInAccountAsync(void* accountName, void* accountAddress, void* userDataAccountId, void** result) noexcept = 0;
};};

template <> struct abi<Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails>{ struct type : IInspectable
{
};};

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailAttachment
{
    hstring FileName() const;
    void FileName(param::hstring const& value) const;
    Windows::Storage::Streams::IRandomAccessStreamReference Data() const;
    void Data(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailAttachment> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailAttachment<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailAttachment2
{
    hstring Id() const;
    hstring ContentId() const;
    void ContentId(param::hstring const& value) const;
    hstring ContentLocation() const;
    void ContentLocation(param::hstring const& value) const;
    Windows::ApplicationModel::Email::EmailAttachmentDownloadState DownloadState() const;
    void DownloadState(Windows::ApplicationModel::Email::EmailAttachmentDownloadState const& value) const;
    uint64_t EstimatedDownloadSizeInBytes() const;
    void EstimatedDownloadSizeInBytes(uint64_t value) const;
    bool IsFromBaseMessage() const;
    bool IsInline() const;
    void IsInline(bool value) const;
    hstring MimeType() const;
    void MimeType(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailAttachment2> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailAttachment2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailAttachmentFactory
{
    Windows::ApplicationModel::Email::EmailAttachment Create(param::hstring const& fileName, Windows::Storage::Streams::IRandomAccessStreamReference const& data) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailAttachmentFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailAttachmentFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailAttachmentFactory2
{
    Windows::ApplicationModel::Email::EmailAttachment Create(param::hstring const& fileName, Windows::Storage::Streams::IRandomAccessStreamReference const& data, param::hstring const& mimeType) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailAttachmentFactory2> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailAttachmentFactory2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailConversation
{
    hstring Id() const;
    hstring MailboxId() const;
    Windows::ApplicationModel::Email::EmailFlagState FlagState() const;
    bool HasAttachment() const;
    Windows::ApplicationModel::Email::EmailImportance Importance() const;
    Windows::ApplicationModel::Email::EmailMessageResponseKind LastEmailResponseKind() const;
    uint32_t MessageCount() const;
    hstring MostRecentMessageId() const;
    Windows::Foundation::DateTime MostRecentMessageTime() const;
    hstring Preview() const;
    Windows::ApplicationModel::Email::EmailRecipient LatestSender() const;
    hstring Subject() const;
    uint32_t UnreadMessageCount() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage>> FindMessagesAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage>> FindMessagesAsync(uint32_t count) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailConversation> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailConversation<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailConversationBatch
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailConversation> Conversations() const;
    Windows::ApplicationModel::Email::EmailBatchStatus Status() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailConversationBatch> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailConversationBatch<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailConversationReader
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversationBatch> ReadBatchAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailConversationReader> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailConversationReader<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailFolder
{
    hstring Id() const;
    hstring RemoteId() const;
    void RemoteId(param::hstring const& value) const;
    hstring MailboxId() const;
    hstring ParentFolderId() const;
    hstring DisplayName() const;
    void DisplayName(param::hstring const& value) const;
    bool IsSyncEnabled() const;
    void IsSyncEnabled(bool value) const;
    Windows::Foundation::DateTime LastSuccessfulSyncTime() const;
    void LastSuccessfulSyncTime(Windows::Foundation::DateTime const& value) const;
    Windows::ApplicationModel::Email::EmailSpecialFolderKind Kind() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> CreateFolderAsync(param::hstring const& name) const;
    Windows::Foundation::IAsyncAction DeleteAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailFolder>> FindChildFoldersAsync() const;
    Windows::ApplicationModel::Email::EmailConversationReader GetConversationReader() const;
    Windows::ApplicationModel::Email::EmailConversationReader GetConversationReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> GetMessageAsync(param::hstring const& id) const;
    Windows::ApplicationModel::Email::EmailMessageReader GetMessageReader() const;
    Windows::ApplicationModel::Email::EmailMessageReader GetMessageReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailItemCounts> GetMessageCountsAsync() const;
    Windows::Foundation::IAsyncOperation<bool> TryMoveAsync(Windows::ApplicationModel::Email::EmailFolder const& newParentFolder) const;
    Windows::Foundation::IAsyncOperation<bool> TryMoveAsync(Windows::ApplicationModel::Email::EmailFolder const& newParentFolder, param::hstring const& newFolderName) const;
    Windows::Foundation::IAsyncOperation<bool> TrySaveAsync() const;
    Windows::Foundation::IAsyncAction SaveMessageAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailFolder> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailFolder<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailIrmInfo
{
    bool CanEdit() const;
    void CanEdit(bool value) const;
    bool CanExtractData() const;
    void CanExtractData(bool value) const;
    bool CanForward() const;
    void CanForward(bool value) const;
    bool CanModifyRecipientsOnResponse() const;
    void CanModifyRecipientsOnResponse(bool value) const;
    bool CanPrintData() const;
    void CanPrintData(bool value) const;
    bool CanRemoveIrmOnResponse() const;
    void CanRemoveIrmOnResponse(bool value) const;
    bool CanReply() const;
    void CanReply(bool value) const;
    bool CanReplyAll() const;
    void CanReplyAll(bool value) const;
    Windows::Foundation::DateTime ExpirationDate() const;
    void ExpirationDate(Windows::Foundation::DateTime const& value) const;
    bool IsIrmOriginator() const;
    void IsIrmOriginator(bool value) const;
    bool IsProgramaticAccessAllowed() const;
    void IsProgramaticAccessAllowed(bool value) const;
    Windows::ApplicationModel::Email::EmailIrmTemplate Template() const;
    void Template(Windows::ApplicationModel::Email::EmailIrmTemplate const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailIrmInfo> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailIrmInfo<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailIrmInfoFactory
{
    Windows::ApplicationModel::Email::EmailIrmInfo Create(Windows::Foundation::DateTime const& expiration, Windows::ApplicationModel::Email::EmailIrmTemplate const& irmTemplate) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailIrmInfoFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailIrmInfoFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailIrmTemplate
{
    hstring Id() const;
    void Id(param::hstring const& value) const;
    hstring Description() const;
    void Description(param::hstring const& value) const;
    hstring Name() const;
    void Name(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailIrmTemplate> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailIrmTemplate<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailIrmTemplateFactory
{
    Windows::ApplicationModel::Email::EmailIrmTemplate Create(param::hstring const& id, param::hstring const& name, param::hstring const& description) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailIrmTemplateFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailIrmTemplateFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailItemCounts
{
    uint32_t Flagged() const;
    uint32_t Important() const;
    uint32_t Total() const;
    uint32_t Unread() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailItemCounts> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailItemCounts<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailbox
{
    Windows::ApplicationModel::Email::EmailMailboxCapabilities Capabilities() const;
    Windows::ApplicationModel::Email::EmailMailboxChangeTracker ChangeTracker() const;
    hstring DisplayName() const;
    void DisplayName(param::hstring const& value) const;
    hstring Id() const;
    bool IsOwnedByCurrentApp() const;
    bool IsDataEncryptedUnderLock() const;
    hstring MailAddress() const;
    void MailAddress(param::hstring const& value) const;
    Windows::Foundation::Collections::IVector<hstring> MailAddressAliases() const;
    Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess OtherAppReadAccess() const;
    void OtherAppReadAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess const& value) const;
    Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess OtherAppWriteAccess() const;
    void OtherAppWriteAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess const& value) const;
    Windows::ApplicationModel::Email::EmailMailboxPolicies Policies() const;
    hstring SourceDisplayName() const;
    Windows::ApplicationModel::Email::EmailMailboxSyncManager SyncManager() const;
    hstring UserDataAccountId() const;
    Windows::ApplicationModel::Email::EmailConversationReader GetConversationReader() const;
    Windows::ApplicationModel::Email::EmailConversationReader GetConversationReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const;
    Windows::ApplicationModel::Email::EmailMessageReader GetMessageReader() const;
    Windows::ApplicationModel::Email::EmailMessageReader GetMessageReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const;
    Windows::Foundation::IAsyncAction DeleteAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversation> GetConversationAsync(param::hstring const& id) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> GetFolderAsync(param::hstring const& id) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> GetMessageAsync(param::hstring const& id) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> GetSpecialFolderAsync(Windows::ApplicationModel::Email::EmailSpecialFolderKind const& folderType) const;
    Windows::Foundation::IAsyncAction SaveAsync() const;
    Windows::Foundation::IAsyncAction MarkMessageAsSeenAsync(param::hstring const& messageId) const;
    Windows::Foundation::IAsyncAction MarkFolderAsSeenAsync(param::hstring const& folderId) const;
    Windows::Foundation::IAsyncAction MarkMessageReadAsync(param::hstring const& messageId, bool isRead) const;
    Windows::Foundation::IAsyncAction ChangeMessageFlagStateAsync(param::hstring const& messageId, Windows::ApplicationModel::Email::EmailFlagState const& flagState) const;
    Windows::Foundation::IAsyncOperation<bool> TryMoveMessageAsync(param::hstring const& messageId, param::hstring const& newParentFolderId) const;
    Windows::Foundation::IAsyncOperation<bool> TryMoveFolderAsync(param::hstring const& folderId, param::hstring const& newParentFolderId) const;
    Windows::Foundation::IAsyncOperation<bool> TryMoveFolderAsync(param::hstring const& folderId, param::hstring const& newParentFolderId, param::hstring const& newFolderName) const;
    Windows::Foundation::IAsyncAction DeleteMessageAsync(param::hstring const& messageId) const;
    Windows::Foundation::IAsyncAction MarkFolderSyncEnabledAsync(param::hstring const& folderId, bool isSyncEnabled) const;
    Windows::Foundation::IAsyncAction SendMessageAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const;
    Windows::Foundation::IAsyncAction SaveDraftAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const;
    Windows::Foundation::IAsyncAction DownloadMessageAsync(param::hstring const& messageId) const;
    Windows::Foundation::IAsyncAction DownloadAttachmentAsync(param::hstring const& attachmentId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> CreateResponseMessageAsync(param::hstring const& messageId, Windows::ApplicationModel::Email::EmailMessageResponseKind const& responseType, param::hstring const& subject, Windows::ApplicationModel::Email::EmailMessageBodyKind const& responseHeaderType, param::hstring const& responseHeader) const;
    Windows::Foundation::IAsyncOperation<bool> TryUpdateMeetingResponseAsync(Windows::ApplicationModel::Email::EmailMessage const& meeting, Windows::ApplicationModel::Email::EmailMeetingResponseType const& response, param::hstring const& subject, param::hstring const& comment, bool sendUpdate) const;
    Windows::Foundation::IAsyncOperation<bool> TryForwardMeetingAsync(Windows::ApplicationModel::Email::EmailMessage const& meeting, param::async_iterable<Windows::ApplicationModel::Email::EmailRecipient> const& recipients, param::hstring const& subject, Windows::ApplicationModel::Email::EmailMessageBodyKind const& forwardHeaderType, param::hstring const& forwardHeader, param::hstring const& comment) const;
    Windows::Foundation::IAsyncOperation<bool> TryProposeNewTimeForMeetingAsync(Windows::ApplicationModel::Email::EmailMessage const& meeting, Windows::Foundation::DateTime const& newStartTime, Windows::Foundation::TimeSpan const& newDuration, param::hstring const& subject, param::hstring const& comment) const;
    winrt::event_token MailboxChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox, Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs> const& pHandler) const;
    using MailboxChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Email::IEmailMailbox, &impl::abi_t<Windows::ApplicationModel::Email::IEmailMailbox>::remove_MailboxChanged>;
    MailboxChanged_revoker MailboxChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox, Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs> const& pHandler) const;
    void MailboxChanged(winrt::event_token const& token) const noexcept;
    Windows::Foundation::IAsyncAction SendMessageAsync(Windows::ApplicationModel::Email::EmailMessage const& message, bool smartSend) const;
    Windows::Foundation::IAsyncOperation<bool> TrySetAutoReplySettingsAsync(Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings const& autoReplySettings) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings> TryGetAutoReplySettingsAsync(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind const& requestedFormat) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailbox> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailbox<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailbox2
{
    hstring LinkedMailboxId() const;
    hstring NetworkAccountId() const;
    hstring NetworkId() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailbox2> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailbox2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailbox3
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipientResolutionResult>> ResolveRecipientsAsync(param::async_iterable<hstring> const& recipients) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailCertificateValidationStatus>> ValidateCertificatesAsync(param::async_iterable<Windows::Security::Cryptography::Certificates::Certificate> const& certificates) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus> TryEmptyFolderAsync(param::hstring const& folderId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult> TryCreateFolderAsync(param::hstring const& parentFolderId, param::hstring const& name) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus> TryDeleteFolderAsync(param::hstring const& folderId) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailbox3> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailbox3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailbox4
{
    Windows::Foundation::IAsyncAction RegisterSyncManagerAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailbox4> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailbox4<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailbox5
{
    Windows::ApplicationModel::Email::EmailMailboxChangeTracker GetChangeTracker(param::hstring const& identity) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailbox5> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailbox5<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxAction
{
    Windows::ApplicationModel::Email::EmailMailboxActionKind Kind() const;
    uint64_t ChangeNumber() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxAction> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxAction<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReply
{
    bool IsEnabled() const;
    void IsEnabled(bool value) const;
    hstring Response() const;
    void Response(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxAutoReply> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReply<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReplySettings
{
    bool IsEnabled() const;
    void IsEnabled(bool value) const;
    Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind ResponseKind() const;
    void ResponseKind(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> StartTime() const;
    void StartTime(optional<Windows::Foundation::DateTime> const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> EndTime() const;
    void EndTime(optional<Windows::Foundation::DateTime> const& value) const;
    Windows::ApplicationModel::Email::EmailMailboxAutoReply InternalReply() const;
    Windows::ApplicationModel::Email::EmailMailboxAutoReply KnownExternalReply() const;
    Windows::ApplicationModel::Email::EmailMailboxAutoReply UnknownExternalReply() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxAutoReplySettings<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities
{
    bool CanForwardMeetings() const;
    bool CanGetAndSetExternalAutoReplies() const;
    bool CanGetAndSetInternalAutoReplies() const;
    bool CanUpdateMeetingResponses() const;
    bool CanServerSearchFolders() const;
    bool CanServerSearchMailbox() const;
    bool CanProposeNewTimeForMeetings() const;
    bool CanSmartSend() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxCapabilities> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities2
{
    bool CanResolveRecipients() const;
    bool CanValidateCertificates() const;
    bool CanEmptyFolder() const;
    bool CanCreateFolder() const;
    bool CanDeleteFolder() const;
    bool CanMoveFolder() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxCapabilities2> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3
{
    void CanForwardMeetings(bool value) const;
    void CanGetAndSetExternalAutoReplies(bool value) const;
    void CanGetAndSetInternalAutoReplies(bool value) const;
    void CanUpdateMeetingResponses(bool value) const;
    void CanServerSearchFolders(bool value) const;
    void CanServerSearchMailbox(bool value) const;
    void CanProposeNewTimeForMeetings(bool value) const;
    void CanSmartSend(bool value) const;
    void CanResolveRecipients(bool value) const;
    void CanValidateCertificates(bool value) const;
    void CanEmptyFolder(bool value) const;
    void CanCreateFolder(bool value) const;
    void CanDeleteFolder(bool value) const;
    void CanMoveFolder(bool value) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxCapabilities3> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxCapabilities3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxChange
{
    Windows::ApplicationModel::Email::EmailMailboxChangeType ChangeType() const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMailboxAction> MailboxActions() const;
    Windows::ApplicationModel::Email::EmailMessage Message() const;
    Windows::ApplicationModel::Email::EmailFolder Folder() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxChange> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxChange<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxChangeReader
{
    void AcceptChanges() const;
    void AcceptChangesThrough(Windows::ApplicationModel::Email::EmailMailboxChange const& lastChangeToAcknowledge) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailboxChange>> ReadBatchAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxChangeReader> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxChangeReader<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxChangeTracker
{
    bool IsTracking() const;
    void Enable() const;
    Windows::ApplicationModel::Email::EmailMailboxChangeReader GetChangeReader() const;
    void Reset() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxChangeTracker> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxChangeTracker<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxChangedDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxChangedDeferral<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxChangedEventArgs
{
    Windows::ApplicationModel::Email::EmailMailboxChangedDeferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxCreateFolderResult
{
    Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus Status() const;
    Windows::ApplicationModel::Email::EmailFolder Folder() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxCreateFolderResult<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies
{
    Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation AllowedSmimeEncryptionAlgorithmNegotiation() const;
    bool AllowSmimeSoftCertificates() const;
    Windows::Foundation::IReference<Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm> RequiredSmimeEncryptionAlgorithm() const;
    Windows::Foundation::IReference<Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm> RequiredSmimeSigningAlgorithm() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxPolicies> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies2
{
    bool MustEncryptSmimeMessages() const;
    bool MustSignSmimeMessages() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxPolicies2> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies3
{
    void AllowedSmimeEncryptionAlgorithmNegotiation(Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation const& value) const;
    void AllowSmimeSoftCertificates(bool value) const;
    void RequiredSmimeEncryptionAlgorithm(optional<Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm> const& value) const;
    void RequiredSmimeSigningAlgorithm(optional<Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm> const& value) const;
    void MustEncryptSmimeMessages(bool value) const;
    void MustSignSmimeMessages(bool value) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxPolicies3> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxPolicies3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager
{
    Windows::ApplicationModel::Email::EmailMailboxSyncStatus Status() const;
    Windows::Foundation::DateTime LastSuccessfulSyncTime() const;
    Windows::Foundation::DateTime LastAttemptedSyncTime() const;
    Windows::Foundation::IAsyncOperation<bool> SyncAsync() const;
    winrt::event_token SyncStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailboxSyncManager, Windows::Foundation::IInspectable> const& handler) const;
    using SyncStatusChanged_revoker = impl::event_revoker<Windows::ApplicationModel::Email::IEmailMailboxSyncManager, &impl::abi_t<Windows::ApplicationModel::Email::IEmailMailboxSyncManager>::remove_SyncStatusChanged>;
    SyncStatusChanged_revoker SyncStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Email::EmailMailboxSyncManager, Windows::Foundation::IInspectable> const& handler) const;
    void SyncStatusChanged(winrt::event_token const& token) const noexcept;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxSyncManager> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager2
{
    void Status(Windows::ApplicationModel::Email::EmailMailboxSyncStatus const& value) const;
    void LastSuccessfulSyncTime(Windows::Foundation::DateTime const& value) const;
    void LastAttemptedSyncTime(Windows::Foundation::DateTime const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMailboxSyncManager2> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMailboxSyncManager2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailManagerForUser
{
    Windows::Foundation::IAsyncAction ShowComposeNewEmailAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore> RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType const& accessType) const;
    Windows::System::User User() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailManagerForUser> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailManagerForUser<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailManagerStatics
{
    Windows::Foundation::IAsyncAction ShowComposeNewEmailAsync(Windows::ApplicationModel::Email::EmailMessage const& message) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailManagerStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore> RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType const& accessType) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailManagerStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailManagerStatics2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailManagerStatics3
{
    Windows::ApplicationModel::Email::EmailManagerForUser GetForUser(Windows::System::User const& user) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailManagerStatics3> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailManagerStatics3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMeetingInfo
{
    bool AllowNewTimeProposal() const;
    void AllowNewTimeProposal(bool value) const;
    hstring AppointmentRoamingId() const;
    void AppointmentRoamingId(param::hstring const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> AppointmentOriginalStartTime() const;
    void AppointmentOriginalStartTime(optional<Windows::Foundation::DateTime> const& value) const;
    Windows::Foundation::TimeSpan Duration() const;
    void Duration(Windows::Foundation::TimeSpan const& value) const;
    bool IsAllDay() const;
    void IsAllDay(bool value) const;
    bool IsResponseRequested() const;
    void IsResponseRequested(bool value) const;
    hstring Location() const;
    void Location(param::hstring const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ProposedStartTime() const;
    void ProposedStartTime(optional<Windows::Foundation::DateTime> const& proposedStartTime) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> ProposedDuration() const;
    void ProposedDuration(optional<Windows::Foundation::TimeSpan> const& duration) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> RecurrenceStartTime() const;
    void RecurrenceStartTime(optional<Windows::Foundation::DateTime> const& value) const;
    Windows::ApplicationModel::Appointments::AppointmentRecurrence Recurrence() const;
    void Recurrence(Windows::ApplicationModel::Appointments::AppointmentRecurrence const& value) const;
    uint64_t RemoteChangeNumber() const;
    void RemoteChangeNumber(uint64_t value) const;
    Windows::Foundation::DateTime StartTime() const;
    void StartTime(Windows::Foundation::DateTime const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMeetingInfo> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMeetingInfo<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMeetingInfo2
{
    bool IsReportedOutOfDateByServer() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMeetingInfo2> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMeetingInfo2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMessage
{
    hstring Subject() const;
    void Subject(param::hstring const& value) const;
    hstring Body() const;
    void Body(param::hstring const& value) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> To() const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> CC() const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> Bcc() const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailAttachment> Attachments() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMessage> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMessage<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMessage2
{
    hstring Id() const;
    hstring RemoteId() const;
    void RemoteId(param::hstring const& value) const;
    hstring MailboxId() const;
    hstring ConversationId() const;
    hstring FolderId() const;
    bool AllowInternetImages() const;
    void AllowInternetImages(bool value) const;
    uint64_t ChangeNumber() const;
    Windows::ApplicationModel::Email::EmailMessageDownloadState DownloadState() const;
    void DownloadState(Windows::ApplicationModel::Email::EmailMessageDownloadState const& value) const;
    uint32_t EstimatedDownloadSizeInBytes() const;
    void EstimatedDownloadSizeInBytes(uint32_t value) const;
    Windows::ApplicationModel::Email::EmailFlagState FlagState() const;
    void FlagState(Windows::ApplicationModel::Email::EmailFlagState const& value) const;
    bool HasPartialBodies() const;
    Windows::ApplicationModel::Email::EmailImportance Importance() const;
    void Importance(Windows::ApplicationModel::Email::EmailImportance const& value) const;
    hstring InResponseToMessageId() const;
    Windows::ApplicationModel::Email::EmailIrmInfo IrmInfo() const;
    void IrmInfo(Windows::ApplicationModel::Email::EmailIrmInfo const& value) const;
    bool IsDraftMessage() const;
    bool IsRead() const;
    void IsRead(bool value) const;
    bool IsSeen() const;
    void IsSeen(bool value) const;
    bool IsServerSearchMessage() const;
    bool IsSmartSendable() const;
    hstring MessageClass() const;
    void MessageClass(param::hstring const& value) const;
    hstring NormalizedSubject() const;
    int32_t OriginalCodePage() const;
    void OriginalCodePage(int32_t value) const;
    hstring Preview() const;
    void Preview(param::hstring const& value) const;
    Windows::ApplicationModel::Email::EmailMessageResponseKind LastResponseKind() const;
    void LastResponseKind(Windows::ApplicationModel::Email::EmailMessageResponseKind const& value) const;
    Windows::ApplicationModel::Email::EmailRecipient Sender() const;
    void Sender(Windows::ApplicationModel::Email::EmailRecipient const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> SentTime() const;
    void SentTime(optional<Windows::Foundation::DateTime> const& value) const;
    Windows::ApplicationModel::Email::EmailMeetingInfo MeetingInfo() const;
    void MeetingInfo(Windows::ApplicationModel::Email::EmailMeetingInfo const& value) const;
    Windows::Storage::Streams::IRandomAccessStreamReference GetBodyStream(Windows::ApplicationModel::Email::EmailMessageBodyKind const& type) const;
    void SetBodyStream(Windows::ApplicationModel::Email::EmailMessageBodyKind const& type, Windows::Storage::Streams::IRandomAccessStreamReference const& stream) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMessage2> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMessage2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMessage3
{
    Windows::Storage::Streams::IRandomAccessStreamReference SmimeData() const;
    void SmimeData(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
    Windows::ApplicationModel::Email::EmailMessageSmimeKind SmimeKind() const;
    void SmimeKind(Windows::ApplicationModel::Email::EmailMessageSmimeKind const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMessage3> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMessage3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMessage4
{
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient> ReplyTo() const;
    Windows::ApplicationModel::Email::EmailRecipient SentRepresenting() const;
    void SentRepresenting(Windows::ApplicationModel::Email::EmailRecipient const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMessage4> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMessage4<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMessageBatch
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage> Messages() const;
    Windows::ApplicationModel::Email::EmailBatchStatus Status() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMessageBatch> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMessageBatch<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailMessageReader
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessageBatch> ReadBatchAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailMessageReader> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailMessageReader<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailQueryOptions
{
    Windows::ApplicationModel::Email::EmailQueryTextSearch TextSearch() const;
    Windows::ApplicationModel::Email::EmailQuerySortDirection SortDirection() const;
    void SortDirection(Windows::ApplicationModel::Email::EmailQuerySortDirection const& value) const;
    Windows::ApplicationModel::Email::EmailQuerySortProperty SortProperty() const;
    void SortProperty(Windows::ApplicationModel::Email::EmailQuerySortProperty const& value) const;
    Windows::ApplicationModel::Email::EmailQueryKind Kind() const;
    void Kind(Windows::ApplicationModel::Email::EmailQueryKind const& value) const;
    Windows::Foundation::Collections::IVector<hstring> FolderIds() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailQueryOptions> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailQueryOptions<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailQueryOptionsFactory
{
    Windows::ApplicationModel::Email::EmailQueryOptions CreateWithText(param::hstring const& text) const;
    Windows::ApplicationModel::Email::EmailQueryOptions CreateWithTextAndFields(param::hstring const& text, Windows::ApplicationModel::Email::EmailQuerySearchFields const& fields) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailQueryOptionsFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailQueryOptionsFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailQueryTextSearch
{
    Windows::ApplicationModel::Email::EmailQuerySearchFields Fields() const;
    void Fields(Windows::ApplicationModel::Email::EmailQuerySearchFields const& value) const;
    Windows::ApplicationModel::Email::EmailQuerySearchScope SearchScope() const;
    void SearchScope(Windows::ApplicationModel::Email::EmailQuerySearchScope const& value) const;
    hstring Text() const;
    void Text(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailQueryTextSearch> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailQueryTextSearch<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailRecipient
{
    hstring Name() const;
    void Name(param::hstring const& value) const;
    hstring Address() const;
    void Address(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailRecipient> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailRecipient<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailRecipientFactory
{
    Windows::ApplicationModel::Email::EmailRecipient Create(param::hstring const& address) const;
    Windows::ApplicationModel::Email::EmailRecipient CreateWithName(param::hstring const& address, param::hstring const& name) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailRecipientFactory> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailRecipientFactory<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailRecipientResolutionResult
{
    Windows::ApplicationModel::Email::EmailRecipientResolutionStatus Status() const;
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> PublicKeys() const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailRecipientResolutionResult<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailRecipientResolutionResult2
{
    void Status(Windows::ApplicationModel::Email::EmailRecipientResolutionStatus const& value) const;
    void SetPublicKeys(param::iterable<Windows::Security::Cryptography::Certificates::Certificate> const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailRecipientResolutionResult2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailStore
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox>> FindMailboxesAsync() const;
    Windows::ApplicationModel::Email::EmailConversationReader GetConversationReader() const;
    Windows::ApplicationModel::Email::EmailConversationReader GetConversationReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const;
    Windows::ApplicationModel::Email::EmailMessageReader GetMessageReader() const;
    Windows::ApplicationModel::Email::EmailMessageReader GetMessageReader(Windows::ApplicationModel::Email::EmailQueryOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox> GetMailboxAsync(param::hstring const& id) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversation> GetConversationAsync(param::hstring const& id) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder> GetFolderAsync(param::hstring const& id) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage> GetMessageAsync(param::hstring const& id) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox> CreateMailboxAsync(param::hstring const& accountName, param::hstring const& accountAddress) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox> CreateMailboxAsync(param::hstring const& accountName, param::hstring const& accountAddress, param::hstring const& userDataAccountId) const;
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailStore> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailStore<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Email_IEmailStoreNotificationTriggerDetails
{
};
template <> struct consume<Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Email_IEmailStoreNotificationTriggerDetails<D>; };

}
