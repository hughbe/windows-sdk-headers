﻿// C++/WinRT v1.0.190111.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppService {

struct AppServiceConnection;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;
struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;
struct PropertySet;
struct ValueSet;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::DirectX::Direct3D11 {

struct IDirect3DSurface;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

enum class BitmapPixelFormat;
struct SoftwareBitmap;

}

WINRT_EXPORT namespace winrt::Windows::Media::Capture {

struct CapturedFrameControlValues;
struct VideoStreamConfiguration;

}

WINRT_EXPORT namespace winrt::Windows::Media::Capture::Frames {

struct MediaFrameSource;

}

WINRT_EXPORT namespace winrt::Windows::Media::Devices {

struct VideoDeviceController;

}

WINRT_EXPORT namespace winrt::Windows::Media::Devices::Core {

struct FrameController;

}

WINRT_EXPORT namespace winrt::Windows::Media::FaceAnalysis {

struct DetectedFace;

}

WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties {

struct AudioEncodingProperties;
struct TimedMetadataEncodingProperties;
struct VideoEncodingProperties;

}

WINRT_EXPORT namespace winrt::Windows::Media::Playback {

struct MediaPlaybackItem;

}

WINRT_EXPORT namespace winrt::Windows::Media::Protection {

struct MediaProtectionManager;

}

WINRT_EXPORT namespace winrt::Windows::Media::Streaming::Adaptive {

struct AdaptiveMediaSource;

}

WINRT_EXPORT namespace winrt::Windows::Networking::BackgroundTransfer {

struct DownloadOperation;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct IStorageFile;

}

