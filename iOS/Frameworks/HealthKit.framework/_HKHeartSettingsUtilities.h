//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _HKHeartSettingsUtilities : NSObject
{
}

+ (id)heartRateSettingsURL;
+ (_Bool)isBackgroundHeartRateEnabled;
+ (_Bool)isWristDetectionEnabled;
+ (_Bool)isHeartRateEnabled;
+ (long long)bradycardiaThresholdHeartRate;
+ (_Bool)isBradycardiaDetectionEnabled;
+ (_Bool)isBradycardiaDetectionSupportedOnAllWatches;
+ (_Bool)isBradycardiaDetectionSupportedOnActiveWatch;
+ (long long)tachycardiaThresholdHeartRate;
+ (_Bool)isTachycardiaDetectionEnabled;

@end
