//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCoder.h>

@class HMFMessage;

@interface NSCoder (XPCTransport)
- (_Bool)isAuthorizedForLocationAccess;
- (_Bool)isEntitledForSPIAccess;
- (id)applicationBundleIdentifier;
@property(readonly) unsigned long long hmd_homeManagerOptions;
@property(readonly) HMFMessage *hmd_message;
@property(readonly, getter=isXPCTransport) _Bool xpcTransport;
@end

