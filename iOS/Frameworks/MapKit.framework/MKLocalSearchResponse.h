//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MKLocalSearchResponse : NSObject
{
    NSArray *_mapItems;
    CDStruct_b7cb895d _boundingRegion;
}

@property(readonly, nonatomic) CDStruct_b7cb895d boundingRegion; // @synthesize boundingRegion=_boundingRegion;
@property(readonly, nonatomic) NSArray *mapItems; // @synthesize mapItems=_mapItems;
- (void).cxx_destruct;
- (id)description;
- (id)_dictionaryRepresentation;
- (id)_initWithMapItems:(id)arg1 boundingRegion:(id)arg2;

@end
