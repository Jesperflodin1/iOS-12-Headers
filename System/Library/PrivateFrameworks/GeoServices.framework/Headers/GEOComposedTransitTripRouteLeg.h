//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOComposedTransitBaseRouteLeg.h>

@class GEOComposedTransitTripRouteStep, NSArray, NSDate, NSTimeZone;
@protocol GEOTransitLine, GEOTransitSystem;

@interface GEOComposedTransitTripRouteLeg : GEOComposedTransitBaseRouteLeg
{
    GEOComposedTransitTripRouteStep *_boardStep;
    GEOComposedTransitTripRouteStep *_alightStep;
    GEOComposedTransitTripRouteStep *_blockTransferStep;
    unsigned long long _numberOfTransitStops;
    unsigned long long _selectedRideOptionIndex;
    NSArray *_actionSheetDescriptions;
    NSArray *_routeDetailsOptionsArtwork;
    NSArray *_actionSheetOptionsArtwork;
    NSArray *_transitLineOptions;
    NSArray *_alightNotifications;
}

@property(readonly, nonatomic) NSArray *transitLineOptions; // @synthesize transitLineOptions=_transitLineOptions;
@property(nonatomic) unsigned long long selectedRideOptionIndex; // @synthesize selectedRideOptionIndex=_selectedRideOptionIndex;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool notifyBeforeAlightStep;
@property(readonly, nonatomic) NSArray *routeLineArtwork;
@property(readonly, nonatomic) NSDate *lastStepArrivalDate;
- (unsigned long long)numberOfTransitStops;
@property(readonly, nonatomic) double departureFrequencyMax;
@property(readonly, nonatomic) double departureFrequencyMin;
@property(readonly, nonatomic) NSArray *departureTimes;
@property(readonly, nonatomic) NSDate *departureTime;
@property(readonly, nonatomic) NSTimeZone *departureTimeZone;
@property(readonly, nonatomic) id <GEOTransitLine> transitLine;
@property(readonly, nonatomic) id <GEOTransitSystem> transitSystem;
- (id)transitLineForRideOption:(unsigned long long)arg1;
- (id)actionSheetDescriptionForRideOption:(unsigned long long)arg1;
- (id)actionSheetArtworkForRideOption:(unsigned long long)arg1;
- (id)routeDetailsPrimaryArtworkForRideOption:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long rideOptionsCount;
- (id)blockTransferStep;
@property(readonly, nonatomic) GEOComposedTransitTripRouteStep *alightStep; // @synthesize alightStep=_alightStep;
@property(readonly, nonatomic) GEOComposedTransitTripRouteStep *boardStep; // @synthesize boardStep=_boardStep;
- (_Bool)_needsStepData;
- (void)_cacheStepData;
- (id)initWithComposedRoute:(id)arg1 tripIndex:(unsigned long long)arg2 stepRange:(struct _NSRange)arg3 transitStepRange:(struct _NSRange)arg4 pointRange:(struct _NSRange)arg5;

@end

