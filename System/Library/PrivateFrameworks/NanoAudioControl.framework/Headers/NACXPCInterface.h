/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NACXPCInterface <NSObject>
@required
-(void)beginObservingVolumeForTarget:(id)arg1;
-(void)beginObservingAudioRoutesForCategory:(id)arg1;
-(void)endObservingVolumeForTarget:(id)arg1;
-(void)volumeValueForTarget:(id)arg1 result:(/*^block*/id)arg2;
-(void)volumeControlAvailabilityForTarget:(id)arg1 result:(/*^block*/id)arg2;
-(void)mutedStateForTarget:(id)arg1 result:(/*^block*/id)arg2;
-(void)hapticState:(/*^block*/id)arg1;
-(void)hapticIntensity:(/*^block*/id)arg1;
-(void)prominentHapticEnabled:(/*^block*/id)arg1;
-(void)systemMutedState:(/*^block*/id)arg1;
-(void)EULimitForTarget:(id)arg1 result:(/*^block*/id)arg2;
-(void)volumeWarningForTarget:(id)arg1 result:(/*^block*/id)arg2;
-(void)setVolumeValue:(float)arg1 target:(id)arg2;
-(void)setMuted:(BOOL)arg1 target:(id)arg2;
-(void)setHapticIntensity:(float)arg1;
-(void)setProminentHapticEnabled:(BOOL)arg1;
-(void)setHapticState:(long long)arg1;
-(void)setSystemMuted:(BOOL)arg1;
-(void)audioRoutesForCategory:(id)arg1 result:(/*^block*/id)arg2;
-(void)endObservingAudioRoutesForCategory:(id)arg1;
-(void)pickAudioRouteWithIdentifier:(id)arg1 category:(id)arg2;
-(void)playAudioAndHapticPreview;
-(void)playProminentHapticPreview;

@end

