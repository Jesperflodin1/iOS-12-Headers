//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPRelayActivationClient, NSData, NSError;

@protocol HAPRelayActivationClientDelegate <NSObject>
- (void)relayActivationClient:(HAPRelayActivationClient *)arg1 didReceiveRelayCertificate:(NSData *)arg2;
- (void)relayActivationClient:(HAPRelayActivationClient *)arg1 didReceiveChallenge:(NSData *)arg2;
- (void)relayActivationClient:(HAPRelayActivationClient *)arg1 didCloseWithError:(NSError *)arg2;
@end
