//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistant/NSObject-Protocol.h>

@class CUMessageSession, NSArray, NSError, NSString;

@protocol BYBuddyDaemonProximityTargetProtocol <NSObject>
- (void)receivedLanguages:(NSArray *)arg1 locale:(NSString *)arg2 model:(NSString *)arg3 deviceClass:(NSString *)arg4;
- (void)proximityConnectionTerminated;
- (void)proximityConnectionInitiated;
- (void)proximityConnectionPreparing:(CUMessageSession *)arg1;
- (void)dismissProximityPinCode;
- (void)displayProximityPinCode:(NSString *)arg1 visual:(_Bool)arg2;
- (void)proximititySetupCompleted:(NSError *)arg1;
@end
