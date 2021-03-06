//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GuidanceSearchResultsDataProviding-Protocol.h"

@class GEOSearchCategory, IOSChromeViewController, MKMapService, NSString;
@protocol MKMapServiceTicket, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GuidanceSearchResultsCategoryDataProvider : NSObject <GuidanceSearchResultsDataProviding>
{
    GEOSearchCategory *_searchCategory;
    MKMapService *_mapService;
    IOSChromeViewController *_chromeViewController;
    NSObject<OS_dispatch_queue> *_workerQueue;
    id <MKMapServiceTicket> _searchTicket;
}

@property(retain, nonatomic) id <MKMapServiceTicket> searchTicket; // @synthesize searchTicket=_searchTicket;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(readonly, nonatomic) IOSChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) MKMapService *mapService; // @synthesize mapService=_mapService;
@property(readonly, nonatomic) GEOSearchCategory *searchCategory; // @synthesize searchCategory=_searchCategory;
- (void).cxx_destruct;
- (void)loadSearchResultsWithRouteInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *title;
- (void)_handleResponseForTicket:(id)arg1 mapItems:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_submitTicket:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithSearchCategory:(id)arg1 mapService:(id)arg2 chromeViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

