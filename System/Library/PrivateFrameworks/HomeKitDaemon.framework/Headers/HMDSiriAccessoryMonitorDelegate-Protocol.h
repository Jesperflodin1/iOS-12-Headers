//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class HMDSiriAccessoryMonitor;

@protocol HMDSiriAccessoryMonitorDelegate
- (void)monitorHasNoAccessoriesForDragonSiri:(HMDSiriAccessoryMonitor *)arg1;
- (void)monitor:(HMDSiriAccessoryMonitor *)arg1 willNotAllowAccessoryForDragonSiri:(id)arg2;
- (void)monitor:(HMDSiriAccessoryMonitor *)arg1 willAllowAccessoryForDragonSiri:(id)arg2;
- (void)monitor:(HMDSiriAccessoryMonitor *)arg1 needsSiriCapabilityForAccessory:(id)arg2;
@end

