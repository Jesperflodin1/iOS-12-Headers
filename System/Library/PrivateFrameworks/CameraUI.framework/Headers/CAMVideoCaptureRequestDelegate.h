/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:43:29 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMVideoCaptureRequestDelegate <NSObject>
@optional
-(void)videoRequestDidStartCapturing:(id)arg1;
-(void)videoRequestDidStopCapturing:(id)arg1;
-(void)videoRequestDidCompleteCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)videoRequestDidCompleteLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)videoRequestDidCompleteRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;

@end

