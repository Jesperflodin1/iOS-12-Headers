//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardServices/SBSServiceFacilityClient.h>

@interface SBSSystemServiceClient : SBSServiceFacilityClient
{
    _Bool _buttonEventServiceIsWaitingForServerMessages;
}

+ (id)serviceFacilityIdentifier;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (void)setApplicationBundleIdentifier:(id)arg1 blockedForScreenTime:(_Bool)arg2;
- (void)resetToHomeScreenAnimated:(_Bool)arg1;
- (void)setOrientationLockEnabled:(_Bool)arg1;
- (void)setIdleTimerEnabled:(_Bool)arg1;
- (void)setAlertsEnabled:(_Bool)arg1;
- (void)suspendAllDisplays;
- (void)fetchHapticTypeForButtonKind:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setHapticType:(long long)arg1 forButtonKind:(long long)arg2;
- (void)_handleButtonEventConsumePressMessage:(id)arg1;
- (void)setEventMask:(unsigned long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3;
- (void)setButtonEventServiceIsWaitingForServerMessages:(_Bool)arg1;
- (void)acquireAssertionOfType:(long long)arg1 forReason:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)fetchUnlockCredentialSetWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestPasscodeUnlockUIWithOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
