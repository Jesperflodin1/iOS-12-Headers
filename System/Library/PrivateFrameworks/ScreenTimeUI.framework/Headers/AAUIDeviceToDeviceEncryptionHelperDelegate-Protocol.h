//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/NSObject-Protocol.h>

@class AAUIDeviceToDeviceEncryptionHelper;

@protocol AAUIDeviceToDeviceEncryptionHelperDelegate <NSObject>

@optional
- (void)deviceToDeviceEncryptionHelper:(AAUIDeviceToDeviceEncryptionHelper *)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(void (^)(_Bool))arg2;
@end

