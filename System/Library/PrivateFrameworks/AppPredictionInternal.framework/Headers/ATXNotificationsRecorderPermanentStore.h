/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:55 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/ATXNotificationsDatabase.h>

@protocol OS_dispatch_source;
@class NSObject, ATXNotificationRecorder, ATXLockscreenTracker, ATXNotificationsDedupeTracker, NSDate;

@interface ATXNotificationsRecorderPermanentStore : ATXNotificationsDatabase {

	NSObject*<OS_dispatch_source> _timer;
	ATXNotificationRecorder* _internalRecorder;
	ATXLockscreenTracker* _lockscreenTracker;
	ATXNotificationsDedupeTracker* _dedupeTracker;
	NSDate* _lastUpdate;

}

@property (retain) NSDate * lastUpdate;              //@synthesize lastUpdate=_lastUpdate - In the implementation block
+(id)sharedInstance;
-(void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3 ;
-(void)insertAppLaunchEvent:(id)arg1 timestamp:(id)arg2 ;
-(void)insertTapCoalesceEvent:(id)arg1 bundleId:(id)arg2 timestamp:(id)arg3 ;
-(void)resetNotificationsHistory;
-(void)addNotificationsRecordWithMetadata:(id)arg1 timestamp:(id)arg2 notificationID:(id)arg3 ;
-(void)addNotificationsRecordWithSerializedMetadata:(id)arg1 timestamp:(id)arg2 notificationID:(id)arg3 ;
-(void)addNotificationRecordInRecentStore:(id)arg1 timestamp:(id)arg2 ;
-(id)getLockscreenBundleIds;
-(void)replay;
-(void)replayWithCallback:(/*^block*/id)arg1 ;
-(void)submitGrading:(id)arg1 rating:(id)arg2 category:(id)arg3 userId:(id)arg4 ;
-(void)setLastUpdate:(NSDate *)arg1 ;
-(id)init;
-(NSDate *)lastUpdate;
@end