WINRT_EXPORT namespace winrt::Windows::Storage::FileProperties {

struct MusicProperties;
struct VideoProperties;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct Buffer;
struct IBuffer;
struct IInputStream;
struct IRandomAccessStream;
struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::Media::Effects {

struct IVideoEffectDefinition;

}

WINRT_EXPORT namespace winrt::Windows::Media::Core {

enum class AudioDecoderDegradation : int32_t
{
    None = 0,
    DownmixTo2Channels = 1,
    DownmixTo6Channels = 2,
    DownmixTo8Channels = 3,
};

enum class AudioDecoderDegradationReason : int32_t
{
    None = 0,
    LicensingRequirement = 1,
    SpatialAudioNotSupported = 2,
};

enum class CodecCategory : int32_t
{
    Encoder = 0,
    Decoder = 1,
};

enum class CodecKind : int32_t
{
    Audio = 0,
    Video = 1,
};

enum class FaceDetectionMode : int32_t
{
    HighPerformance = 0,
    Balanced = 1,
    HighQuality = 2,
};

enum class MediaDecoderStatus : int32_t
{
    FullySupported = 0,
    UnsupportedSubtype = 1,
    UnsupportedEncoderProperties = 2,
    Degraded = 3,
};

enum class MediaSourceState : int32_t
{
    Initial = 0,
    Opening = 1,
    Opened = 2,
    Failed = 3,
    Closed = 4,
};

enum class MediaSourceStatus : int32_t
{
    FullySupported = 0,
    Unknown = 1,
};

enum class MediaStreamSourceClosedReason : int32_t
{
    Done = 0,
    UnknownError = 1,
    AppReportedError = 2,
    UnsupportedProtectionSystem = 3,
    ProtectionSystemFailure = 4,
    UnsupportedEncodingFormat = 5,
    MissingSampleRequestedEventHandler = 6,
};

enum class MediaStreamSourceErrorStatus : int32_t
{
    Other = 0,
    OutOfMemory = 1,
    FailedToOpenFile = 2,
    FailedToConnectToServer = 3,
    ConnectionToServerLost = 4,
    UnspecifiedNetworkError = 5,
    DecodeError = 6,
    UnsupportedMediaFormat = 7,
};

enum class MediaTrackKind : int32_t
{
    Audio = 0,
    Video = 1,
    TimedMetadata = 2,
};

enum class MseAppendMode : int32_t
{
    Segments = 0,
    Sequence = 1,
};

enum class MseEndOfStreamStatus : int32_t
{
    Success = 0,
    NetworkError = 1,
    DecodeError = 2,
    UnknownError = 3,
};

enum class MseReadyState : int32_t
{
    Closed = 0,
    Open = 1,
    Ended = 2,
};

enum class SceneAnalysisRecommendation : int32_t
{
    Standard = 0,
    Hdr = 1,
    LowLight = 2,
};

enum class TimedMetadataKind : int32_t
{
    Caption = 0,
    Chapter = 1,
    Custom = 2,
    Data = 3,
    Description = 4,
    Subtitle = 5,
    ImageSubtitle = 6,
    Speech = 7,
};

enum class TimedMetadataTrackErrorCode : int32_t
{
    None = 0,
    DataFormatError = 1,
    NetworkError = 2,
    InternalError = 3,
};

enum class TimedTextDisplayAlignment : int32_t
{
    Before = 0,
    After = 1,
    Center = 2,
};

enum class TimedTextFlowDirection : int32_t
{
    LeftToRight = 0,
    RightToLeft = 1,
};

enum class TimedTextFontStyle : int32_t
{
    Normal = 0,
    Oblique = 1,
    Italic = 2,
};

enum class TimedTextLineAlignment : int32_t
{
    Start = 0,
    End = 1,
    Center = 2,
};

enum class TimedTextScrollMode : int32_t
{
    Popon = 0,
    Rollup = 1,
};

enum class TimedTextUnit : int32_t
{
    Pixels = 0,
    Percentage = 1,
};

enum class TimedTextWeight : int32_t
{
    Normal = 400,
    Bold = 700,
};

enum class TimedTextWrapping : int32_t
{
    NoWrap = 0,
    Wrap = 1,
};

enum class TimedTextWritingMode : int32_t
{
    LeftRightTopBottom = 0,
    RightLeftTopBottom = 1,
    TopBottomRightLeft = 2,
    TopBottomLeftRight = 3,
    LeftRight = 4,
    RightLeft = 5,
    TopBottom = 6,
};

enum class VideoStabilizationEffectEnabledChangedReason : int32_t
{
    Programmatic = 0,
    PixelRateTooHigh = 1,
    RunningSlowly = 2,
};

struct IAudioStreamDescriptor;
struct IAudioStreamDescriptor2;
struct IAudioStreamDescriptor3;
struct IAudioStreamDescriptorFactory;
struct IAudioTrack;
struct IAudioTrackOpenFailedEventArgs;
struct IAudioTrackSupportInfo;
struct IChapterCue;
struct ICodecInfo;
struct ICodecQuery;
struct ICodecSubtypesStatics;
struct IDataCue;
struct IDataCue2;
struct IFaceDetectedEventArgs;
struct IFaceDetectionEffect;
struct IFaceDetectionEffectDefinition;
struct IFaceDetectionEffectFrame;
struct IHighDynamicRangeControl;
struct IHighDynamicRangeOutput;
struct IImageCue;
struct IInitializeMediaStreamSourceRequestedEventArgs;
struct ILowLightFusionResult;
struct ILowLightFusionStatics;
struct IMediaBinder;
struct IMediaBindingEventArgs;
struct IMediaBindingEventArgs2;
struct IMediaBindingEventArgs3;
struct IMediaCue;
struct IMediaCueEventArgs;
struct IMediaSource;
struct IMediaSource2;
struct IMediaSource3;
struct IMediaSource4;
struct IMediaSource5;
struct IMediaSourceAppServiceConnection;
struct IMediaSourceAppServiceConnectionFactory;
struct IMediaSourceError;
struct IMediaSourceOpenOperationCompletedEventArgs;
struct IMediaSourceStateChangedEventArgs;
struct IMediaSourceStatics;
struct IMediaSourceStatics2;
struct IMediaSourceStatics3;
struct IMediaSourceStatics4;
struct IMediaStreamDescriptor;
struct IMediaStreamDescriptor2;
struct IMediaStreamSample;
struct IMediaStreamSample2;
struct IMediaStreamSampleProtectionProperties;
struct IMediaStreamSampleStatics;
struct IMediaStreamSampleStatics2;
struct IMediaStreamSource;
struct IMediaStreamSource2;
struct IMediaStreamSource3;
struct IMediaStreamSource4;
struct IMediaStreamSourceClosedEventArgs;
struct IMediaStreamSourceClosedRequest;
struct IMediaStreamSourceFactory;
struct IMediaStreamSourceSampleRenderedEventArgs;
struct IMediaStreamSourceSampleRequest;
struct IMediaStreamSourceSampleRequestDeferral;
struct IMediaStreamSourceSampleRequestedEventArgs;
struct IMediaStreamSourceStartingEventArgs;
struct IMediaStreamSourceStartingRequest;
struct IMediaStreamSourceStartingRequestDeferral;
struct IMediaStreamSourceSwitchStreamsRequest;
struct IMediaStreamSourceSwitchStreamsRequestDeferral;
struct IMediaStreamSourceSwitchStreamsRequestedEventArgs;
struct IMediaTrack;
struct IMseSourceBuffer;
struct IMseSourceBufferList;
struct IMseStreamSource;
struct IMseStreamSource2;
struct IMseStreamSourceStatics;
struct ISceneAnalysisEffect;
struct ISceneAnalysisEffectFrame;
struct ISceneAnalysisEffectFrame2;
struct ISceneAnalyzedEventArgs;
struct ISingleSelectMediaTrackList;
struct ISpeechCue;
struct ITimedMetadataStreamDescriptor;
struct ITimedMetadataStreamDescriptorFactory;
struct ITimedMetadataTrack;
struct ITimedMetadataTrack2;
struct ITimedMetadataTrackError;
struct ITimedMetadataTrackFactory;
struct ITimedMetadataTrackFailedEventArgs;
struct ITimedMetadataTrackProvider;
struct ITimedTextCue;
struct ITimedTextLine;
struct ITimedTextRegion;
struct ITimedTextSource;
struct ITimedTextSourceResolveResultEventArgs;
struct ITimedTextSourceStatics;
struct ITimedTextSourceStatics2;
struct ITimedTextStyle;
struct ITimedTextStyle2;
struct ITimedTextSubformat;
struct IVideoStabilizationEffect;
struct IVideoStabilizationEffectEnabledChangedEventArgs;
struct IVideoStreamDescriptor;
struct IVideoStreamDescriptor2;
struct IVideoStreamDescriptorFactory;
struct IVideoTrack;
struct IVideoTrackOpenFailedEventArgs;
struct IVideoTrackSupportInfo;
struct AudioStreamDescriptor;
struct AudioTrack;
struct AudioTrackOpenFailedEventArgs;
struct AudioTrackSupportInfo;
struct ChapterCue;
struct CodecInfo;
struct CodecQuery;
struct CodecSubtypes;
struct DataCue;
struct FaceDetectedEventArgs;
struct FaceDetectionEffect;
struct FaceDetectionEffectDefinition;
struct FaceDetectionEffectFrame;
struct HighDynamicRangeControl;
struct HighDynamicRangeOutput;
struct ImageCue;
struct InitializeMediaStreamSourceRequestedEventArgs;
struct LowLightFusion;
struct LowLightFusionResult;
struct MediaBinder;
struct MediaBindingEventArgs;
struct MediaCueEventArgs;
struct MediaSource;
struct MediaSourceAppServiceConnection;
struct MediaSourceError;
struct MediaSourceOpenOperationCompletedEventArgs;
struct MediaSourceStateChangedEventArgs;
struct MediaStreamSample;
struct MediaStreamSamplePropertySet;
struct MediaStreamSampleProtectionProperties;
struct MediaStreamSource;
struct MediaStreamSourceClosedEventArgs;
struct MediaStreamSourceClosedRequest;
struct MediaStreamSourceSampleRenderedEventArgs;
struct MediaStreamSourceSampleRequest;
struct MediaStreamSourceSampleRequestDeferral;
struct MediaStreamSourceSampleRequestedEventArgs;
struct MediaStreamSourceStartingEventArgs;
struct MediaStreamSourceStartingRequest;
struct MediaStreamSourceStartingRequestDeferral;
struct MediaStreamSourceSwitchStreamsRequest;
struct MediaStreamSourceSwitchStreamsRequestDeferral;
struct MediaStreamSourceSwitchStreamsRequestedEventArgs;
struct MseSourceBuffer;
struct MseSourceBufferList;
struct MseStreamSource;
struct SceneAnalysisEffect;
struct SceneAnalysisEffectDefinition;
struct SceneAnalysisEffectFrame;
struct SceneAnalyzedEventArgs;
struct SpeechCue;
struct TimedMetadataStreamDescriptor;
struct TimedMetadataTrack;
struct TimedMetadataTrackError;
struct TimedMetadataTrackFailedEventArgs;
struct TimedTextCue;
struct TimedTextLine;
struct TimedTextRegion;
struct TimedTextSource;
struct TimedTextSourceResolveResultEventArgs;
struct TimedTextStyle;
struct TimedTextSubformat;
struct VideoStabilizationEffect;
struct VideoStabilizationEffectDefinition;
struct VideoStabilizationEffectEnabledChangedEventArgs;
struct VideoStreamDescriptor;
struct VideoTrack;
struct VideoTrackOpenFailedEventArgs;
struct VideoTrackSupportInfo;
struct MseTimeRange;
struct TimedTextDouble;
struct TimedTextPadding;
struct TimedTextPoint;
struct TimedTextSize;

}

namespace winrt::impl {

template <> struct category<Windows::Media::Core::IAudioStreamDescriptor>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IAudioStreamDescriptor2>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IAudioStreamDescriptor3>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IAudioStreamDescriptorFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IAudioTrack>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IAudioTrackOpenFailedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IAudioTrackSupportInfo>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IChapterCue>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ICodecInfo>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ICodecQuery>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ICodecSubtypesStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IDataCue>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IDataCue2>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IFaceDetectedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IFaceDetectionEffect>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IFaceDetectionEffectDefinition>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IFaceDetectionEffectFrame>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IHighDynamicRangeControl>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IHighDynamicRangeOutput>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IImageCue>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ILowLightFusionResult>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ILowLightFusionStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaBinder>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaBindingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaBindingEventArgs2>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaBindingEventArgs3>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaCue>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaCueEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaSource>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaSource2>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaSource3>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaSource4>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaSource5>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaSourceAppServiceConnection>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaSourceAppServiceConnectionFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaSourceError>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaSourceStateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaSourceStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaSourceStatics2>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaSourceStatics3>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaSourceStatics4>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamDescriptor>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamDescriptor2>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSample>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSample2>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSampleProtectionProperties>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSampleStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSampleStatics2>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSource>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSource2>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSource3>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSource4>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSourceClosedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSourceClosedRequest>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSourceFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSourceSampleRequest>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSourceStartingEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSourceStartingRequest>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMediaTrack>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMseSourceBuffer>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMseSourceBufferList>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMseStreamSource>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMseStreamSource2>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IMseStreamSourceStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ISceneAnalysisEffect>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ISceneAnalysisEffectFrame>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ISceneAnalysisEffectFrame2>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ISceneAnalyzedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ISingleSelectMediaTrackList>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ISpeechCue>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedMetadataStreamDescriptor>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedMetadataStreamDescriptorFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedMetadataTrack>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedMetadataTrack2>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedMetadataTrackError>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedMetadataTrackFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedMetadataTrackFailedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedMetadataTrackProvider>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedTextCue>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedTextLine>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedTextRegion>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedTextSource>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedTextSourceResolveResultEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedTextSourceStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedTextSourceStatics2>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedTextStyle>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedTextStyle2>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::ITimedTextSubformat>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IVideoStabilizationEffect>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IVideoStreamDescriptor>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IVideoStreamDescriptor2>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IVideoStreamDescriptorFactory>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IVideoTrack>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IVideoTrackOpenFailedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::IVideoTrackSupportInfo>{ using type = interface_category; };
template <> struct category<Windows::Media::Core::AudioStreamDescriptor>{ using type = class_category; };
template <> struct category<Windows::Media::Core::AudioTrack>{ using type = class_category; };
template <> struct category<Windows::Media::Core::AudioTrackOpenFailedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::AudioTrackSupportInfo>{ using type = class_category; };
template <> struct category<Windows::Media::Core::ChapterCue>{ using type = class_category; };
template <> struct category<Windows::Media::Core::CodecInfo>{ using type = class_category; };
template <> struct category<Windows::Media::Core::CodecQuery>{ using type = class_category; };
template <> struct category<Windows::Media::Core::CodecSubtypes>{ using type = class_category; };
template <> struct category<Windows::Media::Core::DataCue>{ using type = class_category; };
template <> struct category<Windows::Media::Core::FaceDetectedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::FaceDetectionEffect>{ using type = class_category; };
template <> struct category<Windows::Media::Core::FaceDetectionEffectDefinition>{ using type = class_category; };
template <> struct category<Windows::Media::Core::FaceDetectionEffectFrame>{ using type = class_category; };
template <> struct category<Windows::Media::Core::HighDynamicRangeControl>{ using type = class_category; };
template <> struct category<Windows::Media::Core::HighDynamicRangeOutput>{ using type = class_category; };
template <> struct category<Windows::Media::Core::ImageCue>{ using type = class_category; };
template <> struct category<Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::LowLightFusion>{ using type = class_category; };
template <> struct category<Windows::Media::Core::LowLightFusionResult>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaBinder>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaBindingEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaCueEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaSource>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaSourceAppServiceConnection>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaSourceError>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaSourceStateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaStreamSample>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaStreamSamplePropertySet>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaStreamSampleProtectionProperties>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaStreamSource>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaStreamSourceClosedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaStreamSourceClosedRequest>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaStreamSourceSampleRequest>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaStreamSourceSampleRequestDeferral>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaStreamSourceStartingEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaStreamSourceStartingRequest>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaStreamSourceStartingRequestDeferral>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MseSourceBuffer>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MseSourceBufferList>{ using type = class_category; };
template <> struct category<Windows::Media::Core::MseStreamSource>{ using type = class_category; };
template <> struct category<Windows::Media::Core::SceneAnalysisEffect>{ using type = class_category; };
template <> struct category<Windows::Media::Core::SceneAnalysisEffectDefinition>{ using type = class_category; };
template <> struct category<Windows::Media::Core::SceneAnalysisEffectFrame>{ using type = class_category; };
template <> struct category<Windows::Media::Core::SceneAnalyzedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::SpeechCue>{ using type = class_category; };
template <> struct category<Windows::Media::Core::TimedMetadataStreamDescriptor>{ using type = class_category; };
template <> struct category<Windows::Media::Core::TimedMetadataTrack>{ using type = class_category; };
template <> struct category<Windows::Media::Core::TimedMetadataTrackError>{ using type = class_category; };
template <> struct category<Windows::Media::Core::TimedMetadataTrackFailedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::TimedTextCue>{ using type = class_category; };
template <> struct category<Windows::Media::Core::TimedTextLine>{ using type = class_category; };
template <> struct category<Windows::Media::Core::TimedTextRegion>{ using type = class_category; };
template <> struct category<Windows::Media::Core::TimedTextSource>{ using type = class_category; };
template <> struct category<Windows::Media::Core::TimedTextSourceResolveResultEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::TimedTextStyle>{ using type = class_category; };
template <> struct category<Windows::Media::Core::TimedTextSubformat>{ using type = class_category; };
template <> struct category<Windows::Media::Core::VideoStabilizationEffect>{ using type = class_category; };
template <> struct category<Windows::Media::Core::VideoStabilizationEffectDefinition>{ using type = class_category; };
template <> struct category<Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::VideoStreamDescriptor>{ using type = class_category; };
template <> struct category<Windows::Media::Core::VideoTrack>{ using type = class_category; };
template <> struct category<Windows::Media::Core::VideoTrackOpenFailedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Media::Core::VideoTrackSupportInfo>{ using type = class_category; };
template <> struct category<Windows::Media::Core::AudioDecoderDegradation>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::AudioDecoderDegradationReason>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::CodecCategory>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::CodecKind>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::FaceDetectionMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::MediaDecoderStatus>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::MediaSourceState>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::MediaSourceStatus>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::MediaStreamSourceClosedReason>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::MediaStreamSourceErrorStatus>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::MediaTrackKind>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::MseAppendMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::MseEndOfStreamStatus>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::MseReadyState>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::SceneAnalysisRecommendation>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::TimedMetadataKind>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::TimedMetadataTrackErrorCode>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::TimedTextDisplayAlignment>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::TimedTextFlowDirection>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::TimedTextFontStyle>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::TimedTextLineAlignment>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::TimedTextScrollMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::TimedTextUnit>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::TimedTextWeight>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::TimedTextWrapping>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::TimedTextWritingMode>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason>{ using type = enum_category; };
template <> struct category<Windows::Media::Core::MseTimeRange>{ using type = struct_category<Windows::Foundation::TimeSpan,Windows::Foundation::TimeSpan>; };
template <> struct category<Windows::Media::Core::TimedTextDouble>{ using type = struct_category<double,Windows::Media::Core::TimedTextUnit>; };
template <> struct category<Windows::Media::Core::TimedTextPadding>{ using type = struct_category<double,double,double,double,Windows::Media::Core::TimedTextUnit>; };
template <> struct category<Windows::Media::Core::TimedTextPoint>{ using type = struct_category<double,double,Windows::Media::Core::TimedTextUnit>; };
template <> struct category<Windows::Media::Core::TimedTextSize>{ using type = struct_category<double,double,Windows::Media::Core::TimedTextUnit>; };
template <> struct name<Windows::Media::Core::IAudioStreamDescriptor>{ static constexpr auto & value{ L"Windows.Media.Core.IAudioStreamDescriptor" }; };
template <> struct name<Windows::Media::Core::IAudioStreamDescriptor2>{ static constexpr auto & value{ L"Windows.Media.Core.IAudioStreamDescriptor2" }; };
template <> struct name<Windows::Media::Core::IAudioStreamDescriptor3>{ static constexpr auto & value{ L"Windows.Media.Core.IAudioStreamDescriptor3" }; };
template <> struct name<Windows::Media::Core::IAudioStreamDescriptorFactory>{ static constexpr auto & value{ L"Windows.Media.Core.IAudioStreamDescriptorFactory" }; };
template <> struct name<Windows::Media::Core::IAudioTrack>{ static constexpr auto & value{ L"Windows.Media.Core.IAudioTrack" }; };
template <> struct name<Windows::Media::Core::IAudioTrackOpenFailedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.IAudioTrackOpenFailedEventArgs" }; };
template <> struct name<Windows::Media::Core::IAudioTrackSupportInfo>{ static constexpr auto & value{ L"Windows.Media.Core.IAudioTrackSupportInfo" }; };
template <> struct name<Windows::Media::Core::IChapterCue>{ static constexpr auto & value{ L"Windows.Media.Core.IChapterCue" }; };
template <> struct name<Windows::Media::Core::ICodecInfo>{ static constexpr auto & value{ L"Windows.Media.Core.ICodecInfo" }; };
template <> struct name<Windows::Media::Core::ICodecQuery>{ static constexpr auto & value{ L"Windows.Media.Core.ICodecQuery" }; };
template <> struct name<Windows::Media::Core::ICodecSubtypesStatics>{ static constexpr auto & value{ L"Windows.Media.Core.ICodecSubtypesStatics" }; };
template <> struct name<Windows::Media::Core::IDataCue>{ static constexpr auto & value{ L"Windows.Media.Core.IDataCue" }; };
template <> struct name<Windows::Media::Core::IDataCue2>{ static constexpr auto & value{ L"Windows.Media.Core.IDataCue2" }; };
template <> struct name<Windows::Media::Core::IFaceDetectedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.IFaceDetectedEventArgs" }; };
template <> struct name<Windows::Media::Core::IFaceDetectionEffect>{ static constexpr auto & value{ L"Windows.Media.Core.IFaceDetectionEffect" }; };
template <> struct name<Windows::Media::Core::IFaceDetectionEffectDefinition>{ static constexpr auto & value{ L"Windows.Media.Core.IFaceDetectionEffectDefinition" }; };
template <> struct name<Windows::Media::Core::IFaceDetectionEffectFrame>{ static constexpr auto & value{ L"Windows.Media.Core.IFaceDetectionEffectFrame" }; };
template <> struct name<Windows::Media::Core::IHighDynamicRangeControl>{ static constexpr auto & value{ L"Windows.Media.Core.IHighDynamicRangeControl" }; };
template <> struct name<Windows::Media::Core::IHighDynamicRangeOutput>{ static constexpr auto & value{ L"Windows.Media.Core.IHighDynamicRangeOutput" }; };
template <> struct name<Windows::Media::Core::IImageCue>{ static constexpr auto & value{ L"Windows.Media.Core.IImageCue" }; };
template <> struct name<Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.IInitializeMediaStreamSourceRequestedEventArgs" }; };
template <> struct name<Windows::Media::Core::ILowLightFusionResult>{ static constexpr auto & value{ L"Windows.Media.Core.ILowLightFusionResult" }; };
template <> struct name<Windows::Media::Core::ILowLightFusionStatics>{ static constexpr auto & value{ L"Windows.Media.Core.ILowLightFusionStatics" }; };
template <> struct name<Windows::Media::Core::IMediaBinder>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaBinder" }; };
template <> struct name<Windows::Media::Core::IMediaBindingEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaBindingEventArgs" }; };
template <> struct name<Windows::Media::Core::IMediaBindingEventArgs2>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaBindingEventArgs2" }; };
template <> struct name<Windows::Media::Core::IMediaBindingEventArgs3>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaBindingEventArgs3" }; };
template <> struct name<Windows::Media::Core::IMediaCue>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaCue" }; };
template <> struct name<Windows::Media::Core::IMediaCueEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaCueEventArgs" }; };
template <> struct name<Windows::Media::Core::IMediaSource>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaSource" }; };
template <> struct name<Windows::Media::Core::IMediaSource2>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaSource2" }; };
template <> struct name<Windows::Media::Core::IMediaSource3>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaSource3" }; };
template <> struct name<Windows::Media::Core::IMediaSource4>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaSource4" }; };
template <> struct name<Windows::Media::Core::IMediaSource5>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaSource5" }; };
template <> struct name<Windows::Media::Core::IMediaSourceAppServiceConnection>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaSourceAppServiceConnection" }; };
template <> struct name<Windows::Media::Core::IMediaSourceAppServiceConnectionFactory>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaSourceAppServiceConnectionFactory" }; };
template <> struct name<Windows::Media::Core::IMediaSourceError>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaSourceError" }; };
template <> struct name<Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaSourceOpenOperationCompletedEventArgs" }; };
template <> struct name<Windows::Media::Core::IMediaSourceStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaSourceStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Core::IMediaSourceStatics>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaSourceStatics" }; };
template <> struct name<Windows::Media::Core::IMediaSourceStatics2>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaSourceStatics2" }; };
template <> struct name<Windows::Media::Core::IMediaSourceStatics3>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaSourceStatics3" }; };
template <> struct name<Windows::Media::Core::IMediaSourceStatics4>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaSourceStatics4" }; };
template <> struct name<Windows::Media::Core::IMediaStreamDescriptor>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamDescriptor" }; };
template <> struct name<Windows::Media::Core::IMediaStreamDescriptor2>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamDescriptor2" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSample>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSample" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSample2>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSample2" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSampleProtectionProperties>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSampleProtectionProperties" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSampleStatics>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSampleStatics" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSampleStatics2>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSampleStatics2" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSource>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSource" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSource2>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSource2" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSource3>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSource3" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSource4>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSource4" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSourceClosedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSourceClosedEventArgs" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSourceClosedRequest>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSourceClosedRequest" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSourceFactory>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSourceFactory" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSourceSampleRenderedEventArgs" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSourceSampleRequest>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSourceSampleRequest" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSourceSampleRequestDeferral" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSourceSampleRequestedEventArgs" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSourceStartingEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSourceStartingEventArgs" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSourceStartingRequest>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSourceStartingRequest" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSourceStartingRequestDeferral" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSourceSwitchStreamsRequest" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSourceSwitchStreamsRequestDeferral" }; };
template <> struct name<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaStreamSourceSwitchStreamsRequestedEventArgs" }; };
template <> struct name<Windows::Media::Core::IMediaTrack>{ static constexpr auto & value{ L"Windows.Media.Core.IMediaTrack" }; };
template <> struct name<Windows::Media::Core::IMseSourceBuffer>{ static constexpr auto & value{ L"Windows.Media.Core.IMseSourceBuffer" }; };
template <> struct name<Windows::Media::Core::IMseSourceBufferList>{ static constexpr auto & value{ L"Windows.Media.Core.IMseSourceBufferList" }; };
template <> struct name<Windows::Media::Core::IMseStreamSource>{ static constexpr auto & value{ L"Windows.Media.Core.IMseStreamSource" }; };
template <> struct name<Windows::Media::Core::IMseStreamSource2>{ static constexpr auto & value{ L"Windows.Media.Core.IMseStreamSource2" }; };
template <> struct name<Windows::Media::Core::IMseStreamSourceStatics>{ static constexpr auto & value{ L"Windows.Media.Core.IMseStreamSourceStatics" }; };
template <> struct name<Windows::Media::Core::ISceneAnalysisEffect>{ static constexpr auto & value{ L"Windows.Media.Core.ISceneAnalysisEffect" }; };
template <> struct name<Windows::Media::Core::ISceneAnalysisEffectFrame>{ static constexpr auto & value{ L"Windows.Media.Core.ISceneAnalysisEffectFrame" }; };
template <> struct name<Windows::Media::Core::ISceneAnalysisEffectFrame2>{ static constexpr auto & value{ L"Windows.Media.Core.ISceneAnalysisEffectFrame2" }; };
template <> struct name<Windows::Media::Core::ISceneAnalyzedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.ISceneAnalyzedEventArgs" }; };
template <> struct name<Windows::Media::Core::ISingleSelectMediaTrackList>{ static constexpr auto & value{ L"Windows.Media.Core.ISingleSelectMediaTrackList" }; };
template <> struct name<Windows::Media::Core::ISpeechCue>{ static constexpr auto & value{ L"Windows.Media.Core.ISpeechCue" }; };
template <> struct name<Windows::Media::Core::ITimedMetadataStreamDescriptor>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedMetadataStreamDescriptor" }; };
template <> struct name<Windows::Media::Core::ITimedMetadataStreamDescriptorFactory>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedMetadataStreamDescriptorFactory" }; };
template <> struct name<Windows::Media::Core::ITimedMetadataTrack>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedMetadataTrack" }; };
template <> struct name<Windows::Media::Core::ITimedMetadataTrack2>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedMetadataTrack2" }; };
template <> struct name<Windows::Media::Core::ITimedMetadataTrackError>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedMetadataTrackError" }; };
template <> struct name<Windows::Media::Core::ITimedMetadataTrackFactory>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedMetadataTrackFactory" }; };
template <> struct name<Windows::Media::Core::ITimedMetadataTrackFailedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedMetadataTrackFailedEventArgs" }; };
template <> struct name<Windows::Media::Core::ITimedMetadataTrackProvider>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedMetadataTrackProvider" }; };
template <> struct name<Windows::Media::Core::ITimedTextCue>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedTextCue" }; };
template <> struct name<Windows::Media::Core::ITimedTextLine>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedTextLine" }; };
template <> struct name<Windows::Media::Core::ITimedTextRegion>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedTextRegion" }; };
template <> struct name<Windows::Media::Core::ITimedTextSource>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedTextSource" }; };
template <> struct name<Windows::Media::Core::ITimedTextSourceResolveResultEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedTextSourceResolveResultEventArgs" }; };
template <> struct name<Windows::Media::Core::ITimedTextSourceStatics>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedTextSourceStatics" }; };
template <> struct name<Windows::Media::Core::ITimedTextSourceStatics2>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedTextSourceStatics2" }; };
template <> struct name<Windows::Media::Core::ITimedTextStyle>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedTextStyle" }; };
template <> struct name<Windows::Media::Core::ITimedTextStyle2>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedTextStyle2" }; };
template <> struct name<Windows::Media::Core::ITimedTextSubformat>{ static constexpr auto & value{ L"Windows.Media.Core.ITimedTextSubformat" }; };
template <> struct name<Windows::Media::Core::IVideoStabilizationEffect>{ static constexpr auto & value{ L"Windows.Media.Core.IVideoStabilizationEffect" }; };
template <> struct name<Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.IVideoStabilizationEffectEnabledChangedEventArgs" }; };
template <> struct name<Windows::Media::Core::IVideoStreamDescriptor>{ static constexpr auto & value{ L"Windows.Media.Core.IVideoStreamDescriptor" }; };
template <> struct name<Windows::Media::Core::IVideoStreamDescriptor2>{ static constexpr auto & value{ L"Windows.Media.Core.IVideoStreamDescriptor2" }; };
template <> struct name<Windows::Media::Core::IVideoStreamDescriptorFactory>{ static constexpr auto & value{ L"Windows.Media.Core.IVideoStreamDescriptorFactory" }; };
template <> struct name<Windows::Media::Core::IVideoTrack>{ static constexpr auto & value{ L"Windows.Media.Core.IVideoTrack" }; };
template <> struct name<Windows::Media::Core::IVideoTrackOpenFailedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.IVideoTrackOpenFailedEventArgs" }; };
template <> struct name<Windows::Media::Core::IVideoTrackSupportInfo>{ static constexpr auto & value{ L"Windows.Media.Core.IVideoTrackSupportInfo" }; };
template <> struct name<Windows::Media::Core::AudioStreamDescriptor>{ static constexpr auto & value{ L"Windows.Media.Core.AudioStreamDescriptor" }; };
template <> struct name<Windows::Media::Core::AudioTrack>{ static constexpr auto & value{ L"Windows.Media.Core.AudioTrack" }; };
template <> struct name<Windows::Media::Core::AudioTrackOpenFailedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.AudioTrackOpenFailedEventArgs" }; };
template <> struct name<Windows::Media::Core::AudioTrackSupportInfo>{ static constexpr auto & value{ L"Windows.Media.Core.AudioTrackSupportInfo" }; };
template <> struct name<Windows::Media::Core::ChapterCue>{ static constexpr auto & value{ L"Windows.Media.Core.ChapterCue" }; };
template <> struct name<Windows::Media::Core::CodecInfo>{ static constexpr auto & value{ L"Windows.Media.Core.CodecInfo" }; };
template <> struct name<Windows::Media::Core::CodecQuery>{ static constexpr auto & value{ L"Windows.Media.Core.CodecQuery" }; };
template <> struct name<Windows::Media::Core::CodecSubtypes>{ static constexpr auto & value{ L"Windows.Media.Core.CodecSubtypes" }; };
template <> struct name<Windows::Media::Core::DataCue>{ static constexpr auto & value{ L"Windows.Media.Core.DataCue" }; };
template <> struct name<Windows::Media::Core::FaceDetectedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.FaceDetectedEventArgs" }; };
template <> struct name<Windows::Media::Core::FaceDetectionEffect>{ static constexpr auto & value{ L"Windows.Media.Core.FaceDetectionEffect" }; };
template <> struct name<Windows::Media::Core::FaceDetectionEffectDefinition>{ static constexpr auto & value{ L"Windows.Media.Core.FaceDetectionEffectDefinition" }; };
template <> struct name<Windows::Media::Core::FaceDetectionEffectFrame>{ static constexpr auto & value{ L"Windows.Media.Core.FaceDetectionEffectFrame" }; };
template <> struct name<Windows::Media::Core::HighDynamicRangeControl>{ static constexpr auto & value{ L"Windows.Media.Core.HighDynamicRangeControl" }; };
template <> struct name<Windows::Media::Core::HighDynamicRangeOutput>{ static constexpr auto & value{ L"Windows.Media.Core.HighDynamicRangeOutput" }; };
template <> struct name<Windows::Media::Core::ImageCue>{ static constexpr auto & value{ L"Windows.Media.Core.ImageCue" }; };
template <> struct name<Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.InitializeMediaStreamSourceRequestedEventArgs" }; };
template <> struct name<Windows::Media::Core::LowLightFusion>{ static constexpr auto & value{ L"Windows.Media.Core.LowLightFusion" }; };
template <> struct name<Windows::Media::Core::LowLightFusionResult>{ static constexpr auto & value{ L"Windows.Media.Core.LowLightFusionResult" }; };
template <> struct name<Windows::Media::Core::MediaBinder>{ static constexpr auto & value{ L"Windows.Media.Core.MediaBinder" }; };
template <> struct name<Windows::Media::Core::MediaBindingEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.MediaBindingEventArgs" }; };
template <> struct name<Windows::Media::Core::MediaCueEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.MediaCueEventArgs" }; };
template <> struct name<Windows::Media::Core::MediaSource>{ static constexpr auto & value{ L"Windows.Media.Core.MediaSource" }; };
template <> struct name<Windows::Media::Core::MediaSourceAppServiceConnection>{ static constexpr auto & value{ L"Windows.Media.Core.MediaSourceAppServiceConnection" }; };
template <> struct name<Windows::Media::Core::MediaSourceError>{ static constexpr auto & value{ L"Windows.Media.Core.MediaSourceError" }; };
template <> struct name<Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.MediaSourceOpenOperationCompletedEventArgs" }; };
template <> struct name<Windows::Media::Core::MediaSourceStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.MediaSourceStateChangedEventArgs" }; };
template <> struct name<Windows::Media::Core::MediaStreamSample>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSample" }; };
template <> struct name<Windows::Media::Core::MediaStreamSamplePropertySet>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSamplePropertySet" }; };
template <> struct name<Windows::Media::Core::MediaStreamSampleProtectionProperties>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSampleProtectionProperties" }; };
template <> struct name<Windows::Media::Core::MediaStreamSource>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSource" }; };
template <> struct name<Windows::Media::Core::MediaStreamSourceClosedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSourceClosedEventArgs" }; };
template <> struct name<Windows::Media::Core::MediaStreamSourceClosedRequest>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSourceClosedRequest" }; };
template <> struct name<Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSourceSampleRenderedEventArgs" }; };
template <> struct name<Windows::Media::Core::MediaStreamSourceSampleRequest>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSourceSampleRequest" }; };
template <> struct name<Windows::Media::Core::MediaStreamSourceSampleRequestDeferral>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSourceSampleRequestDeferral" }; };
template <> struct name<Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSourceSampleRequestedEventArgs" }; };
template <> struct name<Windows::Media::Core::MediaStreamSourceStartingEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSourceStartingEventArgs" }; };
template <> struct name<Windows::Media::Core::MediaStreamSourceStartingRequest>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSourceStartingRequest" }; };
template <> struct name<Windows::Media::Core::MediaStreamSourceStartingRequestDeferral>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSourceStartingRequestDeferral" }; };
template <> struct name<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSourceSwitchStreamsRequest" }; };
template <> struct name<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSourceSwitchStreamsRequestDeferral" }; };
template <> struct name<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSourceSwitchStreamsRequestedEventArgs" }; };
template <> struct name<Windows::Media::Core::MseSourceBuffer>{ static constexpr auto & value{ L"Windows.Media.Core.MseSourceBuffer" }; };
template <> struct name<Windows::Media::Core::MseSourceBufferList>{ static constexpr auto & value{ L"Windows.Media.Core.MseSourceBufferList" }; };
template <> struct name<Windows::Media::Core::MseStreamSource>{ static constexpr auto & value{ L"Windows.Media.Core.MseStreamSource" }; };
template <> struct name<Windows::Media::Core::SceneAnalysisEffect>{ static constexpr auto & value{ L"Windows.Media.Core.SceneAnalysisEffect" }; };
template <> struct name<Windows::Media::Core::SceneAnalysisEffectDefinition>{ static constexpr auto & value{ L"Windows.Media.Core.SceneAnalysisEffectDefinition" }; };
template <> struct name<Windows::Media::Core::SceneAnalysisEffectFrame>{ static constexpr auto & value{ L"Windows.Media.Core.SceneAnalysisEffectFrame" }; };
template <> struct name<Windows::Media::Core::SceneAnalyzedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.SceneAnalyzedEventArgs" }; };
template <> struct name<Windows::Media::Core::SpeechCue>{ static constexpr auto & value{ L"Windows.Media.Core.SpeechCue" }; };
template <> struct name<Windows::Media::Core::TimedMetadataStreamDescriptor>{ static constexpr auto & value{ L"Windows.Media.Core.TimedMetadataStreamDescriptor" }; };
template <> struct name<Windows::Media::Core::TimedMetadataTrack>{ static constexpr auto & value{ L"Windows.Media.Core.TimedMetadataTrack" }; };
template <> struct name<Windows::Media::Core::TimedMetadataTrackError>{ static constexpr auto & value{ L"Windows.Media.Core.TimedMetadataTrackError" }; };
template <> struct name<Windows::Media::Core::TimedMetadataTrackFailedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.TimedMetadataTrackFailedEventArgs" }; };
template <> struct name<Windows::Media::Core::TimedTextCue>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextCue" }; };
template <> struct name<Windows::Media::Core::TimedTextLine>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextLine" }; };
template <> struct name<Windows::Media::Core::TimedTextRegion>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextRegion" }; };
template <> struct name<Windows::Media::Core::TimedTextSource>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextSource" }; };
template <> struct name<Windows::Media::Core::TimedTextSourceResolveResultEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextSourceResolveResultEventArgs" }; };
template <> struct name<Windows::Media::Core::TimedTextStyle>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextStyle" }; };
template <> struct name<Windows::Media::Core::TimedTextSubformat>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextSubformat" }; };
template <> struct name<Windows::Media::Core::VideoStabilizationEffect>{ static constexpr auto & value{ L"Windows.Media.Core.VideoStabilizationEffect" }; };
template <> struct name<Windows::Media::Core::VideoStabilizationEffectDefinition>{ static constexpr auto & value{ L"Windows.Media.Core.VideoStabilizationEffectDefinition" }; };
template <> struct name<Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.VideoStabilizationEffectEnabledChangedEventArgs" }; };
template <> struct name<Windows::Media::Core::VideoStreamDescriptor>{ static constexpr auto & value{ L"Windows.Media.Core.VideoStreamDescriptor" }; };
template <> struct name<Windows::Media::Core::VideoTrack>{ static constexpr auto & value{ L"Windows.Media.Core.VideoTrack" }; };
template <> struct name<Windows::Media::Core::VideoTrackOpenFailedEventArgs>{ static constexpr auto & value{ L"Windows.Media.Core.VideoTrackOpenFailedEventArgs" }; };
template <> struct name<Windows::Media::Core::VideoTrackSupportInfo>{ static constexpr auto & value{ L"Windows.Media.Core.VideoTrackSupportInfo" }; };
template <> struct name<Windows::Media::Core::AudioDecoderDegradation>{ static constexpr auto & value{ L"Windows.Media.Core.AudioDecoderDegradation" }; };
template <> struct name<Windows::Media::Core::AudioDecoderDegradationReason>{ static constexpr auto & value{ L"Windows.Media.Core.AudioDecoderDegradationReason" }; };
template <> struct name<Windows::Media::Core::CodecCategory>{ static constexpr auto & value{ L"Windows.Media.Core.CodecCategory" }; };
template <> struct name<Windows::Media::Core::CodecKind>{ static constexpr auto & value{ L"Windows.Media.Core.CodecKind" }; };
template <> struct name<Windows::Media::Core::FaceDetectionMode>{ static constexpr auto & value{ L"Windows.Media.Core.FaceDetectionMode" }; };
template <> struct name<Windows::Media::Core::MediaDecoderStatus>{ static constexpr auto & value{ L"Windows.Media.Core.MediaDecoderStatus" }; };
template <> struct name<Windows::Media::Core::MediaSourceState>{ static constexpr auto & value{ L"Windows.Media.Core.MediaSourceState" }; };
template <> struct name<Windows::Media::Core::MediaSourceStatus>{ static constexpr auto & value{ L"Windows.Media.Core.MediaSourceStatus" }; };
template <> struct name<Windows::Media::Core::MediaStreamSourceClosedReason>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSourceClosedReason" }; };
template <> struct name<Windows::Media::Core::MediaStreamSourceErrorStatus>{ static constexpr auto & value{ L"Windows.Media.Core.MediaStreamSourceErrorStatus" }; };
template <> struct name<Windows::Media::Core::MediaTrackKind>{ static constexpr auto & value{ L"Windows.Media.Core.MediaTrackKind" }; };
template <> struct name<Windows::Media::Core::MseAppendMode>{ static constexpr auto & value{ L"Windows.Media.Core.MseAppendMode" }; };
template <> struct name<Windows::Media::Core::MseEndOfStreamStatus>{ static constexpr auto & value{ L"Windows.Media.Core.MseEndOfStreamStatus" }; };
template <> struct name<Windows::Media::Core::MseReadyState>{ static constexpr auto & value{ L"Windows.Media.Core.MseReadyState" }; };
template <> struct name<Windows::Media::Core::SceneAnalysisRecommendation>{ static constexpr auto & value{ L"Windows.Media.Core.SceneAnalysisRecommendation" }; };
template <> struct name<Windows::Media::Core::TimedMetadataKind>{ static constexpr auto & value{ L"Windows.Media.Core.TimedMetadataKind" }; };
template <> struct name<Windows::Media::Core::TimedMetadataTrackErrorCode>{ static constexpr auto & value{ L"Windows.Media.Core.TimedMetadataTrackErrorCode" }; };
template <> struct name<Windows::Media::Core::TimedTextDisplayAlignment>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextDisplayAlignment" }; };
template <> struct name<Windows::Media::Core::TimedTextFlowDirection>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextFlowDirection" }; };
template <> struct name<Windows::Media::Core::TimedTextFontStyle>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextFontStyle" }; };
template <> struct name<Windows::Media::Core::TimedTextLineAlignment>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextLineAlignment" }; };
template <> struct name<Windows::Media::Core::TimedTextScrollMode>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextScrollMode" }; };
template <> struct name<Windows::Media::Core::TimedTextUnit>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextUnit" }; };
template <> struct name<Windows::Media::Core::TimedTextWeight>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextWeight" }; };
template <> struct name<Windows::Media::Core::TimedTextWrapping>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextWrapping" }; };
template <> struct name<Windows::Media::Core::TimedTextWritingMode>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextWritingMode" }; };
template <> struct name<Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason>{ static constexpr auto & value{ L"Windows.Media.Core.VideoStabilizationEffectEnabledChangedReason" }; };
template <> struct name<Windows::Media::Core::MseTimeRange>{ static constexpr auto & value{ L"Windows.Media.Core.MseTimeRange" }; };
template <> struct name<Windows::Media::Core::TimedTextDouble>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextDouble" }; };
template <> struct name<Windows::Media::Core::TimedTextPadding>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextPadding" }; };
template <> struct name<Windows::Media::Core::TimedTextPoint>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextPoint" }; };
template <> struct name<Windows::Media::Core::TimedTextSize>{ static constexpr auto & value{ L"Windows.Media.Core.TimedTextSize" }; };
template <> struct guid_storage<Windows::Media::Core::IAudioStreamDescriptor>{ static constexpr guid value{ 0x1E3692E4,0x4027,0x4847,{ 0xA7,0x0B,0xDF,0x1D,0x9A,0x2A,0x7B,0x04 } }; };
template <> struct guid_storage<Windows::Media::Core::IAudioStreamDescriptor2>{ static constexpr guid value{ 0x2E68F1F6,0xA448,0x497B,{ 0x88,0x40,0x85,0x08,0x26,0x65,0xAC,0xF9 } }; };
template <> struct guid_storage<Windows::Media::Core::IAudioStreamDescriptor3>{ static constexpr guid value{ 0x4D220DA1,0x8E83,0x44EF,{ 0x89,0x73,0x2F,0x63,0xE9,0x93,0xF3,0x6B } }; };
template <> struct guid_storage<Windows::Media::Core::IAudioStreamDescriptorFactory>{ static constexpr guid value{ 0x4A86CE9E,0x4CB1,0x4380,{ 0x8E,0x0C,0x83,0x50,0x4B,0x7F,0x5B,0xF3 } }; };
template <> struct guid_storage<Windows::Media::Core::IAudioTrack>{ static constexpr guid value{ 0xF23B6E77,0x3EF7,0x40DE,{ 0xB9,0x43,0x06,0x8B,0x13,0x21,0x70,0x1D } }; };
template <> struct guid_storage<Windows::Media::Core::IAudioTrackOpenFailedEventArgs>{ static constexpr guid value{ 0xEEDDB9B9,0xBB7C,0x4112,{ 0xBF,0x76,0x93,0x84,0x67,0x6F,0x82,0x4B } }; };
template <> struct guid_storage<Windows::Media::Core::IAudioTrackSupportInfo>{ static constexpr guid value{ 0x178BEFF7,0xCC39,0x44A6,{ 0xB9,0x51,0x4A,0x56,0x53,0xF0,0x73,0xFA } }; };
template <> struct guid_storage<Windows::Media::Core::IChapterCue>{ static constexpr guid value{ 0x72A98001,0xD38A,0x4C0A,{ 0x8F,0xA6,0x75,0xCD,0xDA,0xF4,0x66,0x4C } }; };
template <> struct guid_storage<Windows::Media::Core::ICodecInfo>{ static constexpr guid value{ 0x51E89F85,0xEA97,0x499C,{ 0x86,0xAC,0x4C,0xE5,0xE7,0x3F,0x3A,0x42 } }; };
template <> struct guid_storage<Windows::Media::Core::ICodecQuery>{ static constexpr guid value{ 0x222A953A,0xAF61,0x4E04,{ 0x80,0x8A,0xA4,0x63,0x4E,0x2F,0x3A,0xC4 } }; };
template <> struct guid_storage<Windows::Media::Core::ICodecSubtypesStatics>{ static constexpr guid value{ 0xA66AC4F2,0x888B,0x4224,{ 0x8C,0xF6,0x2A,0x8D,0x4E,0xB0,0x23,0x82 } }; };
template <> struct guid_storage<Windows::Media::Core::IDataCue>{ static constexpr guid value{ 0x7C7F676D,0x1FBC,0x4E2D,{ 0x9A,0x87,0xEE,0x38,0xBD,0x1D,0xC6,0x37 } }; };
template <> struct guid_storage<Windows::Media::Core::IDataCue2>{ static constexpr guid value{ 0xBC561B15,0x95F2,0x49E8,{ 0x96,0xF1,0x8D,0xD5,0xDA,0xC6,0x8D,0x93 } }; };
template <> struct guid_storage<Windows::Media::Core::IFaceDetectedEventArgs>{ static constexpr guid value{ 0x19918426,0xC65B,0x46BA,{ 0x85,0xF8,0x13,0x88,0x05,0x76,0xC9,0x0A } }; };
template <> struct guid_storage<Windows::Media::Core::IFaceDetectionEffect>{ static constexpr guid value{ 0xAE15EBD2,0x0542,0x42A9,{ 0xBC,0x90,0xF2,0x83,0xA2,0x9F,0x46,0xC1 } }; };
template <> struct guid_storage<Windows::Media::Core::IFaceDetectionEffectDefinition>{ static constexpr guid value{ 0x43DCA081,0xB848,0x4F33,{ 0xB7,0x02,0x1F,0xD2,0x62,0x4F,0xB0,0x16 } }; };
template <> struct guid_storage<Windows::Media::Core::IFaceDetectionEffectFrame>{ static constexpr guid value{ 0x8AB08993,0x5DC8,0x447B,{ 0xA2,0x47,0x52,0x70,0xBD,0x80,0x2E,0xCE } }; };
template <> struct guid_storage<Windows::Media::Core::IHighDynamicRangeControl>{ static constexpr guid value{ 0x55F1A7AE,0xD957,0x4DC9,{ 0x9D,0x1C,0x85,0x53,0xA8,0x2A,0x7D,0x99 } }; };
template <> struct guid_storage<Windows::Media::Core::IHighDynamicRangeOutput>{ static constexpr guid value{ 0x0F57806B,0x253B,0x4119,{ 0xBB,0x40,0x3A,0x90,0xE5,0x13,0x84,0xF7 } }; };
template <> struct guid_storage<Windows::Media::Core::IImageCue>{ static constexpr guid value{ 0x52828282,0x367B,0x440B,{ 0x91,0x16,0x3C,0x84,0x57,0x0D,0xD2,0x70 } }; };
template <> struct guid_storage<Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs>{ static constexpr guid value{ 0x25BC45E1,0x9B08,0x4C2E,{ 0xA8,0x55,0x45,0x42,0xF1,0xA7,0x5D,0xEB } }; };
template <> struct guid_storage<Windows::Media::Core::ILowLightFusionResult>{ static constexpr guid value{ 0x78EDBE35,0x27A0,0x42E0,{ 0x9C,0xD3,0x73,0x8D,0x20,0x89,0xDE,0x9C } }; };
template <> struct guid_storage<Windows::Media::Core::ILowLightFusionStatics>{ static constexpr guid value{ 0x5305016D,0xC29E,0x40E2,{ 0x87,0xA9,0x9E,0x1F,0xD2,0xF1,0x92,0xF5 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaBinder>{ static constexpr guid value{ 0x2B7E40AA,0xDE07,0x424F,{ 0x83,0xF1,0xF1,0xDE,0x46,0xC4,0xFA,0x2E } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaBindingEventArgs>{ static constexpr guid value{ 0xB61CB25A,0x1B6D,0x4630,{ 0xA8,0x6D,0x2F,0x08,0x37,0xF7,0x12,0xE5 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaBindingEventArgs2>{ static constexpr guid value{ 0x0464CCEB,0xBB5A,0x482F,{ 0xB8,0xBA,0xF0,0x28,0x4C,0x69,0x65,0x67 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaBindingEventArgs3>{ static constexpr guid value{ 0xF8EB475E,0x19BE,0x44FC,{ 0xA5,0xED,0x7A,0xBA,0x31,0x50,0x37,0xF9 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaCue>{ static constexpr guid value{ 0xC7D15E5D,0x59DC,0x431F,{ 0xA0,0xEE,0x27,0x74,0x43,0x23,0xB3,0x6D } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaCueEventArgs>{ static constexpr guid value{ 0xD12F47F7,0x5FA4,0x4E68,{ 0x9F,0xE5,0x32,0x16,0x0D,0xCE,0xE5,0x7E } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaSource>{ static constexpr guid value{ 0xE7BFB599,0xA09D,0x4C21,{ 0xBC,0xDF,0x20,0xAF,0x4F,0x86,0xB3,0xD9 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaSource2>{ static constexpr guid value{ 0x2EB61048,0x655F,0x4C37,{ 0xB8,0x13,0xB4,0xE4,0x5D,0xFA,0x0A,0xBE } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaSource3>{ static constexpr guid value{ 0xB59F0D9B,0x4B6E,0x41ED,{ 0xBB,0xB4,0x7C,0x75,0x09,0xA9,0x94,0xAD } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaSource4>{ static constexpr guid value{ 0xBDAFAD57,0x8EFF,0x4C63,{ 0x85,0xA6,0x84,0xDE,0x0A,0xE3,0xE4,0xF2 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaSource5>{ static constexpr guid value{ 0x331A22AE,0xED2E,0x4A22,{ 0x94,0xC8,0xB7,0x43,0xA9,0x2B,0x30,0x22 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaSourceAppServiceConnection>{ static constexpr guid value{ 0x61E1EA97,0x1916,0x4810,{ 0xB7,0xF4,0xB6,0x42,0xBE,0x82,0x95,0x96 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaSourceAppServiceConnectionFactory>{ static constexpr guid value{ 0x65B912EB,0x80B9,0x44F9,{ 0x9C,0x1E,0xE1,0x20,0xF6,0xD9,0x28,0x38 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaSourceError>{ static constexpr guid value{ 0x5C0A8965,0x37C5,0x4E9D,{ 0x8D,0x21,0x1C,0xDE,0xE9,0x0C,0xEC,0xC6 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs>{ static constexpr guid value{ 0xFC682CEB,0xE281,0x477C,{ 0xA8,0xE0,0x1A,0xCD,0x65,0x41,0x14,0xC8 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaSourceStateChangedEventArgs>{ static constexpr guid value{ 0x0A30AF82,0x9071,0x4BAC,{ 0xBC,0x39,0xCA,0x2A,0x93,0xB7,0x17,0xA9 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaSourceStatics>{ static constexpr guid value{ 0xF77D6FA4,0x4652,0x410E,{ 0xB1,0xD8,0xE9,0xA5,0xE2,0x45,0xA4,0x5C } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaSourceStatics2>{ static constexpr guid value{ 0xEEE161A4,0x7F13,0x4896,{ 0xB8,0xCB,0xDF,0x0D,0xE5,0xBC,0xB9,0xF1 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaSourceStatics3>{ static constexpr guid value{ 0x453A30D6,0x2BEA,0x4122,{ 0x9F,0x73,0xEA,0xCE,0x04,0x52,0x6E,0x35 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaSourceStatics4>{ static constexpr guid value{ 0x281B3BFC,0xE50A,0x4428,{ 0xA5,0x00,0x9C,0x4E,0xD9,0x18,0xD3,0xF0 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamDescriptor>{ static constexpr guid value{ 0x80F16E6E,0x92F7,0x451E,{ 0x97,0xD2,0xAF,0xD8,0x07,0x42,0xDA,0x70 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamDescriptor2>{ static constexpr guid value{ 0x5073010F,0xE8B2,0x4071,{ 0xB0,0x0B,0xEB,0xF3,0x37,0xA7,0x6B,0x58 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSample>{ static constexpr guid value{ 0x5C8DB627,0x4B80,0x4361,{ 0x98,0x37,0x6C,0xB7,0x48,0x1A,0xD9,0xD6 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSample2>{ static constexpr guid value{ 0x45078691,0xFCE8,0x4746,{ 0xA1,0xC8,0x10,0xC2,0x5D,0x3D,0x7C,0xD3 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSampleProtectionProperties>{ static constexpr guid value{ 0x4EB88292,0xECDF,0x493E,{ 0x84,0x1D,0xDD,0x4A,0xDD,0x7C,0xAC,0xA2 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSampleStatics>{ static constexpr guid value{ 0xDFDF218F,0xA6CF,0x4579,{ 0xBE,0x41,0x73,0xDD,0x94,0x1A,0xD9,0x72 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSampleStatics2>{ static constexpr guid value{ 0x9EFE9521,0x6D46,0x494C,{ 0xA2,0xF8,0xD6,0x62,0x92,0x2E,0x2D,0xD7 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSource>{ static constexpr guid value{ 0x3712D543,0x45EB,0x4138,{ 0xAA,0x62,0xC0,0x1E,0x26,0xF3,0x84,0x3F } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSource2>{ static constexpr guid value{ 0xEC55D0AD,0x2E6A,0x4F74,{ 0xAD,0xBB,0xB5,0x62,0xD1,0x53,0x38,0x49 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSource3>{ static constexpr guid value{ 0x6A2A2746,0x3DDD,0x4DDF,{ 0xA1,0x21,0x94,0x04,0x5E,0xCF,0x94,0x40 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSource4>{ static constexpr guid value{ 0x1D0CFCAB,0x830D,0x417C,{ 0xA3,0xA9,0x24,0x54,0xFD,0x64,0x15,0xC7 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSourceClosedEventArgs>{ static constexpr guid value{ 0xCD8C7EB2,0x4816,0x4E24,{ 0x88,0xF0,0x49,0x1E,0xF7,0x38,0x64,0x06 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSourceClosedRequest>{ static constexpr guid value{ 0x907C00E9,0x18A3,0x4951,{ 0x88,0x7A,0x2C,0x1E,0xEB,0xD5,0xC6,0x9E } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSourceFactory>{ static constexpr guid value{ 0xEF77E0D9,0xD158,0x4B7A,{ 0x86,0x3F,0x20,0x33,0x42,0xFB,0xFD,0x41 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs>{ static constexpr guid value{ 0x9D697B05,0xD4F2,0x4C7A,{ 0x9D,0xFE,0x8D,0x6C,0xD0,0xB3,0xEE,0x84 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSourceSampleRequest>{ static constexpr guid value{ 0x4DB341A9,0x3501,0x4D9B,{ 0x83,0xF9,0x8F,0x23,0x5C,0x82,0x25,0x32 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral>{ static constexpr guid value{ 0x7895CC02,0xF982,0x43C8,{ 0x9D,0x16,0xC6,0x2D,0x99,0x93,0x19,0xBE } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs>{ static constexpr guid value{ 0x10F9BB9E,0x71C5,0x492F,{ 0x84,0x7F,0x0D,0xA1,0xF3,0x5E,0x81,0xF8 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSourceStartingEventArgs>{ static constexpr guid value{ 0xF41468F2,0xC274,0x4940,{ 0xA5,0xBB,0x28,0xA5,0x72,0x45,0x2F,0xA7 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSourceStartingRequest>{ static constexpr guid value{ 0x2A9093E4,0x35C4,0x4B1B,{ 0xA7,0x91,0x0D,0x99,0xDB,0x56,0xDD,0x1D } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral>{ static constexpr guid value{ 0x3F1356A5,0x6340,0x4DC4,{ 0x99,0x10,0x06,0x8E,0xD9,0xF5,0x98,0xF8 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest>{ static constexpr guid value{ 0x41B8808E,0x38A9,0x4EC3,{ 0x9B,0xA0,0xB6,0x9B,0x85,0x50,0x1E,0x90 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral>{ static constexpr guid value{ 0xBEE3D835,0xA505,0x4F9A,{ 0xB9,0x43,0x2B,0x8C,0xB1,0xB4,0xBB,0xD9 } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs>{ static constexpr guid value{ 0x42202B72,0x6EA1,0x4677,{ 0x98,0x1E,0x35,0x0A,0x0D,0xA4,0x12,0xAA } }; };
template <> struct guid_storage<Windows::Media::Core::IMediaTrack>{ static constexpr guid value{ 0x03E1FAFC,0xC931,0x491A,{ 0xB4,0x6B,0xC1,0x0E,0xE8,0xC2,0x56,0xB7 } }; };
template <> struct guid_storage<Windows::Media::Core::IMseSourceBuffer>{ static constexpr guid value{ 0x0C1AA3E3,0xDF8D,0x4079,{ 0xA3,0xFE,0x68,0x49,0x18,0x4B,0x4E,0x2F } }; };
template <> struct guid_storage<Windows::Media::Core::IMseSourceBufferList>{ static constexpr guid value{ 0x95FAE8E7,0xA8E7,0x4EBF,{ 0x89,0x27,0x14,0x5E,0x94,0x0B,0xA5,0x11 } }; };
template <> struct guid_storage<Windows::Media::Core::IMseStreamSource>{ static constexpr guid value{ 0xB0B4198D,0x02F4,0x4923,{ 0x88,0xDD,0x81,0xBC,0x3F,0x36,0x0F,0xFA } }; };
template <> struct guid_storage<Windows::Media::Core::IMseStreamSource2>{ static constexpr guid value{ 0x66F57D37,0xF9E7,0x418A,{ 0x9C,0xDE,0xA0,0x20,0xE9,0x56,0x55,0x2B } }; };
template <> struct guid_storage<Windows::Media::Core::IMseStreamSourceStatics>{ static constexpr guid value{ 0x465C679D,0xD570,0x43CE,{ 0xBA,0x21,0x0B,0xFF,0x5F,0x3F,0xBD,0x0A } }; };
template <> struct guid_storage<Windows::Media::Core::ISceneAnalysisEffect>{ static constexpr guid value{ 0xC04BA319,0xCA41,0x4813,{ 0xBF,0xFD,0x7B,0x08,0xB0,0xED,0x25,0x57 } }; };
template <> struct guid_storage<Windows::Media::Core::ISceneAnalysisEffectFrame>{ static constexpr guid value{ 0xD8B10E4C,0x7FD9,0x42E1,{ 0x85,0xEB,0x65,0x72,0xC2,0x97,0xC9,0x87 } }; };
template <> struct guid_storage<Windows::Media::Core::ISceneAnalysisEffectFrame2>{ static constexpr guid value{ 0x2D4E29BE,0x061F,0x47AE,{ 0x99,0x15,0x02,0x52,0x4B,0x5F,0x9A,0x5F } }; };
template <> struct guid_storage<Windows::Media::Core::ISceneAnalyzedEventArgs>{ static constexpr guid value{ 0x146B9588,0x2851,0x45E4,{ 0xAD,0x55,0x44,0xCF,0x8D,0xF8,0xDB,0x4D } }; };
template <> struct guid_storage<Windows::Media::Core::ISingleSelectMediaTrackList>{ static constexpr guid value{ 0x77206F1F,0xC34F,0x494F,{ 0x80,0x77,0x2B,0xAD,0x9F,0xF4,0xEC,0xF1 } }; };
template <> struct guid_storage<Windows::Media::Core::ISpeechCue>{ static constexpr guid value{ 0xAEE254DC,0x1725,0x4BAD,{ 0x80,0x43,0xA9,0x84,0x99,0xB0,0x17,0xA2 } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedMetadataStreamDescriptor>{ static constexpr guid value{ 0x133336BF,0x296A,0x463E,{ 0x9F,0xF9,0x01,0xCD,0x25,0x69,0x14,0x08 } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedMetadataStreamDescriptorFactory>{ static constexpr guid value{ 0xC027DE30,0x7362,0x4FF9,{ 0x98,0xB1,0x2D,0xFD,0x0B,0x8D,0x1C,0xAE } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedMetadataTrack>{ static constexpr guid value{ 0x9E6AED9E,0xF67A,0x49A9,{ 0xB3,0x30,0xCF,0x03,0xB0,0xE9,0xCF,0x07 } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedMetadataTrack2>{ static constexpr guid value{ 0x21B4B648,0x9F9D,0x40BA,{ 0xA8,0xF3,0x1A,0x92,0x75,0x3A,0xEF,0x0B } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedMetadataTrackError>{ static constexpr guid value{ 0xB3767915,0x4114,0x4819,{ 0xB9,0xD9,0xDD,0x76,0x08,0x9E,0x72,0xF8 } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedMetadataTrackFactory>{ static constexpr guid value{ 0x8DD57611,0x97B3,0x4E1F,{ 0x85,0x2C,0x0F,0x48,0x2C,0x81,0xAD,0x26 } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedMetadataTrackFailedEventArgs>{ static constexpr guid value{ 0xA57FC9D1,0x6789,0x4D4D,{ 0xB0,0x7F,0x84,0xB4,0xF3,0x1A,0xCB,0x70 } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedMetadataTrackProvider>{ static constexpr guid value{ 0x3B7F2024,0xF74E,0x4ADE,{ 0x93,0xC5,0x21,0x9D,0xA0,0x5B,0x68,0x56 } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedTextCue>{ static constexpr guid value{ 0x51C79E51,0x3B86,0x494D,{ 0xB3,0x59,0xBB,0x2E,0xA7,0xAC,0xA9,0xA9 } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedTextLine>{ static constexpr guid value{ 0x978D7CE2,0x7308,0x4C66,{ 0xBE,0x50,0x65,0x77,0x72,0x89,0xF5,0xDF } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedTextRegion>{ static constexpr guid value{ 0x1ED0881F,0x8A06,0x4222,{ 0x9F,0x59,0xB2,0x1B,0xF4,0x01,0x24,0xB4 } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedTextSource>{ static constexpr guid value{ 0xC4ED9BA6,0x101F,0x404D,{ 0xA9,0x49,0x82,0xF3,0x3F,0xCD,0x93,0xB7 } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedTextSourceResolveResultEventArgs>{ static constexpr guid value{ 0x48907C9C,0xDCD8,0x4C33,{ 0x9A,0xD3,0x6C,0xDC,0xE7,0xB1,0xC5,0x66 } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedTextSourceStatics>{ static constexpr guid value{ 0x7E311853,0x9ABA,0x4AC4,{ 0xBB,0x98,0x2F,0xB1,0x76,0xC3,0xBF,0xDD } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedTextSourceStatics2>{ static constexpr guid value{ 0xB66B7602,0x923E,0x43FA,{ 0x96,0x33,0x58,0x70,0x75,0x81,0x2D,0xB5 } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedTextStyle>{ static constexpr guid value{ 0x1BB2384D,0xA825,0x40C2,{ 0xA7,0xF5,0x28,0x1E,0xAE,0xDF,0x3B,0x55 } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedTextStyle2>{ static constexpr guid value{ 0x655F492D,0x6111,0x4787,{ 0x89,0xCC,0x68,0x6F,0xEC,0xE5,0x7E,0x14 } }; };
template <> struct guid_storage<Windows::Media::Core::ITimedTextSubformat>{ static constexpr guid value{ 0xD713502F,0x3261,0x4722,{ 0xA0,0xC2,0xB9,0x37,0xB2,0x39,0x0F,0x14 } }; };
template <> struct guid_storage<Windows::Media::Core::IVideoStabilizationEffect>{ static constexpr guid value{ 0x0808A650,0x9698,0x4E57,{ 0x87,0x7B,0xBD,0x7C,0xB2,0xEE,0x0F,0x8A } }; };
template <> struct guid_storage<Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs>{ static constexpr guid value{ 0x187EFF28,0x67BB,0x4713,{ 0xB9,0x00,0x41,0x68,0xDA,0x16,0x45,0x29 } }; };
template <> struct guid_storage<Windows::Media::Core::IVideoStreamDescriptor>{ static constexpr guid value{ 0x12EE0D55,0x9C2B,0x4440,{ 0x80,0x57,0x2C,0x7A,0x90,0xF0,0xCB,0xEC } }; };
template <> struct guid_storage<Windows::Media::Core::IVideoStreamDescriptor2>{ static constexpr guid value{ 0x8B306E10,0x453E,0x4088,{ 0x83,0x2D,0xC3,0x6F,0xA4,0xF9,0x4A,0xF3 } }; };
template <> struct guid_storage<Windows::Media::Core::IVideoStreamDescriptorFactory>{ static constexpr guid value{ 0x494EF6D1,0xBB75,0x43D2,{ 0x9E,0x5E,0x7B,0x79,0xA3,0xAF,0xCE,0xD4 } }; };
template <> struct guid_storage<Windows::Media::Core::IVideoTrack>{ static constexpr guid value{ 0x99F3B7F3,0xE298,0x4396,{ 0xBB,0x6A,0xA5,0x1B,0xE6,0xA2,0xA2,0x0A } }; };
template <> struct guid_storage<Windows::Media::Core::IVideoTrackOpenFailedEventArgs>{ static constexpr guid value{ 0x7679E231,0x04F9,0x4C82,{ 0xA4,0xEE,0x86,0x02,0xC8,0xBB,0x47,0x54 } }; };
template <> struct guid_storage<Windows::Media::Core::IVideoTrackSupportInfo>{ static constexpr guid value{ 0x4BB534A0,0xFC5F,0x450D,{ 0x8F,0xF0,0x77,0x8D,0x59,0x04,0x86,0xDE } }; };
template <> struct default_interface<Windows::Media::Core::AudioStreamDescriptor>{ using type = Windows::Media::Core::IAudioStreamDescriptor; };
template <> struct default_interface<Windows::Media::Core::AudioTrack>{ using type = Windows::Media::Core::IMediaTrack; };
template <> struct default_interface<Windows::Media::Core::AudioTrackOpenFailedEventArgs>{ using type = Windows::Media::Core::IAudioTrackOpenFailedEventArgs; };
template <> struct default_interface<Windows::Media::Core::AudioTrackSupportInfo>{ using type = Windows::Media::Core::IAudioTrackSupportInfo; };
template <> struct default_interface<Windows::Media::Core::ChapterCue>{ using type = Windows::Media::Core::IChapterCue; };
template <> struct default_interface<Windows::Media::Core::CodecInfo>{ using type = Windows::Media::Core::ICodecInfo; };
template <> struct default_interface<Windows::Media::Core::CodecQuery>{ using type = Windows::Media::Core::ICodecQuery; };
template <> struct default_interface<Windows::Media::Core::DataCue>{ using type = Windows::Media::Core::IDataCue; };
template <> struct default_interface<Windows::Media::Core::FaceDetectedEventArgs>{ using type = Windows::Media::Core::IFaceDetectedEventArgs; };
template <> struct default_interface<Windows::Media::Core::FaceDetectionEffect>{ using type = Windows::Media::Core::IFaceDetectionEffect; };
template <> struct default_interface<Windows::Media::Core::FaceDetectionEffectDefinition>{ using type = Windows::Media::Effects::IVideoEffectDefinition; };
template <> struct default_interface<Windows::Media::Core::FaceDetectionEffectFrame>{ using type = Windows::Media::Core::IFaceDetectionEffectFrame; };
template <> struct default_interface<Windows::Media::Core::HighDynamicRangeControl>{ using type = Windows::Media::Core::IHighDynamicRangeControl; };
template <> struct default_interface<Windows::Media::Core::HighDynamicRangeOutput>{ using type = Windows::Media::Core::IHighDynamicRangeOutput; };
template <> struct default_interface<Windows::Media::Core::ImageCue>{ using type = Windows::Media::Core::IImageCue; };
template <> struct default_interface<Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs>{ using type = Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs; };
template <> struct default_interface<Windows::Media::Core::LowLightFusionResult>{ using type = Windows::Media::Core::ILowLightFusionResult; };
template <> struct default_interface<Windows::Media::Core::MediaBinder>{ using type = Windows::Media::Core::IMediaBinder; };
template <> struct default_interface<Windows::Media::Core::MediaBindingEventArgs>{ using type = Windows::Media::Core::IMediaBindingEventArgs; };
template <> struct default_interface<Windows::Media::Core::MediaCueEventArgs>{ using type = Windows::Media::Core::IMediaCueEventArgs; };
template <> struct default_interface<Windows::Media::Core::MediaSource>{ using type = Windows::Media::Core::IMediaSource2; };
template <> struct default_interface<Windows::Media::Core::MediaSourceAppServiceConnection>{ using type = Windows::Media::Core::IMediaSourceAppServiceConnection; };
template <> struct default_interface<Windows::Media::Core::MediaSourceError>{ using type = Windows::Media::Core::IMediaSourceError; };
template <> struct default_interface<Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs>{ using type = Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs; };
template <> struct default_interface<Windows::Media::Core::MediaSourceStateChangedEventArgs>{ using type = Windows::Media::Core::IMediaSourceStateChangedEventArgs; };
template <> struct default_interface<Windows::Media::Core::MediaStreamSample>{ using type = Windows::Media::Core::IMediaStreamSample; };
template <> struct default_interface<Windows::Media::Core::MediaStreamSamplePropertySet>{ using type = Windows::Foundation::Collections::IMap<winrt::guid, Windows::Foundation::IInspectable>; };
template <> struct default_interface<Windows::Media::Core::MediaStreamSampleProtectionProperties>{ using type = Windows::Media::Core::IMediaStreamSampleProtectionProperties; };
template <> struct default_interface<Windows::Media::Core::MediaStreamSource>{ using type = Windows::Media::Core::IMediaStreamSource; };
template <> struct default_interface<Windows::Media::Core::MediaStreamSourceClosedEventArgs>{ using type = Windows::Media::Core::IMediaStreamSourceClosedEventArgs; };
template <> struct default_interface<Windows::Media::Core::MediaStreamSourceClosedRequest>{ using type = Windows::Media::Core::IMediaStreamSourceClosedRequest; };
template <> struct default_interface<Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs>{ using type = Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs; };
template <> struct default_interface<Windows::Media::Core::MediaStreamSourceSampleRequest>{ using type = Windows::Media::Core::IMediaStreamSourceSampleRequest; };
template <> struct default_interface<Windows::Media::Core::MediaStreamSourceSampleRequestDeferral>{ using type = Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral; };
template <> struct default_interface<Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs>{ using type = Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs; };
template <> struct default_interface<Windows::Media::Core::MediaStreamSourceStartingEventArgs>{ using type = Windows::Media::Core::IMediaStreamSourceStartingEventArgs; };
template <> struct default_interface<Windows::Media::Core::MediaStreamSourceStartingRequest>{ using type = Windows::Media::Core::IMediaStreamSourceStartingRequest; };
template <> struct default_interface<Windows::Media::Core::MediaStreamSourceStartingRequestDeferral>{ using type = Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral; };
template <> struct default_interface<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest>{ using type = Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest; };
template <> struct default_interface<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral>{ using type = Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral; };
template <> struct default_interface<Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs>{ using type = Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs; };
template <> struct default_interface<Windows::Media::Core::MseSourceBuffer>{ using type = Windows::Media::Core::IMseSourceBuffer; };
template <> struct default_interface<Windows::Media::Core::MseSourceBufferList>{ using type = Windows::Media::Core::IMseSourceBufferList; };
template <> struct default_interface<Windows::Media::Core::MseStreamSource>{ using type = Windows::Media::Core::IMseStreamSource; };
template <> struct default_interface<Windows::Media::Core::SceneAnalysisEffect>{ using type = Windows::Media::Core::ISceneAnalysisEffect; };
template <> struct default_interface<Windows::Media::Core::SceneAnalysisEffectDefinition>{ using type = Windows::Media::Effects::IVideoEffectDefinition; };
template <> struct default_interface<Windows::Media::Core::SceneAnalysisEffectFrame>{ using type = Windows::Media::Core::ISceneAnalysisEffectFrame; };
template <> struct default_interface<Windows::Media::Core::SceneAnalyzedEventArgs>{ using type = Windows::Media::Core::ISceneAnalyzedEventArgs; };
template <> struct default_interface<Windows::Media::Core::SpeechCue>{ using type = Windows::Media::Core::ISpeechCue; };
template <> struct default_interface<Windows::Media::Core::TimedMetadataStreamDescriptor>{ using type = Windows::Media::Core::IMediaStreamDescriptor; };
template <> struct default_interface<Windows::Media::Core::TimedMetadataTrack>{ using type = Windows::Media::Core::ITimedMetadataTrack; };
template <> struct default_interface<Windows::Media::Core::TimedMetadataTrackError>{ using type = Windows::Media::Core::ITimedMetadataTrackError; };
template <> struct default_interface<Windows::Media::Core::TimedMetadataTrackFailedEventArgs>{ using type = Windows::Media::Core::ITimedMetadataTrackFailedEventArgs; };
template <> struct default_interface<Windows::Media::Core::TimedTextCue>{ using type = Windows::Media::Core::ITimedTextCue; };
template <> struct default_interface<Windows::Media::Core::TimedTextLine>{ using type = Windows::Media::Core::ITimedTextLine; };
template <> struct default_interface<Windows::Media::Core::TimedTextRegion>{ using type = Windows::Media::Core::ITimedTextRegion; };
template <> struct default_interface<Windows::Media::Core::TimedTextSource>{ using type = Windows::Media::Core::ITimedTextSource; };
template <> struct default_interface<Windows::Media::Core::TimedTextSourceResolveResultEventArgs>{ using type = Windows::Media::Core::ITimedTextSourceResolveResultEventArgs; };
template <> struct default_interface<Windows::Media::Core::TimedTextStyle>{ using type = Windows::Media::Core::ITimedTextStyle; };
template <> struct default_interface<Windows::Media::Core::TimedTextSubformat>{ using type = Windows::Media::Core::ITimedTextSubformat; };
template <> struct default_interface<Windows::Media::Core::VideoStabilizationEffect>{ using type = Windows::Media::Core::IVideoStabilizationEffect; };
template <> struct default_interface<Windows::Media::Core::VideoStabilizationEffectDefinition>{ using type = Windows::Media::Effects::IVideoEffectDefinition; };
template <> struct default_interface<Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs>{ using type = Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs; };
template <> struct default_interface<Windows::Media::Core::VideoStreamDescriptor>{ using type = Windows::Media::Core::IVideoStreamDescriptor; };
template <> struct default_interface<Windows::Media::Core::VideoTrack>{ using type = Windows::Media::Core::IMediaTrack; };
template <> struct default_interface<Windows::Media::Core::VideoTrackOpenFailedEventArgs>{ using type = Windows::Media::Core::IVideoTrackOpenFailedEventArgs; };
template <> struct default_interface<Windows::Media::Core::VideoTrackSupportInfo>{ using type = Windows::Media::Core::IVideoTrackSupportInfo; };

template <> struct abi<Windows::Media::Core::IAudioStreamDescriptor>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_EncodingProperties(void** encodingProperties) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IAudioStreamDescriptor2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_LeadingEncoderPadding(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_LeadingEncoderPadding(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_TrailingEncoderPadding(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TrailingEncoderPadding(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IAudioStreamDescriptor3>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Copy(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IAudioStreamDescriptorFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(void* encodingProperties, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IAudioTrack>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_OpenFailed(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_OpenFailed(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL GetEncodingProperties(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_PlaybackItem(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Name(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SupportInfo(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IAudioTrackOpenFailedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ExtendedError(winrt::hresult* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IAudioTrackSupportInfo>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_DecoderStatus(Windows::Media::Core::MediaDecoderStatus* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Degradation(Windows::Media::Core::AudioDecoderDegradation* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DegradationReason(Windows::Media::Core::AudioDecoderDegradationReason* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MediaSourceStatus(Windows::Media::Core::MediaSourceStatus* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IChapterCue>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_Title(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Title(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ICodecInfo>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Kind(Windows::Media::Core::CodecKind* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Category(Windows::Media::Core::CodecCategory* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Subtypes(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DisplayName(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsTrusted(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ICodecQuery>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL FindAllAsync(Windows::Media::Core::CodecKind kind, Windows::Media::Core::CodecCategory category, void* subType, void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ICodecSubtypesStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_VideoFormatDV25(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatDV50(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatDvc(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatDvh1(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatDvhD(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatDvsd(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatDvsl(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatH263(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatH264(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatH265(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatH264ES(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatHevc(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatHevcES(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatM4S2(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatMjpg(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatMP43(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatMP4S(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatMP4V(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatMpeg2(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatVP80(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatVP90(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatMpg1(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatMss1(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatMss2(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatWmv1(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatWmv2(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatWmv3(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormatWvc1(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoFormat420O(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatAac(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatAdts(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatAlac(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatAmrNB(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatAmrWB(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatAmrWP(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatDolbyAC3(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatDolbyAC3Spdif(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatDolbyDDPlus(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatDrm(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatDts(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatFlac(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatFloat(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatMP3(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatMPeg(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatMsp1(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatOpus(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatPcm(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatWmaSpdif(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatWMAudioLossless(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatWMAudioV8(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AudioFormatWMAudioV9(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IDataCue>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_Data(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Data(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IDataCue2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Properties(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IFaceDetectedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ResultFrame(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IFaceDetectionEffect>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_Enabled(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Enabled(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_DesiredDetectionInterval(Windows::Foundation::TimeSpan value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DesiredDetectionInterval(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL add_FaceDetected(void* handler, winrt::event_token* cookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_FaceDetected(winrt::event_token cookie) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IFaceDetectionEffectDefinition>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_DetectionMode(Windows::Media::Core::FaceDetectionMode value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DetectionMode(Windows::Media::Core::FaceDetectionMode* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_SynchronousDetectionEnabled(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SynchronousDetectionEnabled(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IFaceDetectionEffectFrame>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_DetectedFaces(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IHighDynamicRangeControl>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_Enabled(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Enabled(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IHighDynamicRangeOutput>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Certainty(double* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_FrameControllers(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IImageCue>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Position(struct struct_Windows_Media_Core_TimedTextPoint* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Position(struct struct_Windows_Media_Core_TimedTextPoint value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Extent(struct struct_Windows_Media_Core_TimedTextSize* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Extent(struct struct_Windows_Media_Core_TimedTextSize value) noexcept = 0;
    virtual int32_t WINRT_CALL put_SoftwareBitmap(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SoftwareBitmap(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Source(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_RandomAccessStream(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL GetDeferral(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ILowLightFusionResult>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Frame(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ILowLightFusionStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_SupportedBitmapPixelFormats(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MaxSupportedFrameCount(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL FuseAsync(void* frameSet, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaBinder>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_Binding(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Binding(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL get_Token(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Token(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Source(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaBindingEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_Canceled(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Canceled(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL get_MediaBinder(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL GetDeferral(void** deferral) noexcept = 0;
    virtual int32_t WINRT_CALL SetUri(void* uri) noexcept = 0;
    virtual int32_t WINRT_CALL SetStream(void* stream, void* contentType) noexcept = 0;
    virtual int32_t WINRT_CALL SetStreamReference(void* stream, void* contentType) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaBindingEventArgs2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL SetAdaptiveMediaSource(void* mediaSource) noexcept = 0;
    virtual int32_t WINRT_CALL SetStorageFile(void* file) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaBindingEventArgs3>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL SetDownloadOperation(void* downloadOperation) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaCue>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_StartTime(Windows::Foundation::TimeSpan value) noexcept = 0;
    virtual int32_t WINRT_CALL get_StartTime(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Duration(Windows::Foundation::TimeSpan value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Duration(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Id(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Id(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaCueEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Cue(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaSource>{ struct type : IInspectable
{
};};

template <> struct abi<Windows::Media::Core::IMediaSource2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_OpenOperationCompleted(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_OpenOperationCompleted(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL get_CustomProperties(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Duration(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsOpen(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ExternalTimedTextSources(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ExternalTimedMetadataTracks(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaSource3>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_StateChanged(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_StateChanged(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL get_State(Windows::Media::Core::MediaSourceState* value) noexcept = 0;
    virtual int32_t WINRT_CALL Reset() noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaSource4>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_AdaptiveMediaSource(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MediaStreamSource(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MseStreamSource(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Uri(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL OpenAsync(void** operation) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaSource5>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_DownloadOperation(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaSourceAppServiceConnection>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_InitializeMediaStreamSourceRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_InitializeMediaStreamSourceRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL Start() noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaSourceAppServiceConnectionFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(void* appServiceConnection, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaSourceError>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ExtendedError(winrt::hresult* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Error(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaSourceStateChangedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_OldState(Windows::Media::Core::MediaSourceState* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_NewState(Windows::Media::Core::MediaSourceState* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaSourceStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateFromAdaptiveMediaSource(void* mediaSource, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromMediaStreamSource(void* mediaSource, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromMseStreamSource(void* mediaSource, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromIMediaSource(void* mediaSource, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromStorageFile(void* file, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromStream(void* stream, void* contentType, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromStreamReference(void* stream, void* contentType, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromUri(void* uri, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaSourceStatics2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateFromMediaBinder(void* binder, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaSourceStatics3>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateFromMediaFrameSource(void* frameSource, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaSourceStatics4>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateFromDownloadOperation(void* downloadOperation, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamDescriptor>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_IsSelected(bool* selected) noexcept = 0;
    virtual int32_t WINRT_CALL put_Name(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Name(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Language(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Language(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamDescriptor2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_Label(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Label(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSample>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_Processed(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Processed(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL get_Buffer(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Timestamp(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ExtendedProperties(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Protection(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_DecodeTimestamp(Windows::Foundation::TimeSpan value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DecodeTimestamp(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Duration(Windows::Foundation::TimeSpan value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Duration(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_KeyFrame(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_KeyFrame(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Discontinuous(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Discontinuous(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSample2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Direct3D11Surface(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSampleProtectionProperties>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL SetKeyIdentifier(uint32_t __valueSize, uint8_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL GetKeyIdentifier(uint32_t* __valueSize, uint8_t** value) noexcept = 0;
    virtual int32_t WINRT_CALL SetInitializationVector(uint32_t __valueSize, uint8_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL GetInitializationVector(uint32_t* __valueSize, uint8_t** value) noexcept = 0;
    virtual int32_t WINRT_CALL SetSubSampleMapping(uint32_t __valueSize, uint8_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL GetSubSampleMapping(uint32_t* __valueSize, uint8_t** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSampleStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateFromBuffer(void* buffer, Windows::Foundation::TimeSpan timestamp, void** value) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromStreamAsync(void* stream, uint32_t count, Windows::Foundation::TimeSpan timestamp, void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSampleStatics2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateFromDirect3D11Surface(void* surface, Windows::Foundation::TimeSpan timestamp, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSource>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_Closed(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Closed(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_Starting(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Starting(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_Paused(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Paused(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_SampleRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_SampleRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_SwitchStreamsRequested(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_SwitchStreamsRequested(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL NotifyError(Windows::Media::Core::MediaStreamSourceErrorStatus errorStatus) noexcept = 0;
    virtual int32_t WINRT_CALL AddStreamDescriptor(void* descriptor) noexcept = 0;
    virtual int32_t WINRT_CALL put_MediaProtectionManager(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MediaProtectionManager(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Duration(Windows::Foundation::TimeSpan value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Duration(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CanSeek(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CanSeek(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_BufferTime(Windows::Foundation::TimeSpan value) noexcept = 0;
    virtual int32_t WINRT_CALL get_BufferTime(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL SetBufferedRange(Windows::Foundation::TimeSpan startOffset, Windows::Foundation::TimeSpan endOffset) noexcept = 0;
    virtual int32_t WINRT_CALL get_MusicProperties(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_VideoProperties(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Thumbnail(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Thumbnail(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL AddProtectionKey(void* streamDescriptor, uint32_t __keyIdentifierSize, uint8_t* keyIdentifier, uint32_t __licenseDataSize, uint8_t* licenseData) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSource2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_SampleRendered(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_SampleRendered(winrt::event_token token) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSource3>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_MaxSupportedPlaybackRate(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MaxSupportedPlaybackRate(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSource4>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_IsLive(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsLive(bool* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSourceClosedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Request(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSourceClosedRequest>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Reason(Windows::Media::Core::MediaStreamSourceClosedReason* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSourceFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateFromDescriptor(void* descriptor, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromDescriptors(void* descriptor, void* descriptor2, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_SampleLag(Windows::Foundation::TimeSpan* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSourceSampleRequest>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_StreamDescriptor(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL GetDeferral(void** deferral) noexcept = 0;
    virtual int32_t WINRT_CALL put_Sample(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Sample(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL ReportSampleProgress(uint32_t progress) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Complete() noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Request(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSourceStartingEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Request(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSourceStartingRequest>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_StartPosition(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL GetDeferral(void** deferral) noexcept = 0;
    virtual int32_t WINRT_CALL SetActualStartPosition(Windows::Foundation::TimeSpan position) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Complete() noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_OldStreamDescriptor(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_NewStreamDescriptor(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL GetDeferral(void** deferral) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Complete() noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Request(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMediaTrack>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Id(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Language(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TrackKind(Windows::Media::Core::MediaTrackKind* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Label(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Label(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMseSourceBuffer>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_UpdateStarting(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_UpdateStarting(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_Updated(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Updated(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_UpdateEnded(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_UpdateEnded(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_ErrorOccurred(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_ErrorOccurred(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_Aborted(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Aborted(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL get_Mode(Windows::Media::Core::MseAppendMode* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Mode(Windows::Media::Core::MseAppendMode value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsUpdating(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Buffered(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TimestampOffset(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_TimestampOffset(Windows::Foundation::TimeSpan value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AppendWindowStart(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_AppendWindowStart(Windows::Foundation::TimeSpan value) noexcept = 0;
    virtual int32_t WINRT_CALL get_AppendWindowEnd(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_AppendWindowEnd(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL AppendBuffer(void* buffer) noexcept = 0;
    virtual int32_t WINRT_CALL AppendStream(void* stream) noexcept = 0;
    virtual int32_t WINRT_CALL AppendStreamMaxSize(void* stream, uint64_t maxSize) noexcept = 0;
    virtual int32_t WINRT_CALL Abort() noexcept = 0;
    virtual int32_t WINRT_CALL Remove(Windows::Foundation::TimeSpan start, void* end) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMseSourceBufferList>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_SourceBufferAdded(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_SourceBufferAdded(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_SourceBufferRemoved(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_SourceBufferRemoved(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL get_Buffers(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMseStreamSource>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_Opened(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Opened(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_Ended(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Ended(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_Closed(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Closed(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL get_SourceBuffers(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ActiveSourceBuffers(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ReadyState(Windows::Media::Core::MseReadyState* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Duration(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Duration(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL AddSourceBuffer(void* mimeType, void** buffer) noexcept = 0;
    virtual int32_t WINRT_CALL RemoveSourceBuffer(void* buffer) noexcept = 0;
    virtual int32_t WINRT_CALL EndOfStream(Windows::Media::Core::MseEndOfStreamStatus status) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMseStreamSource2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_LiveSeekableRange(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_LiveSeekableRange(void* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IMseStreamSourceStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL IsContentTypeSupported(void* contentType, bool* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ISceneAnalysisEffect>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_HighDynamicRangeAnalyzer(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_DesiredAnalysisInterval(Windows::Foundation::TimeSpan value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DesiredAnalysisInterval(Windows::Foundation::TimeSpan* value) noexcept = 0;
    virtual int32_t WINRT_CALL add_SceneAnalyzed(void* handler, winrt::event_token* cookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_SceneAnalyzed(winrt::event_token cookie) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ISceneAnalysisEffectFrame>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_FrameControlValues(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_HighDynamicRange(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ISceneAnalysisEffectFrame2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_AnalysisRecommendation(Windows::Media::Core::SceneAnalysisRecommendation* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ISceneAnalyzedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ResultFrame(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ISingleSelectMediaTrackList>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_SelectedIndexChanged(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_SelectedIndexChanged(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL put_SelectedIndex(int32_t value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SelectedIndex(int32_t* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ISpeechCue>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Text(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Text(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_StartPositionInInput(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_StartPositionInInput(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_EndPositionInInput(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_EndPositionInInput(void* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedMetadataStreamDescriptor>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_EncodingProperties(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL Copy(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedMetadataStreamDescriptorFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(void* encodingProperties, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedMetadataTrack>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_CueEntered(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_CueEntered(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_CueExited(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_CueExited(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL add_TrackFailed(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_TrackFailed(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL get_Cues(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ActiveCues(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TimedMetadataKind(Windows::Media::Core::TimedMetadataKind* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DispatchType(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL AddCue(void* cue) noexcept = 0;
    virtual int32_t WINRT_CALL RemoveCue(void* cue) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedMetadataTrack2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_PlaybackItem(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Name(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedMetadataTrackError>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ErrorCode(Windows::Media::Core::TimedMetadataTrackErrorCode* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ExtendedError(winrt::hresult* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedMetadataTrackFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(void* id, void* language, Windows::Media::Core::TimedMetadataKind kind, void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedMetadataTrackFailedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Error(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedMetadataTrackProvider>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_TimedMetadataTracks(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedTextCue>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_CueRegion(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CueRegion(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_CueStyle(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_CueStyle(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Lines(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedTextLine>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Text(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Text(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Subformats(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedTextRegion>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Name(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Name(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Position(struct struct_Windows_Media_Core_TimedTextPoint* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Position(struct struct_Windows_Media_Core_TimedTextPoint value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Extent(struct struct_Windows_Media_Core_TimedTextSize* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Extent(struct struct_Windows_Media_Core_TimedTextSize value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Background(struct struct_Windows_UI_Color* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Background(struct struct_Windows_UI_Color value) noexcept = 0;
    virtual int32_t WINRT_CALL get_WritingMode(Windows::Media::Core::TimedTextWritingMode* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_WritingMode(Windows::Media::Core::TimedTextWritingMode value) noexcept = 0;
    virtual int32_t WINRT_CALL get_DisplayAlignment(Windows::Media::Core::TimedTextDisplayAlignment* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_DisplayAlignment(Windows::Media::Core::TimedTextDisplayAlignment value) noexcept = 0;
    virtual int32_t WINRT_CALL get_LineHeight(struct struct_Windows_Media_Core_TimedTextDouble* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_LineHeight(struct struct_Windows_Media_Core_TimedTextDouble value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsOverflowClipped(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsOverflowClipped(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Padding(struct struct_Windows_Media_Core_TimedTextPadding* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Padding(struct struct_Windows_Media_Core_TimedTextPadding value) noexcept = 0;
    virtual int32_t WINRT_CALL get_TextWrapping(Windows::Media::Core::TimedTextWrapping* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_TextWrapping(Windows::Media::Core::TimedTextWrapping value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ZIndex(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_ZIndex(int32_t value) noexcept = 0;
    virtual int32_t WINRT_CALL get_ScrollMode(Windows::Media::Core::TimedTextScrollMode* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_ScrollMode(Windows::Media::Core::TimedTextScrollMode value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedTextSource>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_Resolved(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_Resolved(winrt::event_token token) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedTextSourceResolveResultEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Error(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Tracks(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedTextSourceStatics>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateFromStream(void* stream, void** value) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromUri(void* uri, void** value) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromStreamWithLanguage(void* stream, void* defaultLanguage, void** value) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromUriWithLanguage(void* uri, void* defaultLanguage, void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedTextSourceStatics2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL CreateFromStreamWithIndex(void* stream, void* indexStream, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromUriWithIndex(void* uri, void* indexUri, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromStreamWithIndexAndLanguage(void* stream, void* indexStream, void* defaultLanguage, void** result) noexcept = 0;
    virtual int32_t WINRT_CALL CreateFromUriWithIndexAndLanguage(void* uri, void* indexUri, void* defaultLanguage, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedTextStyle>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Name(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Name(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_FontFamily(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_FontFamily(void* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_FontSize(struct struct_Windows_Media_Core_TimedTextDouble* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_FontSize(struct struct_Windows_Media_Core_TimedTextDouble value) noexcept = 0;
    virtual int32_t WINRT_CALL get_FontWeight(Windows::Media::Core::TimedTextWeight* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_FontWeight(Windows::Media::Core::TimedTextWeight value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Foreground(struct struct_Windows_UI_Color* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Foreground(struct struct_Windows_UI_Color value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Background(struct struct_Windows_UI_Color* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Background(struct struct_Windows_UI_Color value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsBackgroundAlwaysShown(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsBackgroundAlwaysShown(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_FlowDirection(Windows::Media::Core::TimedTextFlowDirection* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_FlowDirection(Windows::Media::Core::TimedTextFlowDirection value) noexcept = 0;
    virtual int32_t WINRT_CALL get_LineAlignment(Windows::Media::Core::TimedTextLineAlignment* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_LineAlignment(Windows::Media::Core::TimedTextLineAlignment value) noexcept = 0;
    virtual int32_t WINRT_CALL get_OutlineColor(struct struct_Windows_UI_Color* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_OutlineColor(struct struct_Windows_UI_Color value) noexcept = 0;
    virtual int32_t WINRT_CALL get_OutlineThickness(struct struct_Windows_Media_Core_TimedTextDouble* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_OutlineThickness(struct struct_Windows_Media_Core_TimedTextDouble value) noexcept = 0;
    virtual int32_t WINRT_CALL get_OutlineRadius(struct struct_Windows_Media_Core_TimedTextDouble* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_OutlineRadius(struct struct_Windows_Media_Core_TimedTextDouble value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedTextStyle2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_FontStyle(Windows::Media::Core::TimedTextFontStyle* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_FontStyle(Windows::Media::Core::TimedTextFontStyle value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsUnderlineEnabled(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsUnderlineEnabled(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsLineThroughEnabled(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsLineThroughEnabled(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_IsOverlineEnabled(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_IsOverlineEnabled(bool value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::ITimedTextSubformat>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_StartIndex(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_StartIndex(int32_t value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Length(int32_t* value) noexcept = 0;
    virtual int32_t WINRT_CALL put_Length(int32_t value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SubformatStyle(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL put_SubformatStyle(void* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IVideoStabilizationEffect>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL put_Enabled(bool value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Enabled(bool* value) noexcept = 0;
    virtual int32_t WINRT_CALL add_EnabledChanged(void* handler, winrt::event_token* cookie) noexcept = 0;
    virtual int32_t WINRT_CALL remove_EnabledChanged(winrt::event_token cookie) noexcept = 0;
    virtual int32_t WINRT_CALL GetRecommendedStreamConfiguration(void* controller, void* desiredProperties, void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_Reason(Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IVideoStreamDescriptor>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_EncodingProperties(void** encodingProperties) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IVideoStreamDescriptor2>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Copy(void** result) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IVideoStreamDescriptorFactory>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL Create(void* encodingProperties, void** result) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IVideoTrack>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL add_OpenFailed(void* handler, winrt::event_token* token) noexcept = 0;
    virtual int32_t WINRT_CALL remove_OpenFailed(winrt::event_token token) noexcept = 0;
    virtual int32_t WINRT_CALL GetEncodingProperties(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_PlaybackItem(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_Name(void** value) noexcept = 0;
    virtual int32_t WINRT_CALL get_SupportInfo(void** value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IVideoTrackOpenFailedEventArgs>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_ExtendedError(winrt::hresult* value) noexcept = 0;
};};

template <> struct abi<Windows::Media::Core::IVideoTrackSupportInfo>{ struct type : IInspectable
{
    virtual int32_t WINRT_CALL get_DecoderStatus(Windows::Media::Core::MediaDecoderStatus* value) noexcept = 0;
    virtual int32_t WINRT_CALL get_MediaSourceStatus(Windows::Media::Core::MediaSourceStatus* value) noexcept = 0;
};};

template <typename D>
struct consume_Windows_Media_Core_IAudioStreamDescriptor
{
    Windows::Media::MediaProperties::AudioEncodingProperties EncodingProperties() const;
};
template <> struct consume<Windows::Media::Core::IAudioStreamDescriptor> { template <typename D> using type = consume_Windows_Media_Core_IAudioStreamDescriptor<D>; };

template <typename D>
struct consume_Windows_Media_Core_IAudioStreamDescriptor2
{
    void LeadingEncoderPadding(optional<uint32_t> const& value) const;
    Windows::Foundation::IReference<uint32_t> LeadingEncoderPadding() const;
    void TrailingEncoderPadding(optional<uint32_t> const& value) const;
    Windows::Foundation::IReference<uint32_t> TrailingEncoderPadding() const;
};
template <> struct consume<Windows::Media::Core::IAudioStreamDescriptor2> { template <typename D> using type = consume_Windows_Media_Core_IAudioStreamDescriptor2<D>; };

template <typename D>
struct consume_Windows_Media_Core_IAudioStreamDescriptor3
{
    Windows::Media::Core::AudioStreamDescriptor Copy() const;
};
template <> struct consume<Windows::Media::Core::IAudioStreamDescriptor3> { template <typename D> using type = consume_Windows_Media_Core_IAudioStreamDescriptor3<D>; };

template <typename D>
struct consume_Windows_Media_Core_IAudioStreamDescriptorFactory
{
    Windows::Media::Core::AudioStreamDescriptor Create(Windows::Media::MediaProperties::AudioEncodingProperties const& encodingProperties) const;
};
template <> struct consume<Windows::Media::Core::IAudioStreamDescriptorFactory> { template <typename D> using type = consume_Windows_Media_Core_IAudioStreamDescriptorFactory<D>; };

template <typename D>
struct consume_Windows_Media_Core_IAudioTrack
{
    winrt::event_token OpenFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::AudioTrack, Windows::Media::Core::AudioTrackOpenFailedEventArgs> const& handler) const;
    using OpenFailed_revoker = impl::event_revoker<Windows::Media::Core::IAudioTrack, &impl::abi_t<Windows::Media::Core::IAudioTrack>::remove_OpenFailed>;
    OpenFailed_revoker OpenFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::AudioTrack, Windows::Media::Core::AudioTrackOpenFailedEventArgs> const& handler) const;
    void OpenFailed(winrt::event_token const& token) const noexcept;
    Windows::Media::MediaProperties::AudioEncodingProperties GetEncodingProperties() const;
    Windows::Media::Playback::MediaPlaybackItem PlaybackItem() const;
    hstring Name() const;
    Windows::Media::Core::AudioTrackSupportInfo SupportInfo() const;
};
template <> struct consume<Windows::Media::Core::IAudioTrack> { template <typename D> using type = consume_Windows_Media_Core_IAudioTrack<D>; };

template <typename D>
struct consume_Windows_Media_Core_IAudioTrackOpenFailedEventArgs
{
    winrt::hresult ExtendedError() const;
};
template <> struct consume<Windows::Media::Core::IAudioTrackOpenFailedEventArgs> { template <typename D> using type = consume_Windows_Media_Core_IAudioTrackOpenFailedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_IAudioTrackSupportInfo
{
    Windows::Media::Core::MediaDecoderStatus DecoderStatus() const;
    Windows::Media::Core::AudioDecoderDegradation Degradation() const;
    Windows::Media::Core::AudioDecoderDegradationReason DegradationReason() const;
    Windows::Media::Core::MediaSourceStatus MediaSourceStatus() const;
};
template <> struct consume<Windows::Media::Core::IAudioTrackSupportInfo> { template <typename D> using type = consume_Windows_Media_Core_IAudioTrackSupportInfo<D>; };

template <typename D>
struct consume_Windows_Media_Core_IChapterCue
{
    void Title(param::hstring const& value) const;
    hstring Title() const;
};
template <> struct consume<Windows::Media::Core::IChapterCue> { template <typename D> using type = consume_Windows_Media_Core_IChapterCue<D>; };

template <typename D>
struct consume_Windows_Media_Core_ICodecInfo
{
    Windows::Media::Core::CodecKind Kind() const;
    Windows::Media::Core::CodecCategory Category() const;
    Windows::Foundation::Collections::IVectorView<hstring> Subtypes() const;
    hstring DisplayName() const;
    bool IsTrusted() const;
};
template <> struct consume<Windows::Media::Core::ICodecInfo> { template <typename D> using type = consume_Windows_Media_Core_ICodecInfo<D>; };

template <typename D>
struct consume_Windows_Media_Core_ICodecQuery
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Core::CodecInfo>> FindAllAsync(Windows::Media::Core::CodecKind const& kind, Windows::Media::Core::CodecCategory const& category, param::hstring const& subType) const;
};
template <> struct consume<Windows::Media::Core::ICodecQuery> { template <typename D> using type = consume_Windows_Media_Core_ICodecQuery<D>; };

template <typename D>
struct consume_Windows_Media_Core_ICodecSubtypesStatics
{
    hstring VideoFormatDV25() const;
    hstring VideoFormatDV50() const;
    hstring VideoFormatDvc() const;
    hstring VideoFormatDvh1() const;
    hstring VideoFormatDvhD() const;
    hstring VideoFormatDvsd() const;
    hstring VideoFormatDvsl() const;
    hstring VideoFormatH263() const;
    hstring VideoFormatH264() const;
    hstring VideoFormatH265() const;
    hstring VideoFormatH264ES() const;
    hstring VideoFormatHevc() const;
    hstring VideoFormatHevcES() const;
    hstring VideoFormatM4S2() const;
    hstring VideoFormatMjpg() const;
    hstring VideoFormatMP43() const;
    hstring VideoFormatMP4S() const;
    hstring VideoFormatMP4V() const;
    hstring VideoFormatMpeg2() const;
    hstring VideoFormatVP80() const;
    hstring VideoFormatVP90() const;
    hstring VideoFormatMpg1() const;
    hstring VideoFormatMss1() const;
    hstring VideoFormatMss2() const;
    hstring VideoFormatWmv1() const;
    hstring VideoFormatWmv2() const;
    hstring VideoFormatWmv3() const;
    hstring VideoFormatWvc1() const;
    hstring VideoFormat420O() const;
    hstring AudioFormatAac() const;
    hstring AudioFormatAdts() const;
    hstring AudioFormatAlac() const;
    hstring AudioFormatAmrNB() const;
    hstring AudioFormatAmrWB() const;
    hstring AudioFormatAmrWP() const;
    hstring AudioFormatDolbyAC3() const;
    hstring AudioFormatDolbyAC3Spdif() const;
    hstring AudioFormatDolbyDDPlus() const;
    hstring AudioFormatDrm() const;
    hstring AudioFormatDts() const;
    hstring AudioFormatFlac() const;
    hstring AudioFormatFloat() const;
    hstring AudioFormatMP3() const;
    hstring AudioFormatMPeg() const;
    hstring AudioFormatMsp1() const;
    hstring AudioFormatOpus() const;
    hstring AudioFormatPcm() const;
    hstring AudioFormatWmaSpdif() const;
    hstring AudioFormatWMAudioLossless() const;
    hstring AudioFormatWMAudioV8() const;
    hstring AudioFormatWMAudioV9() const;
};
template <> struct consume<Windows::Media::Core::ICodecSubtypesStatics> { template <typename D> using type = consume_Windows_Media_Core_ICodecSubtypesStatics<D>; };

template <typename D>
struct consume_Windows_Media_Core_IDataCue
{
    void Data(Windows::Storage::Streams::IBuffer const& value) const;
    Windows::Storage::Streams::IBuffer Data() const;
};
template <> struct consume<Windows::Media::Core::IDataCue> { template <typename D> using type = consume_Windows_Media_Core_IDataCue<D>; };

template <typename D>
struct consume_Windows_Media_Core_IDataCue2
{
    Windows::Foundation::Collections::PropertySet Properties() const;
};
template <> struct consume<Windows::Media::Core::IDataCue2> { template <typename D> using type = consume_Windows_Media_Core_IDataCue2<D>; };

template <typename D>
struct consume_Windows_Media_Core_IFaceDetectedEventArgs
{
    Windows::Media::Core::FaceDetectionEffectFrame ResultFrame() const;
};
template <> struct consume<Windows::Media::Core::IFaceDetectedEventArgs> { template <typename D> using type = consume_Windows_Media_Core_IFaceDetectedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_IFaceDetectionEffect
{
    void Enabled(bool value) const;
    bool Enabled() const;
    void DesiredDetectionInterval(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan DesiredDetectionInterval() const;
    winrt::event_token FaceDetected(Windows::Foundation::TypedEventHandler<Windows::Media::Core::FaceDetectionEffect, Windows::Media::Core::FaceDetectedEventArgs> const& handler) const;
    using FaceDetected_revoker = impl::event_revoker<Windows::Media::Core::IFaceDetectionEffect, &impl::abi_t<Windows::Media::Core::IFaceDetectionEffect>::remove_FaceDetected>;
    FaceDetected_revoker FaceDetected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::FaceDetectionEffect, Windows::Media::Core::FaceDetectedEventArgs> const& handler) const;
    void FaceDetected(winrt::event_token const& cookie) const noexcept;
};
template <> struct consume<Windows::Media::Core::IFaceDetectionEffect> { template <typename D> using type = consume_Windows_Media_Core_IFaceDetectionEffect<D>; };

template <typename D>
struct consume_Windows_Media_Core_IFaceDetectionEffectDefinition
{
    void DetectionMode(Windows::Media::Core::FaceDetectionMode const& value) const;
    Windows::Media::Core::FaceDetectionMode DetectionMode() const;
    void SynchronousDetectionEnabled(bool value) const;
    bool SynchronousDetectionEnabled() const;
};
template <> struct consume<Windows::Media::Core::IFaceDetectionEffectDefinition> { template <typename D> using type = consume_Windows_Media_Core_IFaceDetectionEffectDefinition<D>; };

template <typename D>
struct consume_Windows_Media_Core_IFaceDetectionEffectFrame
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::FaceAnalysis::DetectedFace> DetectedFaces() const;
};
template <> struct consume<Windows::Media::Core::IFaceDetectionEffectFrame> { template <typename D> using type = consume_Windows_Media_Core_IFaceDetectionEffectFrame<D>; };

template <typename D>
struct consume_Windows_Media_Core_IHighDynamicRangeControl
{
    void Enabled(bool value) const;
    bool Enabled() const;
};
template <> struct consume<Windows::Media::Core::IHighDynamicRangeControl> { template <typename D> using type = consume_Windows_Media_Core_IHighDynamicRangeControl<D>; };

template <typename D>
struct consume_Windows_Media_Core_IHighDynamicRangeOutput
{
    double Certainty() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::Core::FrameController> FrameControllers() const;
};
template <> struct consume<Windows::Media::Core::IHighDynamicRangeOutput> { template <typename D> using type = consume_Windows_Media_Core_IHighDynamicRangeOutput<D>; };

template <typename D>
struct consume_Windows_Media_Core_IImageCue
{
    Windows::Media::Core::TimedTextPoint Position() const;
    void Position(Windows::Media::Core::TimedTextPoint const& value) const;
    Windows::Media::Core::TimedTextSize Extent() const;
    void Extent(Windows::Media::Core::TimedTextSize const& value) const;
    void SoftwareBitmap(Windows::Graphics::Imaging::SoftwareBitmap const& value) const;
    Windows::Graphics::Imaging::SoftwareBitmap SoftwareBitmap() const;
};
template <> struct consume<Windows::Media::Core::IImageCue> { template <typename D> using type = consume_Windows_Media_Core_IImageCue<D>; };

template <typename D>
struct consume_Windows_Media_Core_IInitializeMediaStreamSourceRequestedEventArgs
{
    Windows::Media::Core::MediaStreamSource Source() const;
    Windows::Storage::Streams::IRandomAccessStream RandomAccessStream() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Media::Core::IInitializeMediaStreamSourceRequestedEventArgs> { template <typename D> using type = consume_Windows_Media_Core_IInitializeMediaStreamSourceRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_ILowLightFusionResult
{
    Windows::Graphics::Imaging::SoftwareBitmap Frame() const;
};
template <> struct consume<Windows::Media::Core::ILowLightFusionResult> { template <typename D> using type = consume_Windows_Media_Core_ILowLightFusionResult<D>; };

template <typename D>
struct consume_Windows_Media_Core_ILowLightFusionStatics
{
    Windows::Foundation::Collections::IVectorView<Windows::Graphics::Imaging::BitmapPixelFormat> SupportedBitmapPixelFormats() const;
    int32_t MaxSupportedFrameCount() const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Media::Core::LowLightFusionResult, double> FuseAsync(param::async_iterable<Windows::Graphics::Imaging::SoftwareBitmap> const& frameSet) const;
};
template <> struct consume<Windows::Media::Core::ILowLightFusionStatics> { template <typename D> using type = consume_Windows_Media_Core_ILowLightFusionStatics<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaBinder
{
    winrt::event_token Binding(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBinder, Windows::Media::Core::MediaBindingEventArgs> const& handler) const;
    using Binding_revoker = impl::event_revoker<Windows::Media::Core::IMediaBinder, &impl::abi_t<Windows::Media::Core::IMediaBinder>::remove_Binding>;
    Binding_revoker Binding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBinder, Windows::Media::Core::MediaBindingEventArgs> const& handler) const;
    void Binding(winrt::event_token const& token) const noexcept;
    hstring Token() const;
    void Token(param::hstring const& value) const;
    Windows::Media::Core::MediaSource Source() const;
};
template <> struct consume<Windows::Media::Core::IMediaBinder> { template <typename D> using type = consume_Windows_Media_Core_IMediaBinder<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaBindingEventArgs
{
    winrt::event_token Canceled(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBindingEventArgs, Windows::Foundation::IInspectable> const& handler) const;
    using Canceled_revoker = impl::event_revoker<Windows::Media::Core::IMediaBindingEventArgs, &impl::abi_t<Windows::Media::Core::IMediaBindingEventArgs>::remove_Canceled>;
    Canceled_revoker Canceled(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaBindingEventArgs, Windows::Foundation::IInspectable> const& handler) const;
    void Canceled(winrt::event_token const& token) const noexcept;
    Windows::Media::Core::MediaBinder MediaBinder() const;
    Windows::Foundation::Deferral GetDeferral() const;
    void SetUri(Windows::Foundation::Uri const& uri) const;
    void SetStream(Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& contentType) const;
    void SetStreamReference(Windows::Storage::Streams::IRandomAccessStreamReference const& stream, param::hstring const& contentType) const;
};
template <> struct consume<Windows::Media::Core::IMediaBindingEventArgs> { template <typename D> using type = consume_Windows_Media_Core_IMediaBindingEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaBindingEventArgs2
{
    void SetAdaptiveMediaSource(Windows::Media::Streaming::Adaptive::AdaptiveMediaSource const& mediaSource) const;
    void SetStorageFile(Windows::Storage::IStorageFile const& file) const;
};
template <> struct consume<Windows::Media::Core::IMediaBindingEventArgs2> { template <typename D> using type = consume_Windows_Media_Core_IMediaBindingEventArgs2<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaBindingEventArgs3
{
    void SetDownloadOperation(Windows::Networking::BackgroundTransfer::DownloadOperation const& downloadOperation) const;
};
template <> struct consume<Windows::Media::Core::IMediaBindingEventArgs3> { template <typename D> using type = consume_Windows_Media_Core_IMediaBindingEventArgs3<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaCue
{
    void StartTime(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan StartTime() const;
    void Duration(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan Duration() const;
    void Id(param::hstring const& value) const;
    hstring Id() const;
};
template <> struct consume<Windows::Media::Core::IMediaCue> { template <typename D> using type = consume_Windows_Media_Core_IMediaCue<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaCueEventArgs
{
    Windows::Media::Core::IMediaCue Cue() const;
};
template <> struct consume<Windows::Media::Core::IMediaCueEventArgs> { template <typename D> using type = consume_Windows_Media_Core_IMediaCueEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaSource
{
};
template <> struct consume<Windows::Media::Core::IMediaSource> { template <typename D> using type = consume_Windows_Media_Core_IMediaSource<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaSource2
{
    winrt::event_token OpenOperationCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> const& handler) const;
    using OpenOperationCompleted_revoker = impl::event_revoker<Windows::Media::Core::IMediaSource2, &impl::abi_t<Windows::Media::Core::IMediaSource2>::remove_OpenOperationCompleted>;
    OpenOperationCompleted_revoker OpenOperationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceOpenOperationCompletedEventArgs> const& handler) const;
    void OpenOperationCompleted(winrt::event_token const& token) const noexcept;
    Windows::Foundation::Collections::ValueSet CustomProperties() const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Duration() const;
    bool IsOpen() const;
    Windows::Foundation::Collections::IObservableVector<Windows::Media::Core::TimedTextSource> ExternalTimedTextSources() const;
    Windows::Foundation::Collections::IObservableVector<Windows::Media::Core::TimedMetadataTrack> ExternalTimedMetadataTracks() const;
};
template <> struct consume<Windows::Media::Core::IMediaSource2> { template <typename D> using type = consume_Windows_Media_Core_IMediaSource2<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaSource3
{
    winrt::event_token StateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceStateChangedEventArgs> const& handler) const;
    using StateChanged_revoker = impl::event_revoker<Windows::Media::Core::IMediaSource3, &impl::abi_t<Windows::Media::Core::IMediaSource3>::remove_StateChanged>;
    StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSource, Windows::Media::Core::MediaSourceStateChangedEventArgs> const& handler) const;
    void StateChanged(winrt::event_token const& token) const noexcept;
    Windows::Media::Core::MediaSourceState State() const;
    void Reset() const;
};
template <> struct consume<Windows::Media::Core::IMediaSource3> { template <typename D> using type = consume_Windows_Media_Core_IMediaSource3<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaSource4
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSource AdaptiveMediaSource() const;
    Windows::Media::Core::MediaStreamSource MediaStreamSource() const;
    Windows::Media::Core::MseStreamSource MseStreamSource() const;
    Windows::Foundation::Uri Uri() const;
    Windows::Foundation::IAsyncAction OpenAsync() const;
};
template <> struct consume<Windows::Media::Core::IMediaSource4> { template <typename D> using type = consume_Windows_Media_Core_IMediaSource4<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaSource5
{
    Windows::Networking::BackgroundTransfer::DownloadOperation DownloadOperation() const;
};
template <> struct consume<Windows::Media::Core::IMediaSource5> { template <typename D> using type = consume_Windows_Media_Core_IMediaSource5<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaSourceAppServiceConnection
{
    winrt::event_token InitializeMediaStreamSourceRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSourceAppServiceConnection, Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs> const& handler) const;
    using InitializeMediaStreamSourceRequested_revoker = impl::event_revoker<Windows::Media::Core::IMediaSourceAppServiceConnection, &impl::abi_t<Windows::Media::Core::IMediaSourceAppServiceConnection>::remove_InitializeMediaStreamSourceRequested>;
    InitializeMediaStreamSourceRequested_revoker InitializeMediaStreamSourceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaSourceAppServiceConnection, Windows::Media::Core::InitializeMediaStreamSourceRequestedEventArgs> const& handler) const;
    void InitializeMediaStreamSourceRequested(winrt::event_token const& token) const noexcept;
    void Start() const;
};
template <> struct consume<Windows::Media::Core::IMediaSourceAppServiceConnection> { template <typename D> using type = consume_Windows_Media_Core_IMediaSourceAppServiceConnection<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaSourceAppServiceConnectionFactory
{
    Windows::Media::Core::MediaSourceAppServiceConnection Create(Windows::ApplicationModel::AppService::AppServiceConnection const& appServiceConnection) const;
};
template <> struct consume<Windows::Media::Core::IMediaSourceAppServiceConnectionFactory> { template <typename D> using type = consume_Windows_Media_Core_IMediaSourceAppServiceConnectionFactory<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaSourceError
{
    winrt::hresult ExtendedError() const;
};
template <> struct consume<Windows::Media::Core::IMediaSourceError> { template <typename D> using type = consume_Windows_Media_Core_IMediaSourceError<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaSourceOpenOperationCompletedEventArgs
{
    Windows::Media::Core::MediaSourceError Error() const;
};
template <> struct consume<Windows::Media::Core::IMediaSourceOpenOperationCompletedEventArgs> { template <typename D> using type = consume_Windows_Media_Core_IMediaSourceOpenOperationCompletedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaSourceStateChangedEventArgs
{
    Windows::Media::Core::MediaSourceState OldState() const;
    Windows::Media::Core::MediaSourceState NewState() const;
};
template <> struct consume<Windows::Media::Core::IMediaSourceStateChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Core_IMediaSourceStateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaSourceStatics
{
    Windows::Media::Core::MediaSource CreateFromAdaptiveMediaSource(Windows::Media::Streaming::Adaptive::AdaptiveMediaSource const& mediaSource) const;
    Windows::Media::Core::MediaSource CreateFromMediaStreamSource(Windows::Media::Core::MediaStreamSource const& mediaSource) const;
    Windows::Media::Core::MediaSource CreateFromMseStreamSource(Windows::Media::Core::MseStreamSource const& mediaSource) const;
    Windows::Media::Core::MediaSource CreateFromIMediaSource(Windows::Media::Core::IMediaSource const& mediaSource) const;
    Windows::Media::Core::MediaSource CreateFromStorageFile(Windows::Storage::IStorageFile const& file) const;
    Windows::Media::Core::MediaSource CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& contentType) const;
    Windows::Media::Core::MediaSource CreateFromStreamReference(Windows::Storage::Streams::IRandomAccessStreamReference const& stream, param::hstring const& contentType) const;
    Windows::Media::Core::MediaSource CreateFromUri(Windows::Foundation::Uri const& uri) const;
};
template <> struct consume<Windows::Media::Core::IMediaSourceStatics> { template <typename D> using type = consume_Windows_Media_Core_IMediaSourceStatics<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaSourceStatics2
{
    Windows::Media::Core::MediaSource CreateFromMediaBinder(Windows::Media::Core::MediaBinder const& binder) const;
};
template <> struct consume<Windows::Media::Core::IMediaSourceStatics2> { template <typename D> using type = consume_Windows_Media_Core_IMediaSourceStatics2<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaSourceStatics3
{
    Windows::Media::Core::MediaSource CreateFromMediaFrameSource(Windows::Media::Capture::Frames::MediaFrameSource const& frameSource) const;
};
template <> struct consume<Windows::Media::Core::IMediaSourceStatics3> { template <typename D> using type = consume_Windows_Media_Core_IMediaSourceStatics3<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaSourceStatics4
{
    Windows::Media::Core::MediaSource CreateFromDownloadOperation(Windows::Networking::BackgroundTransfer::DownloadOperation const& downloadOperation) const;
};
template <> struct consume<Windows::Media::Core::IMediaSourceStatics4> { template <typename D> using type = consume_Windows_Media_Core_IMediaSourceStatics4<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamDescriptor
{
    bool IsSelected() const;
    void Name(param::hstring const& value) const;
    hstring Name() const;
    void Language(param::hstring const& value) const;
    hstring Language() const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamDescriptor> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamDescriptor<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamDescriptor2
{
    void Label(param::hstring const& value) const;
    hstring Label() const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamDescriptor2> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamDescriptor2<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSample
{
    winrt::event_token Processed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSample, Windows::Foundation::IInspectable> const& handler) const;
    using Processed_revoker = impl::event_revoker<Windows::Media::Core::IMediaStreamSample, &impl::abi_t<Windows::Media::Core::IMediaStreamSample>::remove_Processed>;
    Processed_revoker Processed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSample, Windows::Foundation::IInspectable> const& handler) const;
    void Processed(winrt::event_token const& token) const noexcept;
    Windows::Storage::Streams::Buffer Buffer() const;
    Windows::Foundation::TimeSpan Timestamp() const;
    Windows::Media::Core::MediaStreamSamplePropertySet ExtendedProperties() const;
    Windows::Media::Core::MediaStreamSampleProtectionProperties Protection() const;
    void DecodeTimestamp(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan DecodeTimestamp() const;
    void Duration(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan Duration() const;
    void KeyFrame(bool value) const;
    bool KeyFrame() const;
    void Discontinuous(bool value) const;
    bool Discontinuous() const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSample> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSample<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSample2
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface Direct3D11Surface() const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSample2> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSample2<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSampleProtectionProperties
{
    void SetKeyIdentifier(array_view<uint8_t const> value) const;
    void GetKeyIdentifier(com_array<uint8_t>& value) const;
    void SetInitializationVector(array_view<uint8_t const> value) const;
    void GetInitializationVector(com_array<uint8_t>& value) const;
    void SetSubSampleMapping(array_view<uint8_t const> value) const;
    void GetSubSampleMapping(com_array<uint8_t>& value) const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSampleProtectionProperties> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSampleProtectionProperties<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSampleStatics
{
    Windows::Media::Core::MediaStreamSample CreateFromBuffer(Windows::Storage::Streams::IBuffer const& buffer, Windows::Foundation::TimeSpan const& timestamp) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Core::MediaStreamSample> CreateFromStreamAsync(Windows::Storage::Streams::IInputStream const& stream, uint32_t count, Windows::Foundation::TimeSpan const& timestamp) const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSampleStatics> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSampleStatics<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSampleStatics2
{
    Windows::Media::Core::MediaStreamSample CreateFromDirect3D11Surface(Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface const& surface, Windows::Foundation::TimeSpan const& timestamp) const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSampleStatics2> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSampleStatics2<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSource
{
    winrt::event_token Closed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceClosedEventArgs> const& handler) const;
    using Closed_revoker = impl::event_revoker<Windows::Media::Core::IMediaStreamSource, &impl::abi_t<Windows::Media::Core::IMediaStreamSource>::remove_Closed>;
    Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceClosedEventArgs> const& handler) const;
    void Closed(winrt::event_token const& token) const noexcept;
    winrt::event_token Starting(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceStartingEventArgs> const& handler) const;
    using Starting_revoker = impl::event_revoker<Windows::Media::Core::IMediaStreamSource, &impl::abi_t<Windows::Media::Core::IMediaStreamSource>::remove_Starting>;
    Starting_revoker Starting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceStartingEventArgs> const& handler) const;
    void Starting(winrt::event_token const& token) const noexcept;
    winrt::event_token Paused(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Foundation::IInspectable> const& handler) const;
    using Paused_revoker = impl::event_revoker<Windows::Media::Core::IMediaStreamSource, &impl::abi_t<Windows::Media::Core::IMediaStreamSource>::remove_Paused>;
    Paused_revoker Paused(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Foundation::IInspectable> const& handler) const;
    void Paused(winrt::event_token const& token) const noexcept;
    winrt::event_token SampleRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> const& handler) const;
    using SampleRequested_revoker = impl::event_revoker<Windows::Media::Core::IMediaStreamSource, &impl::abi_t<Windows::Media::Core::IMediaStreamSource>::remove_SampleRequested>;
    SampleRequested_revoker SampleRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRequestedEventArgs> const& handler) const;
    void SampleRequested(winrt::event_token const& token) const noexcept;
    winrt::event_token SwitchStreamsRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> const& handler) const;
    using SwitchStreamsRequested_revoker = impl::event_revoker<Windows::Media::Core::IMediaStreamSource, &impl::abi_t<Windows::Media::Core::IMediaStreamSource>::remove_SwitchStreamsRequested>;
    SwitchStreamsRequested_revoker SwitchStreamsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestedEventArgs> const& handler) const;
    void SwitchStreamsRequested(winrt::event_token const& token) const noexcept;
    void NotifyError(Windows::Media::Core::MediaStreamSourceErrorStatus const& errorStatus) const;
    void AddStreamDescriptor(Windows::Media::Core::IMediaStreamDescriptor const& descriptor) const;
    void MediaProtectionManager(Windows::Media::Protection::MediaProtectionManager const& value) const;
    Windows::Media::Protection::MediaProtectionManager MediaProtectionManager() const;
    void Duration(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan Duration() const;
    void CanSeek(bool value) const;
    bool CanSeek() const;
    void BufferTime(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan BufferTime() const;
    void SetBufferedRange(Windows::Foundation::TimeSpan const& startOffset, Windows::Foundation::TimeSpan const& endOffset) const;
    Windows::Storage::FileProperties::MusicProperties MusicProperties() const;
    Windows::Storage::FileProperties::VideoProperties VideoProperties() const;
    void Thumbnail(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
    Windows::Storage::Streams::IRandomAccessStreamReference Thumbnail() const;
    void AddProtectionKey(Windows::Media::Core::IMediaStreamDescriptor const& streamDescriptor, array_view<uint8_t const> keyIdentifier, array_view<uint8_t const> licenseData) const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSource> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSource<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSource2
{
    winrt::event_token SampleRendered(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> const& handler) const;
    using SampleRendered_revoker = impl::event_revoker<Windows::Media::Core::IMediaStreamSource2, &impl::abi_t<Windows::Media::Core::IMediaStreamSource2>::remove_SampleRendered>;
    SampleRendered_revoker SampleRendered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MediaStreamSource, Windows::Media::Core::MediaStreamSourceSampleRenderedEventArgs> const& handler) const;
    void SampleRendered(winrt::event_token const& token) const noexcept;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSource2> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSource2<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSource3
{
    void MaxSupportedPlaybackRate(optional<double> const& value) const;
    Windows::Foundation::IReference<double> MaxSupportedPlaybackRate() const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSource3> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSource3<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSource4
{
    void IsLive(bool value) const;
    bool IsLive() const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSource4> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSource4<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSourceClosedEventArgs
{
    Windows::Media::Core::MediaStreamSourceClosedRequest Request() const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSourceClosedEventArgs> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceClosedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSourceClosedRequest
{
    Windows::Media::Core::MediaStreamSourceClosedReason Reason() const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSourceClosedRequest> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceClosedRequest<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSourceFactory
{
    Windows::Media::Core::MediaStreamSource CreateFromDescriptor(Windows::Media::Core::IMediaStreamDescriptor const& descriptor) const;
    Windows::Media::Core::MediaStreamSource CreateFromDescriptors(Windows::Media::Core::IMediaStreamDescriptor const& descriptor, Windows::Media::Core::IMediaStreamDescriptor const& descriptor2) const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSourceFactory> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceFactory<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSourceSampleRenderedEventArgs
{
    Windows::Foundation::TimeSpan SampleLag() const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSourceSampleRenderedEventArgs> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSampleRenderedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSourceSampleRequest
{
    Windows::Media::Core::IMediaStreamDescriptor StreamDescriptor() const;
    Windows::Media::Core::MediaStreamSourceSampleRequestDeferral GetDeferral() const;
    void Sample(Windows::Media::Core::MediaStreamSample const& value) const;
    Windows::Media::Core::MediaStreamSample Sample() const;
    void ReportSampleProgress(uint32_t progress) const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSourceSampleRequest> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSampleRequest<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSourceSampleRequestDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSourceSampleRequestDeferral> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSampleRequestDeferral<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSourceSampleRequestedEventArgs
{
    Windows::Media::Core::MediaStreamSourceSampleRequest Request() const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSourceSampleRequestedEventArgs> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSampleRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSourceStartingEventArgs
{
    Windows::Media::Core::MediaStreamSourceStartingRequest Request() const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSourceStartingEventArgs> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceStartingEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSourceStartingRequest
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> StartPosition() const;
    Windows::Media::Core::MediaStreamSourceStartingRequestDeferral GetDeferral() const;
    void SetActualStartPosition(Windows::Foundation::TimeSpan const& position) const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSourceStartingRequest> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceStartingRequest<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSourceStartingRequestDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSourceStartingRequestDeferral> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceStartingRequestDeferral<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequest
{
    Windows::Media::Core::IMediaStreamDescriptor OldStreamDescriptor() const;
    Windows::Media::Core::IMediaStreamDescriptor NewStreamDescriptor() const;
    Windows::Media::Core::MediaStreamSourceSwitchStreamsRequestDeferral GetDeferral() const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequest> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequest<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequestDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestDeferral> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequestDeferral<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequestedEventArgs
{
    Windows::Media::Core::MediaStreamSourceSwitchStreamsRequest Request() const;
};
template <> struct consume<Windows::Media::Core::IMediaStreamSourceSwitchStreamsRequestedEventArgs> { template <typename D> using type = consume_Windows_Media_Core_IMediaStreamSourceSwitchStreamsRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMediaTrack
{
    hstring Id() const;
    hstring Language() const;
    Windows::Media::Core::MediaTrackKind TrackKind() const;
    void Label(param::hstring const& value) const;
    hstring Label() const;
};
template <> struct consume<Windows::Media::Core::IMediaTrack> { template <typename D> using type = consume_Windows_Media_Core_IMediaTrack<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMseSourceBuffer
{
    winrt::event_token UpdateStarting(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
    using UpdateStarting_revoker = impl::event_revoker<Windows::Media::Core::IMseSourceBuffer, &impl::abi_t<Windows::Media::Core::IMseSourceBuffer>::remove_UpdateStarting>;
    UpdateStarting_revoker UpdateStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
    void UpdateStarting(winrt::event_token const& token) const noexcept;
    winrt::event_token Updated(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
    using Updated_revoker = impl::event_revoker<Windows::Media::Core::IMseSourceBuffer, &impl::abi_t<Windows::Media::Core::IMseSourceBuffer>::remove_Updated>;
    Updated_revoker Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
    void Updated(winrt::event_token const& token) const noexcept;
    winrt::event_token UpdateEnded(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
    using UpdateEnded_revoker = impl::event_revoker<Windows::Media::Core::IMseSourceBuffer, &impl::abi_t<Windows::Media::Core::IMseSourceBuffer>::remove_UpdateEnded>;
    UpdateEnded_revoker UpdateEnded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
    void UpdateEnded(winrt::event_token const& token) const noexcept;
    winrt::event_token ErrorOccurred(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
    using ErrorOccurred_revoker = impl::event_revoker<Windows::Media::Core::IMseSourceBuffer, &impl::abi_t<Windows::Media::Core::IMseSourceBuffer>::remove_ErrorOccurred>;
    ErrorOccurred_revoker ErrorOccurred(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
    void ErrorOccurred(winrt::event_token const& token) const noexcept;
    winrt::event_token Aborted(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
    using Aborted_revoker = impl::event_revoker<Windows::Media::Core::IMseSourceBuffer, &impl::abi_t<Windows::Media::Core::IMseSourceBuffer>::remove_Aborted>;
    Aborted_revoker Aborted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBuffer, Windows::Foundation::IInspectable> const& handler) const;
    void Aborted(winrt::event_token const& token) const noexcept;
    Windows::Media::Core::MseAppendMode Mode() const;
    void Mode(Windows::Media::Core::MseAppendMode const& value) const;
    bool IsUpdating() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::MseTimeRange> Buffered() const;
    Windows::Foundation::TimeSpan TimestampOffset() const;
    void TimestampOffset(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan AppendWindowStart() const;
    void AppendWindowStart(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> AppendWindowEnd() const;
    void AppendWindowEnd(optional<Windows::Foundation::TimeSpan> const& value) const;
    void AppendBuffer(Windows::Storage::Streams::IBuffer const& buffer) const;
    void AppendStream(Windows::Storage::Streams::IInputStream const& stream) const;
    void AppendStream(Windows::Storage::Streams::IInputStream const& stream, uint64_t maxSize) const;
    void Abort() const;
    void Remove(Windows::Foundation::TimeSpan const& start, optional<Windows::Foundation::TimeSpan> const& end) const;
};
template <> struct consume<Windows::Media::Core::IMseSourceBuffer> { template <typename D> using type = consume_Windows_Media_Core_IMseSourceBuffer<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMseSourceBufferList
{
    winrt::event_token SourceBufferAdded(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::Foundation::IInspectable> const& handler) const;
    using SourceBufferAdded_revoker = impl::event_revoker<Windows::Media::Core::IMseSourceBufferList, &impl::abi_t<Windows::Media::Core::IMseSourceBufferList>::remove_SourceBufferAdded>;
    SourceBufferAdded_revoker SourceBufferAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::Foundation::IInspectable> const& handler) const;
    void SourceBufferAdded(winrt::event_token const& token) const noexcept;
    winrt::event_token SourceBufferRemoved(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::Foundation::IInspectable> const& handler) const;
    using SourceBufferRemoved_revoker = impl::event_revoker<Windows::Media::Core::IMseSourceBufferList, &impl::abi_t<Windows::Media::Core::IMseSourceBufferList>::remove_SourceBufferRemoved>;
    SourceBufferRemoved_revoker SourceBufferRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseSourceBufferList, Windows::Foundation::IInspectable> const& handler) const;
    void SourceBufferRemoved(winrt::event_token const& token) const noexcept;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::MseSourceBuffer> Buffers() const;
};
template <> struct consume<Windows::Media::Core::IMseSourceBufferList> { template <typename D> using type = consume_Windows_Media_Core_IMseSourceBufferList<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMseStreamSource
{
    winrt::event_token Opened(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const;
    using Opened_revoker = impl::event_revoker<Windows::Media::Core::IMseStreamSource, &impl::abi_t<Windows::Media::Core::IMseStreamSource>::remove_Opened>;
    Opened_revoker Opened(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const;
    void Opened(winrt::event_token const& token) const noexcept;
    winrt::event_token Ended(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const;
    using Ended_revoker = impl::event_revoker<Windows::Media::Core::IMseStreamSource, &impl::abi_t<Windows::Media::Core::IMseStreamSource>::remove_Ended>;
    Ended_revoker Ended(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const;
    void Ended(winrt::event_token const& token) const noexcept;
    winrt::event_token Closed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const;
    using Closed_revoker = impl::event_revoker<Windows::Media::Core::IMseStreamSource, &impl::abi_t<Windows::Media::Core::IMseStreamSource>::remove_Closed>;
    Closed_revoker Closed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::MseStreamSource, Windows::Foundation::IInspectable> const& handler) const;
    void Closed(winrt::event_token const& token) const noexcept;
    Windows::Media::Core::MseSourceBufferList SourceBuffers() const;
    Windows::Media::Core::MseSourceBufferList ActiveSourceBuffers() const;
    Windows::Media::Core::MseReadyState ReadyState() const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Duration() const;
    void Duration(optional<Windows::Foundation::TimeSpan> const& value) const;
    Windows::Media::Core::MseSourceBuffer AddSourceBuffer(param::hstring const& mimeType) const;
    void RemoveSourceBuffer(Windows::Media::Core::MseSourceBuffer const& buffer) const;
    void EndOfStream(Windows::Media::Core::MseEndOfStreamStatus const& status) const;
};
template <> struct consume<Windows::Media::Core::IMseStreamSource> { template <typename D> using type = consume_Windows_Media_Core_IMseStreamSource<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMseStreamSource2
{
    Windows::Foundation::IReference<Windows::Media::Core::MseTimeRange> LiveSeekableRange() const;
    void LiveSeekableRange(optional<Windows::Media::Core::MseTimeRange> const& value) const;
};
template <> struct consume<Windows::Media::Core::IMseStreamSource2> { template <typename D> using type = consume_Windows_Media_Core_IMseStreamSource2<D>; };

template <typename D>
struct consume_Windows_Media_Core_IMseStreamSourceStatics
{
    bool IsContentTypeSupported(param::hstring const& contentType) const;
};
template <> struct consume<Windows::Media::Core::IMseStreamSourceStatics> { template <typename D> using type = consume_Windows_Media_Core_IMseStreamSourceStatics<D>; };

template <typename D>
struct consume_Windows_Media_Core_ISceneAnalysisEffect
{
    Windows::Media::Core::HighDynamicRangeControl HighDynamicRangeAnalyzer() const;
    void DesiredAnalysisInterval(Windows::Foundation::TimeSpan const& value) const;
    Windows::Foundation::TimeSpan DesiredAnalysisInterval() const;
    winrt::event_token SceneAnalyzed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::SceneAnalysisEffect, Windows::Media::Core::SceneAnalyzedEventArgs> const& handler) const;
    using SceneAnalyzed_revoker = impl::event_revoker<Windows::Media::Core::ISceneAnalysisEffect, &impl::abi_t<Windows::Media::Core::ISceneAnalysisEffect>::remove_SceneAnalyzed>;
    SceneAnalyzed_revoker SceneAnalyzed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::SceneAnalysisEffect, Windows::Media::Core::SceneAnalyzedEventArgs> const& handler) const;
    void SceneAnalyzed(winrt::event_token const& cookie) const noexcept;
};
template <> struct consume<Windows::Media::Core::ISceneAnalysisEffect> { template <typename D> using type = consume_Windows_Media_Core_ISceneAnalysisEffect<D>; };

template <typename D>
struct consume_Windows_Media_Core_ISceneAnalysisEffectFrame
{
    Windows::Media::Capture::CapturedFrameControlValues FrameControlValues() const;
    Windows::Media::Core::HighDynamicRangeOutput HighDynamicRange() const;
};
template <> struct consume<Windows::Media::Core::ISceneAnalysisEffectFrame> { template <typename D> using type = consume_Windows_Media_Core_ISceneAnalysisEffectFrame<D>; };

template <typename D>
struct consume_Windows_Media_Core_ISceneAnalysisEffectFrame2
{
    Windows::Media::Core::SceneAnalysisRecommendation AnalysisRecommendation() const;
};
template <> struct consume<Windows::Media::Core::ISceneAnalysisEffectFrame2> { template <typename D> using type = consume_Windows_Media_Core_ISceneAnalysisEffectFrame2<D>; };

template <typename D>
struct consume_Windows_Media_Core_ISceneAnalyzedEventArgs
{
    Windows::Media::Core::SceneAnalysisEffectFrame ResultFrame() const;
};
template <> struct consume<Windows::Media::Core::ISceneAnalyzedEventArgs> { template <typename D> using type = consume_Windows_Media_Core_ISceneAnalyzedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_ISingleSelectMediaTrackList
{
    winrt::event_token SelectedIndexChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Core::ISingleSelectMediaTrackList, Windows::Foundation::IInspectable> const& handler) const;
    using SelectedIndexChanged_revoker = impl::event_revoker<Windows::Media::Core::ISingleSelectMediaTrackList, &impl::abi_t<Windows::Media::Core::ISingleSelectMediaTrackList>::remove_SelectedIndexChanged>;
    SelectedIndexChanged_revoker SelectedIndexChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::ISingleSelectMediaTrackList, Windows::Foundation::IInspectable> const& handler) const;
    void SelectedIndexChanged(winrt::event_token const& token) const noexcept;
    void SelectedIndex(int32_t value) const;
    int32_t SelectedIndex() const;
};
template <> struct consume<Windows::Media::Core::ISingleSelectMediaTrackList> { template <typename D> using type = consume_Windows_Media_Core_ISingleSelectMediaTrackList<D>; };

template <typename D>
struct consume_Windows_Media_Core_ISpeechCue
{
    hstring Text() const;
    void Text(param::hstring const& value) const;
    Windows::Foundation::IReference<int32_t> StartPositionInInput() const;
    void StartPositionInInput(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> EndPositionInInput() const;
    void EndPositionInInput(optional<int32_t> const& value) const;
};
template <> struct consume<Windows::Media::Core::ISpeechCue> { template <typename D> using type = consume_Windows_Media_Core_ISpeechCue<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedMetadataStreamDescriptor
{
    Windows::Media::MediaProperties::TimedMetadataEncodingProperties EncodingProperties() const;
    Windows::Media::Core::TimedMetadataStreamDescriptor Copy() const;
};
template <> struct consume<Windows::Media::Core::ITimedMetadataStreamDescriptor> { template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataStreamDescriptor<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedMetadataStreamDescriptorFactory
{
    Windows::Media::Core::TimedMetadataStreamDescriptor Create(Windows::Media::MediaProperties::TimedMetadataEncodingProperties const& encodingProperties) const;
};
template <> struct consume<Windows::Media::Core::ITimedMetadataStreamDescriptorFactory> { template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataStreamDescriptorFactory<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedMetadataTrack
{
    winrt::event_token CueEntered(Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> const& handler) const;
    using CueEntered_revoker = impl::event_revoker<Windows::Media::Core::ITimedMetadataTrack, &impl::abi_t<Windows::Media::Core::ITimedMetadataTrack>::remove_CueEntered>;
    CueEntered_revoker CueEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> const& handler) const;
    void CueEntered(winrt::event_token const& token) const noexcept;
    winrt::event_token CueExited(Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> const& handler) const;
    using CueExited_revoker = impl::event_revoker<Windows::Media::Core::ITimedMetadataTrack, &impl::abi_t<Windows::Media::Core::ITimedMetadataTrack>::remove_CueExited>;
    CueExited_revoker CueExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::MediaCueEventArgs> const& handler) const;
    void CueExited(winrt::event_token const& token) const noexcept;
    winrt::event_token TrackFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::TimedMetadataTrackFailedEventArgs> const& handler) const;
    using TrackFailed_revoker = impl::event_revoker<Windows::Media::Core::ITimedMetadataTrack, &impl::abi_t<Windows::Media::Core::ITimedMetadataTrack>::remove_TrackFailed>;
    TrackFailed_revoker TrackFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedMetadataTrack, Windows::Media::Core::TimedMetadataTrackFailedEventArgs> const& handler) const;
    void TrackFailed(winrt::event_token const& token) const noexcept;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::IMediaCue> Cues() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::IMediaCue> ActiveCues() const;
    Windows::Media::Core::TimedMetadataKind TimedMetadataKind() const;
    hstring DispatchType() const;
    void AddCue(Windows::Media::Core::IMediaCue const& cue) const;
    void RemoveCue(Windows::Media::Core::IMediaCue const& cue) const;
};
template <> struct consume<Windows::Media::Core::ITimedMetadataTrack> { template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrack<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedMetadataTrack2
{
    Windows::Media::Playback::MediaPlaybackItem PlaybackItem() const;
    hstring Name() const;
};
template <> struct consume<Windows::Media::Core::ITimedMetadataTrack2> { template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrack2<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedMetadataTrackError
{
    Windows::Media::Core::TimedMetadataTrackErrorCode ErrorCode() const;
    winrt::hresult ExtendedError() const;
};
template <> struct consume<Windows::Media::Core::ITimedMetadataTrackError> { template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrackError<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedMetadataTrackFactory
{
    Windows::Media::Core::TimedMetadataTrack Create(param::hstring const& id, param::hstring const& language, Windows::Media::Core::TimedMetadataKind const& kind) const;
};
template <> struct consume<Windows::Media::Core::ITimedMetadataTrackFactory> { template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrackFactory<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedMetadataTrackFailedEventArgs
{
    Windows::Media::Core::TimedMetadataTrackError Error() const;
};
template <> struct consume<Windows::Media::Core::ITimedMetadataTrackFailedEventArgs> { template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrackFailedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedMetadataTrackProvider
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack> TimedMetadataTracks() const;
};
template <> struct consume<Windows::Media::Core::ITimedMetadataTrackProvider> { template <typename D> using type = consume_Windows_Media_Core_ITimedMetadataTrackProvider<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedTextCue
{
    Windows::Media::Core::TimedTextRegion CueRegion() const;
    void CueRegion(Windows::Media::Core::TimedTextRegion const& value) const;
    Windows::Media::Core::TimedTextStyle CueStyle() const;
    void CueStyle(Windows::Media::Core::TimedTextStyle const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Media::Core::TimedTextLine> Lines() const;
};
template <> struct consume<Windows::Media::Core::ITimedTextCue> { template <typename D> using type = consume_Windows_Media_Core_ITimedTextCue<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedTextLine
{
    hstring Text() const;
    void Text(param::hstring const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Media::Core::TimedTextSubformat> Subformats() const;
};
template <> struct consume<Windows::Media::Core::ITimedTextLine> { template <typename D> using type = consume_Windows_Media_Core_ITimedTextLine<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedTextRegion
{
    hstring Name() const;
    void Name(param::hstring const& value) const;
    Windows::Media::Core::TimedTextPoint Position() const;
    void Position(Windows::Media::Core::TimedTextPoint const& value) const;
    Windows::Media::Core::TimedTextSize Extent() const;
    void Extent(Windows::Media::Core::TimedTextSize const& value) const;
    Windows::UI::Color Background() const;
    void Background(Windows::UI::Color const& value) const;
    Windows::Media::Core::TimedTextWritingMode WritingMode() const;
    void WritingMode(Windows::Media::Core::TimedTextWritingMode const& value) const;
    Windows::Media::Core::TimedTextDisplayAlignment DisplayAlignment() const;
    void DisplayAlignment(Windows::Media::Core::TimedTextDisplayAlignment const& value) const;
    Windows::Media::Core::TimedTextDouble LineHeight() const;
    void LineHeight(Windows::Media::Core::TimedTextDouble const& value) const;
    bool IsOverflowClipped() const;
    void IsOverflowClipped(bool value) const;
    Windows::Media::Core::TimedTextPadding Padding() const;
    void Padding(Windows::Media::Core::TimedTextPadding const& value) const;
    Windows::Media::Core::TimedTextWrapping TextWrapping() const;
    void TextWrapping(Windows::Media::Core::TimedTextWrapping const& value) const;
    int32_t ZIndex() const;
    void ZIndex(int32_t value) const;
    Windows::Media::Core::TimedTextScrollMode ScrollMode() const;
    void ScrollMode(Windows::Media::Core::TimedTextScrollMode const& value) const;
};
template <> struct consume<Windows::Media::Core::ITimedTextRegion> { template <typename D> using type = consume_Windows_Media_Core_ITimedTextRegion<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedTextSource
{
    winrt::event_token Resolved(Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedTextSource, Windows::Media::Core::TimedTextSourceResolveResultEventArgs> const& handler) const;
    using Resolved_revoker = impl::event_revoker<Windows::Media::Core::ITimedTextSource, &impl::abi_t<Windows::Media::Core::ITimedTextSource>::remove_Resolved>;
    Resolved_revoker Resolved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::TimedTextSource, Windows::Media::Core::TimedTextSourceResolveResultEventArgs> const& handler) const;
    void Resolved(winrt::event_token const& token) const noexcept;
};
template <> struct consume<Windows::Media::Core::ITimedTextSource> { template <typename D> using type = consume_Windows_Media_Core_ITimedTextSource<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedTextSourceResolveResultEventArgs
{
    Windows::Media::Core::TimedMetadataTrackError Error() const;
    Windows::Foundation::Collections::IVectorView<Windows::Media::Core::TimedMetadataTrack> Tracks() const;
};
template <> struct consume<Windows::Media::Core::ITimedTextSourceResolveResultEventArgs> { template <typename D> using type = consume_Windows_Media_Core_ITimedTextSourceResolveResultEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedTextSourceStatics
{
    Windows::Media::Core::TimedTextSource CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream) const;
    Windows::Media::Core::TimedTextSource CreateFromUri(Windows::Foundation::Uri const& uri) const;
    Windows::Media::Core::TimedTextSource CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream, param::hstring const& defaultLanguage) const;
    Windows::Media::Core::TimedTextSource CreateFromUri(Windows::Foundation::Uri const& uri, param::hstring const& defaultLanguage) const;
};
template <> struct consume<Windows::Media::Core::ITimedTextSourceStatics> { template <typename D> using type = consume_Windows_Media_Core_ITimedTextSourceStatics<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedTextSourceStatics2
{
    Windows::Media::Core::TimedTextSource CreateFromStreamWithIndex(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Storage::Streams::IRandomAccessStream const& indexStream) const;
    Windows::Media::Core::TimedTextSource CreateFromUriWithIndex(Windows::Foundation::Uri const& uri, Windows::Foundation::Uri const& indexUri) const;
    Windows::Media::Core::TimedTextSource CreateFromStreamWithIndex(Windows::Storage::Streams::IRandomAccessStream const& stream, Windows::Storage::Streams::IRandomAccessStream const& indexStream, param::hstring const& defaultLanguage) const;
    Windows::Media::Core::TimedTextSource CreateFromUriWithIndex(Windows::Foundation::Uri const& uri, Windows::Foundation::Uri const& indexUri, param::hstring const& defaultLanguage) const;
};
template <> struct consume<Windows::Media::Core::ITimedTextSourceStatics2> { template <typename D> using type = consume_Windows_Media_Core_ITimedTextSourceStatics2<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedTextStyle
{
    hstring Name() const;
    void Name(param::hstring const& value) const;
    hstring FontFamily() const;
    void FontFamily(param::hstring const& value) const;
    Windows::Media::Core::TimedTextDouble FontSize() const;
    void FontSize(Windows::Media::Core::TimedTextDouble const& value) const;
    Windows::Media::Core::TimedTextWeight FontWeight() const;
    void FontWeight(Windows::Media::Core::TimedTextWeight const& value) const;
    Windows::UI::Color Foreground() const;
    void Foreground(Windows::UI::Color const& value) const;
    Windows::UI::Color Background() const;
    void Background(Windows::UI::Color const& value) const;
    bool IsBackgroundAlwaysShown() const;
    void IsBackgroundAlwaysShown(bool value) const;
    Windows::Media::Core::TimedTextFlowDirection FlowDirection() const;
    void FlowDirection(Windows::Media::Core::TimedTextFlowDirection const& value) const;
    Windows::Media::Core::TimedTextLineAlignment LineAlignment() const;
    void LineAlignment(Windows::Media::Core::TimedTextLineAlignment const& value) const;
    Windows::UI::Color OutlineColor() const;
    void OutlineColor(Windows::UI::Color const& value) const;
    Windows::Media::Core::TimedTextDouble OutlineThickness() const;
    void OutlineThickness(Windows::Media::Core::TimedTextDouble const& value) const;
    Windows::Media::Core::TimedTextDouble OutlineRadius() const;
    void OutlineRadius(Windows::Media::Core::TimedTextDouble const& value) const;
};
template <> struct consume<Windows::Media::Core::ITimedTextStyle> { template <typename D> using type = consume_Windows_Media_Core_ITimedTextStyle<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedTextStyle2
{
    Windows::Media::Core::TimedTextFontStyle FontStyle() const;
    void FontStyle(Windows::Media::Core::TimedTextFontStyle const& value) const;
    bool IsUnderlineEnabled() const;
    void IsUnderlineEnabled(bool value) const;
    bool IsLineThroughEnabled() const;
    void IsLineThroughEnabled(bool value) const;
    bool IsOverlineEnabled() const;
    void IsOverlineEnabled(bool value) const;
};
template <> struct consume<Windows::Media::Core::ITimedTextStyle2> { template <typename D> using type = consume_Windows_Media_Core_ITimedTextStyle2<D>; };

template <typename D>
struct consume_Windows_Media_Core_ITimedTextSubformat
{
    int32_t StartIndex() const;
    void StartIndex(int32_t value) const;
    int32_t Length() const;
    void Length(int32_t value) const;
    Windows::Media::Core::TimedTextStyle SubformatStyle() const;
    void SubformatStyle(Windows::Media::Core::TimedTextStyle const& value) const;
};
template <> struct consume<Windows::Media::Core::ITimedTextSubformat> { template <typename D> using type = consume_Windows_Media_Core_ITimedTextSubformat<D>; };

template <typename D>
struct consume_Windows_Media_Core_IVideoStabilizationEffect
{
    void Enabled(bool value) const;
    bool Enabled() const;
    winrt::event_token EnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoStabilizationEffect, Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> const& handler) const;
    using EnabledChanged_revoker = impl::event_revoker<Windows::Media::Core::IVideoStabilizationEffect, &impl::abi_t<Windows::Media::Core::IVideoStabilizationEffect>::remove_EnabledChanged>;
    EnabledChanged_revoker EnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoStabilizationEffect, Windows::Media::Core::VideoStabilizationEffectEnabledChangedEventArgs> const& handler) const;
    void EnabledChanged(winrt::event_token const& cookie) const noexcept;
    Windows::Media::Capture::VideoStreamConfiguration GetRecommendedStreamConfiguration(Windows::Media::Devices::VideoDeviceController const& controller, Windows::Media::MediaProperties::VideoEncodingProperties const& desiredProperties) const;
};
template <> struct consume<Windows::Media::Core::IVideoStabilizationEffect> { template <typename D> using type = consume_Windows_Media_Core_IVideoStabilizationEffect<D>; };

template <typename D>
struct consume_Windows_Media_Core_IVideoStabilizationEffectEnabledChangedEventArgs
{
    Windows::Media::Core::VideoStabilizationEffectEnabledChangedReason Reason() const;
};
template <> struct consume<Windows::Media::Core::IVideoStabilizationEffectEnabledChangedEventArgs> { template <typename D> using type = consume_Windows_Media_Core_IVideoStabilizationEffectEnabledChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_IVideoStreamDescriptor
{
    Windows::Media::MediaProperties::VideoEncodingProperties EncodingProperties() const;
};
template <> struct consume<Windows::Media::Core::IVideoStreamDescriptor> { template <typename D> using type = consume_Windows_Media_Core_IVideoStreamDescriptor<D>; };

template <typename D>
struct consume_Windows_Media_Core_IVideoStreamDescriptor2
{
    Windows::Media::Core::VideoStreamDescriptor Copy() const;
};
template <> struct consume<Windows::Media::Core::IVideoStreamDescriptor2> { template <typename D> using type = consume_Windows_Media_Core_IVideoStreamDescriptor2<D>; };

template <typename D>
struct consume_Windows_Media_Core_IVideoStreamDescriptorFactory
{
    Windows::Media::Core::VideoStreamDescriptor Create(Windows::Media::MediaProperties::VideoEncodingProperties const& encodingProperties) const;
};
template <> struct consume<Windows::Media::Core::IVideoStreamDescriptorFactory> { template <typename D> using type = consume_Windows_Media_Core_IVideoStreamDescriptorFactory<D>; };

template <typename D>
struct consume_Windows_Media_Core_IVideoTrack
{
    winrt::event_token OpenFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoTrack, Windows::Media::Core::VideoTrackOpenFailedEventArgs> const& handler) const;
    using OpenFailed_revoker = impl::event_revoker<Windows::Media::Core::IVideoTrack, &impl::abi_t<Windows::Media::Core::IVideoTrack>::remove_OpenFailed>;
    OpenFailed_revoker OpenFailed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Core::VideoTrack, Windows::Media::Core::VideoTrackOpenFailedEventArgs> const& handler) const;
    void OpenFailed(winrt::event_token const& token) const noexcept;
    Windows::Media::MediaProperties::VideoEncodingProperties GetEncodingProperties() const;
    Windows::Media::Playback::MediaPlaybackItem PlaybackItem() const;
    hstring Name() const;
    Windows::Media::Core::VideoTrackSupportInfo SupportInfo() const;
};
template <> struct consume<Windows::Media::Core::IVideoTrack> { template <typename D> using type = consume_Windows_Media_Core_IVideoTrack<D>; };

template <typename D>
struct consume_Windows_Media_Core_IVideoTrackOpenFailedEventArgs
{
    winrt::hresult ExtendedError() const;
};
template <> struct consume<Windows::Media::Core::IVideoTrackOpenFailedEventArgs> { template <typename D> using type = consume_Windows_Media_Core_IVideoTrackOpenFailedEventArgs<D>; };

template <typename D>
struct consume_Windows_Media_Core_IVideoTrackSupportInfo
{
    Windows::Media::Core::MediaDecoderStatus DecoderStatus() const;
    Windows::Media::Core::MediaSourceStatus MediaSourceStatus() const;
};
template <> struct consume<Windows::Media::Core::IVideoTrackSupportInfo> { template <typename D> using type = consume_Windows_Media_Core_IVideoTrackSupportInfo<D>; };

struct struct_Windows_Media_Core_MseTimeRange
{
    Windows::Foundation::TimeSpan Start;
    Windows::Foundation::TimeSpan End;
};
template <> struct abi<Windows::Media::Core::MseTimeRange>{ using type = struct_Windows_Media_Core_MseTimeRange; };


struct struct_Windows_Media_Core_TimedTextDouble
{
    double Value;
    Windows::Media::Core::TimedTextUnit Unit;
};
template <> struct abi<Windows::Media::Core::TimedTextDouble>{ using type = struct_Windows_Media_Core_TimedTextDouble; };


struct struct_Windows_Media_Core_TimedTextPadding
{
    double Before;
    double After;
    double Start;
    double End;
    Windows::Media::Core::TimedTextUnit Unit;
};
template <> struct abi<Windows::Media::Core::TimedTextPadding>{ using type = struct_Windows_Media_Core_TimedTextPadding; };


struct struct_Windows_Media_Core_TimedTextPoint
{
    double X;
    double Y;
    Windows::Media::Core::TimedTextUnit Unit;
};
template <> struct abi<Windows::Media::Core::TimedTextPoint>{ using type = struct_Windows_Media_Core_TimedTextPoint; };


struct struct_Windows_Media_Core_TimedTextSize
{
    double Height;
    double Width;
    Windows::Media::Core::TimedTextUnit Unit;
};
template <> struct abi<Windows::Media::Core::TimedTextSize>{ using type = struct_Windows_Media_Core_TimedTextSize; };


}
