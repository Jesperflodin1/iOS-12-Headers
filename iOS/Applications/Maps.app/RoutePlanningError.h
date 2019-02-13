//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol GEOTransitRoutingIncidentMessage;

__attribute__((visibility("hidden")))
@interface RoutePlanningError : NSObject
{
    _Bool _errorViewShouldShowTransitRoutingApps;
    NSString *_errorTitle;
    NSString *_errorMessage;
    id <GEOTransitRoutingIncidentMessage> _incidentMessage;
}

@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> incidentMessage; // @synthesize incidentMessage=_incidentMessage;
@property(readonly, nonatomic) _Bool errorViewShouldShowTransitRoutingApps; // @synthesize errorViewShouldShowTransitRoutingApps=_errorViewShouldShowTransitRoutingApps;
@property(readonly, copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, copy, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
- (void).cxx_destruct;
- (void)_updateRoutingAppsVisibilityWithError:(id)arg1 transportType:(unsigned long long)arg2;
- (void)_buildErrorStringsFromError:(id)arg1;
- (id)initWithError:(id)arg1 transportType:(unsigned long long)arg2;

@end
