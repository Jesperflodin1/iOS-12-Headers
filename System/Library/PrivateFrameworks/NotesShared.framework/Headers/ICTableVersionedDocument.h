//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/TTVersionedDocument.h>

@class CRDocument, ICTable, NSUUID;

@interface ICTableVersionedDocument : TTVersionedDocument
{
    NSUUID *_replica;
    CRDocument *_innerTableDocument;
    ICTable *_table;
}

+ (id)tableDocWithColumnCount:(unsigned long long)arg1 rowCount:(unsigned long long)arg2;
+ (id)tableDoc;
+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;
@property(retain, nonatomic) ICTable *table; // @synthesize table=_table;
- (void).cxx_destruct;
- (id)serializeCurrentVersion:(unsigned int *)arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
@property(readonly) CRDocument *innerTableDocument; // @synthesize innerTableDocument=_innerTableDocument;
- (void)setReplica:(id)arg1;
@property(readonly, nonatomic) NSUUID *replica; // @synthesize replica=_replica;
- (unsigned long long)mergeWithTableVersionedDocument:(id)arg1;

@end

