/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:39 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSUUID, UITextRange;

@interface UIAccessibilityCustomRotorItemResult : NSObject {

	NSUUID* uuid;
	id<NSObject> _targetElement;
	UITextRange* _targetRange;

}

@property (nonatomic,retain) NSUUID * uuid; 
@property (assign,nonatomic,__weak) id<NSObject> targetElement;              //@synthesize targetElement=_targetElement - In the implementation block
@property (nonatomic,retain) UITextRange * targetRange;                      //@synthesize targetRange=_targetRange - In the implementation block
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(id<NSObject>)targetElement;
-(void)setTargetElement:(id<NSObject>)arg1 ;
-(void)setTargetRange:(UITextRange *)arg1 ;
-(id)initWithTargetElement:(id)arg1 targetRange:(id)arg2 ;
-(UITextRange *)targetRange;
@end

