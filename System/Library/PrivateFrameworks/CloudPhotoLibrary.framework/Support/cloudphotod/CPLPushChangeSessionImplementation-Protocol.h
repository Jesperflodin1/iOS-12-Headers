//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CPLChangeSessionImplementation-Protocol.h"

@class CPLChangeBatch;

@protocol CPLPushChangeSessionImplementation <CPLChangeSessionImplementation>
- (void)commitChangeBatch:(CPLChangeBatch *)arg1 withCompletionHandler:(void (^)(NSError *, unsigned long long, CPLPushChangeTasks *, NSString *))arg2;
@end

