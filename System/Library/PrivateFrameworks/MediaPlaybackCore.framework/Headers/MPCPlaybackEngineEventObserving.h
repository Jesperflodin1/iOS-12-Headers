/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:35:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPCPlaybackEngineEventObserving <NSObject>
@optional
-(void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;
-(void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
-(void)engine:(id)arg1 didChangeToItem:(id)arg2;
-(void)engine:(id)arg1 willResetQueueWithPlaybackContext:(id)arg2;
-(void)engine:(id)arg1 didResetQueueWithPlaybackContext:(id)arg2 error:(id)arg3;
-(void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;
-(void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;
-(void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;
-(void)engineWillBeginStateRestoration:(id)arg1;
-(void)engineDidEndStateRestoration:(id)arg1;

@end

