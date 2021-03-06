//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapServiceTraits, SearchFieldItem;
@protocol MKMapServiceTicket, SearchManagerDelegate;

__attribute__((visibility("hidden")))
@interface SearchManager : NSObject
{
    unsigned long long _selectedIndex;
    id <SearchManagerDelegate> _delegate;
    SearchFieldItem *_searchFieldItem;
    id <MKMapServiceTicket> _activeSearchTicket;
    GEOMapServiceTraits *_activeTraits;
}

@property(copy, nonatomic) GEOMapServiceTraits *activeTraits; // @synthesize activeTraits=_activeTraits;
@property(retain, nonatomic) id <MKMapServiceTicket> activeSearchTicket; // @synthesize activeSearchTicket=_activeSearchTicket;
@property(copy, nonatomic) SearchFieldItem *searchFieldItem; // @synthesize searchFieldItem=_searchFieldItem;
@property(nonatomic) __weak id <SearchManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_searchReceivedNearbyCategoryResults:(id)arg1 sectionHeader:(id)arg2 origin:(long long)arg3 andError:(id)arg4;
- (void)_searchReceivedResults:(id)arg1;
- (void)_searchCanceled;
- (void)_searchFailedWithError:(id)arg1;
- (void)_handleGeocoderError:(id)arg1;
- (void)cancelSearch;
- (void)_searchForBookmarkSearchResult:(id)arg1 origin:(long long)arg2;
- (void)_searchForAddress:(id)arg1 traits:(id)arg2 source:(int)arg3;
- (void)_resolveRefinementForSearch:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_searchForHistoryItem:(id)arg1 completedQuery:(id)arg2 traits:(id)arg3 source:(int)arg4;
- (void)_searchForSearchResults:(id)arg1 completedQuery:(id)arg2;
- (void)_searchForSearchInfo:(id)arg1 completedQuery:(id)arg2;
- (void)_searchForAddress:(id)arg1 completedQuery:(id)arg2 traits:(id)arg3 source:(int)arg4;
- (void)_searchForAddressString:(id)arg1 label:(id)arg2 defaultSearchResultType:(unsigned int)arg3 traits:(id)arg4 source:(int)arg5;
- (void)_forwardGeocodeAddress:(id)arg1 addressString:(id)arg2 addressBookAddress:(id)arg3 label:(id)arg4 defaultSearchResultType:(unsigned int)arg5 traits:(id)arg6 source:(int)arg7;
- (void)_searchForMapKitHandle:(id)arg1 traits:(id)arg2 source:(int)arg3;
- (void)_searchForChildPlace:(id)arg1 traits:(id)arg2 source:(int)arg3;
- (void)_searchForExternalURLQuery:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 traits:(id)arg6 source:(int)arg7;
- (void)_searchForCompletion:(id)arg1 traits:(id)arg2 source:(int)arg3;
- (void)_searchForNearbyCategory:(id)arg1 traits:(id)arg2 source:(int)arg3;
- (void)_searchForVenueCategoryItem:(id)arg1 traits:(id)arg2 source:(int)arg3;
- (void)_searchForCategory:(id)arg1 traits:(id)arg2 defaultSearchResultType:(unsigned int)arg3 completedQuery:(id)arg4 source:(int)arg5 maxResults:(unsigned int)arg6;
- (void)_searchForSuggestion:(id)arg1 traits:(id)arg2 source:(int)arg3;
- (void)_searchForString:(id)arg1 traits:(id)arg2 defaultSearchResultType:(unsigned int)arg3 completedQuery:(id)arg4 retainedSearchMetadata:(id)arg5 source:(int)arg6;
- (void)searchForSearchFieldItem:(id)arg1 traits:(id)arg2 source:(int)arg3;
- (void)_submitSearchTicket:(id)arg1 defaultSearchResultType:(unsigned int)arg2 saveToHistory:(_Bool)arg3 placeDisplayHistory:(id)arg4 origin:(long long)arg5;
- (void)_submitSearchTicket:(id)arg1 defaultSearchResultType:(unsigned int)arg2 saveToHistory:(_Bool)arg3 origin:(long long)arg4;
- (void)_submitNearbyCategorySearchTicket:(id)arg1 defaultSearchResultType:(unsigned int)arg2 origin:(long long)arg3;
- (void)_submitTicket:(id)arg1 defaultSearchResultType:(unsigned int)arg2 origin:(long long)arg3;
- (void)_submitCategorySearchTicket:(id)arg1 defaultSearchResultType:(unsigned int)arg2 origin:(long long)arg3;
- (void)reset;
- (void)dealloc;

@end

