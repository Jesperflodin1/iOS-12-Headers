//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/NSObject-Protocol.h>

@class _HMAccessorySetting, _HMAccessorySettingGroup;

@protocol _HMAccesorySettingGroupDelegate <NSObject>
- (void)_settingGroup:(_HMAccessorySettingGroup *)arg1 didRemoveSettingGroup:(_HMAccessorySettingGroup *)arg2;
- (void)_settingGroup:(_HMAccessorySettingGroup *)arg1 didAddSettingGroup:(_HMAccessorySettingGroup *)arg2;
- (void)_settingGroup:(_HMAccessorySettingGroup *)arg1 didRemoveSetting:(_HMAccessorySetting *)arg2;
- (void)_settingGroup:(_HMAccessorySettingGroup *)arg1 didAddSetting:(_HMAccessorySetting *)arg2;
@end
