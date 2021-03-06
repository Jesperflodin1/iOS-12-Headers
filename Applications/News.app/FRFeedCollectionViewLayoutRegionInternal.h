//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRFeedCollectionViewLayoutRegion.h"

@class NFLBatchContext, NSOrderedSet, NSString;

@interface FRFeedCollectionViewLayoutRegionInternal : FRFeedCollectionViewLayoutRegion
{
    NFLBatchContext *_batchContext;
    NSString *_batchID;
    NSOrderedSet *_batchManifest;
}

@property(readonly, copy, nonatomic) NSOrderedSet *batchManifest; // @synthesize batchManifest=_batchManifest;
@property(copy, nonatomic) NSString *batchID; // @synthesize batchID=_batchID;
@property(copy, nonatomic) NFLBatchContext *batchContext; // @synthesize batchContext=_batchContext;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 layoutInfos:(id)arg2 batchContext:(id)arg3 batchID:(id)arg4 batchManifest:(id)arg5;
- (id)initWithIdentifier:(id)arg1 layoutInfos:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

