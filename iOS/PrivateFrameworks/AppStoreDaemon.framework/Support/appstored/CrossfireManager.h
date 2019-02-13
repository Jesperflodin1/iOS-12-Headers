//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AppUsageBaseManager.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CrossfireManager : AppUsageBaseManager
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    _Bool _collectingMetrics;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_osBuild;
    NSString *_platform;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)_shouldEnableCrossfireMetricsForSession;
- (void)_resetWithReason:(id)arg1;
- (void)_resetDB;
- (void)_recordLaunches;
- (void)_recordInternalEventsForBundleIDs:(id)arg1 eventType:(unsigned char)arg2 installType:(unsigned char)arg3;
- (void)_recordExternalAppEvents:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_postMetrics;
- (_Bool)_includeLaunches;
- (void)_handleAnalyticsUsageSwitchChange:(id)arg1;
- (id)_getPlatform;
- (id)_getOsBuild;
- (void)_getAppEventsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_flushMetricsWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cleanup:(id)arg1 reason:(id)arg2;
- (id)_allAppEvents:(id)arg1;
- (_Bool)writeAppMetadata:(id)arg1;
- (id)readCurrentApps;
- (id)metricsTopic;
- (_Bool)isCandiateProxy:(id)arg1;
- (void)decorateMetricsEvent:(id)arg1 appMetadata:(id)arg2 context:(id)arg3;
- (id)createMetricsEventsForEventType:(unsigned char)arg1 context:(id)arg2;
- (_Bool)shouldPostCrossfireMetrics;
- (void)setupFollowingMigration;
- (void)sendMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordInstalledApps:(id)arg1 installType:(unsigned char)arg2;
- (void)recordMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordDeletedApps:(id)arg1;
- (void)recordAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)getAppMetadataForBundleID:(id)arg1 connection:(id)arg2;
- (void)getAppEventsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)flushMetricsWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
