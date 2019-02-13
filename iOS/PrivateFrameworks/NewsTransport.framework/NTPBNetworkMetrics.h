//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBNetworkMetrics : PBCodable <NSCopying>
{
    NSMutableArray *_failures;
    NSMutableArray *_successes;
}

+ (Class)failuresType;
+ (Class)successesType;
@property(retain, nonatomic) NSMutableArray *failures; // @synthesize failures=_failures;
@property(retain, nonatomic) NSMutableArray *successes; // @synthesize successes=_successes;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)failuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)failuresCount;
- (void)addFailures:(id)arg1;
- (void)clearFailures;
- (id)successesAtIndex:(unsigned long long)arg1;
- (unsigned long long)successesCount;
- (void)addSuccesses:(id)arg1;
- (void)clearSuccesses;
- (void)dealloc;

@end
