/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:27 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentAuthorizationServiceProtocol <NSObject>
@optional
-(void)handleHostApplicationDidCancel;
-(void)handleDismissWithCompletion:(/*^block*/id)arg1;
-(void)prepareWithPaymentRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
-(void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
-(void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
-(void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1;

@required
-(void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
-(void)handleHostApplicationWillResignActive:(BOOL)arg1;
-(void)handleHostApplicationDidBecomeActive;
-(void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
-(void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
-(void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;
-(void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;
-(void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;
-(void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;

@end

