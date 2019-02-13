//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SXDataRecordStore;

@interface SXDataTableSelectorValidator : NSObject
{
    SXDataRecordStore *_recordStore;
    unsigned long long _dataOrientation;
}

@property(readonly, nonatomic) unsigned long long dataOrientation; // @synthesize dataOrientation=_dataOrientation;
@property(readonly, nonatomic) SXDataRecordStore *recordStore; // @synthesize recordStore=_recordStore;
- (void).cxx_destruct;
- (id)descriptorForIndexPath:(CDStruct_2fea82da)arg1;
- (id)conditionEngineForSelector:(id)arg1 forIndexPath:(CDStruct_2fea82da)arg2;
- (_Bool)validateCellSelector:(id)arg1 forIndexPath:(CDStruct_2fea82da)arg2;
- (_Bool)validateColumnSelector:(id)arg1 forColumnIndex:(unsigned long long)arg2;
- (_Bool)validateRowSelector:(id)arg1 forRowIndex:(unsigned long long)arg2;
- (id)initWithRecordStore:(id)arg1 dataOrientation:(unsigned long long)arg2;

@end
