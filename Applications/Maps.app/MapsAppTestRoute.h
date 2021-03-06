//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsAppTest.h"

__attribute__((visibility("hidden")))
@interface MapsAppTestRoute : MapsAppTest
{
    unsigned long long _numWaypointsLoaded;
}

@property(readonly, nonatomic) unsigned long long numWaypointsLoaded; // @synthesize numWaypointsLoaded=_numWaypointsLoaded;
- (void)doAfterSubTestForDisplayingRoutes;
- (void)didDisplayRoutes:(id)arg1;
- (void)didEndGEOPPTTest_RouteManager_DirectionsRequest:(id)arg1;
- (void)willBeginGEOPPTTest_RouteManager_DirectionsRequest:(id)arg1;
- (void)didEndMapsPPTTest_ComposeWaypoint:(id)arg1;
- (void)willBeginMapsPPTTest_ComposeWaypoint:(id)arg1;
- (void)didEndMapsPPTTest_Route_SetDirectionsPlan_DirectionsSearch:(id)arg1;
- (void)willBeginMapsPPTTest_Route_SetDirectionsPlan_DirectionsSearch:(id)arg1;
- (void)didEndMapsPPTTest_Route_SetDirectionsPlan_RoutePicking_LoadingFromWaypoints:(id)arg1;
- (void)willBeginMapsPPTTest_Route_SetDirectionsPlan_RoutePicking_LoadingFromWaypoints:(id)arg1;
- (void)didEndMapsPPTTest_Route_SetDirectionsPlan_RoutePicking:(id)arg1;
- (void)willBeginMapsPPTTest_Route_SetDirectionsPlan_RoutePicking:(id)arg1;
- (void)didEndMapsPPTTest_Route_SetDirectionsPlan_DirectionsStarted:(id)arg1;
- (void)willBeginMapsPPTTest_Route_SetDirectionsPlan_DirectionsStarted:(id)arg1;
- (void)didEndMapsPPTTest_Route_SetDirectionsPlan:(id)arg1;
- (void)willBeginMapsPPTTest_Route_SetDirectionsPlan:(id)arg1;
- (void)didEndGEOPPTTest_PlaceDataRequest_GEOD:(id)arg1;
- (void)willBeginGEOPPTTest_PlaceDataRequest_GEOD:(id)arg1;
- (void)didEndGEOPPTTest_PlaceRequest_ResponseHandling:(id)arg1;
- (void)willBeginGEOPPTTest_PlaceRequest_ResponseHandling:(id)arg1;
- (void)didEndGEOPPTTest_PlaceRequest_RequestPreparing:(id)arg1;
- (void)willBeginGEOPPTTest_PlaceRequest_RequestPreparing:(id)arg1;
- (void)didEndGEOPPTTest_PlaceRequest:(id)arg1;
- (void)willBeginGEOPPTTest_PlaceRequest:(id)arg1;
- (void)didResolveWaypointsForRouting:(id)arg1;
- (void)willResolveWaypointsForRouting:(id)arg1;
- (void)_showDirectionSearchView:(id)arg1;
- (void)tapOnSearchBar;
- (void)registerGEOSubtestsForRouting;
- (void)_requestRouteWithResolvedDestination:(id)arg1;
- (_Bool)runTest;

@end

