//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPLEngineStorageImplementation-Protocol.h"

@class CPLChangeBatch, CPLScopeFilter, CPLScopedIdentifier, NSArray;
@protocol NSFastEnumeration;

@protocol CPLEngineChangePipeImplementation <CPLEngineStorageImplementation>
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (NSArray *)allChangeBatches;
- (_Bool)compactChangeBatchesWithError:(id *)arg1;
- (_Bool)deleteAllChangesWithScopeFilter:(CPLScopeFilter *)arg1 error:(id *)arg2;
- (_Bool)deleteAllChangeBatchesWithError:(id *)arg1;
- (_Bool)hasSomeChangeWithScopeFilter:(CPLScopeFilter *)arg1;
- (_Bool)hasSomeChangeInScopesWithIdentifiers:(id <NSFastEnumeration>)arg1;
- (_Bool)hasSomeChangeWithScopedIdentifier:(CPLScopedIdentifier *)arg1;
- (_Bool)popNextBatchWithError:(id *)arg1;
- (CPLChangeBatch *)nextBatch;
- (_Bool)popChangeBatch:(id *)arg1 error:(id *)arg2;
- (_Bool)appendChangeBatch:(CPLChangeBatch *)arg1 error:(id *)arg2;
- (_Bool)hasQueuedBatches;
- (unsigned long long)countOfQueuedBatches;
@end

