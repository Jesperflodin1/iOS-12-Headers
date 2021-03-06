/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:39 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RCPreviewControllerObserver <NSObject>
@optional
-(void)previewControllerDidChangePreparingState:(id)arg1;
-(void)previewController:(id)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2;
-(void)previewController:(id)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2 didJumpTime:(BOOL)arg3;

@required
-(void)previewController:(id)arg1 playbackDidStopPlayingWithError:(id)arg2;
-(void)previewController:(id)arg1 playbackDidBeginWithRate:(float)arg2;
-(void)previewController:(id)arg1 playbackTimeDidJumpWithPreviousTime:(double)arg2;

@end

