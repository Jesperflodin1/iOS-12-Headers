//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKValueEditOption.h>

@class UIColor;

@interface NTKCharacterColorEditOption : NTKValueEditOption
{
}

+ (id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (unsigned long long)indexOfOption:(id)arg1 forCharacter:(unsigned long long)arg2 forDevice:(id)arg3;
+ (id)optionAtIndex:(unsigned long long)arg1 forCharacter:(unsigned long long)arg2 forDevice:(id)arg3;
+ (unsigned long long)numberOfOptionsForCharacter:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)optionWithOption:(id)arg1 forCharacter:(unsigned long long)arg2 forDevice:(id)arg3;
+ (id)optionWithFaceColor:(unsigned long long)arg1 forDevice:(id)arg2;
@property(readonly, nonatomic) double desaturation;
@property(readonly, nonatomic) UIColor *colorValue;
@property(readonly, nonatomic) unsigned long long color;
- (id)_valueToFaceBundleStringDict;
- (long long)swatchStyle;

@end

