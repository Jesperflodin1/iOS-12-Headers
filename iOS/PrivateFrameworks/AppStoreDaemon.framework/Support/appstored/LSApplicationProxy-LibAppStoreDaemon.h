//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreServices/LSApplicationProxy.h>

@class PurchaseOwner;

@interface LSApplicationProxy (LibAppStoreDaemon)
- (id)lib_extensionType:(long long)arg1;
@property(readonly) PurchaseOwner *lib_purchaseOwner;
@property(readonly) _Bool lib_isOpenable;
@property(readonly) _Bool lib_isFamilyShared;
@property(readonly) long long lib_extensionTypes;
@end
