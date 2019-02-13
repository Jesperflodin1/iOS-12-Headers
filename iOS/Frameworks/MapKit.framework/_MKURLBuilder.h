//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapURLBuilder;

@interface _MKURLBuilder : NSObject
{
    GEOMapURLBuilder *_realBuilder;
}

+ (id)URLForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(struct CLLocationCoordinate2D)arg4 address:(id)arg5 useWebPlaceCard:(_Bool)arg6 mapItemData:(id)arg7;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(struct CLLocationCoordinate2D)arg4 address:(id)arg5 useWebPlaceCard:(_Bool)arg6;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(struct CLLocationCoordinate2D)arg4 address:(id)arg5 extraStorage:(id)arg6 useWebPlaceCard:(_Bool)arg7;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(struct CLLocationCoordinate2D)arg4 address:(id)arg5 extraStorage:(id)arg6;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(struct CLLocationCoordinate2D)arg4 address:(id)arg5;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3;
+ (id)URLForDirectionsFromHereTo:(id)arg1 label:(id)arg2 muid:(unsigned long long)arg3 provider:(int)arg4 transport:(unsigned long long)arg5;
+ (id)URLForDirectionsFromHereTo:(id)arg1 transport:(unsigned long long)arg2;
+ (id)URLForDirectionsFromHereTo:(id)arg1;
+ (id)URLForDirectionsFrom:(id)arg1 to:(id)arg2 transport:(unsigned long long)arg3;
+ (id)URLForDirectionsFrom:(id)arg1 to:(id)arg2;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D)arg1 address:(id)arg2 label:(id)arg3 extraStorage:(id)arg4 useWebPlaceCard:(_Bool)arg5;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D)arg1 address:(id)arg2 label:(id)arg3 extraStorage:(id)arg4;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D)arg1 address:(id)arg2 label:(id)arg3 useWebPlaceCard:(_Bool)arg4;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D)arg1 address:(id)arg2 label:(id)arg3;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D)arg1 label:(id)arg2;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (id)URLForAddress:(id)arg1 label:(id)arg2;
+ (id)URLForAddress:(id)arg1;
+ (id)URLForSearch:(id)arg1 at:(struct CLLocationCoordinate2D)arg2 zoomLevel:(double)arg3;
+ (id)URLForSearch:(id)arg1 at:(struct CLLocationCoordinate2D)arg2 span:(CDStruct_c3b9c2ee)arg3;
+ (id)URLForSearch:(id)arg1 near:(struct CLLocationCoordinate2D)arg2;
+ (id)URLForSearch:(id)arg1;
- (void).cxx_destruct;
- (void)setContentProvider:(id)arg1;
- (void)setMapType:(unsigned long long)arg1;
- (id)buildForWeb;
- (id)build;
- (void)setBusinessAddress:(id)arg1;
- (void)setBusinessCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)initForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3;
- (id)initForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3;
- (void)setDestinationLabel:(id)arg1;
- (void)setDestinationMUID:(unsigned long long)arg1 provider:(int)arg2;
- (void)setTransportType:(unsigned long long)arg1;
- (void)setStartAddress:(id)arg1;
- (id)initForDirectionsTo:(id)arg1;
- (void)setDisplayRegion:(CDStruct_b7cb895d)arg1;
- (id)initForAddress:(id)arg1 label:(id)arg2;
- (id)initForCoordinate:(struct CLLocationCoordinate2D)arg1 label:(id)arg2;
- (id)initForCoordinate:(struct CLLocationCoordinate2D)arg1 address:(id)arg2 label:(id)arg3;
- (void)setSearchLocation:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2;
- (void)setSearchLocation:(struct CLLocationCoordinate2D)arg1 span:(CDStruct_c3b9c2ee)arg2;
- (void)setNear:(struct CLLocationCoordinate2D)arg1;
- (id)initForSearch:(id)arg1;

@end
