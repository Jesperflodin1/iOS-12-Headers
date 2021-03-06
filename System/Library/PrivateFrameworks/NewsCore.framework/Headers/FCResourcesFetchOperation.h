//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCMultiStepFetchOperation.h>

@class NSArray;
@protocol FCContentContext;

@interface FCResourcesFetchOperation : FCMultiStepFetchOperation
{
    _Bool _shouldDownloadAssets;
    long long _cacheLifetimeHint;
    id <FCContentContext> _context;
    NSArray *_resourceIDs;
    NSArray *_resources;
}

@property(retain, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(readonly, nonatomic) NSArray *resourceIDs; // @synthesize resourceIDs=_resourceIDs;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(nonatomic) long long cacheLifetimeHint; // @synthesize cacheLifetimeHint=_cacheLifetimeHint;
@property(nonatomic) _Bool shouldDownloadAssets; // @synthesize shouldDownloadAssets=_shouldDownloadAssets;
- (void).cxx_destruct;
- (_Bool)_shoudUsePermanentURLForResourceID:(id)arg1;
- (id)completeFetchOperation;
- (id)downloadAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchResourcesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 resourceIDs:(id)arg2;
- (id)init;

@end

