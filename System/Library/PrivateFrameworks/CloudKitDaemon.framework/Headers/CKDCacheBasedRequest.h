//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDKeyValueDiskCache, CKDOperation, CKDPublicIdentityLookupService;

__attribute__((visibility("hidden")))
@interface CKDCacheBasedRequest : NSObject
{
    _Bool _isCancelled;
    CKDOperation *_operation;
    CKDKeyValueDiskCache *_cache;
    CKDPublicIdentityLookupService *_lookupService;
    unsigned long long _fetchBatchSize;
}

@property(nonatomic) unsigned long long fetchBatchSize; // @synthesize fetchBatchSize=_fetchBatchSize;
@property(nonatomic) __weak CKDPublicIdentityLookupService *lookupService; // @synthesize lookupService=_lookupService;
@property(nonatomic) __weak CKDKeyValueDiskCache *cache; // @synthesize cache=_cache;
@property(nonatomic) __weak CKDOperation *operation; // @synthesize operation=_operation;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (void).cxx_destruct;
- (void)performRequest;
- (id)spawnURLRequests;
- (void)finishWithError:(id)arg1;
- (void)cancel;
- (id)init;

@end

