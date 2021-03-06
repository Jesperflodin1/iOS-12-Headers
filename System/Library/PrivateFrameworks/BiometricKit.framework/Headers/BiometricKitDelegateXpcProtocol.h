/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:43:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BiometricKitDelegateXpcProtocol <NSObject>
@required
-(BOOL)isDelegate;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
-(void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
-(void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
-(void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 client:(unsigned long long)arg3;
-(void)homeButtonPressed:(unsigned long long)arg1;
-(void)touchIDButtonPressed:(BOOL)arg1 client:(unsigned long long)arg2;
-(void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
-(void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2;

@end

