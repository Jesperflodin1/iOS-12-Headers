/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:39:40 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTLowPowerModeMonitor : VTEventMonitor {

	unsigned char _powerMode;

}
+(id)sharedInstance;
-(void)_stopMonitoring;
-(void)_didReceiveLowPowerModeChanged;
-(unsigned char)_checkPowerMode;
-(void)_didReceiveLowPowerModeChangedInQueue:(unsigned char)arg1 ;
-(void)_notifyObserver:(id)arg1 withPowerMode:(unsigned char)arg2 ;
-(unsigned char)powerMode;
-(BOOL)isLowPowerMode;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(id)init;
@end

