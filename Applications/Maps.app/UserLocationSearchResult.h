//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SearchResult.h"

#import "MKAnnotationPrivate-Protocol.h"

@class CLLocation, NSString;

__attribute__((visibility("hidden")))
@interface UserLocationSearchResult : SearchResult <MKAnnotationPrivate>
{
    double _reverseGeocodeUpdateTime;
    struct CLLocationCoordinate2D _reverseGeocodeCoordinate;
    double _reverseGeocodeAccuracy;
    _Bool _selected;
    CLLocation *_location;
}

@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (_Bool)requiresPanoramaIDCheck;
- (void)setReverseGeocoded:(_Bool)arg1;
- (_Bool)needsReverseGeocodeCheck;
- (void)_updateFloorOrdinalFromFloor:(id)arg1;
- (double)accuracy;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long representation;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

