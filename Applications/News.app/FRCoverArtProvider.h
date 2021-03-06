//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFLAggregateTileInfo, NSArray, NSMutableDictionary;
@protocol FRFeldsparContext;

@interface FRCoverArtProvider : NSObject
{
    NSArray *_tileInfos;
    id <FRFeldsparContext> _context;
    NSMutableDictionary *_coverArt;
    NSMutableDictionary *_cachedImages;
    NSMutableDictionary *_deferredCompletionBlocks;
    NSMutableDictionary *_operations;
    NFLAggregateTileInfo *_aggregateTileInfo;
}

@property(readonly, nonatomic) NFLAggregateTileInfo *aggregateTileInfo; // @synthesize aggregateTileInfo=_aggregateTileInfo;
@property(readonly, nonatomic) NSMutableDictionary *operations; // @synthesize operations=_operations;
@property(readonly, nonatomic) NSMutableDictionary *deferredCompletionBlocks; // @synthesize deferredCompletionBlocks=_deferredCompletionBlocks;
@property(readonly, nonatomic) NSMutableDictionary *cachedImages; // @synthesize cachedImages=_cachedImages;
@property(readonly, nonatomic) NSMutableDictionary *coverArt; // @synthesize coverArt=_coverArt;
@property(readonly, nonatomic) id <FRFeldsparContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) NSArray *tileInfos; // @synthesize tileInfos=_tileInfos;
- (void).cxx_destruct;
- (id)_cacheIdentifierForCovertArt:(id)arg1 size:(struct CGSize)arg2;
- (id)_resourceIDFromResourceURL:(id)arg1;
- (id)_imageForCoverArtImage:(id)arg1 resizedToSize:(struct CGSize)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)prewarmCovertArtForSize:(struct CGSize)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)imageForCoverArtImage:(id)arg1 resizedToSize:(struct CGSize)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)coverArtImageForHeadlineTileInfo:(id)arg1;
- (id)initWithAggregateTileInfo:(id)arg1 context:(id)arg2;

@end

