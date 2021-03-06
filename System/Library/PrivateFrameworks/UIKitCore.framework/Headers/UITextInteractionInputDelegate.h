/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextInputDelegate.h>

@class UITextInteraction, NSString;

@interface UITextInteractionInputDelegate : NSObject <UITextInputDelegate> {

	UITextInteraction* _rootInteraction;

}

@property (assign,nonatomic,__weak) UITextInteraction * rootInteraction;              //@synthesize rootInteraction=_rootInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textWillChange:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)selectionWillChange:(id)arg1 ;
-(void)selectionDidChange:(id)arg1 ;
-(void)setRootInteraction:(UITextInteraction *)arg1 ;
-(UITextInteraction *)rootInteraction;
@end

