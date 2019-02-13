//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLCacheIndexDatabaseGenericEnumerator.h"

@class QLCacheVersionedFileIdentifier;

@interface QLCacheIndexDatabaseFileInfoEnumerator : QLCacheIndexDatabaseGenericEnumerator
{
    _Bool _extraInfo;
    _Bool _ubiquitous;
    QLCacheVersionedFileIdentifier *_fileIdentifier;
}

- (void).cxx_destruct;
- (_Bool)nextFileWithCacheId:(unsigned long long *)arg1 versionedFileIdentifier:(id *)arg2 thumbnailCount:(unsigned int *)arg3 minSize:(float *)arg4 maxSize:(float *)arg5 totalDataLength:(unsigned long long *)arg6;
- (id)initWithSqliteDatabase:(id)arg1 toEnumerateUbiquitousFiles:(_Bool)arg2 extraInfo:(_Bool)arg3;

@end
