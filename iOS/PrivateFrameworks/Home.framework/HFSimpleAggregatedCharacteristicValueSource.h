//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFAggregatedCharacteristicValueSource-Protocol.h>

@class HFServiceDescriptor, NSDictionary, NSSet, NSString;
@protocol HFCharacteristicValueSource;

@interface HFSimpleAggregatedCharacteristicValueSource : NSObject <HFAggregatedCharacteristicValueSource>
{
    NSSet *_allServices;
    NSSet *_characteristics;
    HFServiceDescriptor *_primaryServiceDescriptor;
    id <HFCharacteristicValueSource> _valueSource;
    NSDictionary *_characteristicsByType;
}

+ (id)na_identity;
@property(readonly, copy, nonatomic) NSDictionary *characteristicsByType; // @synthesize characteristicsByType=_characteristicsByType;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) HFServiceDescriptor *primaryServiceDescriptor; // @synthesize primaryServiceDescriptor=_primaryServiceDescriptor;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)commitTransactionWithReason:(id)arg1;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)allCharacteristicsForCharacteristicType:(id)arg1;
- (id)metadataForCharacteristicType:(id)arg1;
- (id)writeValuesForCharacteristicTypes:(id)arg1;
- (id)writeValuesForCharacteristicRecipes:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1;
- (id)readValuesForServiceStateRecipe:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *characteristics; // @synthesize characteristics=_characteristics;
@property(readonly, copy, nonatomic) NSSet *allServices; // @synthesize allServices=_allServices;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithValueSource:(id)arg1 characteristics:(id)arg2 primaryServiceDescriptor:(id)arg3;
- (id)initWithValueSource:(id)arg1 services:(id)arg2 primaryServiceDescriptor:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
