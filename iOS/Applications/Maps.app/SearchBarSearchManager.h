//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SearchAddressBookOperationDelegate-Protocol.h"
#import "SearchBookmarksAndHistoryOperationDelegate-Protocol.h"
#import "SearchMeCardLabelsOperationDelegate-Protocol.h"
#import "SearchRecentsOperationDelegate-Protocol.h"

@class MSPQuery, NSOperationQueue, NSString, SearchBarSearchResults;
@protocol SearchBarSearchManagerDelegate;

__attribute__((visibility("hidden")))
@interface SearchBarSearchManager : NSObject <SearchBookmarksAndHistoryOperationDelegate, SearchMeCardLabelsOperationDelegate, SearchAddressBookOperationDelegate, SearchRecentsOperationDelegate>
{
    id <SearchBarSearchManagerDelegate> _delegate;
    NSOperationQueue *_searchQueue;
    NSString *_query;
    SearchBarSearchResults *_searchResults;
    MSPQuery *_cachedHistory;
    MSPQuery *_cachedFavorites;
    _Bool _includeFavorites;
}

@property(nonatomic) _Bool includeFavorites; // @synthesize includeFavorites=_includeFavorites;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)_searchUsingSearchRequest:(id)arg1;
- (long long)_integerValueForDefaultsKey:(id)arg1 networkDefaultsKey:(id)arg2 defaultValue:(long long)arg3;
- (void)cancelCurrentSearch;
- (void)searchName:(id)arg1 forSearchMode:(int)arg2 withTypes:(long long)arg3 context:(id)arg4;
- (void)searchAddressBookOperation:(id)arg1 didMatchResults:(id)arg2;
- (void)searchRecentsOperation:(id)arg1 didMatchResults:(id)arg2;
- (void)meCardLabelsOperation:(id)arg1 didMatchResults:(id)arg2;
- (void)bookmarksAndHistoryOperation:(id)arg1 didFindMatches:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
