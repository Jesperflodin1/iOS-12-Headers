//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEFilterExtensionProviderProtocol-Protocol.h>

@class NEFilterReport, NSDictionary, NSFileHandle;

@protocol NEFilterDataExtensionProviderProtocol <NEFilterExtensionProviderProtocol>
- (void)report:(NEFilterReport *)arg1;
- (void)provideURLAppendStringMap:(NSDictionary *)arg1;
- (void)provideRemediationMap:(NSDictionary *)arg1;
- (void)handleRulesChanged;
- (void)providerControlSocketFileHandle:(NSFileHandle *)arg1;
- (void)fetchProviderConnectionWithCompletionHandler:(void (^)(NSXPCListenerEndpoint *))arg1;
@end
