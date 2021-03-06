/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/News/Tea.framework/Tea
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tea/Tea-Structs.h>
#import <TeaUI/TeaUI.TouchInsetsButton.h>

@class NSString;

@interface Tea.NotificationButton : TeaUI.TouchInsetsButton {

	 onTap;
	 linkedToggle;
	 toggleLayerProvider;
	 toggleState;

}

@property (copy,nonatomic) NSString * accessibilityLabel; 
@property (copy,nonatomic) NSString * accessibilityHint; 
@property (copy,nonatomic) NSString * accessibilityValue; 
-(NSString *)accessibilityLabel;
-(NSString *)accessibilityValue;
-(NSString *)accessibilityHint;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(void)setAccessibilityHint:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

