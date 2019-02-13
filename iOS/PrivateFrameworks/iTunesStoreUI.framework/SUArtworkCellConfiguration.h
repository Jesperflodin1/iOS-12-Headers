//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUArrayCellConfiguration.h>

#import <iTunesStoreUI/ISStoreURLOperationDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface SUArtworkCellConfiguration : SUArrayCellConfiguration <ISStoreURLOperationDelegate>
{
    NSMutableDictionary *_artworkByURL;
    NSMutableArray *_artworkLoadOperations;
}

+ (id)copyDefaultContext;
- (id)_artworkImageForURL:(id)arg1 dataProvider:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)setRepresentedObject:(id)arg1;
- (void)reloadAfterArtworkLoad;
- (id)copyImageDataProvider;
- (void)cancelArtworkRequests;
- (id)artworkImageForURL:(id)arg1;
- (id)artworkImageForItemImage:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end
