//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SVSStarkItemController;

@protocol SVSStarkItemControllerDelegate <NSObject>
- (void)userWantsStarkItemControllerFullScreen:(id <SVSStarkItemController>)arg1;
- (void)starkItemControllerRequestsDismissal:(id <SVSStarkItemController>)arg1;
- (void)starkItemController:(id <SVSStarkItemController>)arg1 synthesizeSpeechWithText:(NSString *)arg2 completion:(void (^)(void))arg3;
@end
