//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCHChartAxisID, TSCHChartGridAdapter;

__attribute__((visibility("hidden")))
@interface TSCHChartSeriesAxisStorage : NSObject
{
    TSCHChartGridAdapter *adapter;
    TSCHChartAxisID *axisID;
}

@property(retain, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID;
@property(retain, nonatomic) TSCHChartGridAdapter *adapter; // @synthesize adapter;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2 multiDataSetIndex:(unsigned long long)arg3;
- (id *)valuesAtIndexes:(struct _NSRange)arg1 multiDataSetIndex:(unsigned long long)arg2;
- (id)valueAtIndex:(unsigned long long)arg1 multiDataSetIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfValues;

@end
