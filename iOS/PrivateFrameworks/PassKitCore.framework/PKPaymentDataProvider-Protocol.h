//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSCalendar, NSData, NSDate, NSSet, NSString, PKExpressPassInformation, PKPass, PKPaymentApplication;
@protocol PKPaymentDataProviderDelegate;

@protocol PKPaymentDataProvider <NSObject>
@property(readonly, nonatomic) NSString *deviceName;
@property(nonatomic) __weak id <PKPaymentDataProviderDelegate> delegate;
@property(readonly, nonatomic) _Bool isPaymentHandoffDisabled;
@property(retain, nonatomic) NSString *defaultPaymentPassIdentifier;
@property(readonly, nonatomic) _Bool secureElementIsProductionSigned;
@property(readonly, nonatomic) NSString *secureElementIdentifier;
@property(readonly, nonatomic) _Bool isDeviceInRestrictedMode;
- (void)setPaymentHandoffDisabled:(_Bool)arg1;
- (void)setDefaultPaymentApplication:(PKPaymentApplication *)arg1 forPassUniqueIdentifier:(NSString *)arg2 completion:(void (^)(PKPass *))arg3;
- (PKPaymentApplication *)defaultPaymentApplicationForPassUniqueIdentifier:(NSString *)arg1;

@optional
- (void)removeDelegate:(id <PKPaymentDataProviderDelegate>)arg1;
- (void)addDelegate:(id <PKPaymentDataProviderDelegate>)arg1;
- (void)deletePaymentTransactionWithIdentifier:(NSString *)arg1 forPassWithUniqueIdentifier:(NSString *)arg2;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 withTransactionSource:(unsigned long long)arg2 withNotificationServiceData:(unsigned long long)arg3 limit:(long long)arg4 completion:(void (^)(NSSet *))arg5;
- (_Bool)supportsExpressMode:(NSString *)arg1;
- (_Bool)supportsExpressModeForExpressPassType:(long long)arg1;
- (_Bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (_Bool)supportsInAppPaymentsForPass:(PKPass *)arg1;
- (_Bool)supportsNotificationsForPass:(PKPass *)arg1;
- (_Bool)supportsMessagesForPass:(PKPass *)arg1;
- (_Bool)supportsTransactionsForPass:(PKPass *)arg1;
- (void)balancesForPaymentPassWithUniqueIdentifier:(NSString *)arg1 completion:(void (^)(NSSet *))arg2;
- (void)transactionCountByYearForPassWithUniqueIdentifier:(NSString *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 calendar:(NSCalendar *)arg4 completion:(void (^)(NSDictionary *))arg5;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(NSDate *)arg4 endDate:(NSDate *)arg5 limit:(long long)arg6 completion:(void (^)(NSSet *))arg7;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(NSString *)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(void (^)(NSSet *))arg5;
- (NSString *)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(NSString *)arg1;
- (void)startServiceModeForPassWithUniqueIdentifier:(NSString *)arg1 visibleViewController:(id)arg2;
- (void)transitStateWithPassUniqueIdentifier:(NSString *)arg1 paymentApplication:(PKPaymentApplication *)arg2 completion:(void (^)(PKTransitAppletState *))arg3;
- (void)felicaStateWithPassUniqueIdentifier:(NSString *)arg1 paymentApplication:(PKPaymentApplication *)arg2 completion:(void (^)(PKFelicaTransitAppletState *))arg3;
- (void)removeExpressPassWithUniqueIdentifier:(NSString *)arg1 visibleViewController:(id)arg2 completion:(void (^)(_Bool, PKExpressPassInformation *))arg3;
- (void)removeExpressPassesWithCardType:(long long)arg1 visibleViewController:(id)arg2 completion:(void (^)(_Bool, NSSet *))arg3;
- (void)setExpressWithPassInformation:(PKExpressPassInformation *)arg1 visibleViewController:(id)arg2 completion:(void (^)(_Bool, PKExpressPassInformation *))arg3;
- (void)removeExpressPassWithUniqueIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, PKExpressPassInformation *))arg2;
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(void (^)(_Bool, NSSet *))arg2;
- (void)setExpressWithPassInformation:(PKExpressPassInformation *)arg1 credential:(NSData *)arg2 completion:(void (^)(_Bool, PKExpressPassInformation *))arg3;
- (PKExpressPassInformation *)expressPassInformationForMode:(NSString *)arg1;
- (NSSet *)expressPassesInformationWithCardType:(long long)arg1;
- (NSSet *)expressPassesInformation;
@end
