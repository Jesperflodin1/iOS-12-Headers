/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:07 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@protocol OS_dispatch_source;
@class CMMotionActivityManager, NSOperationQueue, NSObject;

@interface _DKMotionMonitor : _DKMonitor {

	BOOL _monitoringActivity;
	BOOL _shouldRecordMotion;
	BOOL _activateTimer;
	long long _lastReportedMotionState;
	CMMotionActivityManager* _activityManager;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_source> _motionStateProcessingTimer;
	unsigned long long _currentDominantMotionState;
	double _dominantActivityInterval;

}

@property (assign,nonatomic) BOOL monitoringActivity;                                               //@synthesize monitoringActivity=_monitoringActivity - In the implementation block
@property (assign,nonatomic) BOOL shouldRecordMotion;                                               //@synthesize shouldRecordMotion=_shouldRecordMotion - In the implementation block
@property (assign,nonatomic) long long lastReportedMotionState;                                     //@synthesize lastReportedMotionState=_lastReportedMotionState - In the implementation block
@property (nonatomic,retain) CMMotionActivityManager * activityManager;                             //@synthesize activityManager=_activityManager - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> motionStateProcessingTimer;              //@synthesize motionStateProcessingTimer=_motionStateProcessingTimer - In the implementation block
@property (nonatomic,readonly) unsigned long long currentDominantMotionState;                       //@synthesize currentDominantMotionState=_currentDominantMotionState - In the implementation block
@property (nonatomic,readonly) double dominantActivityInterval;                                     //@synthesize dominantActivityInterval=_dominantActivityInterval - In the implementation block
@property (nonatomic,readonly) BOOL activateTimer;                                                  //@synthesize activateTimer=_activateTimer - In the implementation block
+(id)eventStream;
+(id)entitlements;
+(unsigned long long)_activityTypeToMotionState:(id)arg1 ;
+(id)_eventWithState:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(void)synchronouslyReflectCurrentValue;
-(CMMotionActivityManager *)activityManager;
-(void)setActivityManager:(CMMotionActivityManager *)arg1 ;
-(void)addState:(id)arg1 ;
-(id)classesForSecureStateDecoding;
-(id)initForUnitTest:(BOOL)arg1 ;
-(void)computeDominantMotionState;
-(void)addMotionActivity:(id)arg1 ;
-(BOOL)monitoringActivity;
-(void)setMonitoringActivity:(BOOL)arg1 ;
-(BOOL)shouldRecordMotion;
-(void)setShouldRecordMotion:(BOOL)arg1 ;
-(long long)lastReportedMotionState;
-(void)setLastReportedMotionState:(long long)arg1 ;
-(NSObject*<OS_dispatch_source>)motionStateProcessingTimer;
-(void)setMotionStateProcessingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned long long)currentDominantMotionState;
-(double)dominantActivityInterval;
-(BOOL)activateTimer;
-(id)init;
-(void)update;
-(void)stop;
-(void)start;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
@end

