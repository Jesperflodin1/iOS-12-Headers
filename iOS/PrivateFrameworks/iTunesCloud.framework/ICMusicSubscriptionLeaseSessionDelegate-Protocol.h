//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/NSObject-Protocol.h>

@class ICMusicSubscriptionLeasePlaybackRequest, ICMusicSubscriptionLeaseSession, ICMusicSubscriptionPlaybackResponse, NSArray, NSError;

@protocol ICMusicSubscriptionLeaseSessionDelegate <NSObject>
- (void)musicLeaseSession:(ICMusicSubscriptionLeaseSession *)arg1 requestsFairPlayKeyStatusUpdateWithCompletion:(void (^)(ICMusicSubscriptionLeaseStatus *, NSError *))arg2;
- (void)musicLeaseSession:(ICMusicSubscriptionLeaseSession *)arg1 didFinishPlaybackRequest:(ICMusicSubscriptionLeasePlaybackRequest *)arg2 withPlaybackResponse:(ICMusicSubscriptionPlaybackResponse *)arg3 responseError:(NSError *)arg4 updatedFairPlayKeyStatusList:(NSArray *)arg5 completionHandler:(void (^)(ICMusicSubscriptionLeaseStatus *, NSDate *))arg6;
@end
