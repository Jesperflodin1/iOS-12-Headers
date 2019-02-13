//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DirectionsWaypoint, DrivePreferences, NSString, RideBookingRideOptionState, Route, RouteSet, SearchFieldItem, TransitRouteOptions;
@protocol RoutePlanningDataCoordination;

@protocol RoutePlanningDataObservation
@property(readonly, nonatomic) long long observedRoutePlanningData;

@optional
- (void)routePlanningDataCoordinator:(id <RoutePlanningDataCoordination>)arg1 didUpdateRideBookingRideOptionState:(RideBookingRideOptionState *)arg2;
- (void)routePlanningDataCoordinator:(id <RoutePlanningDataCoordination>)arg1 didUpdateTransitOptions:(TransitRouteOptions *)arg2;
- (void)routePlanningDataCoordinator:(id <RoutePlanningDataCoordination>)arg1 didUpdateDrivePreferences:(DrivePreferences *)arg2;
- (void)routePlanningDataCoordinator:(id <RoutePlanningDataCoordination>)arg1 didUpdateRouteSet:(RouteSet *)arg2;
- (void)routePlanningDataCoordinator:(id <RoutePlanningDataCoordination>)arg1 didUpdateCurrentRoute:(Route *)arg2;
- (void)routePlanningDataCoordinator:(id <RoutePlanningDataCoordination>)arg1 didUpdateCurrentRouteDisplayedStepIndex:(long long)arg2;
- (void)routePlanningDataCoordinator:(id <RoutePlanningDataCoordination>)arg1 didUpdateRequestState:(long long)arg2;
- (void)routePlanningDataCoordinator:(id <RoutePlanningDataCoordination>)arg1 didUpdateTransportType:(long long)arg2;
- (void)routePlanningDataCoordinator:(id <RoutePlanningDataCoordination>)arg1 didUpdateOriginName:(NSString *)arg2 destinationName:(NSString *)arg3;
- (void)routePlanningDataCoordinator:(id <RoutePlanningDataCoordination>)arg1 didUpdateWaypointsWithOrigin:(DirectionsWaypoint *)arg2 destination:(DirectionsWaypoint *)arg3;
- (void)routePlanningDataCoordinator:(id <RoutePlanningDataCoordination>)arg1 didUpdateDestination:(SearchFieldItem *)arg2;
- (void)routePlanningDataCoordinator:(id <RoutePlanningDataCoordination>)arg1 didUpdateOrigin:(SearchFieldItem *)arg2;
@end
