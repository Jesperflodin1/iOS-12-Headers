//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

@class CallHistoryDBClientHandle;

@interface CallHistoryDBClientHandleManager : CHSynchronizedLoggable
{
    CallHistoryDBClientHandle *_clientDBHandle;
}

+ (id)instance;
@property __weak CallHistoryDBClientHandle *clientDBHandle; // @synthesize clientDBHandle=_clientDBHandle;
- (void).cxx_destruct;
- (id)getDatabaseHandleSync;
- (id)getDatabaseHandle;
- (id)init;

@end
