//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBGenericIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBGenericIntent : PBCodable <_INPBGenericIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    NSString *_domain;
    _INPBIntentMetadata *_metadata;
    NSArray *_parameters;
    NSString *_verb;
}

+ (Class)parametersType;
@property(copy, nonatomic) NSString *verb; // @synthesize verb=_verb;
@property(copy, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) _INPBIntentMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasVerb;
- (id)parametersAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long parametersCount;
- (void)addParameters:(id)arg1;
- (void)clearParameters;
@property(readonly, nonatomic) _Bool hasMetadata;
@property(readonly, nonatomic) _Bool hasDomain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
