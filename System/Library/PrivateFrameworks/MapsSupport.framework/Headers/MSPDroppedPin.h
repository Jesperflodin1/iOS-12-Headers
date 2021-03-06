//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class GEOLatLng, GEOMapRegion, PBUnknownFields;

@interface MSPDroppedPin : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _timestamp;
    int _floorOrdinal;
    GEOLatLng *_latLng;
    GEOMapRegion *_mapRegion;
    struct {
        unsigned int timestamp:1;
        unsigned int floorOrdinal:1;
    } _has;
}

@property(nonatomic) int floorOrdinal; // @synthesize floorOrdinal=_floorOrdinal;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) GEOLatLng *latLng; // @synthesize latLng=_latLng;
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
@property(nonatomic) _Bool hasFloorOrdinal;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasMapRegion;
@property(readonly, nonatomic) _Bool hasLatLng;

@end

