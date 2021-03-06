/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextDragSupporting <UITextDraggable>
@optional
-(NSRange*)_visibleRangeWithLayout:(BOOL)arg1;
-(id)willGenerateCancelPreview;
-(void)didGenerateCancelPreview:(id)arg1;
-(void)performCancelAnimations;
-(BOOL)_shouldObscureInput;

@required
-(BOOL)allowsDraggingAttachments;
-(BOOL)allowsEditingTextAttributes;
-(void)draggingStarted;
-(void)draggingFinished:(id)arg1;

@end

