/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:50:30 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BiometricKitDelegate <NSObject>
@optional
-(void)enrollResult:(id)arg1;
-(void)enrollUpdate:(id)arg1;
-(void)enrollFeedback:(id)arg1;
-(void)matchResult:(id)arg1;
-(void)matchResult:(id)arg1 withDetails:(id)arg2;
-(void)statusMessage:(unsigned)arg1;
-(void)enrollProgress:(id)arg1;
-(void)homeButtonPressed;
-(void)touchIDButtonPressed:(BOOL)arg1;
-(void)templateUpdate:(id)arg1 withDetails:(id)arg2;
-(void)taskResumeStatus:(int)arg1;

@end

