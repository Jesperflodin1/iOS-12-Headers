//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKDimension.h>

#import <HealthKit/_HKFactor-Protocol.h>

@class HKBaseUnit, HKUnit, NSString;

__attribute__((visibility("hidden")))
@interface _HKBaseDimension : _HKDimension <_HKFactor>
{
    NSString *_name;
    HKBaseUnit *_reducibleBaseUnit;
    HKUnit *_reducedUnit;
    double _reductionCoefficient;
}

+ (id)_uniquedDefinedDimensionWithName:(id)arg1;
+ (id)_uniquedDimensionWithName:(id)arg1 configuration:(CDUnknownBlockType)arg2;
+ (id)nullDimension;
+ (id)titer;
+ (id)hearingSensitivity;
+ (id)equivalents;
+ (id)nonConvertibleIU;
+ (id)nonConvertibleMole;
+ (id)frequency;
+ (id)conductance;
+ (id)temperature;
+ (id)time;
+ (id)energy;
+ (id)pressure;
+ (id)volume;
+ (id)length;
+ (id)mass;
@property(nonatomic) double reductionCoefficient; // @synthesize reductionCoefficient=_reductionCoefficient;
@property(retain, nonatomic) HKUnit *reducedUnit; // @synthesize reducedUnit=_reducedUnit;
@property(retain, nonatomic) HKBaseUnit *reducibleBaseUnit; // @synthesize reducibleBaseUnit=_reducibleBaseUnit;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)_baseDimensions;
- (id)_initWithName:(id)arg1;
- (id)unitString;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)canBeReduced;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
