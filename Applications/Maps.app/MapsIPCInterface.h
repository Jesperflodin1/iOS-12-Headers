//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPDistributedMessagingCenter;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MapsIPCInterface : NSObject
{
    CPDistributedMessagingCenter *_messagingCenter;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_messagingQueue;
}

+ (id)sharedInterface;
- (void).cxx_destruct;
- (void)setNavigationVoiceVolume:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setNavigationMuted:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)repeatLastGuidanceInstruction;
- (id)repeatLastReroutePrompt;
- (id)getGuidanceState:(id)arg1;
- (id)endNavigation;
- (void)startPreparedNavigation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadDirections:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)dismissNavigationSafetyAlert;
- (id)handleTrafficeReroute:(id)arg1;
- (void)_performWithMapsRunning:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool canReceiveMessages;
- (id)init;

@end

