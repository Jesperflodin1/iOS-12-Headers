//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDCoreRoutineHintSourceSubmissionSet : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSMutableArray *_instances;
    CDStruct_b5306035 _has;
}

+ (Class)instanceType;
@property(retain, nonatomic) NSMutableArray *instances; // @synthesize instances=_instances;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (unsigned long long)instancesCount;
- (void)addInstance:(id)arg1;
- (void)clearInstances;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end
