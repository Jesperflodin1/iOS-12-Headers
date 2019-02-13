//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@class NSDate;

@interface RESessionRelevanceProvider : RERelevanceProvider
{
    _Bool _historic;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (id)_simulationDateFormatter;
+ (id)relevanceSimulatorID;
@property(readonly, nonatomic, getter=isHistoric) _Bool historic; // @synthesize historic=_historic;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)_hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 historic:(_Bool)arg3;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)init;

@end
