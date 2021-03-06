//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPLEngineStorageImplementation-Protocol.h"

@class CPLRecordChange, CPLScopeFilter, CPLScopedIdentifier, NSString;
@protocol NSFastEnumeration;

@protocol CPLEngineCloudCacheImplementation <CPLEngineStorageImplementation>
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (id <NSFastEnumeration>)allRecordsIsFinal:(_Bool)arg1;
- (id <NSFastEnumeration>)recordsOfClass:(Class)arg1 isFinal:(_Bool)arg2;
- (_Bool)discardStagedChangesWithScopeFilter:(CPLScopeFilter *)arg1 error:(id *)arg2;
- (_Bool)discardStagedChangesForScopeWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (_Bool)commitStagedChangesForScopeWithIdentifier:(NSString *)arg1 error:(id *)arg2;
- (_Bool)confirmAllRecordsWithError:(id *)arg1;
- (_Bool)remapAllRecordsWithPreviousScopedIdentifier:(CPLScopedIdentifier *)arg1 newScopedIdentifier:(CPLScopedIdentifier *)arg2 error:(id *)arg3;
- (_Bool)hasRecordWithScopedIdentifier:(CPLScopedIdentifier *)arg1;
- (id <NSFastEnumeration>)recordsWithRelatedScopedIdentifier:(CPLScopedIdentifier *)arg1 isFinal:(_Bool)arg2;
- (CPLRecordChange *)recordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 isConfirmed:(_Bool *)arg2;
- (CPLRecordChange *)recordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 isFinal:(_Bool)arg2;
- (_Bool)deleteRecordWithScopedIdentifier:(CPLScopedIdentifier *)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;
- (_Bool)updateRecord:(CPLRecordChange *)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;
- (_Bool)addRecord:(CPLRecordChange *)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;
@end

