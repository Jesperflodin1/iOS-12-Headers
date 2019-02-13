//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class AutocompleteContext, NSArray, NSString;
@protocol SearchBookmarksAndHistoryOperationDelegate;

__attribute__((visibility("hidden")))
@interface SearchBookmarksAndHistoryOperation : NSOperation
{
    NSString *_searchQuery;
    int _searchMode;
    NSArray *_history;
    NSArray *_bookmarks;
    id <SearchBookmarksAndHistoryOperationDelegate> _delegate;
    AutocompleteContext *_context;
}

@property(nonatomic) __weak id <SearchBookmarksAndHistoryOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_bookmarksAndHistoryResultsForSearchQuery:(id)arg1 searchMode:(int)arg2;
- (id)shortAddressForMapItem:(id)arg1;
- (_Bool)_removeCompletionString:(id)arg1 fromCompletions:(id)arg2 query:(id)arg3;
- (_Bool)_addCompletionString:(id)arg1 toCompletions:(id)arg2 query:(id)arg3;
- (void)main;
- (id)initWithSearchQuery:(id)arg1 searchMode:(int)arg2 bookmarks:(id)arg3 history:(id)arg4 context:(id)arg5;

@end
