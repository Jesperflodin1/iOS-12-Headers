/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:58 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPreviewInteractionDelegate <NSObject>
@optional
-(BOOL)previewInteractionShouldBegin:(id)arg1;
-(void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(BOOL)arg3;

@required
-(void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(BOOL)arg3;
-(void)previewInteractionDidCancel:(id)arg1;

@end

