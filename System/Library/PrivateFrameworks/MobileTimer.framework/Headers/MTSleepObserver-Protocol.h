//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTAlarm, MTSleepMonitor, NSDate;

@protocol MTSleepObserver <NSObject>

@optional
- (void)sleepMonitor:(MTSleepMonitor *)arg1 sleepAlarmDidChange:(MTAlarm *)arg2;
- (void)sleepMonitor:(MTSleepMonitor *)arg1 wakeUpAlarmWasSnoozed:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
- (void)sleepMonitor:(MTSleepMonitor *)arg1 wakeUpAlarmWasDismissed:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
- (void)sleepMonitor:(MTSleepMonitor *)arg1 wakeUpAlarmDidFire:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
- (void)sleepMonitor:(MTSleepMonitor *)arg1 bedtimeWasReached:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
- (void)sleepMonitor:(MTSleepMonitor *)arg1 bedtimeReminderWasSnoozed:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
- (void)sleepMonitor:(MTSleepMonitor *)arg1 bedtimeReminderWasConfirmed:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
- (void)sleepMonitor:(MTSleepMonitor *)arg1 bedtimeReminderDidFire:(NSDate *)arg2 sleepAlarm:(MTAlarm *)arg3;
@end

