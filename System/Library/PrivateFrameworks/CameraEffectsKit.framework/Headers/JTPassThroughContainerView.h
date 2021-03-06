/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:39 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol JTPassThroughContainerViewDelegate;
@interface JTPassThroughContainerView : UIView {

	id<JTPassThroughContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<JTPassThroughContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<JTPassThroughContainerViewDelegate>)arg1 ;
-(id<JTPassThroughContainerViewDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

