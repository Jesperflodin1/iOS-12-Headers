//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, StoreKitClientIdentity;
@protocol SKProductsResponse;

@interface LoadMicroPaymentProductsOperation : ISOperation
{
    StoreKitClientIdentity *_clientIdentity;
    NSArray *_productIdentifiers;
    id <SKProductsResponse> _response;
}

- (_Bool)_loadResponseForIdentity:(id)arg1 batchSize:(long long)arg2 returningError:(id *)arg3;
- (id)_copyResponseForIdentity:(id)arg1 identifiers:(id)arg2 returningError:(id *)arg3;
- (id)_copyQueryStringDictionaryForIdentity:(id)arg1 productIdentifiers:(id)arg2;
- (long long)_batchSizeForIdentity:(id)arg1 error:(id *)arg2;
- (void)run;
@property(copy) StoreKitClientIdentity *clientIdentity;
@property(readonly) NSArray *productIdentifiers;
- (id)copyProductsResponse;
- (void)dealloc;
- (id)initWithProductIdentifiers:(id)arg1;

@end

