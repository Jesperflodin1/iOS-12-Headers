//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMCharacteristicMetadata.h>

@class HFNumberValueConstraints;

@interface HMCharacteristicMetadata (HFAdditions)
- (id)hf_percentageForCharacteristicValue:(id)arg1;
- (id)hf_characteristicValueForPercentage:(double)arg1;
@property(readonly, nonatomic) _Bool hf_isNumeric;
- (_Bool)hf_isInteger;
- (_Bool)hf_isValidValue:(id)arg1;
- (id)hf_valueRoundedToNearestStepValue:(id)arg1;
- (id)hf_normalizedValueForValue:(id)arg1;
- (_Bool)hf_isEqualToMetadata:(id)arg1;
@property(readonly, nonatomic) HFNumberValueConstraints *hf_numericValueConstraints;
@end

