//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSArray, NSDate, RTLocation;

@protocol RTMapItemProvider <NSObject>
- (NSArray *)mapItemsWithinDistance:(double)arg1 location:(RTLocation *)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 error:(id *)arg5;
@end
