//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXSpringBoardServerInstance/AXHAServerDelegate-Protocol.h>
#import <AXSpringBoardServerInstance/AXUIClientDelegate-Protocol.h>

@class NSDictionary, NSString, NSTimer, UIApplicationSceneClientSettingsDiffInspector;
@protocol OS_dispatch_queue;

@interface AXSBHearingAidDeviceController : NSObject <AXUIClientDelegate, AXHAServerDelegate>
{
    UIApplicationSceneClientSettingsDiffInspector *_applicationSceneClientSettingsDiffInspector;
    double _routeChangedTime;
    _Bool isShowingHearingAidControl;
    _Bool _shouldIgnoreRouteChanges;
    _Bool _hearingAidIsConnected;
    _Bool _holdingMediaForConnection;
    _Bool _holdingPhoneForConnection;
    NSDictionary *_preferredRoute;
    NSTimer *_preferredRouteTimer;
    NSObject<OS_dispatch_queue> *_mediaUpdateQueue;
}

+ (id)sharedController;
+ (void)_accessibilityPerformValidations:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mediaUpdateQueue; // @synthesize mediaUpdateQueue=_mediaUpdateQueue;
@property(retain, nonatomic) NSTimer *preferredRouteTimer; // @synthesize preferredRouteTimer=_preferredRouteTimer;
@property(retain, nonatomic) NSDictionary *preferredRoute; // @synthesize preferredRoute=_preferredRoute;
@property(nonatomic) _Bool holdingPhoneForConnection; // @synthesize holdingPhoneForConnection=_holdingPhoneForConnection;
@property(nonatomic) _Bool holdingMediaForConnection; // @synthesize holdingMediaForConnection=_holdingMediaForConnection;
@property(nonatomic) _Bool hearingAidIsConnected; // @synthesize hearingAidIsConnected=_hearingAidIsConnected;
@property(nonatomic) _Bool shouldIgnoreRouteChanges; // @synthesize shouldIgnoreRouteChanges=_shouldIgnoreRouteChanges;
@property(nonatomic) _Bool isShowingHearingAidControl; // @synthesize isShowingHearingAidControl;
- (void).cxx_destruct;
- (void)userChangedRouteNotification:(id)arg1;
- (void)pickableAudioRoutesDidChange:(id)arg1;
- (void)hearingAidConnectionDidChange:(_Bool)arg1;
- (void)serverDidDie:(id)arg1;
- (void)audioRouteDidChange:(id)arg1;
- (void)_updateHearingAidAfterMediaPlayback:(_Bool)arg1;
- (void)mediaPlaybackDidChange:(id)arg1;
- (_Bool)shouldRequestAudioConnectionForCall:(_Bool)arg1;
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id *)arg4;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;
- (void)statusBarDidChange:(id)arg1;
- (void)sendUpdatedStatusBarStyle;
- (long long)effectiveStatusBarStyle;
- (void)liveListenStatusBarActivated:(id)arg1;
- (void)showHearingAidControl:(_Bool)arg1;
- (_Bool)isScreenLocked;
- (void)_lockStateChanged;
- (id)hearingUIClient;
- (void)startServer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

