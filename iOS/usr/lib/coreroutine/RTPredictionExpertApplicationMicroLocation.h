//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTPredictionExpertApplication.h>

@interface RTPredictionExpertApplicationMicroLocation : RTPredictionExpertApplication
{
    double _maxMicroLocationEventAge;
}

@property(nonatomic) double maxMicroLocationEventAge; // @synthesize maxMicroLocationEventAge=_maxMicroLocationEventAge;
- (id)dateIntervalForAppLaunchEvent:(id)arg1;
- (void)_processEventsWithAppLaunchEvents:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)supportedEventClasses;
- (id)initWithQueue:(id)arg1 category:(long long)arg2 dataSource:(id)arg3 defaultsManager:(id)arg4 mediaRemote:(id)arg5 featureAddons:(id)arg6;

@end
