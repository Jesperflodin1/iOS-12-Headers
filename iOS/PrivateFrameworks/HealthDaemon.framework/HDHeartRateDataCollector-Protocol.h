//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDDataCollector-Protocol.h>

@class HDHeartRateSensorDatum, HKDevice, HKSource;
@protocol HDDataCollector;

@protocol HDHeartRateDataCollector <HDDataCollector>

@optional
- (void)dataCollector:(id <HDDataCollector>)arg1 didCollectHeartRate:(HDHeartRateSensorDatum *)arg2 device:(HKDevice *)arg3 source:(HKSource *)arg4;
@end
