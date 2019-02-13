//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _MRDMediaServerStateCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_dataSourceHashesToDiscoveryModes;
    unsigned int _currentDiscoveryMode;
}

+ (id)sharedCoordinator;
@property(readonly, nonatomic) unsigned int currentDiscoveryMode; // @synthesize currentDiscoveryMode=_currentDiscoveryMode;
- (void).cxx_destruct;
- (void)_updateMediaServerDiscoveryMode;
- (void)clearDiscoveryModeForDataSource:(id)arg1;
- (void)setDiscoveryMode:(unsigned int)arg1 forDataSource:(id)arg2;
- (id)init;

@end
