/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITextRangeImpl, UITextPosition;

@interface UITextRange : NSObject

@property (getter=_isCaret,nonatomic,readonly) BOOL isCaret; 
@property (getter=_isRanged,nonatomic,readonly) BOOL isRanged; 
@property (getter=_isImpl,nonatomic,readonly) UITextRangeImpl * isImpl; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) UITextPosition * start; 
@property (nonatomic,readonly) UITextPosition * end; 
-(UITextPosition *)start;
-(BOOL)isEmpty;
-(UITextPosition *)end;
-(BOOL)_isRanged;
-(BOOL)_isCaret;
-(id)_isImpl;
@end

