//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSCoder.h>

@interface NSCoder (RemoteTransport)
- (id)supportedFeatures;
@property(readonly, getter=isSharedUser) _Bool sharedUser;
- (id)user;
- (_Bool)isForNonAdminSharedUser;
- (_Bool)isRemoteUserAdministrator;
- (_Bool)isRemoteGatewayCoder;
- (_Bool)isRemoteTransportOnSameAccount;
- (_Bool)isRemoteTransport;
@end
