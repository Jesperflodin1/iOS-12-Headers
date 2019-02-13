//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CARNavigationOwnershipManagerDelegate-Protocol.h"
#import "IAPNavigationDelegate-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class AVExternalDevice, CARNavigationOwnershipManager, IAPNavigation, MapsExternalAccessory, MapsExternalDeviceState, NSMapTable, NSString, UIScreen;

__attribute__((visibility("hidden")))
@interface MapsExternalDevice : NSObject <MFMailComposeViewControllerDelegate, IAPNavigationDelegate, CARNavigationOwnershipManagerDelegate>
{
    struct __IOHIDEventSystemClient *_client;
    _Bool _carPlayIsNavigating;
    _Bool _monitoringIOHID;
    UIScreen *_carplayScreen;
    AVExternalDevice *_externalDevice;
    MapsExternalDeviceState *_currentState;
    MapsExternalDeviceState *_lastState;
    id _screenBorrowToken;
    MapsExternalAccessory *_externalAccessory;
    IAPNavigation *_iapNavigation;
    NSMapTable *_navigationAccessories;
    CARNavigationOwnershipManager *_navigationOwnershipManager;
}

+ (id)_stringRepresentationOfDictionary:(id)arg1;
+ (id)_localizedReasonForHandoffError:(long long)arg1;
+ (id)_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)_destinationHandoffErrorWithReason:(long long)arg1;
+ (void)_presentActivityControllerForDestination:(id)arg1 searchResult:(id)arg2 dictionary:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_presentActivityControllerForDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)sharedInstance;
+ (void)initialize;
@property(retain, nonatomic) CARNavigationOwnershipManager *navigationOwnershipManager; // @synthesize navigationOwnershipManager=_navigationOwnershipManager;
@property(retain) NSMapTable *navigationAccessories; // @synthesize navigationAccessories=_navigationAccessories;
@property(retain) IAPNavigation *iapNavigation; // @synthesize iapNavigation=_iapNavigation;
@property _Bool monitoringIOHID; // @synthesize monitoringIOHID=_monitoringIOHID;
@property(retain) MapsExternalAccessory *externalAccessory; // @synthesize externalAccessory=_externalAccessory;
@property(retain) id screenBorrowToken; // @synthesize screenBorrowToken=_screenBorrowToken;
@property(retain) MapsExternalDeviceState *lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) MapsExternalDeviceState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) AVExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
@property(nonatomic) _Bool carPlayIsNavigating; // @synthesize carPlayIsNavigating=_carPlayIsNavigating;
@property(retain, nonatomic) UIScreen *carplayScreen; // @synthesize carplayScreen=_carplayScreen;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)IAPNavigationController:(id)arg1 hasManeuverUpdate:(id)arg2;
- (void)IAPNavigationController:(id)arg1 hasGuidanceUpdate:(id)arg2;
- (void)IAPNavigationAccessory:(id)arg1 didDisableNavigationUpdatesForComponent:(id)arg2;
- (void)IAPNavigationAccessory:(id)arg1 didEnableNavigationUpdatesForComponent:(id)arg2;
- (void)IAPNavigationAccessoryDidBecomeUnavailable:(id)arg1;
- (void)IAPNavigationAccessoryDidBecomeAvailable:(id)arg1;
- (void)_setupIAPNavigation;
- (void)setRouteGuidanceBeingShownInApp:(_Bool)arg1;
- (void)stopMonitoringIOHIDRepeatCurrentGuidance;
- (void)startMonitoringIOHIDRepeatCurrentGuidance;
- (void)_handleIOHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)handoffDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_destinationHandoffTestingEnabled;
- (_Bool)destinationHandoffEnabled;
- (void)navigationOwnershipChangedToOwner:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool externalAccessoryIsNavigating;
- (void)_postNotificationsIfNeeded;
- (_Bool)_isCurrentStateEqualLastState;
- (void)_updateExternalDevice:(id)arg1;
- (void)_connectAVDevice;
- (void)_disconnectAVDevice;
- (void)relinquishScreenIfNeeded;
- (void)borrowScreenIfNeededForReason:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
