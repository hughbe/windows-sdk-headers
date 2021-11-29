// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Controls_Maps_0_H
#define WINRT_Windows_UI_Xaml_Controls_Maps_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation
{
    enum class AltitudeReferenceSystem : int32_t;
    struct GeoboundingBox;
    struct Geopath;
    struct Geopoint;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename T> struct __declspec(empty_bases) IReference;
    struct Point;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
    template <typename K, typename V> struct __declspec(empty_bases) IMap;
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::Services::Maps
{
    struct MapRoute;
}
WINRT_EXPORT namespace winrt::Windows::Services::Maps::LocalSearch
{
    struct LocalLocation;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml
{
    struct DataTemplate;
    struct DependencyObject;
    struct DependencyProperty;
    struct Thickness;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Maps
{
    enum class MapAnimationKind : int32_t
    {
        Default = 0,
        None = 1,
        Linear = 2,
        Bow = 3,
    };
    enum class MapCameraChangeReason : int32_t
    {
        System = 0,
        UserInteraction = 1,
        Programmatic = 2,
    };
    enum class MapColorScheme : int32_t
    {
        Light = 0,
        Dark = 1,
    };
    enum class MapElementCollisionBehavior : int32_t
    {
        Hide = 0,
        RemainVisible = 1,
    };
    enum class MapInteractionMode : int32_t
    {
        Auto = 0,
        Disabled = 1,
        GestureOnly = 2,
        PointerAndKeyboard = 2,
        ControlOnly = 3,
        GestureAndControl = 4,
        PointerKeyboardAndControl = 4,
        PointerOnly = 5,
    };
    enum class MapLoadingStatus : int32_t
    {
        Loading = 0,
        Loaded = 1,
        DataUnavailable = 2,
        DownloadedMapsManagerUnavailable = 3,
    };
    enum class MapModel3DShadingOption : int32_t
    {
        Default = 0,
        Flat = 1,
        Smooth = 2,
    };
    enum class MapPanInteractionMode : int32_t
    {
        Auto = 0,
        Disabled = 1,
    };
    enum class MapProjection : int32_t
    {
        WebMercator = 0,
        Globe = 1,
    };
    enum class MapStyle : int32_t
    {
        None = 0,
        Road = 1,
        Aerial = 2,
        AerialWithRoads = 3,
        Terrain = 4,
        Aerial3D = 5,
        Aerial3DWithRoads = 6,
        Custom = 7,
    };
    enum class MapTileAnimationState : int32_t
    {
        Stopped = 0,
        Paused = 1,
        Playing = 2,
    };
    enum class MapTileLayer : int32_t
    {
        LabelOverlay = 0,
        RoadOverlay = 1,
        AreaOverlay = 2,
        BackgroundOverlay = 3,
        BackgroundReplacement = 4,
    };
    enum class MapVisibleRegionKind : int32_t
    {
        Near = 0,
        Full = 1,
    };
    enum class MapWatermarkMode : int32_t
    {
        Automatic = 0,
        On = 1,
    };
    struct ICustomMapTileDataSource;
    struct ICustomMapTileDataSourceFactory;
    struct IHttpMapTileDataSource;
    struct IHttpMapTileDataSourceFactory;
    struct ILocalMapTileDataSource;
    struct ILocalMapTileDataSourceFactory;
    struct IMapActualCameraChangedEventArgs;
    struct IMapActualCameraChangedEventArgs2;
    struct IMapActualCameraChangingEventArgs;
    struct IMapActualCameraChangingEventArgs2;
    struct IMapBillboard;
    struct IMapBillboardFactory;
    struct IMapBillboardStatics;
    struct IMapCamera;
    struct IMapCameraFactory;
    struct IMapContextRequestedEventArgs;
    struct IMapControl;
    struct IMapControl2;
    struct IMapControl3;
    struct IMapControl4;
    struct IMapControl5;
    struct IMapControl6;
    struct IMapControl7;
    struct IMapControl8;
    struct IMapControlBusinessLandmarkClickEventArgs;
    struct IMapControlBusinessLandmarkPointerEnteredEventArgs;
    struct IMapControlBusinessLandmarkPointerExitedEventArgs;
    struct IMapControlBusinessLandmarkRightTappedEventArgs;
    struct IMapControlDataHelper;
    struct IMapControlDataHelper2;
    struct IMapControlDataHelperFactory;
    struct IMapControlDataHelperStatics;
    struct IMapControlStatics;
    struct IMapControlStatics2;
    struct IMapControlStatics4;
    struct IMapControlStatics5;
    struct IMapControlStatics6;
    struct IMapControlStatics7;
    struct IMapControlStatics8;
    struct IMapControlTransitFeatureClickEventArgs;
    struct IMapControlTransitFeaturePointerEnteredEventArgs;
    struct IMapControlTransitFeaturePointerExitedEventArgs;
    struct IMapControlTransitFeatureRightTappedEventArgs;
    struct IMapCustomExperience;
    struct IMapCustomExperienceChangedEventArgs;
    struct IMapCustomExperienceFactory;
    struct IMapElement;
    struct IMapElement2;
    struct IMapElement3;
    struct IMapElement3D;
    struct IMapElement3DStatics;
    struct IMapElement4;
    struct IMapElementClickEventArgs;
    struct IMapElementFactory;
    struct IMapElementPointerEnteredEventArgs;
    struct IMapElementPointerExitedEventArgs;
    struct IMapElementStatics;
    struct IMapElementStatics2;
    struct IMapElementStatics3;
    struct IMapElementStatics4;
    struct IMapElementsLayer;
    struct IMapElementsLayerClickEventArgs;
    struct IMapElementsLayerContextRequestedEventArgs;
    struct IMapElementsLayerPointerEnteredEventArgs;
    struct IMapElementsLayerPointerExitedEventArgs;
    struct IMapElementsLayerStatics;
    struct IMapIcon;
    struct IMapIcon2;
    struct IMapIconStatics;
    struct IMapIconStatics2;
    struct IMapInputEventArgs;
    struct IMapItemsControl;
    struct IMapItemsControlStatics;
    struct IMapLayer;
    struct IMapLayerFactory;
    struct IMapLayerStatics;
    struct IMapModel3D;
    struct IMapModel3DFactory;
    struct IMapModel3DStatics;
    struct IMapPolygon;
    struct IMapPolygon2;
    struct IMapPolygonStatics;
    struct IMapPolyline;
    struct IMapPolylineStatics;
    struct IMapRightTappedEventArgs;
    struct IMapRouteView;
    struct IMapRouteViewFactory;
    struct IMapScene;
    struct IMapSceneStatics;
    struct IMapStyleSheet;
    struct IMapStyleSheetEntriesStatics;
    struct IMapStyleSheetEntryStatesStatics;
    struct IMapStyleSheetStatics;
    struct IMapTargetCameraChangedEventArgs;
    struct IMapTargetCameraChangedEventArgs2;
    struct IMapTileBitmapRequest;
    struct IMapTileBitmapRequestDeferral;
    struct IMapTileBitmapRequestedEventArgs;
    struct IMapTileBitmapRequestedEventArgs2;
    struct IMapTileDataSource;
    struct IMapTileDataSourceFactory;
    struct IMapTileSource;
    struct IMapTileSource2;
    struct IMapTileSourceFactory;
    struct IMapTileSourceStatics;
    struct IMapTileSourceStatics2;
    struct IMapTileUriRequest;
    struct IMapTileUriRequestDeferral;
    struct IMapTileUriRequestedEventArgs;
    struct IMapTileUriRequestedEventArgs2;
    struct IStreetsideExperience;
    struct IStreetsideExperienceFactory;
    struct IStreetsidePanorama;
    struct IStreetsidePanoramaStatics;
    struct CustomMapTileDataSource;
    struct HttpMapTileDataSource;
    struct LocalMapTileDataSource;
    struct MapActualCameraChangedEventArgs;
    struct MapActualCameraChangingEventArgs;
    struct MapBillboard;
    struct MapCamera;
    struct MapContextRequestedEventArgs;
    struct MapControl;
    struct MapControlBusinessLandmarkClickEventArgs;
    struct MapControlBusinessLandmarkPointerEnteredEventArgs;
    struct MapControlBusinessLandmarkPointerExitedEventArgs;
    struct MapControlBusinessLandmarkRightTappedEventArgs;
    struct MapControlDataHelper;
    struct MapControlTransitFeatureClickEventArgs;
    struct MapControlTransitFeaturePointerEnteredEventArgs;
    struct MapControlTransitFeaturePointerExitedEventArgs;
    struct MapControlTransitFeatureRightTappedEventArgs;
    struct MapCustomExperience;
    struct MapCustomExperienceChangedEventArgs;
    struct MapElement;
    struct MapElement3D;
    struct MapElementClickEventArgs;
    struct MapElementPointerEnteredEventArgs;
    struct MapElementPointerExitedEventArgs;
    struct MapElementsLayer;
    struct MapElementsLayerClickEventArgs;
    struct MapElementsLayerContextRequestedEventArgs;
    struct MapElementsLayerPointerEnteredEventArgs;
    struct MapElementsLayerPointerExitedEventArgs;
    struct MapIcon;
    struct MapInputEventArgs;
    struct MapItemsControl;
    struct MapLayer;
    struct MapModel3D;
    struct MapPolygon;
    struct MapPolyline;
    struct MapRightTappedEventArgs;
    struct MapRouteView;
    struct MapScene;
    struct MapStyleSheet;
    struct MapStyleSheetEntries;
    struct MapStyleSheetEntryStates;
    struct MapTargetCameraChangedEventArgs;
    struct MapTileBitmapRequest;
    struct MapTileBitmapRequestDeferral;
    struct MapTileBitmapRequestedEventArgs;
    struct MapTileDataSource;
    struct MapTileSource;
    struct MapTileUriRequest;
    struct MapTileUriRequestDeferral;
    struct MapTileUriRequestedEventArgs;
    struct StreetsideExperience;
    struct StreetsidePanorama;
    struct MapZoomLevelRange;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapBillboard>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapCamera>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl5>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl6>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl7>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControl8>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics6>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics7>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlStatics8>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement3D>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElement4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementStatics4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapIcon>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapIcon2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapIconStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapItemsControl>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapLayer>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapLayerFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapModel3D>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapPolygon>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapPolygon2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapPolyline>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapRouteView>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapScene>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapStyleSheet>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileSource>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileSource2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapBillboard>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapCamera>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControl>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlDataHelper>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapCustomExperience>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElement>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElement3D>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementsLayer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapIcon>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapInputEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapItemsControl>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapLayer>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapModel3D>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapPolygon>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapPolyline>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapRouteView>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapScene>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapStyleSheetEntries>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapStyleSheetEntryStates>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileDataSource>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileSource>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileUriRequest>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::StreetsideExperience>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapAnimationKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapColorScheme>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapInteractionMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapLoadingStatus>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapModel3DShadingOption>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapProjection>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapStyle>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileAnimationState>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapTileLayer>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapWatermarkMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange>{ using type = struct_category<double, double>; };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource> = L"Windows.UI.Xaml.Controls.Maps.CustomMapTileDataSource";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource> = L"Windows.UI.Xaml.Controls.Maps.HttpMapTileDataSource";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource> = L"Windows.UI.Xaml.Controls.Maps.LocalMapTileDataSource";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapActualCameraChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapActualCameraChangingEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapBillboard> = L"Windows.UI.Xaml.Controls.Maps.MapBillboard";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapCamera> = L"Windows.UI.Xaml.Controls.Maps.MapCamera";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapContextRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapControl> = L"Windows.UI.Xaml.Controls.Maps.MapControl";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapControlBusinessLandmarkClickEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapControlBusinessLandmarkPointerEnteredEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapControlBusinessLandmarkPointerExitedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapControlBusinessLandmarkRightTappedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapControlDataHelper> = L"Windows.UI.Xaml.Controls.Maps.MapControlDataHelper";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapControlTransitFeatureClickEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapControlTransitFeaturePointerEnteredEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapControlTransitFeaturePointerExitedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapControlTransitFeatureRightTappedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapCustomExperience> = L"Windows.UI.Xaml.Controls.Maps.MapCustomExperience";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapCustomExperienceChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapElement> = L"Windows.UI.Xaml.Controls.Maps.MapElement";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapElement3D> = L"Windows.UI.Xaml.Controls.Maps.MapElement3D";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapElementClickEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapElementPointerEnteredEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapElementPointerExitedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapElementsLayer> = L"Windows.UI.Xaml.Controls.Maps.MapElementsLayer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapElementsLayerClickEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapElementsLayerContextRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapElementsLayerPointerEnteredEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapElementsLayerPointerExitedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapIcon> = L"Windows.UI.Xaml.Controls.Maps.MapIcon";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapInputEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapItemsControl> = L"Windows.UI.Xaml.Controls.Maps.MapItemsControl";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapLayer> = L"Windows.UI.Xaml.Controls.Maps.MapLayer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapModel3D> = L"Windows.UI.Xaml.Controls.Maps.MapModel3D";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapPolygon> = L"Windows.UI.Xaml.Controls.Maps.MapPolygon";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapPolyline> = L"Windows.UI.Xaml.Controls.Maps.MapPolyline";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapRightTappedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapRouteView> = L"Windows.UI.Xaml.Controls.Maps.MapRouteView";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapScene> = L"Windows.UI.Xaml.Controls.Maps.MapScene";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapStyleSheet> = L"Windows.UI.Xaml.Controls.Maps.MapStyleSheet";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapStyleSheetEntries> = L"Windows.UI.Xaml.Controls.Maps.MapStyleSheetEntries";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapStyleSheetEntryStates> = L"Windows.UI.Xaml.Controls.Maps.MapStyleSheetEntryStates";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapTargetCameraChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest> = L"Windows.UI.Xaml.Controls.Maps.MapTileBitmapRequest";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral> = L"Windows.UI.Xaml.Controls.Maps.MapTileBitmapRequestDeferral";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapTileBitmapRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapTileDataSource> = L"Windows.UI.Xaml.Controls.Maps.MapTileDataSource";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapTileSource> = L"Windows.UI.Xaml.Controls.Maps.MapTileSource";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapTileUriRequest> = L"Windows.UI.Xaml.Controls.Maps.MapTileUriRequest";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral> = L"Windows.UI.Xaml.Controls.Maps.MapTileUriRequestDeferral";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.MapTileUriRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::StreetsideExperience> = L"Windows.UI.Xaml.Controls.Maps.StreetsideExperience";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama> = L"Windows.UI.Xaml.Controls.Maps.StreetsidePanorama";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapAnimationKind> = L"Windows.UI.Xaml.Controls.Maps.MapAnimationKind";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason> = L"Windows.UI.Xaml.Controls.Maps.MapCameraChangeReason";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapColorScheme> = L"Windows.UI.Xaml.Controls.Maps.MapColorScheme";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior> = L"Windows.UI.Xaml.Controls.Maps.MapElementCollisionBehavior";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapInteractionMode> = L"Windows.UI.Xaml.Controls.Maps.MapInteractionMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapLoadingStatus> = L"Windows.UI.Xaml.Controls.Maps.MapLoadingStatus";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapModel3DShadingOption> = L"Windows.UI.Xaml.Controls.Maps.MapModel3DShadingOption";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode> = L"Windows.UI.Xaml.Controls.Maps.MapPanInteractionMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapProjection> = L"Windows.UI.Xaml.Controls.Maps.MapProjection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapStyle> = L"Windows.UI.Xaml.Controls.Maps.MapStyle";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapTileAnimationState> = L"Windows.UI.Xaml.Controls.Maps.MapTileAnimationState";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapTileLayer> = L"Windows.UI.Xaml.Controls.Maps.MapTileLayer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind> = L"Windows.UI.Xaml.Controls.Maps.MapVisibleRegionKind";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapWatermarkMode> = L"Windows.UI.Xaml.Controls.Maps.MapWatermarkMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange> = L"Windows.UI.Xaml.Controls.Maps.MapZoomLevelRange";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource> = L"Windows.UI.Xaml.Controls.Maps.ICustomMapTileDataSource";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory> = L"Windows.UI.Xaml.Controls.Maps.ICustomMapTileDataSourceFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource> = L"Windows.UI.Xaml.Controls.Maps.IHttpMapTileDataSource";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory> = L"Windows.UI.Xaml.Controls.Maps.IHttpMapTileDataSourceFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource> = L"Windows.UI.Xaml.Controls.Maps.ILocalMapTileDataSource";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory> = L"Windows.UI.Xaml.Controls.Maps.ILocalMapTileDataSourceFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapActualCameraChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2> = L"Windows.UI.Xaml.Controls.Maps.IMapActualCameraChangedEventArgs2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapActualCameraChangingEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2> = L"Windows.UI.Xaml.Controls.Maps.IMapActualCameraChangingEventArgs2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapBillboard> = L"Windows.UI.Xaml.Controls.Maps.IMapBillboard";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory> = L"Windows.UI.Xaml.Controls.Maps.IMapBillboardFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapBillboardStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapCamera> = L"Windows.UI.Xaml.Controls.Maps.IMapCamera";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapCameraFactory> = L"Windows.UI.Xaml.Controls.Maps.IMapCameraFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapContextRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControl> = L"Windows.UI.Xaml.Controls.Maps.IMapControl";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControl2> = L"Windows.UI.Xaml.Controls.Maps.IMapControl2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControl3> = L"Windows.UI.Xaml.Controls.Maps.IMapControl3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControl4> = L"Windows.UI.Xaml.Controls.Maps.IMapControl4";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControl5> = L"Windows.UI.Xaml.Controls.Maps.IMapControl5";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControl6> = L"Windows.UI.Xaml.Controls.Maps.IMapControl6";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControl7> = L"Windows.UI.Xaml.Controls.Maps.IMapControl7";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControl8> = L"Windows.UI.Xaml.Controls.Maps.IMapControl8";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapControlBusinessLandmarkClickEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapControlBusinessLandmarkPointerEnteredEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapControlBusinessLandmarkPointerExitedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapControlBusinessLandmarkRightTappedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper> = L"Windows.UI.Xaml.Controls.Maps.IMapControlDataHelper";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2> = L"Windows.UI.Xaml.Controls.Maps.IMapControlDataHelper2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory> = L"Windows.UI.Xaml.Controls.Maps.IMapControlDataHelperFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapControlDataHelperStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlStatics2> = L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlStatics4> = L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics4";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlStatics5> = L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics5";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlStatics6> = L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics6";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlStatics7> = L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics7";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlStatics8> = L"Windows.UI.Xaml.Controls.Maps.IMapControlStatics8";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapControlTransitFeatureClickEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapControlTransitFeaturePointerEnteredEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapControlTransitFeaturePointerExitedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapControlTransitFeatureRightTappedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience> = L"Windows.UI.Xaml.Controls.Maps.IMapCustomExperience";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapCustomExperienceChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory> = L"Windows.UI.Xaml.Controls.Maps.IMapCustomExperienceFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElement> = L"Windows.UI.Xaml.Controls.Maps.IMapElement";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElement2> = L"Windows.UI.Xaml.Controls.Maps.IMapElement2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElement3> = L"Windows.UI.Xaml.Controls.Maps.IMapElement3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElement3D> = L"Windows.UI.Xaml.Controls.Maps.IMapElement3D";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapElement3DStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElement4> = L"Windows.UI.Xaml.Controls.Maps.IMapElement4";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapElementClickEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElementFactory> = L"Windows.UI.Xaml.Controls.Maps.IMapElementFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapElementPointerEnteredEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapElementPointerExitedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElementStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapElementStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElementStatics2> = L"Windows.UI.Xaml.Controls.Maps.IMapElementStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElementStatics3> = L"Windows.UI.Xaml.Controls.Maps.IMapElementStatics3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElementStatics4> = L"Windows.UI.Xaml.Controls.Maps.IMapElementStatics4";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer> = L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerClickEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerContextRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerPointerEnteredEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerPointerExitedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapElementsLayerStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapIcon> = L"Windows.UI.Xaml.Controls.Maps.IMapIcon";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapIcon2> = L"Windows.UI.Xaml.Controls.Maps.IMapIcon2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapIconStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapIconStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapIconStatics2> = L"Windows.UI.Xaml.Controls.Maps.IMapIconStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapInputEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapItemsControl> = L"Windows.UI.Xaml.Controls.Maps.IMapItemsControl";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapItemsControlStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapLayer> = L"Windows.UI.Xaml.Controls.Maps.IMapLayer";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapLayerFactory> = L"Windows.UI.Xaml.Controls.Maps.IMapLayerFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapLayerStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapLayerStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapModel3D> = L"Windows.UI.Xaml.Controls.Maps.IMapModel3D";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory> = L"Windows.UI.Xaml.Controls.Maps.IMapModel3DFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapModel3DStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapPolygon> = L"Windows.UI.Xaml.Controls.Maps.IMapPolygon";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapPolygon2> = L"Windows.UI.Xaml.Controls.Maps.IMapPolygon2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapPolygonStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapPolyline> = L"Windows.UI.Xaml.Controls.Maps.IMapPolyline";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapPolylineStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapRightTappedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapRouteView> = L"Windows.UI.Xaml.Controls.Maps.IMapRouteView";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory> = L"Windows.UI.Xaml.Controls.Maps.IMapRouteViewFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapScene> = L"Windows.UI.Xaml.Controls.Maps.IMapScene";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapSceneStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapSceneStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapStyleSheet> = L"Windows.UI.Xaml.Controls.Maps.IMapStyleSheet";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapStyleSheetEntriesStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapStyleSheetEntryStatesStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapStyleSheetStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapTargetCameraChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2> = L"Windows.UI.Xaml.Controls.Maps.IMapTargetCameraChangedEventArgs2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest> = L"Windows.UI.Xaml.Controls.Maps.IMapTileBitmapRequest";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral> = L"Windows.UI.Xaml.Controls.Maps.IMapTileBitmapRequestDeferral";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapTileBitmapRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs2> = L"Windows.UI.Xaml.Controls.Maps.IMapTileBitmapRequestedEventArgs2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource> = L"Windows.UI.Xaml.Controls.Maps.IMapTileDataSource";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory> = L"Windows.UI.Xaml.Controls.Maps.IMapTileDataSourceFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTileSource> = L"Windows.UI.Xaml.Controls.Maps.IMapTileSource";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTileSource2> = L"Windows.UI.Xaml.Controls.Maps.IMapTileSource2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory> = L"Windows.UI.Xaml.Controls.Maps.IMapTileSourceFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics> = L"Windows.UI.Xaml.Controls.Maps.IMapTileSourceStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2> = L"Windows.UI.Xaml.Controls.Maps.IMapTileSourceStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest> = L"Windows.UI.Xaml.Controls.Maps.IMapTileUriRequest";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral> = L"Windows.UI.Xaml.Controls.Maps.IMapTileUriRequestDeferral";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs> = L"Windows.UI.Xaml.Controls.Maps.IMapTileUriRequestedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs2> = L"Windows.UI.Xaml.Controls.Maps.IMapTileUriRequestedEventArgs2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience> = L"Windows.UI.Xaml.Controls.Maps.IStreetsideExperience";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory> = L"Windows.UI.Xaml.Controls.Maps.IStreetsideExperienceFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama> = L"Windows.UI.Xaml.Controls.Maps.IStreetsidePanorama";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics> = L"Windows.UI.Xaml.Controls.Maps.IStreetsidePanoramaStatics";
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>{ 0x65DA384A,0x2DB1,0x4BE1,{ 0xB1,0x55,0x3D,0x0C,0x9E,0xCF,0x47,0x99 } }; // 65DA384A-2DB1-4BE1-B155-3D0C9ECF4799
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>{ 0xC8477947,0xC955,0x4F22,{ 0x94,0x44,0xA1,0xD8,0xD7,0x44,0xAF,0x11 } }; // C8477947-C955-4F22-9444-A1D8D744AF11
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>{ 0x9D03CB5C,0xFD79,0x4795,{ 0x87,0xBE,0x7E,0x54,0xCA,0x0B,0x37,0xD0 } }; // 9D03CB5C-FD79-4795-87BE-7E54CA0B37D0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>{ 0x53B4B107,0x84DC,0x4291,{ 0x89,0xF8,0x6D,0x0B,0xB6,0x12,0xA0,0x55 } }; // 53B4B107-84DC-4291-89F8-6D0BB612A055
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>{ 0x616257B5,0x9108,0x4F12,{ 0x8B,0xF4,0xBB,0x3C,0x8F,0x62,0x74,0xE5 } }; // 616257B5-9108-4F12-8BF4-BB3C8F6274E5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>{ 0xC5CFE9FC,0x72AC,0x4839,{ 0x8A,0x0D,0x01,0x1F,0x24,0x69,0x3C,0x79 } }; // C5CFE9FC-72AC-4839-8A0D-011F24693C79
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs>{ 0xDAA080DA,0xB7F4,0x422C,{ 0xA6,0x18,0xBB,0xAA,0x7C,0x1D,0x81,0x4C } }; // DAA080DA-B7F4-422C-A618-BBAA7C1D814C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>{ 0x7BA4C7E5,0x10DC,0x455A,{ 0x9D,0x04,0x1D,0x72,0xFB,0x6D,0x9B,0x93 } }; // 7BA4C7E5-10DC-455A-9D04-1D72FB6D9B93
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs>{ 0x6B0DBED6,0x93F7,0x4682,{ 0x8D,0xE5,0xA4,0x7A,0x1C,0xC7,0xA9,0x45 } }; // 6B0DBED6-93F7-4682-8DE5-A47A1CC7A945
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>{ 0xF2867897,0x40AC,0x4E8A,{ 0xA9,0x27,0x51,0x0F,0x38,0x46,0xA4,0x7E } }; // F2867897-40AC-4E8A-A927-510F3846A47E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapBillboard>{ 0x1694259D,0x0AE2,0x4F42,{ 0xA0,0x2E,0x29,0x2C,0xA8,0x35,0xD3,0x9D } }; // 1694259D-0AE2-4F42-A02E-292CA835D39D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>{ 0xBE45A4C5,0x8F09,0x4B86,{ 0xAE,0x28,0x78,0x37,0x40,0xEB,0x8B,0x31 } }; // BE45A4C5-8F09-4B86-AE28-783740EB8B31
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>{ 0xFDF839FE,0xE1F7,0x4FB0,{ 0x88,0x87,0x7D,0xA6,0x8C,0x64,0x73,0x33 } }; // FDF839FE-E1F7-4FB0-8887-7DA68C647333
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapCamera>{ 0x53A6B623,0xC0F8,0x4D8B,{ 0xAD,0x1E,0xA5,0x95,0x98,0xEA,0x84,0x0B } }; // 53A6B623-C0F8-4D8B-AD1E-A59598EA840B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>{ 0xEA3B0F16,0x83AF,0x4ACE,{ 0x8E,0x71,0x10,0xAD,0x9F,0x1E,0x9E,0x7F } }; // EA3B0F16-83AF-4ACE-8E71-10AD9F1E9E7F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs>{ 0xFDD1B423,0xC961,0x4DF2,{ 0xBB,0x57,0x82,0xEE,0x0F,0x0B,0xB5,0x91 } }; // FDD1B423-C961-4DF2-BB57-82EE0F0BB591
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControl>{ 0x42D0B851,0x5256,0x4747,{ 0x9E,0x6C,0x0D,0x11,0xE9,0x66,0x14,0x1E } }; // 42D0B851-5256-4747-9E6C-0D11E966141E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControl2>{ 0xE1FD644D,0x96EC,0x4065,{ 0xB0,0xF0,0x75,0x28,0x1D,0xA3,0x65,0x4D } }; // E1FD644D-96EC-4065-B0F0-75281DA3654D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControl3>{ 0x586328F8,0x8CDD,0x40AE,{ 0x93,0x38,0xAF,0x2A,0x7B,0xE8,0x45,0xE5 } }; // 586328F8-8CDD-40AE-9338-AF2A7BE845E5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControl4>{ 0x068F132A,0x1817,0x466D,{ 0xB7,0xCE,0x41,0x9B,0x3F,0x8E,0x24,0x8B } }; // 068F132A-1817-466D-B7CE-419B3F8E248B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControl5>{ 0xDD9B0FFD,0x7823,0x46A2,{ 0x82,0xC9,0x65,0xDD,0xAC,0x4F,0x36,0x5F } }; // DD9B0FFD-7823-46A2-82C9-65DDAC4F365F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControl6>{ 0xB0DA89A2,0x1041,0x4BEA,{ 0xB8,0x8A,0x12,0xAC,0x9A,0x82,0xE0,0xE2 } }; // B0DA89A2-1041-4BEA-B88A-12AC9A82E0E2
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControl7>{ 0x0D86E453,0x0C1F,0x4F7E,{ 0xAE,0x66,0x4A,0xD0,0xB4,0x98,0x78,0x57 } }; // 0D86E453-0C1F-4F7E-AE66-4AD0B4987857
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControl8>{ 0x009E9C46,0x724D,0x53CA,{ 0x94,0x21,0x7A,0x48,0xFC,0x73,0x15,0x23 } }; // 009E9C46-724D-53CA-9421-7A48FC731523
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs>{ 0x5E464922,0x4A1A,0x4797,{ 0xBE,0xB7,0x5C,0xF7,0x75,0x4C,0xB8,0x67 } }; // 5E464922-4A1A-4797-BEB7-5CF7754CB867
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs>{ 0x5E4081A6,0xEA98,0x4F95,{ 0x8C,0xAF,0x5B,0x42,0x69,0x6F,0xF5,0x04 } }; // 5E4081A6-EA98-4F95-8CAF-5B42696FF504
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs>{ 0x2BB52CAF,0xF24A,0x46D0,{ 0xB4,0x63,0x65,0xF7,0x19,0x73,0x10,0x57 } }; // 2BB52CAF-F24A-46D0-B463-65F719731057
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs>{ 0x59AB8AE7,0xF184,0x4AB1,{ 0xB0,0xB0,0x35,0xC8,0xBF,0x06,0x54,0xB2 } }; // 59AB8AE7-F184-4AB1-B0B0-35C8BF0654B2
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>{ 0x8BB0F09C,0x14AB,0x486C,{ 0x9D,0xE5,0x5A,0x5D,0xEF,0x02,0x05,0xA2 } }; // 8BB0F09C-14AB-486C-9DE5-5A5DEF0205A2
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>{ 0x59CE429E,0x562F,0x4C21,{ 0xA6,0x74,0x0F,0x11,0xDE,0xCF,0x0F,0xB3 } }; // 59CE429E-562F-4C21-A674-0F11DECF0FB3
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory>{ 0x3B70AA8E,0x02EF,0x469C,{ 0xBB,0xAF,0xDC,0x21,0x58,0xD4,0x28,0x9B } }; // 3B70AA8E-02EF-469C-BBAF-DC2158D4289B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperStatics>{ 0x7A6632D6,0xE944,0x4110,{ 0x83,0xCF,0x31,0x4D,0x07,0x22,0xE2,0xE5 } }; // 7A6632D6-E944-4110-83CF-314D0722E2E5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlStatics>{ 0xC2C61795,0x2147,0x4F0A,{ 0x94,0x2A,0x54,0x93,0xA8,0x5D,0xE8,0x07 } }; // C2C61795-2147-4F0A-942A-5493A85DE807
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>{ 0x04852B93,0xB446,0x4D31,{ 0x97,0x52,0x1E,0xC6,0x9A,0x59,0x96,0xAE } }; // 04852B93-B446-4D31-9752-1EC69A5996AE
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>{ 0xFE785D97,0x5D13,0x4FA1,{ 0xBF,0x1D,0x84,0x06,0x17,0x68,0xC1,0x83 } }; // FE785D97-5D13-4FA1-BF1D-84061768C183
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>{ 0x09626F00,0xB7DD,0x4189,{ 0xA7,0xF7,0x83,0x0C,0x41,0x2D,0xEE,0xA3 } }; // 09626F00-B7DD-4189-A7F7-830C412DEEA3
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlStatics6>{ 0x3CCFDD7F,0x24D1,0x40A2,{ 0x83,0x51,0xB3,0x06,0x3A,0x8C,0x95,0xA4 } }; // 3CCFDD7F-24D1-40A2-8351-B3063A8C95A4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlStatics7>{ 0x55F1AC4D,0x72C2,0x46B2,{ 0xB7,0xAE,0x79,0x02,0x60,0xBE,0x64,0x1B } }; // 55F1AC4D-72C2-46B2-B7AE-790260BE641B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlStatics8>{ 0xADB7A7B0,0x0605,0x592C,{ 0xBF,0x9D,0xD1,0x0B,0xDC,0x2B,0xE4,0x7B } }; // ADB7A7B0-0605-592C-BF9D-D10BDC2BE47B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs>{ 0x76179969,0xB765,0x4622,{ 0xB0,0x8A,0x30,0x72,0x74,0x5A,0x45,0x41 } }; // 76179969-B765-4622-B08A-3072745A4541
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs>{ 0x73911A4E,0xEC4F,0x479E,{ 0x94,0xA1,0x36,0xE0,0x81,0xD0,0xD8,0x97 } }; // 73911A4E-EC4F-479E-94A1-36E081D0D897
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs>{ 0x6A11258D,0x448D,0x44E7,{ 0xBC,0x69,0xD1,0x3D,0x49,0x71,0x54,0xE9 } }; // 6A11258D-448D-44E7-BC69-D13D497154E9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs>{ 0xAEA1CC49,0xA729,0x4EAE,{ 0xA5,0x9A,0x3E,0xC9,0xA1,0x25,0xA0,0x28 } }; // AEA1CC49-A729-4EAE-A59A-3EC9A125A028
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience>{ 0x64592866,0x14A3,0x4E5F,{ 0x88,0x83,0x8E,0x9C,0x50,0x0E,0xEE,0xDE } }; // 64592866-14A3-4E5F-8883-8E9C500EEEDE
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs>{ 0xB9E6FB9B,0x8FC1,0x4042,{ 0xAC,0x34,0xA6,0x1B,0x38,0xBB,0x75,0x14 } }; // B9E6FB9B-8FC1-4042-AC34-A61B38BB7514
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>{ 0x7A403FB5,0xA1B1,0x4E7F,{ 0x92,0x1E,0x3E,0x6B,0x8D,0x8E,0xBE,0xD6 } }; // 7A403FB5-A1B1-4E7F-921E-3E6B8D8EBED6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElement>{ 0xD61FC4DF,0xB245,0x47F2,{ 0x9A,0xC2,0x43,0xC0,0x58,0xB1,0xC9,0x03 } }; // D61FC4DF-B245-47F2-9AC2-43C058B1C903
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElement2>{ 0x6619F261,0xFBA6,0x4964,{ 0xA7,0xFF,0xF1,0xAF,0x63,0xAB,0x9C,0xB0 } }; // 6619F261-FBA6-4964-A7FF-F1AF63AB9CB0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElement3>{ 0x13EFBC59,0x45ED,0x48B4,{ 0x93,0xAD,0xE3,0xF7,0x8F,0x8C,0xF2,0x18 } }; // 13EFBC59-45ED-48B4-93AD-E3F78F8CF218
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElement3D>{ 0x827AF8D5,0x3843,0x48E2,{ 0xBD,0x00,0x0F,0x06,0x44,0xFB,0xE6,0xA5 } }; // 827AF8D5-3843-48E2-BD00-0F0644FBE6A5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>{ 0x6128011A,0x450F,0x442A,{ 0xB9,0xD9,0xAA,0x81,0x5C,0x71,0x90,0x7A } }; // 6128011A-450F-442A-B9D9-AA815C71907A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElement4>{ 0x645883B6,0x1FC1,0x4CEB,{ 0x93,0xBD,0xDC,0x2C,0x96,0x00,0x72,0xE9 } }; // 645883B6-1FC1-4CEB-93BD-DC2C960072E9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs>{ 0x40168A11,0xD080,0x4519,{ 0x99,0xA1,0x31,0x49,0xFB,0x89,0x99,0xD0 } }; // 40168A11-D080-4519-99A1-3149FB8999D0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElementFactory>{ 0x4A30D007,0x0BD6,0x47A5,{ 0x86,0x0B,0x7E,0x7C,0xF5,0xF0,0xC5,0x73 } }; // 4A30D007-0BD6-47A5-860B-7E7CF5F0C573
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs>{ 0xAB85DD4E,0x91D7,0x4B31,{ 0x8F,0x0A,0xD3,0x90,0xC7,0xD3,0xA2,0xEF } }; // AB85DD4E-91D7-4B31-8F0A-D390C7D3A2EF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs>{ 0xC1A45AF9,0x60C9,0x4679,{ 0x91,0x19,0x20,0xAB,0xC7,0x5D,0x93,0x1F } }; // C1A45AF9-60C9-4679-9119-20ABC75D931F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElementStatics>{ 0xE8C71CF2,0xBFEF,0x4B49,{ 0x8E,0x99,0x41,0xB5,0xE3,0x78,0x9F,0xD2 } }; // E8C71CF2-BFEF-4B49-8E99-41B5E3789FD2
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>{ 0x9BF72F30,0x80FE,0x4F30,{ 0xBC,0xC1,0xFA,0x89,0x40,0x50,0xF6,0x76 } }; // 9BF72F30-80FE-4F30-BCC1-FA894050F676
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>{ 0xE11EE92F,0x9742,0x49AA,{ 0xAA,0xD8,0x2E,0x46,0x6B,0xFF,0x37,0x96 } }; // E11EE92F-9742-49AA-AAD8-2E466BFF3796
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElementStatics4>{ 0xA4296F0B,0xDFF8,0x467C,{ 0x93,0x15,0x6F,0x6D,0xB9,0x3E,0xE2,0xBA } }; // A4296F0B-DFF8-467C-9315-6F6DB93EE2BA
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>{ 0xDE79689A,0x01EF,0x46F4,{ 0xAC,0x60,0x7C,0x20,0x0B,0x55,0x26,0x10 } }; // DE79689A-01EF-46F4-AC60-7C200B552610
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs>{ 0x2CA7CF66,0xAF1B,0x4C05,{ 0x8C,0x85,0xF7,0x4A,0xE3,0xD4,0x67,0x7F } }; // 2CA7CF66-AF1B-4C05-8C85-F74AE3D4677F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs>{ 0xDA45D0B3,0x7A0E,0x4758,{ 0x80,0x8B,0x3A,0x63,0x76,0x27,0xEB,0x0D } }; // DA45D0B3-7A0E-4758-808B-3A637627EB0D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs>{ 0x757FC032,0x4694,0x4404,{ 0x8C,0x89,0x34,0x8B,0x6B,0x76,0xC5,0xE6 } }; // 757FC032-4694-4404-8C89-348B6B76C5E6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs>{ 0x92F3C6AD,0x03ED,0x4C39,{ 0xAF,0x20,0x2A,0x07,0xEE,0x1C,0xCE,0xA6 } }; // 92F3C6AD-03ED-4C39-AF20-2A07EE1CCEA6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics>{ 0x34005727,0xF509,0x4D28,{ 0x91,0x80,0x91,0x1C,0x03,0x41,0x1D,0x74 } }; // 34005727-F509-4D28-9180-911C03411D74
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapIcon>{ 0xD2096872,0x23D9,0x4A2B,{ 0x8B,0xE0,0x69,0xF3,0xA8,0x54,0x82,0xAB } }; // D2096872-23D9-4A2B-8BE0-69F3A85482AB
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapIcon2>{ 0x611254B9,0xD8AA,0x4BBD,{ 0xA3,0x16,0xBA,0xDF,0x06,0x91,0x1D,0x63 } }; // 611254B9-D8AA-4BBD-A316-BADF06911D63
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapIconStatics>{ 0xDCBC9E56,0x1190,0x4B5D,{ 0x9E,0x56,0xE5,0xB6,0x72,0x4A,0xA3,0x28 } }; // DCBC9E56-1190-4B5D-9E56-E5B6724AA328
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>{ 0xFF4C306A,0xCF76,0x46AB,{ 0xA1,0x2F,0xB6,0x03,0xB9,0x86,0xC6,0x96 } }; // FF4C306A-CF76-46AB-A12F-B603B986C696
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs>{ 0x9FC503A0,0xA8A2,0x4394,{ 0x92,0xE9,0x22,0x47,0x76,0x4F,0x2F,0x49 } }; // 9FC503A0-A8A2-4394-92E9-2247764F2F49
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapItemsControl>{ 0x94C2C4D3,0xB335,0x42C5,{ 0xB6,0x60,0xE6,0xA0,0x7E,0xC3,0xBD,0xDC } }; // 94C2C4D3-B335-42C5-B660-E6A07EC3BDDC
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>{ 0x33A859C7,0x789B,0x425C,{ 0x8A,0x0A,0x32,0x38,0x58,0x96,0xCB,0x4A } }; // 33A859C7-789B-425C-8A0A-32385896CB4A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapLayer>{ 0x6D0FF9C1,0xA14D,0x4F97,{ 0x8F,0x57,0x46,0x71,0x5B,0x57,0x68,0x3A } }; // 6D0FF9C1-A14D-4F97-8F57-46715B57683A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapLayerFactory>{ 0xE02A2207,0xDEE3,0x47C8,{ 0x98,0x25,0xBD,0x02,0x9C,0x57,0x52,0xF7 } }; // E02A2207-DEE3-47C8-9825-BD029C5752F7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>{ 0x9CA4A26B,0x5DB9,0x4F0C,{ 0xBD,0xD5,0xB1,0xBF,0xFD,0xCC,0xE9,0x46 } }; // 9CA4A26B-5DB9-4F0C-BDD5-B1BFFDCCE946
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapModel3D>{ 0xF8C541A1,0xCA27,0x4968,{ 0xA2,0xBF,0x9C,0x20,0xF0,0x6A,0x04,0x68 } }; // F8C541A1-CA27-4968-A2BF-9C20F06A0468
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory>{ 0xDF7F0BCC,0x580A,0x498B,{ 0x93,0x9B,0x01,0x19,0xA9,0xDA,0xDB,0x9E } }; // DF7F0BCC-580A-498B-939B-0119A9DADB9E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics>{ 0x4834A480,0x8E56,0x4B0F,{ 0x87,0x2D,0x7E,0xAD,0x10,0x31,0x87,0xCD } }; // 4834A480-8E56-4B0F-872D-7EAD103187CD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapPolygon>{ 0xABDA2285,0x4926,0x4C3A,{ 0xA5,0xF9,0x19,0xDF,0x7F,0x69,0xDB,0x3D } }; // ABDA2285-4926-4C3A-A5F9-19DF7F69DB3D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapPolygon2>{ 0x96C8A11E,0x636B,0x4018,{ 0x9C,0x2E,0xAC,0xC9,0x12,0x2A,0x01,0xB2 } }; // 96C8A11E-636B-4018-9C2E-ACC9122A01B2
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>{ 0x37F573BE,0x097B,0x424C,{ 0x87,0xCC,0x2E,0xE0,0x42,0xFD,0xA6,0xD2 } }; // 37F573BE-097B-424C-87CC-2EE042FDA6D2
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapPolyline>{ 0xFBAD24A2,0x24DF,0x4A86,{ 0x8F,0xFA,0x0F,0x8F,0x4D,0x9E,0xC1,0x7D } }; // FBAD24A2-24DF-4A86-8FFA-0F8F4D9EC17D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>{ 0x61FDE44B,0x1DDF,0x4303,{ 0xB8,0x09,0xEC,0x87,0xF5,0x8A,0xD0,0x65 } }; // 61FDE44B-1DDF-4303-B809-EC87F58AD065
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs>{ 0x20943171,0x6FE8,0x40A6,{ 0xAD,0x0E,0x29,0x73,0x79,0xB5,0x75,0xA7 } }; // 20943171-6FE8-40A6-AD0E-297379B575A7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapRouteView>{ 0x740EAEC5,0xBACC,0x41E1,{ 0xA6,0x7E,0xDD,0x65,0x13,0x83,0x20,0x49 } }; // 740EAEC5-BACC-41E1-A67E-DD6513832049
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>{ 0xF083ADDF,0x0066,0x4628,{ 0x82,0xFE,0xEA,0x78,0xC2,0x3C,0xEC,0x1E } }; // F083ADDF-0066-4628-82FE-EA78C23CEC1E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapScene>{ 0x8BBA10A9,0x50E7,0x482C,{ 0x97,0x89,0xC6,0x88,0xB1,0x78,0xAC,0x24 } }; // 8BBA10A9-50E7-482C-9789-C688B178AC24
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>{ 0x03E4AD6C,0x86EC,0x44D9,{ 0x95,0x97,0xFB,0x75,0xB7,0xDE,0xBA,0x0A } }; // 03E4AD6C-86EC-44D9-9597-FB75B7DEBA0A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapStyleSheet>{ 0xAE54B2BF,0x8991,0x42ED,{ 0x8D,0x58,0x20,0x47,0x3D,0xEE,0xDE,0x1D } }; // AE54B2BF-8991-42ED-8D58-20473DEEDE1D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>{ 0xC9636345,0xEF1A,0x41A4,{ 0xA7,0x57,0xBD,0x4F,0x43,0xE1,0xE4,0xD1 } }; // C9636345-EF1A-41A4-A757-BD4F43E1E4D1
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>{ 0x23AC5532,0x866D,0x4BFA,{ 0xB4,0x81,0x39,0xBE,0xA1,0xDE,0x35,0x06 } }; // 23AC5532-866D-4BFA-B481-39BEA1DE3506
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>{ 0xABBD00AD,0x0A1C,0x4335,{ 0x82,0xF4,0x61,0xD9,0x36,0xAA,0x19,0x7D } }; // ABBD00AD-0A1C-4335-82F4-61D936AA197D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs>{ 0xDBF00472,0xE953,0x4FA8,{ 0x97,0xD0,0xEA,0x86,0x35,0x90,0x57,0xCF } }; // DBF00472-E953-4FA8-97D0-EA86359057CF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>{ 0x97C0B332,0xF2B6,0x460B,{ 0x8D,0x91,0xAC,0x02,0x0A,0x23,0x83,0xDD } }; // 97C0B332-F2B6-460B-8D91-AC020A2383DD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest>{ 0x46733FBC,0xD89D,0x472B,{ 0xB5,0xF6,0xD7,0x06,0x6B,0x05,0x84,0xF4 } }; // 46733FBC-D89D-472B-B5F6-D7066B0584F4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral>{ 0xFE370542,0xA4AC,0x4EFA,{ 0x96,0x65,0x04,0x90,0xB0,0xCA,0xFD,0xD2 } }; // FE370542-A4AC-4EFA-9665-0490B0CAFDD2
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs>{ 0x337F691D,0x9B02,0x4AA2,{ 0x8B,0x1E,0xCC,0x4D,0x91,0x71,0x9B,0xF3 } }; // 337F691D-9B02-4AA2-8B1E-CC4D91719BF3
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs2>{ 0x0261D114,0x246A,0x5296,{ 0xBC,0x85,0x59,0x0F,0x53,0xAA,0x39,0xC8 } }; // 0261D114-246A-5296-BC85-590F53AA39C8
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource>{ 0xC03D9F5E,0xBE1F,0x4C69,{ 0x99,0x69,0x79,0x46,0x7A,0x51,0x3C,0x38 } }; // C03D9F5E-BE1F-4C69-9969-79467A513C38
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>{ 0xA3920FBD,0xE446,0x4648,{ 0xA7,0x4D,0xFD,0x2C,0x5D,0x55,0x7C,0x06 } }; // A3920FBD-E446-4648-A74D-FD2C5D557C06
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTileSource>{ 0x88A76E4E,0x2FDF,0x4567,{ 0x92,0x55,0x11,0x00,0x51,0x9C,0x8D,0x62 } }; // 88A76E4E-2FDF-4567-9255-1100519C8D62
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTileSource2>{ 0x8E65EBBD,0x4095,0x5C15,{ 0x99,0xF1,0x12,0x60,0xB4,0xE8,0xB0,0xA9 } }; // 8E65EBBD-4095-5C15-99F1-1260B4E8B0A9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>{ 0xCD7F811F,0x77FA,0x482B,{ 0x9D,0x34,0x71,0xD3,0x1D,0x46,0x5C,0x48 } }; // CD7F811F-77FA-482B-9D34-71D31D465C48
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>{ 0x93FCC93C,0x7035,0x4603,{ 0x99,0xB1,0xE6,0x59,0x92,0x1B,0x60,0x93 } }; // 93FCC93C-7035-4603-99B1-E659921B6093
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2>{ 0x75CDD47E,0x669C,0x50FD,{ 0xAD,0x85,0x5E,0xA5,0x17,0x4C,0xF5,0x9B } }; // 75CDD47E-669C-50FD-AD85-5EA5174CF59B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest>{ 0x17402335,0x3127,0x45B8,{ 0x87,0xA7,0x99,0xF8,0x7D,0x4E,0x27,0x45 } }; // 17402335-3127-45B8-87A7-99F87D4E2745
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral>{ 0xC117ADE0,0xBF3E,0x4C51,{ 0x8F,0xAA,0x4B,0x59,0x3C,0xF6,0x8E,0xB2 } }; // C117ADE0-BF3E-4C51-8FAA-4B593CF68EB2
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs>{ 0xD2147B43,0x1BBF,0x4B98,{ 0x8D,0xD3,0xB7,0x83,0x4E,0x40,0x7E,0x0D } }; // D2147B43-1BBF-4B98-8DD3-B7834E407E0D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs2>{ 0x2302185D,0x33B5,0x5A55,{ 0x92,0xF5,0x74,0xA8,0x6A,0x22,0xEF,0xA6 } }; // 2302185D-33B5-5A55-92F5-74A86A22EFA6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience>{ 0xA558AEC9,0xE30C,0x46C8,{ 0x81,0x16,0x48,0x46,0x91,0x67,0x55,0x58 } }; // A558AEC9-E30C-46C8-8116-484691675558
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>{ 0x7A5BCF3C,0x649E,0x4342,{ 0x99,0x95,0x68,0xA6,0xCF,0x59,0x61,0xA7 } }; // 7A5BCF3C-649E-4342-9995-68A6CF5961A7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama>{ 0x6FE00FD8,0xAD60,0x4664,{ 0xB5,0x39,0xB1,0x06,0x9F,0x16,0xC5,0xAF } }; // 6FE00FD8-AD60-4664-B539-B1069F16C5AF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>{ 0xD3B47F69,0x54B3,0x4EC5,{ 0xB2,0xA0,0x4F,0x82,0x04,0x57,0x65,0x07 } }; // D3B47F69-54B3-4EC5-B2A0-4F8204576507
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource>{ using type = Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource>{ using type = Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource>{ using type = Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapBillboard>{ using type = Windows::UI::Xaml::Controls::Maps::IMapBillboard; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapCamera>{ using type = Windows::UI::Xaml::Controls::Maps::IMapCamera; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControl>{ using type = Windows::UI::Xaml::Controls::Maps::IMapControl; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlDataHelper>{ using type = Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapCustomExperience>{ using type = Windows::UI::Xaml::Controls::Maps::IMapCustomExperience; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElement>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElement; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElement3D>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElement3D; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementsLayer>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElementsLayer; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapIcon>{ using type = Windows::UI::Xaml::Controls::Maps::IMapIcon; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapInputEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapItemsControl>{ using type = Windows::UI::Xaml::Controls::Maps::IMapItemsControl; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapLayer>{ using type = Windows::UI::Xaml::Controls::Maps::IMapLayer; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapModel3D>{ using type = Windows::UI::Xaml::Controls::Maps::IMapModel3D; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapPolygon>{ using type = Windows::UI::Xaml::Controls::Maps::IMapPolygon; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapPolyline>{ using type = Windows::UI::Xaml::Controls::Maps::IMapPolyline; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapRouteView>{ using type = Windows::UI::Xaml::Controls::Maps::IMapRouteView; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapScene>{ using type = Windows::UI::Xaml::Controls::Maps::IMapScene; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapStyleSheet>{ using type = Windows::UI::Xaml::Controls::Maps::IMapStyleSheet; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileDataSource>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTileDataSource; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileSource>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTileSource; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileUriRequest>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs>{ using type = Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::StreetsideExperience>{ using type = Windows::UI::Xaml::Controls::Maps::IStreetsideExperience; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama>{ using type = Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama; };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_BitmapRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BitmapRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UriFormatString(void**) noexcept = 0;
            virtual int32_t __stdcall put_UriFormatString(void*) noexcept = 0;
            virtual int32_t __stdcall get_AdditionalRequestHeaders(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowCaching(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowCaching(bool) noexcept = 0;
            virtual int32_t __stdcall add_UriRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UriRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithUriFormatString(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UriFormatString(void**) noexcept = 0;
            virtual int32_t __stdcall put_UriFormatString(void*) noexcept = 0;
            virtual int32_t __stdcall add_UriRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UriRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithUriFormatString(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Camera(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeReason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Camera(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeReason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapBillboard>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall put_Location(void*) noexcept = 0;
            virtual int32_t __stdcall get_NormalizedAnchorPoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_NormalizedAnchorPoint(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_Image(void**) noexcept = 0;
            virtual int32_t __stdcall put_Image(void*) noexcept = 0;
            virtual int32_t __stdcall get_CollisionBehaviorDesired(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CollisionBehaviorDesired(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ReferenceCamera(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceFromCamera(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_NormalizedAnchorPointProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CollisionBehaviorDesiredProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapCamera>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall put_Location(void*) noexcept = 0;
            virtual int32_t __stdcall get_Heading(double*) noexcept = 0;
            virtual int32_t __stdcall put_Heading(double) noexcept = 0;
            virtual int32_t __stdcall get_Pitch(double*) noexcept = 0;
            virtual int32_t __stdcall put_Pitch(double) noexcept = 0;
            virtual int32_t __stdcall get_Roll(double*) noexcept = 0;
            virtual int32_t __stdcall put_Roll(double) noexcept = 0;
            virtual int32_t __stdcall get_FieldOfView(double*) noexcept = 0;
            virtual int32_t __stdcall put_FieldOfView(double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithLocation(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithLocationAndHeading(void*, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithLocationHeadingAndPitch(void*, double, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(void*, double, double, double, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElements(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Center(void**) noexcept = 0;
            virtual int32_t __stdcall put_Center(void*) noexcept = 0;
            virtual int32_t __stdcall get_Children(void**) noexcept = 0;
            virtual int32_t __stdcall get_ColorScheme(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ColorScheme(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_DesiredPitch(double*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredPitch(double) noexcept = 0;
            virtual int32_t __stdcall get_Heading(double*) noexcept = 0;
            virtual int32_t __stdcall put_Heading(double) noexcept = 0;
            virtual int32_t __stdcall get_LandmarksVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_LandmarksVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_LoadingStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MapServiceToken(void**) noexcept = 0;
            virtual int32_t __stdcall put_MapServiceToken(void*) noexcept = 0;
            virtual int32_t __stdcall get_MaxZoomLevel(double*) noexcept = 0;
            virtual int32_t __stdcall get_MinZoomLevel(double*) noexcept = 0;
            virtual int32_t __stdcall get_PedestrianFeaturesVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_PedestrianFeaturesVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_Pitch(double*) noexcept = 0;
            virtual int32_t __stdcall get_Style(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Style(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TrafficFlowVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_TrafficFlowVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_TransformOrigin(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_TransformOrigin(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_WatermarkMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_WatermarkMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ZoomLevel(double*) noexcept = 0;
            virtual int32_t __stdcall put_ZoomLevel(double) noexcept = 0;
            virtual int32_t __stdcall get_MapElements(void**) noexcept = 0;
            virtual int32_t __stdcall get_Routes(void**) noexcept = 0;
            virtual int32_t __stdcall get_TileSources(void**) noexcept = 0;
            virtual int32_t __stdcall add_CenterChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CenterChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_HeadingChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HeadingChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_LoadingStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_LoadingStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MapDoubleTapped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapDoubleTapped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MapHolding(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapHolding(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MapTapped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapTapped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PitchChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PitchChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TransformOriginChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TransformOriginChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ZoomLevelChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ZoomLevelChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall FindMapElementsAtOffset(Windows::Foundation::Point, void**) noexcept = 0;
            virtual int32_t __stdcall GetLocationFromOffset(Windows::Foundation::Point, void**) noexcept = 0;
            virtual int32_t __stdcall GetOffsetFromLocation(void*, Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall IsLocationInView(void*, bool*) noexcept = 0;
            virtual int32_t __stdcall TrySetViewBoundsAsync(void*, void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetViewWithCenterAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetViewWithCenterAndZoomAsync(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetViewWithCenterZoomHeadingAndPitchAsync(void*, void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetViewWithCenterZoomHeadingPitchAndAnimationAsync(void*, void*, void*, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BusinessLandmarksVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_BusinessLandmarksVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_TransitFeaturesVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_TransitFeaturesVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_PanInteractionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_PanInteractionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_RotateInteractionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_RotateInteractionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TiltInteractionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TiltInteractionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ZoomInteractionMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ZoomInteractionMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Is3DSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsStreetsideSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Scene(void**) noexcept = 0;
            virtual int32_t __stdcall put_Scene(void*) noexcept = 0;
            virtual int32_t __stdcall get_ActualCamera(void**) noexcept = 0;
            virtual int32_t __stdcall get_TargetCamera(void**) noexcept = 0;
            virtual int32_t __stdcall get_CustomExperience(void**) noexcept = 0;
            virtual int32_t __stdcall put_CustomExperience(void*) noexcept = 0;
            virtual int32_t __stdcall add_MapElementClick(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapElementClick(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MapElementPointerEntered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapElementPointerEntered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MapElementPointerExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapElementPointerExited(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ActualCameraChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ActualCameraChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_ActualCameraChanging(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ActualCameraChanging(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TargetCameraChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TargetCameraChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_CustomExperienceChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CustomExperienceChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall StartContinuousRotate(double) noexcept = 0;
            virtual int32_t __stdcall StopContinuousRotate() noexcept = 0;
            virtual int32_t __stdcall StartContinuousTilt(double) noexcept = 0;
            virtual int32_t __stdcall StopContinuousTilt() noexcept = 0;
            virtual int32_t __stdcall StartContinuousZoom(double) noexcept = 0;
            virtual int32_t __stdcall StopContinuousZoom() noexcept = 0;
            virtual int32_t __stdcall TryRotateAsync(double, void**) noexcept = 0;
            virtual int32_t __stdcall TryRotateToAsync(double, void**) noexcept = 0;
            virtual int32_t __stdcall TryTiltAsync(double, void**) noexcept = 0;
            virtual int32_t __stdcall TryTiltToAsync(double, void**) noexcept = 0;
            virtual int32_t __stdcall TryZoomInAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryZoomOutAsync(void**) noexcept = 0;
            virtual int32_t __stdcall TryZoomToAsync(double, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetSceneAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TrySetSceneWithAnimationAsync(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_MapRightTapped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapRightTapped(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BusinessLandmarksEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_BusinessLandmarksEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_TransitFeaturesEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_TransitFeaturesEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall GetVisibleRegion(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapProjection(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MapProjection(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_StyleSheet(void**) noexcept = 0;
            virtual int32_t __stdcall put_StyleSheet(void*) noexcept = 0;
            virtual int32_t __stdcall get_ViewPadding(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_ViewPadding(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall add_MapContextRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapContextRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall FindMapElementsAtOffsetWithRadius(Windows::Foundation::Point, double, void**) noexcept = 0;
            virtual int32_t __stdcall GetLocationFromOffsetWithReferenceSystem(Windows::Foundation::Point, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall StartContinuousPan(double, double) noexcept = 0;
            virtual int32_t __stdcall StopContinuousPan() noexcept = 0;
            virtual int32_t __stdcall TryPanAsync(double, double, void**) noexcept = 0;
            virtual int32_t __stdcall TryPanToAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Layers(void**) noexcept = 0;
            virtual int32_t __stdcall put_Layers(void*) noexcept = 0;
            virtual int32_t __stdcall TryGetLocationFromOffset(Windows::Foundation::Point, void**, bool*) noexcept = 0;
            virtual int32_t __stdcall TryGetLocationFromOffsetWithReferenceSystem(Windows::Foundation::Point, int32_t, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Region(void**) noexcept = 0;
            virtual int32_t __stdcall put_Region(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControl8>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanTiltDown(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanTiltUp(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanZoomIn(bool*) noexcept = 0;
            virtual int32_t __stdcall get_CanZoomOut(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalLocations(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalLocations(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalLocations(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocalLocations(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_BusinessLandmarkClick(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BusinessLandmarkClick(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TransitFeatureClick(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TransitFeatureClick(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BusinessLandmarkRightTapped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BusinessLandmarkRightTapped(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TransitFeatureRightTapped(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TransitFeatureRightTapped(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_BusinessLandmarkPointerEntered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BusinessLandmarkPointerEntered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TransitFeaturePointerEntered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TransitFeaturePointerEntered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BusinessLandmarkPointerExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BusinessLandmarkPointerExited(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TransitFeaturePointerExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TransitFeaturePointerExited(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMapControl(bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CenterProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChildrenProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ColorSchemeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DesiredPitchProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_HeadingProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LandmarksVisibleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LoadingStatusProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapServiceTokenProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PedestrianFeaturesVisibleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PitchProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StyleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TrafficFlowVisibleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransformOriginProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_WatermarkModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZoomLevelProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElementsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RoutesProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TileSourcesProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LocationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetLocation(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetLocation(void*, void*) noexcept = 0;
            virtual int32_t __stdcall get_NormalizedAnchorPointProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetNormalizedAnchorPoint(void*, Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall SetNormalizedAnchorPoint(void*, Windows::Foundation::Point) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BusinessLandmarksVisibleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitFeaturesVisibleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PanInteractionModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RotateInteractionModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TiltInteractionModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZoomInteractionModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_Is3DSupportedProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsStreetsideSupportedProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SceneProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BusinessLandmarksEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitFeaturesEnabledProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapProjectionProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StyleSheetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ViewPaddingProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LayersProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics7>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RegionProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlStatics8>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanTiltDownProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanTiltUpProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanZoomInProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CanZoomOutProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitProperties(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ZIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ZIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Visible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Visible(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapTabIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MapTabIndex(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapStyleSheetEntry(void**) noexcept = 0;
            virtual int32_t __stdcall put_MapStyleSheetEntry(void*) noexcept = 0;
            virtual int32_t __stdcall get_MapStyleSheetEntryState(void**) noexcept = 0;
            virtual int32_t __stdcall put_MapStyleSheetEntryState(void*) noexcept = 0;
            virtual int32_t __stdcall get_Tag(void**) noexcept = 0;
            virtual int32_t __stdcall put_Tag(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement3D>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall put_Location(void*) noexcept = 0;
            virtual int32_t __stdcall get_Model(void**) noexcept = 0;
            virtual int32_t __stdcall put_Model(void*) noexcept = 0;
            virtual int32_t __stdcall get_Heading(double*) noexcept = 0;
            virtual int32_t __stdcall put_Heading(double) noexcept = 0;
            virtual int32_t __stdcall get_Pitch(double*) noexcept = 0;
            virtual int32_t __stdcall put_Pitch(double) noexcept = 0;
            virtual int32_t __stdcall get_Roll(double*) noexcept = 0;
            virtual int32_t __stdcall put_Roll(double) noexcept = 0;
            virtual int32_t __stdcall get_Scale(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall put_Scale(Windows::Foundation::Numerics::float3) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_HeadingProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PitchProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RollProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ScaleProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElement4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElements(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElement(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElement(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ZIndexProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_VisibleProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapTabIndexProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapStyleSheetEntryProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapStyleSheetEntryStateProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TagProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsEnabledProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapElements(void**) noexcept = 0;
            virtual int32_t __stdcall put_MapElements(void*) noexcept = 0;
            virtual int32_t __stdcall add_MapElementClick(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapElementClick(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MapElementPointerEntered(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapElementPointerEntered(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MapElementPointerExited(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapElementPointerExited(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_MapContextRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_MapContextRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElements(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElements(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElement(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall get_MapElement(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapElementsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapIcon>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
            virtual int32_t __stdcall put_Location(void*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_NormalizedAnchorPoint(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall put_NormalizedAnchorPoint(Windows::Foundation::Point) noexcept = 0;
            virtual int32_t __stdcall get_Image(void**) noexcept = 0;
            virtual int32_t __stdcall put_Image(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapIcon2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CollisionBehaviorDesired(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CollisionBehaviorDesired(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapIconStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LocationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TitleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_NormalizedAnchorPointProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CollisionBehaviorDesiredProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapItemsControl>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ItemsSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_ItemsSource(void*) noexcept = 0;
            virtual int32_t __stdcall get_Items(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemTemplate(void**) noexcept = 0;
            virtual int32_t __stdcall put_ItemTemplate(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ItemsSourceProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemTemplateProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapLayer>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapTabIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MapTabIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Visible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Visible(bool) noexcept = 0;
            virtual int32_t __stdcall get_ZIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ZIndex(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapLayerFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MapTabIndexProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_VisibleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZIndexProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapModel3D>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFrom3MFAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFrom3MFWithShadingOptionAsync(void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapPolygon>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall put_Path(void*) noexcept = 0;
            virtual int32_t __stdcall get_StrokeColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_StrokeThickness(double*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeThickness(double) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeDashed(bool) noexcept = 0;
            virtual int32_t __stdcall get_FillColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_FillColor(struct struct_Windows_UI_Color) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapPolygon2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Paths(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PathProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeThicknessProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashedProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapPolyline>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Path(void**) noexcept = 0;
            virtual int32_t __stdcall put_Path(void*) noexcept = 0;
            virtual int32_t __stdcall get_StrokeColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_StrokeThickness(double*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeThickness(double) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashed(bool*) noexcept = 0;
            virtual int32_t __stdcall put_StrokeDashed(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PathProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_StrokeDashedProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapRouteView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RouteColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_RouteColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_OutlineColor(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_OutlineColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_Route(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithMapRoute(void*, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapScene>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetCamera(void**) noexcept = 0;
            virtual int32_t __stdcall add_TargetCameraChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TargetCameraChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromBoundingBox(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromBoundingBoxWithHeadingAndPitch(void*, double, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromCamera(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromLocation(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromLocationWithHeadingAndPitch(void*, double, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromLocationAndRadius(void*, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromLocationAndRadiusWithHeadingAndPitch(void*, double, double, double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromLocations(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromLocationsWithHeadingAndPitch(void*, double, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapStyleSheet>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Area(void**) noexcept = 0;
            virtual int32_t __stdcall get_Airport(void**) noexcept = 0;
            virtual int32_t __stdcall get_Cemetery(void**) noexcept = 0;
            virtual int32_t __stdcall get_Continent(void**) noexcept = 0;
            virtual int32_t __stdcall get_Education(void**) noexcept = 0;
            virtual int32_t __stdcall get_IndigenousPeoplesReserve(void**) noexcept = 0;
            virtual int32_t __stdcall get_Island(void**) noexcept = 0;
            virtual int32_t __stdcall get_Medical(void**) noexcept = 0;
            virtual int32_t __stdcall get_Military(void**) noexcept = 0;
            virtual int32_t __stdcall get_Nautical(void**) noexcept = 0;
            virtual int32_t __stdcall get_Neighborhood(void**) noexcept = 0;
            virtual int32_t __stdcall get_Runway(void**) noexcept = 0;
            virtual int32_t __stdcall get_Sand(void**) noexcept = 0;
            virtual int32_t __stdcall get_ShoppingCenter(void**) noexcept = 0;
            virtual int32_t __stdcall get_Stadium(void**) noexcept = 0;
            virtual int32_t __stdcall get_Vegetation(void**) noexcept = 0;
            virtual int32_t __stdcall get_Forest(void**) noexcept = 0;
            virtual int32_t __stdcall get_GolfCourse(void**) noexcept = 0;
            virtual int32_t __stdcall get_Park(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlayingField(void**) noexcept = 0;
            virtual int32_t __stdcall get_Reserve(void**) noexcept = 0;
            virtual int32_t __stdcall get_Point(void**) noexcept = 0;
            virtual int32_t __stdcall get_NaturalPoint(void**) noexcept = 0;
            virtual int32_t __stdcall get_Peak(void**) noexcept = 0;
            virtual int32_t __stdcall get_VolcanicPeak(void**) noexcept = 0;
            virtual int32_t __stdcall get_WaterPoint(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointOfInterest(void**) noexcept = 0;
            virtual int32_t __stdcall get_Business(void**) noexcept = 0;
            virtual int32_t __stdcall get_FoodPoint(void**) noexcept = 0;
            virtual int32_t __stdcall get_PopulatedPlace(void**) noexcept = 0;
            virtual int32_t __stdcall get_Capital(void**) noexcept = 0;
            virtual int32_t __stdcall get_AdminDistrictCapital(void**) noexcept = 0;
            virtual int32_t __stdcall get_CountryRegionCapital(void**) noexcept = 0;
            virtual int32_t __stdcall get_RoadShield(void**) noexcept = 0;
            virtual int32_t __stdcall get_RoadExit(void**) noexcept = 0;
            virtual int32_t __stdcall get_Transit(void**) noexcept = 0;
            virtual int32_t __stdcall get_Political(void**) noexcept = 0;
            virtual int32_t __stdcall get_CountryRegion(void**) noexcept = 0;
            virtual int32_t __stdcall get_AdminDistrict(void**) noexcept = 0;
            virtual int32_t __stdcall get_District(void**) noexcept = 0;
            virtual int32_t __stdcall get_Structure(void**) noexcept = 0;
            virtual int32_t __stdcall get_Building(void**) noexcept = 0;
            virtual int32_t __stdcall get_EducationBuilding(void**) noexcept = 0;
            virtual int32_t __stdcall get_MedicalBuilding(void**) noexcept = 0;
            virtual int32_t __stdcall get_TransitBuilding(void**) noexcept = 0;
            virtual int32_t __stdcall get_Transportation(void**) noexcept = 0;
            virtual int32_t __stdcall get_Road(void**) noexcept = 0;
            virtual int32_t __stdcall get_ControlledAccessHighway(void**) noexcept = 0;
            virtual int32_t __stdcall get_HighSpeedRamp(void**) noexcept = 0;
            virtual int32_t __stdcall get_Highway(void**) noexcept = 0;
            virtual int32_t __stdcall get_MajorRoad(void**) noexcept = 0;
            virtual int32_t __stdcall get_ArterialRoad(void**) noexcept = 0;
            virtual int32_t __stdcall get_Street(void**) noexcept = 0;
            virtual int32_t __stdcall get_Ramp(void**) noexcept = 0;
            virtual int32_t __stdcall get_UnpavedStreet(void**) noexcept = 0;
            virtual int32_t __stdcall get_TollRoad(void**) noexcept = 0;
            virtual int32_t __stdcall get_Railway(void**) noexcept = 0;
            virtual int32_t __stdcall get_Trail(void**) noexcept = 0;
            virtual int32_t __stdcall get_WaterRoute(void**) noexcept = 0;
            virtual int32_t __stdcall get_Water(void**) noexcept = 0;
            virtual int32_t __stdcall get_River(void**) noexcept = 0;
            virtual int32_t __stdcall get_RouteLine(void**) noexcept = 0;
            virtual int32_t __stdcall get_WalkingRoute(void**) noexcept = 0;
            virtual int32_t __stdcall get_DrivingRoute(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Disabled(void**) noexcept = 0;
            virtual int32_t __stdcall get_Hover(void**) noexcept = 0;
            virtual int32_t __stdcall get_Selected(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Aerial(void**) noexcept = 0;
            virtual int32_t __stdcall AerialWithOverlay(void**) noexcept = 0;
            virtual int32_t __stdcall RoadLight(void**) noexcept = 0;
            virtual int32_t __stdcall RoadDark(void**) noexcept = 0;
            virtual int32_t __stdcall RoadHighContrastLight(void**) noexcept = 0;
            virtual int32_t __stdcall RoadHighContrastDark(void**) noexcept = 0;
            virtual int32_t __stdcall Combine(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ParseFromJson(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParseFromJson(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Camera(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChangeReason(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PixelData(void**) noexcept = 0;
            virtual int32_t __stdcall put_PixelData(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_X(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Y(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ZoomLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameIndex(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileSource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DataSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_DataSource(void*) noexcept = 0;
            virtual int32_t __stdcall get_Layer(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Layer(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ZoomLevelRange(struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange*) noexcept = 0;
            virtual int32_t __stdcall put_ZoomLevelRange(struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange) noexcept = 0;
            virtual int32_t __stdcall get_Bounds(void**) noexcept = 0;
            virtual int32_t __stdcall put_Bounds(void*) noexcept = 0;
            virtual int32_t __stdcall get_AllowOverstretch(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowOverstretch(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsFadingEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsFadingEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsTransparencyEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsTransparencyEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsRetryEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsRetryEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ZIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ZIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_TilePixelSize(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TilePixelSize(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Visible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Visible(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileSource2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AnimationState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AutoPlay(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AutoPlay(bool) noexcept = 0;
            virtual int32_t __stdcall get_FrameCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_FrameCount(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_FrameDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall put_FrameDuration(int64_t) noexcept = 0;
            virtual int32_t __stdcall Pause() noexcept = 0;
            virtual int32_t __stdcall Play() noexcept = 0;
            virtual int32_t __stdcall Stop() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithDataSource(void*, void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithDataSourceAndZoomRange(void*, struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange, void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithDataSourceZoomRangeAndBounds(void*, struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange, void*, void*, void**, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(void*, struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange, void*, int32_t, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DataSourceProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LayerProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZoomLevelRangeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_BoundsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowOverstretchProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsFadingEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsTransparencyEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsRetryEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ZIndexProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_TilePixelSizeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_VisibleProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AnimationStateProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AutoPlayProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FrameCountProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FrameDurationProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall put_Uri(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_X(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Y(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ZoomLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Request(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FrameIndex(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AddressTextVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AddressTextVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_CursorVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CursorVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_OverviewMapVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_OverviewMapVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_StreetLabelsVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_StreetLabelsVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_ExitButtonVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ExitButtonVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_ZoomButtonsVisible(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ZoomButtonsVisible(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithPanorama(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(void*, double, double, double, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Location(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FindNearbyWithLocationAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FindNearbyWithLocationAndRadiusAsync(void*, double, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSource
    {
        WINRT_IMPL_AUTO(winrt::event_token) BitmapRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> const& handler) const;
        using BitmapRequested_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>::remove_BitmapRequested>;
        [[nodiscard]] BitmapRequested_revoker BitmapRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) BitmapRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSourceFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::CustomMapTileDataSource) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::ICustomMapTileDataSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_ICustomMapTileDataSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UriFormatString() const;
        WINRT_IMPL_AUTO(void) UriFormatString(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMap<hstring, hstring>) AdditionalRequestHeaders() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowCaching() const;
        WINRT_IMPL_AUTO(void) AllowCaching(bool value) const;
        WINRT_IMPL_AUTO(winrt::event_token) UriRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& handler) const;
        using UriRequested_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>::remove_UriRequested>;
        [[nodiscard]] UriRequested_revoker UriRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) UriRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSourceFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::HttpMapTileDataSource) CreateInstanceWithUriFormatString(param::hstring const& uriFormatString, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IHttpMapTileDataSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IHttpMapTileDataSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UriFormatString() const;
        WINRT_IMPL_AUTO(void) UriFormatString(param::hstring const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) UriRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& handler) const;
        using UriRequested_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>::remove_UriRequested>;
        [[nodiscard]] UriRequested_revoker UriRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource, Windows::UI::Xaml::Controls::Maps::MapTileUriRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) UriRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSourceFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::LocalMapTileDataSource) CreateInstanceWithUriFormatString(param::hstring const& uriFormatString, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::ILocalMapTileDataSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_ILocalMapTileDataSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapCamera) Camera() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason) ChangeReason() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapCamera) Camera() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason) ChangeReason() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapActualCameraChangingEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapActualCameraChangingEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
        WINRT_IMPL_AUTO(void) Location(Windows::Devices::Geolocation::Geopoint const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) NormalizedAnchorPoint() const;
        WINRT_IMPL_AUTO(void) NormalizedAnchorPoint(Windows::Foundation::Point const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamReference) Image() const;
        WINRT_IMPL_AUTO(void) Image(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior) CollisionBehaviorDesired() const;
        WINRT_IMPL_AUTO(void) CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapCamera) ReferenceCamera() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapBillboard>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapBillboard<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapBillboard) CreateInstanceFromCamera(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapBillboardFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) LocationProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) NormalizedAnchorPointProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CollisionBehaviorDesiredProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapBillboardStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapBillboardStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapCamera
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
        WINRT_IMPL_AUTO(void) Location(Windows::Devices::Geolocation::Geopoint const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Heading() const;
        WINRT_IMPL_AUTO(void) Heading(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Pitch() const;
        WINRT_IMPL_AUTO(void) Pitch(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Roll() const;
        WINRT_IMPL_AUTO(void) Roll(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) FieldOfView() const;
        WINRT_IMPL_AUTO(void) FieldOfView(double value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapCamera>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapCamera<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapCameraFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapCamera) CreateInstanceWithLocation(Windows::Devices::Geolocation::Geopoint const& location) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapCamera) CreateInstanceWithLocationAndHeading(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapCamera) CreateInstanceWithLocationHeadingAndPitch(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapCamera) CreateInstanceWithLocationHeadingPitchRollAndFieldOfView(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees, double rollInDegrees, double fieldOfViewInDegrees) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapCameraFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapCameraFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapContextRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement>) MapElements() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapContextRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapContextRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Center() const;
        WINRT_IMPL_AUTO(void) Center(Windows::Devices::Geolocation::Geopoint const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>) Children() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapColorScheme) ColorScheme() const;
        WINRT_IMPL_AUTO(void) ColorScheme(Windows::UI::Xaml::Controls::Maps::MapColorScheme const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) DesiredPitch() const;
        WINRT_IMPL_AUTO(void) DesiredPitch(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Heading() const;
        WINRT_IMPL_AUTO(void) Heading(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) LandmarksVisible() const;
        WINRT_IMPL_AUTO(void) LandmarksVisible(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapLoadingStatus) LoadingStatus() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MapServiceToken() const;
        WINRT_IMPL_AUTO(void) MapServiceToken(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) MaxZoomLevel() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) MinZoomLevel() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) PedestrianFeaturesVisible() const;
        WINRT_IMPL_AUTO(void) PedestrianFeaturesVisible(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Pitch() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapStyle) Style() const;
        WINRT_IMPL_AUTO(void) Style(Windows::UI::Xaml::Controls::Maps::MapStyle const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) TrafficFlowVisible() const;
        WINRT_IMPL_AUTO(void) TrafficFlowVisible(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) TransformOrigin() const;
        WINRT_IMPL_AUTO(void) TransformOrigin(Windows::Foundation::Point const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapWatermarkMode) WatermarkMode() const;
        WINRT_IMPL_AUTO(void) WatermarkMode(Windows::UI::Xaml::Controls::Maps::MapWatermarkMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ZoomLevel() const;
        WINRT_IMPL_AUTO(void) ZoomLevel(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement>) MapElements() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapRouteView>) Routes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapTileSource>) TileSources() const;
        WINRT_IMPL_AUTO(winrt::event_token) CenterChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        using CenterChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_CenterChanged>;
        [[nodiscard]] CenterChanged_revoker CenterChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) CenterChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) HeadingChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        using HeadingChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_HeadingChanged>;
        [[nodiscard]] HeadingChanged_revoker HeadingChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) HeadingChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) LoadingStatusChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        using LoadingStatusChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_LoadingStatusChanged>;
        [[nodiscard]] LoadingStatusChanged_revoker LoadingStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) LoadingStatusChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) MapDoubleTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const;
        using MapDoubleTapped_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_MapDoubleTapped>;
        [[nodiscard]] MapDoubleTapped_revoker MapDoubleTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) MapDoubleTapped(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) MapHolding(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const;
        using MapHolding_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_MapHolding>;
        [[nodiscard]] MapHolding_revoker MapHolding(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) MapHolding(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) MapTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const;
        using MapTapped_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_MapTapped>;
        [[nodiscard]] MapTapped_revoker MapTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapInputEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) MapTapped(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) PitchChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        using PitchChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_PitchChanged>;
        [[nodiscard]] PitchChanged_revoker PitchChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) PitchChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) TransformOriginChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        using TransformOriginChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_TransformOriginChanged>;
        [[nodiscard]] TransformOriginChanged_revoker TransformOriginChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) TransformOriginChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ZoomLevelChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        using ZoomLevelChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl>::remove_ZoomLevelChanged>;
        [[nodiscard]] ZoomLevelChanged_revoker ZoomLevelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ZoomLevelChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement>) FindMapElementsAtOffset(Windows::Foundation::Point const& offset) const;
        WINRT_IMPL_AUTO(void) GetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::Geopoint& location) const;
        WINRT_IMPL_AUTO(void) GetOffsetFromLocation(Windows::Devices::Geolocation::Geopoint const& location, Windows::Foundation::Point& offset) const;
        WINRT_IMPL_AUTO(void) IsLocationInView(Windows::Devices::Geolocation::Geopoint const& location, bool& isInView) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TrySetViewBoundsAsync(Windows::Devices::Geolocation::GeoboundingBox const& bounds, Windows::Foundation::IReference<Windows::UI::Xaml::Thickness> const& margin, Windows::UI::Xaml::Controls::Maps::MapAnimationKind const& animation) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center, Windows::Foundation::IReference<double> const& zoomLevel) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center, Windows::Foundation::IReference<double> const& zoomLevel, Windows::Foundation::IReference<double> const& heading, Windows::Foundation::IReference<double> const& desiredPitch) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TrySetViewAsync(Windows::Devices::Geolocation::Geopoint const& center, Windows::Foundation::IReference<double> const& zoomLevel, Windows::Foundation::IReference<double> const& heading, Windows::Foundation::IReference<double> const& desiredPitch, Windows::UI::Xaml::Controls::Maps::MapAnimationKind const& animation) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) BusinessLandmarksVisible() const;
        WINRT_IMPL_AUTO(void) BusinessLandmarksVisible(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) TransitFeaturesVisible() const;
        WINRT_IMPL_AUTO(void) TransitFeaturesVisible(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode) PanInteractionMode() const;
        WINRT_IMPL_AUTO(void) PanInteractionMode(Windows::UI::Xaml::Controls::Maps::MapPanInteractionMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapInteractionMode) RotateInteractionMode() const;
        WINRT_IMPL_AUTO(void) RotateInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapInteractionMode) TiltInteractionMode() const;
        WINRT_IMPL_AUTO(void) TiltInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapInteractionMode) ZoomInteractionMode() const;
        WINRT_IMPL_AUTO(void) ZoomInteractionMode(Windows::UI::Xaml::Controls::Maps::MapInteractionMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Is3DSupported() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsStreetsideSupported() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapScene) Scene() const;
        WINRT_IMPL_AUTO(void) Scene(Windows::UI::Xaml::Controls::Maps::MapScene const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapCamera) ActualCamera() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapCamera) TargetCamera() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapCustomExperience) CustomExperience() const;
        WINRT_IMPL_AUTO(void) CustomExperience(Windows::UI::Xaml::Controls::Maps::MapCustomExperience const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) MapElementClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> const& handler) const;
        using MapElementClick_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_MapElementClick>;
        [[nodiscard]] MapElementClick_revoker MapElementClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementClickEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) MapElementClick(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) MapElementPointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> const& handler) const;
        using MapElementPointerEntered_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_MapElementPointerEntered>;
        [[nodiscard]] MapElementPointerEntered_revoker MapElementPointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerEnteredEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) MapElementPointerEntered(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) MapElementPointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> const& handler) const;
        using MapElementPointerExited_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_MapElementPointerExited>;
        [[nodiscard]] MapElementPointerExited_revoker MapElementPointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapElementPointerExitedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) MapElementPointerExited(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ActualCameraChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> const& handler) const;
        using ActualCameraChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_ActualCameraChanged>;
        [[nodiscard]] ActualCameraChanged_revoker ActualCameraChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ActualCameraChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) ActualCameraChanging(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> const& handler) const;
        using ActualCameraChanging_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_ActualCameraChanging>;
        [[nodiscard]] ActualCameraChanging_revoker ActualCameraChanging(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapActualCameraChangingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ActualCameraChanging(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) TargetCameraChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& handler) const;
        using TargetCameraChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_TargetCameraChanged>;
        [[nodiscard]] TargetCameraChanged_revoker TargetCameraChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) TargetCameraChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) CustomExperienceChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> const& handler) const;
        using CustomExperienceChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl2>::remove_CustomExperienceChanged>;
        [[nodiscard]] CustomExperienceChanged_revoker CustomExperienceChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapCustomExperienceChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) CustomExperienceChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) StartContinuousRotate(double rateInDegreesPerSecond) const;
        WINRT_IMPL_AUTO(void) StopContinuousRotate() const;
        WINRT_IMPL_AUTO(void) StartContinuousTilt(double rateInDegreesPerSecond) const;
        WINRT_IMPL_AUTO(void) StopContinuousTilt() const;
        WINRT_IMPL_AUTO(void) StartContinuousZoom(double rateOfChangePerSecond) const;
        WINRT_IMPL_AUTO(void) StopContinuousZoom() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryRotateAsync(double degrees) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryRotateToAsync(double angleInDegrees) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryTiltAsync(double degrees) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryTiltToAsync(double angleInDegrees) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryZoomInAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryZoomOutAsync() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryZoomToAsync(double zoomLevel) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TrySetSceneAsync(Windows::UI::Xaml::Controls::Maps::MapScene const& scene) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TrySetSceneAsync(Windows::UI::Xaml::Controls::Maps::MapScene const& scene, Windows::UI::Xaml::Controls::Maps::MapAnimationKind const& animationKind) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl3
    {
        WINRT_IMPL_AUTO(winrt::event_token) MapRightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> const& handler) const;
        using MapRightTapped_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl3, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl3>::remove_MapRightTapped>;
        [[nodiscard]] MapRightTapped_revoker MapRightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapRightTappedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) MapRightTapped(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) BusinessLandmarksEnabled() const;
        WINRT_IMPL_AUTO(void) BusinessLandmarksEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) TransitFeaturesEnabled() const;
        WINRT_IMPL_AUTO(void) TransitFeaturesEnabled(bool value) const;
        WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopath) GetVisibleRegion(Windows::UI::Xaml::Controls::Maps::MapVisibleRegionKind const& region) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl5
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapProjection) MapProjection() const;
        WINRT_IMPL_AUTO(void) MapProjection(Windows::UI::Xaml::Controls::Maps::MapProjection const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapStyleSheet) StyleSheet() const;
        WINRT_IMPL_AUTO(void) StyleSheet(Windows::UI::Xaml::Controls::Maps::MapStyleSheet const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Thickness) ViewPadding() const;
        WINRT_IMPL_AUTO(void) ViewPadding(Windows::UI::Xaml::Thickness const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) MapContextRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> const& handler) const;
        using MapContextRequested_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControl5, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControl5>::remove_MapContextRequested>;
        [[nodiscard]] MapContextRequested_revoker MapContextRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapContextRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) MapContextRequested(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement>) FindMapElementsAtOffset(Windows::Foundation::Point const& offset, double radius) const;
        WINRT_IMPL_AUTO(void) GetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::AltitudeReferenceSystem const& desiredReferenceSystem, Windows::Devices::Geolocation::Geopoint& location) const;
        WINRT_IMPL_AUTO(void) StartContinuousPan(double horizontalPixelsPerSecond, double verticalPixelsPerSecond) const;
        WINRT_IMPL_AUTO(void) StopContinuousPan() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryPanAsync(double horizontalPixels, double verticalPixels) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<bool>) TryPanToAsync(Windows::Devices::Geolocation::Geopoint const& location) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl6
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapLayer>) Layers() const;
        WINRT_IMPL_AUTO(void) Layers(param::vector<Windows::UI::Xaml::Controls::Maps::MapLayer> const& value) const;
        WINRT_IMPL_AUTO(bool) TryGetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::Geopoint& location) const;
        WINRT_IMPL_AUTO(bool) TryGetLocationFromOffset(Windows::Foundation::Point const& offset, Windows::Devices::Geolocation::AltitudeReferenceSystem const& desiredReferenceSystem, Windows::Devices::Geolocation::Geopoint& location) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl6>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl6<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl7
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Region() const;
        WINRT_IMPL_AUTO(void) Region(param::hstring const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl7>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl7<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControl8
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanTiltDown() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanTiltUp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanZoomIn() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanZoomOut() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControl8>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControl8<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkClickEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>) LocalLocations() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkClickEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkClickEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkPointerEnteredEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>) LocalLocations() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerEnteredEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkPointerEnteredEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkPointerExitedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>) LocalLocations() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkPointerExitedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkPointerExitedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkRightTappedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Services::Maps::LocalSearch::LocalLocation>) LocalLocations() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlBusinessLandmarkRightTappedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlBusinessLandmarkRightTappedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper
    {
        WINRT_IMPL_AUTO(winrt::event_token) BusinessLandmarkClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> const& value) const;
        using BusinessLandmarkClick_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>::remove_BusinessLandmarkClick>;
        [[nodiscard]] BusinessLandmarkClick_revoker BusinessLandmarkClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkClickEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) BusinessLandmarkClick(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) TransitFeatureClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> const& value) const;
        using TransitFeatureClick_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>::remove_TransitFeatureClick>;
        [[nodiscard]] TransitFeatureClick_revoker TransitFeatureClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureClickEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) TransitFeatureClick(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) BusinessLandmarkRightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> const& value) const;
        using BusinessLandmarkRightTapped_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>::remove_BusinessLandmarkRightTapped>;
        [[nodiscard]] BusinessLandmarkRightTapped_revoker BusinessLandmarkRightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkRightTappedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) BusinessLandmarkRightTapped(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) TransitFeatureRightTapped(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> const& value) const;
        using TransitFeatureRightTapped_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>::remove_TransitFeatureRightTapped>;
        [[nodiscard]] TransitFeatureRightTapped_revoker TransitFeatureRightTapped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeatureRightTappedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) TransitFeatureRightTapped(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2
    {
        WINRT_IMPL_AUTO(winrt::event_token) BusinessLandmarkPointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> const& value) const;
        using BusinessLandmarkPointerEntered_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>::remove_BusinessLandmarkPointerEntered>;
        [[nodiscard]] BusinessLandmarkPointerEntered_revoker BusinessLandmarkPointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerEnteredEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) BusinessLandmarkPointerEntered(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) TransitFeaturePointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> const& value) const;
        using TransitFeaturePointerEntered_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>::remove_TransitFeaturePointerEntered>;
        [[nodiscard]] TransitFeaturePointerEntered_revoker TransitFeaturePointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerEnteredEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) TransitFeaturePointerEntered(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) BusinessLandmarkPointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> const& value) const;
        using BusinessLandmarkPointerExited_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>::remove_BusinessLandmarkPointerExited>;
        [[nodiscard]] BusinessLandmarkPointerExited_revoker BusinessLandmarkPointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlBusinessLandmarkPointerExitedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) BusinessLandmarkPointerExited(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) TransitFeaturePointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> const& value) const;
        using TransitFeaturePointerExited_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>::remove_TransitFeaturePointerExited>;
        [[nodiscard]] TransitFeaturePointerExited_revoker TransitFeaturePointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapControl, Windows::UI::Xaml::Controls::Maps::MapControlTransitFeaturePointerExitedEventArgs> const& value) const;
        WINRT_IMPL_AUTO(void) TransitFeaturePointerExited(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelper2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelper2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelperFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapControlDataHelper) CreateInstance(Windows::UI::Xaml::Controls::Maps::MapControl const& map) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelperFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelperStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapControl) CreateMapControl(bool rasterRenderMode) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlDataHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlDataHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CenterProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ChildrenProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ColorSchemeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DesiredPitchProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) HeadingProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) LandmarksVisibleProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) LoadingStatusProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MapServiceTokenProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PedestrianFeaturesVisibleProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PitchProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) StyleProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TrafficFlowVisibleProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TransformOriginProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) WatermarkModeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ZoomLevelProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MapElementsProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RoutesProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TileSourcesProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) LocationProperty() const;
        WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) GetLocation(Windows::UI::Xaml::DependencyObject const& element) const;
        WINRT_IMPL_AUTO(void) SetLocation(Windows::UI::Xaml::DependencyObject const& element, Windows::Devices::Geolocation::Geopoint const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) NormalizedAnchorPointProperty() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Point) GetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element) const;
        WINRT_IMPL_AUTO(void) SetNormalizedAnchorPoint(Windows::UI::Xaml::DependencyObject const& element, Windows::Foundation::Point const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) BusinessLandmarksVisibleProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TransitFeaturesVisibleProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PanInteractionModeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RotateInteractionModeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TiltInteractionModeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ZoomInteractionModeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) Is3DSupportedProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsStreetsideSupportedProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SceneProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) BusinessLandmarksEnabledProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TransitFeaturesEnabledProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics5
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MapProjectionProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) StyleSheetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ViewPaddingProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics6
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) LayersProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics6>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics6<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics7
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RegionProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics7>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics7<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics8
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CanTiltDownProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CanTiltUpProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CanZoomInProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CanZoomOutProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlStatics8>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlStatics8<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureClickEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) TransitProperties() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureClickEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureClickEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerEnteredEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) TransitProperties() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerEnteredEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerEnteredEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerExitedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) TransitProperties() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeaturePointerExitedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeaturePointerExitedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureRightTappedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable>) TransitProperties() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapControlTransitFeatureRightTappedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapControlTransitFeatureRightTappedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperience
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapCustomExperience>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperience<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperienceChangedEventArgs
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperienceChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperienceFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapCustomExperience) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapCustomExperienceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapCustomExperienceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ZIndex() const;
        WINRT_IMPL_AUTO(void) ZIndex(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Visible() const;
        WINRT_IMPL_AUTO(void) Visible(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MapTabIndex() const;
        WINRT_IMPL_AUTO(void) MapTabIndex(int32_t value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MapStyleSheetEntry() const;
        WINRT_IMPL_AUTO(void) MapStyleSheetEntry(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MapStyleSheetEntryState() const;
        WINRT_IMPL_AUTO(void) MapStyleSheetEntryState(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) Tag() const;
        WINRT_IMPL_AUTO(void) Tag(Windows::Foundation::IInspectable const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
        WINRT_IMPL_AUTO(void) Location(Windows::Devices::Geolocation::Geopoint const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapModel3D) Model() const;
        WINRT_IMPL_AUTO(void) Model(Windows::UI::Xaml::Controls::Maps::MapModel3D const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Heading() const;
        WINRT_IMPL_AUTO(void) Heading(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Pitch() const;
        WINRT_IMPL_AUTO(void) Pitch(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Roll() const;
        WINRT_IMPL_AUTO(void) Roll(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) Scale() const;
        WINRT_IMPL_AUTO(void) Scale(Windows::Foundation::Numerics::float3 const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement3D>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement3D<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement3DStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) LocationProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) HeadingProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PitchProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RollProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ScaleProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement3DStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement3DStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElement4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsEnabled() const;
        WINRT_IMPL_AUTO(void) IsEnabled(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElement4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElement4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementClickEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement>) MapElements() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementClickEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementClickEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapElement) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerEnteredEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapElement) MapElement() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementPointerEnteredEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerEnteredEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerExitedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapElement) MapElement() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementPointerExitedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementPointerExitedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ZIndexProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) VisibleProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MapTabIndexProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MapStyleSheetEntryProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MapStyleSheetEntryStateProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TagProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsEnabledProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementStatics4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement>) MapElements() const;
        WINRT_IMPL_AUTO(void) MapElements(param::vector<Windows::UI::Xaml::Controls::Maps::MapElement> const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) MapElementClick(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs> const& handler) const;
        using MapElementClick_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>::remove_MapElementClick>;
        [[nodiscard]] MapElementClick_revoker MapElementClick(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerClickEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) MapElementClick(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) MapElementPointerEntered(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs> const& handler) const;
        using MapElementPointerEntered_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>::remove_MapElementPointerEntered>;
        [[nodiscard]] MapElementPointerEntered_revoker MapElementPointerEntered(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerEnteredEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) MapElementPointerEntered(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) MapElementPointerExited(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs> const& handler) const;
        using MapElementPointerExited_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>::remove_MapElementPointerExited>;
        [[nodiscard]] MapElementPointerExited_revoker MapElementPointerExited(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerPointerExitedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) MapElementPointerExited(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) MapContextRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs> const& handler) const;
        using MapContextRequested_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>::remove_MapContextRequested>;
        [[nodiscard]] MapContextRequested_revoker MapContextRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapElementsLayer, Windows::UI::Xaml::Controls::Maps::MapElementsLayerContextRequestedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) MapContextRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerClickEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Controls::Maps::MapElement>) MapElements() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerClickEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerClickEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerContextRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Controls::Maps::MapElement>) MapElements() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerContextRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerContextRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerEnteredEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapElement) MapElement() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerEnteredEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerEnteredEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerExitedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapElement) MapElement() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerPointerExitedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerPointerExitedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MapElementsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapElementsLayerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapElementsLayerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapIcon
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
        WINRT_IMPL_AUTO(void) Location(Windows::Devices::Geolocation::Geopoint const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Title() const;
        WINRT_IMPL_AUTO(void) Title(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) NormalizedAnchorPoint() const;
        WINRT_IMPL_AUTO(void) NormalizedAnchorPoint(Windows::Foundation::Point const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamReference) Image() const;
        WINRT_IMPL_AUTO(void) Image(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapIcon>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapIcon<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapIcon2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior) CollisionBehaviorDesired() const;
        WINRT_IMPL_AUTO(void) CollisionBehaviorDesired(Windows::UI::Xaml::Controls::Maps::MapElementCollisionBehavior const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapIcon2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapIcon2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) LocationProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TitleProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) NormalizedAnchorPointProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapIconStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CollisionBehaviorDesiredProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapIconStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapIconStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapInputEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapInputEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapInputEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControl
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) ItemsSource() const;
        WINRT_IMPL_AUTO(void) ItemsSource(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::DependencyObject>) Items() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DataTemplate) ItemTemplate() const;
        WINRT_IMPL_AUTO(void) ItemTemplate(Windows::UI::Xaml::DataTemplate const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapItemsControl>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControl<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControlStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ItemsSourceProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ItemsProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ItemTemplateProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapItemsControlStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapItemsControlStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapLayer
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MapTabIndex() const;
        WINRT_IMPL_AUTO(void) MapTabIndex(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Visible() const;
        WINRT_IMPL_AUTO(void) Visible(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ZIndex() const;
        WINRT_IMPL_AUTO(void) ZIndex(int32_t value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapLayer>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapLayer<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapLayerFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapLayer) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapLayerFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapLayerFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapLayerStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MapTabIndexProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) VisibleProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ZIndexProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapLayerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapLayerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapModel3D
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapModel3D>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapModel3D<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapModel3DFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapModel3D) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapModel3DFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapModel3DFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapModel3DStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::MapModel3D>) CreateFrom3MFAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& source) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::MapModel3D>) CreateFrom3MFAsync(Windows::Storage::Streams::IRandomAccessStreamReference const& source, Windows::UI::Xaml::Controls::Maps::MapModel3DShadingOption const& shadingOption) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapModel3DStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapModel3DStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopath) Path() const;
        WINRT_IMPL_AUTO(void) Path(Windows::Devices::Geolocation::Geopath const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) StrokeColor() const;
        WINRT_IMPL_AUTO(void) StrokeColor(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) StrokeThickness() const;
        WINRT_IMPL_AUTO(void) StrokeThickness(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) StrokeDashed() const;
        WINRT_IMPL_AUTO(void) StrokeDashed(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) FillColor() const;
        WINRT_IMPL_AUTO(void) FillColor(Windows::UI::Color const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapPolygon>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Devices::Geolocation::Geopath>) Paths() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapPolygon2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapPolygon2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapPolygonStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PathProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) StrokeThicknessProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) StrokeDashedProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapPolygonStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapPolygonStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopath) Path() const;
        WINRT_IMPL_AUTO(void) Path(Windows::Devices::Geolocation::Geopath const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) StrokeColor() const;
        WINRT_IMPL_AUTO(void) StrokeColor(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) StrokeThickness() const;
        WINRT_IMPL_AUTO(void) StrokeThickness(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) StrokeDashed() const;
        WINRT_IMPL_AUTO(void) StrokeDashed(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapPolyline>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapPolyline<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapPolylineStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PathProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) StrokeDashedProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapPolylineStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapPolylineStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapRightTappedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Point) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapRightTappedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapRightTappedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapRouteView
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) RouteColor() const;
        WINRT_IMPL_AUTO(void) RouteColor(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) OutlineColor() const;
        WINRT_IMPL_AUTO(void) OutlineColor(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Services::Maps::MapRoute) Route() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapRouteView>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapRouteView<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapRouteViewFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapRouteView) CreateInstanceWithMapRoute(Windows::Services::Maps::MapRoute const& route, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapRouteViewFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapRouteViewFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapScene
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapCamera) TargetCamera() const;
        WINRT_IMPL_AUTO(winrt::event_token) TargetCameraChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapScene, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& handler) const;
        using TargetCameraChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Maps::IMapScene, &impl::abi_t<Windows::UI::Xaml::Controls::Maps::IMapScene>::remove_TargetCameraChanged>;
        [[nodiscard]] TargetCameraChanged_revoker TargetCameraChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Maps::MapScene, Windows::UI::Xaml::Controls::Maps::MapTargetCameraChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) TargetCameraChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapScene>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapScene<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapScene) CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapScene) CreateFromBoundingBox(Windows::Devices::Geolocation::GeoboundingBox const& bounds, double headingInDegrees, double pitchInDegrees) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapScene) CreateFromCamera(Windows::UI::Xaml::Controls::Maps::MapCamera const& camera) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapScene) CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapScene) CreateFromLocation(Windows::Devices::Geolocation::Geopoint const& location, double headingInDegrees, double pitchInDegrees) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapScene) CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapScene) CreateFromLocationAndRadius(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters, double headingInDegrees, double pitchInDegrees) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapScene) CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapScene) CreateFromLocations(param::iterable<Windows::Devices::Geolocation::Geopoint> const& locations, double headingInDegrees, double pitchInDegrees) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapSceneStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapSceneStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheet
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapStyleSheet>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheet<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Area() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Airport() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Cemetery() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Continent() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Education() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) IndigenousPeoplesReserve() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Island() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Medical() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Military() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Nautical() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Neighborhood() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Runway() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Sand() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ShoppingCenter() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Stadium() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Vegetation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Forest() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) GolfCourse() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Park() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PlayingField() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Reserve() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Point() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) NaturalPoint() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Peak() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) VolcanicPeak() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WaterPoint() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PointOfInterest() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Business() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) FoodPoint() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) PopulatedPlace() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Capital() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AdminDistrictCapital() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CountryRegionCapital() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RoadShield() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RoadExit() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Transit() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Political() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) CountryRegion() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) AdminDistrict() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) District() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Structure() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Building() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) EducationBuilding() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MedicalBuilding() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TransitBuilding() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Transportation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Road() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ControlledAccessHighway() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) HighSpeedRamp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Highway() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) MajorRoad() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ArterialRoad() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Street() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Ramp() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UnpavedStreet() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) TollRoad() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Railway() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Trail() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WaterRoute() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Water() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) River() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) RouteLine() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WalkingRoute() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DrivingRoute() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntriesStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntriesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntryStatesStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Disabled() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Hover() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Selected() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetEntryStatesStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetEntryStatesStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapStyleSheet) Aerial() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapStyleSheet) AerialWithOverlay() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapStyleSheet) RoadLight() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapStyleSheet) RoadDark() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapStyleSheet) RoadHighContrastLight() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapStyleSheet) RoadHighContrastDark() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapStyleSheet) Combine(param::iterable<Windows::UI::Xaml::Controls::Maps::MapStyleSheet> const& styleSheets) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapStyleSheet) ParseFromJson(param::hstring const& styleAsJson) const;
        WINRT_IMPL_AUTO(bool) TryParseFromJson(param::hstring const& styleAsJson, Windows::UI::Xaml::Controls::Maps::MapStyleSheet& styleSheet) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapStyleSheetStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapStyleSheetStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapCamera) Camera() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapCameraChangeReason) ChangeReason() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTargetCameraChangedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTargetCameraChangedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Storage::Streams::IRandomAccessStreamReference) PixelData() const;
        WINRT_IMPL_AUTO(void) PixelData(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequestDeferral) GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequest>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequest<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestDeferral>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) X() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Y() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ZoomLevel() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapTileBitmapRequest) Request() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) FrameIndex() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileBitmapRequestedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileBitmapRequestedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileDataSource
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileDataSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileDataSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileDataSourceFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapTileDataSource) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileDataSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileDataSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapTileDataSource) DataSource() const;
        WINRT_IMPL_AUTO(void) DataSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapTileLayer) Layer() const;
        WINRT_IMPL_AUTO(void) Layer(Windows::UI::Xaml::Controls::Maps::MapTileLayer const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange) ZoomLevelRange() const;
        WINRT_IMPL_AUTO(void) ZoomLevelRange(Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::GeoboundingBox) Bounds() const;
        WINRT_IMPL_AUTO(void) Bounds(Windows::Devices::Geolocation::GeoboundingBox const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowOverstretch() const;
        WINRT_IMPL_AUTO(void) AllowOverstretch(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsFadingEnabled() const;
        WINRT_IMPL_AUTO(void) IsFadingEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsTransparencyEnabled() const;
        WINRT_IMPL_AUTO(void) IsTransparencyEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsRetryEnabled() const;
        WINRT_IMPL_AUTO(void) IsRetryEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ZIndex() const;
        WINRT_IMPL_AUTO(void) ZIndex(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) TilePixelSize() const;
        WINRT_IMPL_AUTO(void) TilePixelSize(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Visible() const;
        WINRT_IMPL_AUTO(void) Visible(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileSource>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapTileAnimationState) AnimationState() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AutoPlay() const;
        WINRT_IMPL_AUTO(void) AutoPlay(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) FrameCount() const;
        WINRT_IMPL_AUTO(void) FrameCount(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) FrameDuration() const;
        WINRT_IMPL_AUTO(void) FrameDuration(Windows::Foundation::TimeSpan const& value) const;
        WINRT_IMPL_AUTO(void) Pause() const;
        WINRT_IMPL_AUTO(void) Play() const;
        WINRT_IMPL_AUTO(void) Stop() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileSource2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileSource2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapTileSource) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapTileSource) CreateInstanceWithDataSource(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapTileSource) CreateInstanceWithDataSourceAndZoomRange(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapTileSource) CreateInstanceWithDataSourceZoomRangeAndBounds(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapTileSource) CreateInstanceWithDataSourceZoomRangeBoundsAndTileSize(Windows::UI::Xaml::Controls::Maps::MapTileDataSource const& dataSource, Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange const& zoomLevelRange, Windows::Devices::Geolocation::GeoboundingBox const& bounds, int32_t tileSizeInPixels, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileSourceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DataSourceProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) LayerProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ZoomLevelRangeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) BoundsProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) AllowOverstretchProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsFadingEnabledProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsTransparencyEnabledProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsRetryEnabledProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ZIndexProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TilePixelSizeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) VisibleProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) AnimationStateProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) AutoPlayProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) FrameCountProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) FrameDurationProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileSourceStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileSourceStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequest
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) Uri() const;
        WINRT_IMPL_AUTO(void) Uri(Windows::Foundation::Uri const& value) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapTileUriRequestDeferral) GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequest>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequest<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestDeferral
    {
        WINRT_IMPL_AUTO(void) Complete() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestDeferral>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestDeferral<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) X() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Y() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ZoomLevel() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::MapTileUriRequest) Request() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) FrameIndex() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IMapTileUriRequestedEventArgs2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IMapTileUriRequestedEventArgs2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AddressTextVisible() const;
        WINRT_IMPL_AUTO(void) AddressTextVisible(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CursorVisible() const;
        WINRT_IMPL_AUTO(void) CursorVisible(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) OverviewMapVisible() const;
        WINRT_IMPL_AUTO(void) OverviewMapVisible(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) StreetLabelsVisible() const;
        WINRT_IMPL_AUTO(void) StreetLabelsVisible(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ExitButtonVisible() const;
        WINRT_IMPL_AUTO(void) ExitButtonVisible(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ZoomButtonsVisible() const;
        WINRT_IMPL_AUTO(void) ZoomButtonsVisible(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IStreetsideExperience>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperience<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperienceFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::StreetsideExperience) CreateInstanceWithPanorama(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama) const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Maps::StreetsideExperience) CreateInstanceWithPanoramaHeadingPitchAndFieldOfView(Windows::UI::Xaml::Controls::Maps::StreetsidePanorama const& panorama, double headingInDegrees, double pitchInDegrees, double fieldOfViewInDegrees) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IStreetsideExperienceFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IStreetsideExperienceFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanorama
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Geolocation::Geopoint) Location() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IStreetsidePanorama>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanorama<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanoramaStatics
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama>) FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::UI::Xaml::Controls::Maps::StreetsidePanorama>) FindNearbyAsync(Windows::Devices::Geolocation::Geopoint const& location, double radiusInMeters) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Maps::IStreetsidePanoramaStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Maps_IStreetsidePanoramaStatics<D>;
    };
    struct struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange
    {
        double Min;
        double Max;
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Maps::MapZoomLevelRange>
    {
        using type = struct_Windows_UI_Xaml_Controls_Maps_MapZoomLevelRange;
    };
}
#endif
