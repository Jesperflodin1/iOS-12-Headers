//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBDJobScheduler : NSObject
{
    NSString *_domain;
}

+ (void)initializeBackgroundTaskAgentWithJobRunner:(CDUnknownBlockType)arg1;
+ (id)jobSchedulerForDomain:(id)arg1;
@property(copy) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)removeScheduledJobs;
- (void)schdeuleUpdateJobWithTimeInterval:(double)arg1 replaceExisting:(_Bool)arg2;

@end

