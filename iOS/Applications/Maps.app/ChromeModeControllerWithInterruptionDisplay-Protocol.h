//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ChromeModeController-Protocol.h"

@class NSDictionary;

@protocol ChromeModeControllerWithInterruptionDisplay <ChromeModeController>

@optional
- (void (^)(void))presentUnhandledInterruptionOfKind:(long long)arg1 userInfo:(NSDictionary *)arg2 completionHandler:(void (^)(long long))arg3;
- (void (^)(void))presentInterruptionOfKind:(long long)arg1 userInfo:(NSDictionary *)arg2 completionHandler:(void (^)(long long))arg3;
- (_Bool)canPresentInterruptionOfKind:(long long)arg1;
@end
