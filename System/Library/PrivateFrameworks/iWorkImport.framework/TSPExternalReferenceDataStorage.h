//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPFileDataStorage.h>

@class NSData, NSURL, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface TSPExternalReferenceDataStorage : TSPFileDataStorage
{
    NSURL *_URL;
    NSData *_bookmarkData;
    _Bool _isReachable;
    TSPObjectContext *_context;
}

- (void).cxx_destruct;
- (_Bool)isReadable;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)bookmarkDataForArchiver:(id)arg1;
- (_Bool)archiveInfoMessage:(struct DataInfo *)arg1 archiver:(id)arg2 packageWriter:(id)arg3;
- (id)initWithBookmarkData:(id)arg1 context:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

