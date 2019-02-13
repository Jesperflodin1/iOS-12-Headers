//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class GEOMapItemStorage, NSString, PBUnknownFields;

@interface MSPPlaceDisplay : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOMapItemStorage *_placeMapItemStorage;
    NSString *_supersededSearchIdentifier;
}

@property(retain, nonatomic) NSString *supersededSearchIdentifier; // @synthesize supersededSearchIdentifier=_supersededSearchIdentifier;
@property(retain, nonatomic) GEOMapItemStorage *placeMapItemStorage; // @synthesize placeMapItemStorage=_placeMapItemStorage;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSupersededSearchIdentifier;
@property(readonly, nonatomic) _Bool hasPlaceMapItemStorage;

@end
