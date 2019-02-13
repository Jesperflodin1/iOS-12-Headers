//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CompletionProvider.h"

#import "WBSParsecSearchSessionDelegate-Protocol.h"

@class NSNumber, NSString, NSTimer, UniversalSearchSession, WBSCompletionQuery;

@interface UniversalSearchCompletionProvider : CompletionProvider <WBSParsecSearchSessionDelegate>
{
    NSTimer *_timeoutTimer;
    NSString *_queryString;
    NSString *_currentQueryString;
    WBSCompletionQuery *_currentQuery;
    NSNumber *_searchRenderTimeout;
    NSNumber *_otherRenderTimeout;
    NSNumber *_minRenderTimeout;
    UniversalSearchSession *_parsecSearchSession;
}

@property(retain, nonatomic) UniversalSearchSession *parsecSearchSession; // @synthesize parsecSearchSession=_parsecSearchSession;
@property(readonly, nonatomic) NSNumber *minRenderTimeout; // @synthesize minRenderTimeout=_minRenderTimeout;
@property(readonly, nonatomic) NSNumber *otherRenderTimeout; // @synthesize otherRenderTimeout=_otherRenderTimeout;
@property(retain, nonatomic) NSNumber *searchRenderTimeout; // @synthesize searchRenderTimeout=_searchRenderTimeout;
- (void).cxx_destruct;
- (unsigned long long)maximumCachedCompletionCount;
- (void)_parsecBagDidLoad:(id)arg1;
- (void)_updateTimeoutsFromBag:(id)arg1;
- (void)session:(id)arg1 didReceiveResults:(id)arg2 forQuery:(id)arg3;
- (id)currentInputTypeForSession:(id)arg1;
- (_Bool)shouldHideParsecResult:(id)arg1 basedOnHideRankGivenTopHit:(id)arg2 indexOfTopHitInFrequentlyVisitedSites:(unsigned long long *)arg3;
- (void)setQueryToComplete:(id)arg1;
- (id)completionsForQuery:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
