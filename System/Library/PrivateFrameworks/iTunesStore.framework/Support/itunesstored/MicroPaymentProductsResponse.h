//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MicroPaymentProductsResponse : NSObject
{
    NSArray *_expectedIdentifiers;
    NSArray *_invalidIdentifiers;
    NSArray *_products;
}

@property(readonly, nonatomic) NSArray *products; // @synthesize products=_products;
@property(readonly, nonatomic) NSArray *invalidIdentifiers; // @synthesize invalidIdentifiers=_invalidIdentifiers;
@property(copy, nonatomic) NSArray *expectedIdentifiers; // @synthesize expectedIdentifiers=_expectedIdentifiers;
- (_Bool)loadFromDictionary:(id)arg1 error:(id *)arg2;
- (void)dealloc;

@end

