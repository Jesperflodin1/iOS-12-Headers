/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:57:40 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libBKDM2.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BiometricKitXPCExportedClientObject, NSTimer;

@interface FaceDetectContext : NSObject {

	BOOL _continuous;
	BOOL _highPriority;
	BOOL _checked;
	BOOL _timeouted;
	BOOL _finished;
	BiometricKitXPCExportedClientObject* _client;
	unsigned long long _endAbsoluteTime;
	NSTimer* _timer;

}

@property (nonatomic,retain) BiometricKitXPCExportedClientObject * client;              //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) BOOL continuous;                                           //@synthesize continuous=_continuous - In the implementation block
@property (assign,nonatomic) unsigned long long endAbsoluteTime;                        //@synthesize endAbsoluteTime=_endAbsoluteTime - In the implementation block
@property (assign,nonatomic) BOOL highPriority;                                         //@synthesize highPriority=_highPriority - In the implementation block
@property (assign,nonatomic) BOOL checked;                                              //@synthesize checked=_checked - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                           //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) BOOL timeouted;                                            //@synthesize timeouted=_timeouted - In the implementation block
@property (assign,nonatomic) BOOL finished;                                             //@synthesize finished=_finished - In the implementation block
-(BOOL)finished;
-(void)setFinished:(BOOL)arg1 ;
-(BiometricKitXPCExportedClientObject *)client;
-(void)setHighPriority:(BOOL)arg1 ;
-(BOOL)highPriority;
-(void)setClient:(BiometricKitXPCExportedClientObject *)arg1 ;
-(BOOL)continuous;
-(unsigned long long)endAbsoluteTime;
-(void)setEndAbsoluteTime:(unsigned long long)arg1 ;
-(BOOL)timeouted;
-(void)setTimeouted:(BOOL)arg1 ;
-(void)setContinuous:(BOOL)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(BOOL)checked;
@end

