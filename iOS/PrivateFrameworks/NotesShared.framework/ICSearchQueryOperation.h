//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ICSearchQuery, NSError, NSMutableArray, NSMutableDictionary, NSString;

@interface ICSearchQueryOperation : NSOperation
{
    _Bool _useRankingQueries;
    _Bool _performNLSearch;
    CDUnknownBlockType _foundItemsHandler;
    NSMutableArray *_results;
    NSError *_error;
    long long _requestIndex;
    ICSearchQuery *_defaultQuery;
    ICSearchQuery *_nlQuery;
    NSMutableDictionary *_resultsDictionary;
    NSMutableDictionary *_rankingScores;
    NSMutableDictionary *_relevancesBitField;
    NSString *_searchString;
}

+ (id)highlightStringForAttributedInputs:(id)arg1;
+ (void)nlSearchQueryWithSearchString:(id)arg1 queryString:(id *)arg2 rankingQueries:(id *)arg3 highlightString:(id *)arg4;
+ (id)queryStringForSearchString:(id)arg1 queryFields:(id)arg2 matchType:(unsigned char)arg3;
+ (id)exactMatchingQueryStringForTitleSearchString:(id)arg1;
+ (id)prefixMatchingQueryStringForSearchString:(id)arg1;
+ (id)queryFields;
@property(nonatomic) _Bool performNLSearch; // @synthesize performNLSearch=_performNLSearch;
@property(nonatomic) _Bool useRankingQueries; // @synthesize useRankingQueries=_useRankingQueries;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) NSMutableDictionary *relevancesBitField; // @synthesize relevancesBitField=_relevancesBitField;
@property(retain, nonatomic) NSMutableDictionary *rankingScores; // @synthesize rankingScores=_rankingScores;
@property(retain, nonatomic) NSMutableDictionary *resultsDictionary; // @synthesize resultsDictionary=_resultsDictionary;
@property(retain, nonatomic) ICSearchQuery *nlQuery; // @synthesize nlQuery=_nlQuery;
@property(retain, nonatomic) ICSearchQuery *defaultQuery; // @synthesize defaultQuery=_defaultQuery;
@property(nonatomic) long long requestIndex; // @synthesize requestIndex=_requestIndex;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(copy, nonatomic) CDUnknownBlockType foundItemsHandler; // @synthesize foundItemsHandler=_foundItemsHandler;
- (void).cxx_destruct;
- (void)cancel;
- (unsigned long long)relevanceBitFieldForSearchableItem:(id)arg1;
- (double)rankingScoreForSearchableItem:(id)arg1;
- (id)sortedSearchableItemsOfIdentifiers:(id)arg1;
- (void)runQuery:(id)arg1;
- (void)main;
- (id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2;
- (id)initWithSearchString:(id)arg1 useRankingQueries:(_Bool)arg2 performNLSearch:(_Bool)arg3;
- (id)init;

@end
