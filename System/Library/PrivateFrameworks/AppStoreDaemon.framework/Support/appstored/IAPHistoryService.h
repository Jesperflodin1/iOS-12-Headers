//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDIAPHistoryServiceProtocol-Protocol.h"

@interface IAPHistoryService : NSObject <ASDIAPHistoryServiceProtocol>
{
}

+ (id)defaultService;
- (void)getSubscriptionEntitlementsIgnoreCaches:(_Bool)arg1 forActiveAccountWithReplyHandler:(CDUnknownBlockType)arg2;
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;
- (void)refreshIAPsForActiveAccountWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)getIAPsForActiveAccountWithAdamIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (void)getAllIAPsForActiveAccountWithReplyHandler:(CDUnknownBlockType)arg1;

@end

