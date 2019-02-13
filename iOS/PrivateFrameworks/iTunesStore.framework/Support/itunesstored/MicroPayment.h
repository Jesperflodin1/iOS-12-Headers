//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class MicroPaymentClient, NSData, NSDate, NSNumber, NSSet, NSString;

@interface MicroPayment : NSManagedObject
{
    NSString *_temporaryIdentifier;
    _Bool _transientFailed;
}

+ (_Bool)responseIsValid:(id)arg1;
+ (id)paymentEntityFromContext:(id)arg1;
@property(nonatomic, getter=isTransientFailed) _Bool transientFailed; // @synthesize transientFailed=_transientFailed;
- (void)_updateDownloadsFromResponse:(id)arg1;
- (id)_temporaryIdentifier;
- (long long)_serverStateForClientState:(long long)arg1;
- (long long)_clientStateForServerState:(long long)arg1;
- (void)setValuesWithPaymentTransaction:(id)arg1;
@property(retain, nonatomic) NSString *transactionIdentifier; // @dynamic transactionIdentifier;
- (void)awakeFromInsert;
- (void)setFailedWithError:(id)arg1;
@property(readonly, nonatomic) NSString *matchingIdentifier;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
- (void)mergeValuesFromResponse:(id)arg1;
- (_Bool)isEqualToResponse:(id)arg1 compareAllFields:(_Bool)arg2;
- (id)copyPaymentTransaction;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *actionParams; // @dynamic actionParams;
@property(retain, nonatomic) NSString *applicationUsername; // @dynamic applicationUsername;
@property(retain, nonatomic) NSString *askPermissionRequestIdentifier; // @dynamic askPermissionRequestIdentifier;
@property(retain, nonatomic) MicroPaymentClient *client; // @dynamic client;
@property(retain, nonatomic) NSSet *downloads; // @dynamic downloads;
@property(retain, nonatomic) NSData *errorData; // @dynamic errorData;
@property(retain, nonatomic) NSDate *insertDate; // @dynamic insertDate;
@property(retain, nonatomic) NSDate *originalPurchaseDate; // @dynamic originalPurchaseDate;
@property(retain, nonatomic) NSString *originalTransactionIdentifier; // @dynamic originalTransactionIdentifier;
@property(retain, nonatomic) NSString *partnerIdentifier; // @dynamic partnerIdentifier;
@property(retain, nonatomic) NSString *partnerTransactionIdentifier; // @dynamic partnerTransactionIdentifier;
@property(retain, nonatomic) NSString *productIdentifier; // @dynamic productIdentifier;
@property(retain, nonatomic) NSDate *purchaseDate; // @dynamic purchaseDate;
@property(retain, nonatomic) NSNumber *quantity; // @dynamic quantity;
@property(retain, nonatomic) NSData *receiptData; // @dynamic receiptData;
@property(retain, nonatomic) NSData *requestData; // @dynamic requestData;
@property(retain, nonatomic) NSNumber *simulatesAskToBuyInSandbox; // @dynamic simulatesAskToBuyInSandbox;
@property(retain, nonatomic) NSNumber *state; // @dynamic state;
@property(retain, nonatomic) NSNumber *supportsDeferredPayment; // @dynamic supportsDeferredPayment;
@property(retain, nonatomic) NSNumber *userDSID; // @dynamic userDSID;

@end
