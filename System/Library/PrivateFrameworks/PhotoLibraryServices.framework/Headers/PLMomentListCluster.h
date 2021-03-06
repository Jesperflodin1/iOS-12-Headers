//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface PLMomentListCluster : NSObject
{
    unsigned long long _month;
    unsigned long long _year;
    unsigned long long _numberOfMoments;
    unsigned long long _numberOfAssets;
    NSMutableSet *__moments;
}

@property(readonly, nonatomic) NSMutableSet *_moments; // @synthesize _moments=__moments;
@property(readonly, nonatomic) unsigned long long numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(readonly, nonatomic) unsigned long long numberOfMoments; // @synthesize numberOfMoments=_numberOfMoments;
@property(readonly, nonatomic) unsigned long long year; // @synthesize year=_year;
@property(readonly, nonatomic) unsigned long long month; // @synthesize month=_month;
- (unsigned long long)peak;
- (void)removeMoment:(id)arg1;
- (void)addMoment:(id)arg1;
- (void)dealloc;
- (id)initWithMonth:(unsigned long long)arg1 year:(unsigned long long)arg2;
- (id)init;

@end

