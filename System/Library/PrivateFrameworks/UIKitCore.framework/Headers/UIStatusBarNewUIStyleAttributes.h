/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarStyleAttributes.h>

@class UIColor;

@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes {

	UIColor* _backgroundColor;
	UIColor* _foregroundColor;
	BOOL _hasBusyBackground;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isTranslucent;
-(id)initWithRequest:(id)arg1 ;
-(long long)legibilityStyle;
-(id)foregroundColor;
-(Class)foregroundStyleClass;
-(id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3 hasBusyBackground:(BOOL)arg4 ;
-(id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3 ;
-(BOOL)isTransparent;
-(BOOL)shouldUseVisualAltitude;
-(id)backgroundColorWithTintColor:(id)arg1 ;
-(id)newForegroundStyleWithHeight:(double)arg1 ;
@end

