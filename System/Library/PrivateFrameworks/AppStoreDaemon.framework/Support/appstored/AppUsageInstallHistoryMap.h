//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface AppUsageInstallHistoryMap : NSObject
{
    NSArray *_allApps;
    NSMutableDictionary *_map;
    NSArray *_alllApps;
}

@property(readonly, nonatomic) NSArray *alllApps; // @synthesize alllApps=_alllApps;
- (void).cxx_destruct;
- (void)_prepare:(id)arg1 installEvents:(id)arg2;
- (id)metadataForBundleID:(id)arg1 date:(id)arg2;
- (id)initWithPriorInstalls:(id)arg1 installEvents:(id)arg2;

@end

