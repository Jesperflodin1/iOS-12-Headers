//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarManeuverViewAnalyticsDelegate-Protocol.h"
#import "MNNavigationServiceObserver-Protocol.h"
#import "NavSignViewAnalyticsDelegate-Protocol.h"

@class GEOComposedRoute, GEODirectionsFeedbackCollector, GEOETATrafficUpdateResponse, GEOStepFeedback, NSArray, NSData, NSMutableDictionary, NSString, NavigationAudioFeedbackCollector;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NavigationFeedbackCollector : NSObject <MNNavigationServiceObserver, NavSignViewAnalyticsDelegate, CarManeuverViewAnalyticsDelegate>
{
    NSData *_responseID;
    NSString *_traceFileName;
    NSMutableDictionary *_guidance;
    _Bool _startedManeuver;
    GEOStepFeedback *_stepFeedback;
    GEOETATrafficUpdateResponse *_etaTrafficUpdateResponse;
    GEOComposedRoute *_currentRoute;
    NSArray *_alternateRoutes;
    _Bool _isPlayingTrace;
    unsigned int _prevStepID;
    NavigationAudioFeedbackCollector *_audioFeedbackCollector;
    GEODirectionsFeedbackCollector *_feedbackCollector;
    NSData *_prevRouteID;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedFeedbackCollector;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool isPlayingTrace; // @synthesize isPlayingTrace=_isPlayingTrace;
@property(nonatomic) unsigned int prevStepID; // @synthesize prevStepID=_prevStepID;
@property(retain, nonatomic) NSData *prevRouteID; // @synthesize prevRouteID=_prevRouteID;
@property(retain, nonatomic) GEODirectionsFeedbackCollector *feedbackCollector; // @synthesize feedbackCollector=_feedbackCollector;
@property(retain, nonatomic) NavigationAudioFeedbackCollector *audioFeedbackCollector; // @synthesize audioFeedbackCollector=_audioFeedbackCollector;
- (void).cxx_destruct;
- (void)carManeuverView:(id)arg1 didSelectAlternate:(unsigned long long)arg2 forPrimaryString:(_Bool)arg3 inSign:(id)arg4;
- (void)navSignView:(id)arg1 didSelectAlternate:(unsigned long long)arg2 forPrimaryString:(_Bool)arg3 inSign:(id)arg4;
- (void)navigationServiceDidFinishLoadingTrace:(id)arg1;
- (void)navigationService:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
- (void)navigationService:(id)arg1 newGuidanceEventFeedback:(id)arg2;
- (void)navigationService:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationService:(id)arg1 didUpdateETAResponse:(id)arg2 forRoute:(id)arg3;
- (void)navigationService:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationService:(id)arg1 didReroute:(id)arg2;
- (void)navigationServiceDidArrive:(id)arg1;
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)_didSelectAlternate:(unsigned long long)arg1 forPrimaryString:(_Bool)arg2 inSign:(id)arg3;
- (void)_addGuidance;
- (void)_didStartManeuver;
- (void)_flushStepFeedback;
- (void)_updateFeedbackWithRouteID:(id)arg1 routeIndex:(unsigned int)arg2 stepID:(unsigned int)arg3 completeStep:(_Bool)arg4;
- (int)_navigationModeTypeForState:(unsigned long long)arg1;
- (void)_runAsyncBlockOnMainQueue:(CDUnknownBlockType)arg1;
- (void)_runAsyncBlockOnLocalQueue:(CDUnknownBlockType)arg1;
- (void)addAlightNotificationFeedback:(id)arg1;
- (_Bool)_shouldSendFeedback;
- (void)addTrafficRerouteFeedback:(id)arg1;
- (void)addStepFeedbackWithCurrentlyDisplayedStepIndex:(unsigned int)arg1 completed:(_Bool)arg2;
- (void)dealloc;
- (void)reset;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

