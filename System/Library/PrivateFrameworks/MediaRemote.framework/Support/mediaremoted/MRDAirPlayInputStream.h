//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRAVBufferedInputStream.h>

#import "APReceiverMediaRemoteCommunicationChannelDelegate-Protocol.h"

@class NSString;

@interface MRDAirPlayInputStream : MRAVBufferedInputStream <APReceiverMediaRemoteCommunicationChannelDelegate>
{
}

- (void)failedToSetupReverseCommunicationChannel:(id)arg1;
- (void)didSetupReverseCommunicationChannel:(id)arg1;
- (void)didCloseCommunicationChannel:(id)arg1;
- (void)didReceiveData:(id)arg1 fromCommunicationChannel:(id)arg2;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

