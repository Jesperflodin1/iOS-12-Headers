/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NACEventThrottler, MPVolumeController, MPAVRoutingController;

@interface _NACVolumeObserverRecord : NSObject {

	BOOL _volumeControlAvailable;
	BOOL _volumeWarningEnabled;
	BOOL _muted;
	float _EUVolumeLimit;
	NACEventThrottler* _throttler;
	MPVolumeController* _volumeController;
	MPAVRoutingController* _routingController;

}

@property (assign,getter=isVolumeControlAvailable,nonatomic) BOOL volumeControlAvailable;              //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,getter=isVolumeWarningEnabled,nonatomic) BOOL volumeWarningEnabled;                  //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                                //@synthesize muted=_muted - In the implementation block
@property (assign,nonatomic) float EUVolumeLimit;                                                      //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
@property (nonatomic,retain) NACEventThrottler * throttler;                                            //@synthesize throttler=_throttler - In the implementation block
@property (nonatomic,retain) MPVolumeController * volumeController;                                    //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,retain) MPAVRoutingController * routingController;                                //@synthesize routingController=_routingController - In the implementation block
-(void)setVolumeControlAvailable:(BOOL)arg1 ;
-(MPAVRoutingController *)routingController;
-(void)setVolumeController:(MPVolumeController *)arg1 ;
-(MPVolumeController *)volumeController;
-(BOOL)isVolumeControlAvailable;
-(float)EUVolumeLimit;
-(void)setEUVolumeLimit:(float)arg1 ;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(NACEventThrottler *)throttler;
-(void)setRoutingController:(MPAVRoutingController *)arg1 ;
-(void)setVolumeWarningEnabled:(BOOL)arg1 ;
-(BOOL)isVolumeWarningEnabled;
-(void)setThrottler:(NACEventThrottler *)arg1 ;
@end

