//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsDaemon/NDNewsServiceClient-Protocol.h>

@class NSString;
@protocol NDNewsServiceClient;

@interface NDNewsServiceConnectionClientProxy : NSObject <NDNewsServiceClient>
{
    id <NDNewsServiceClient> _client;
}

@property(nonatomic) __weak id <NDNewsServiceClient> client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)serviceHasNewTodayResults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

