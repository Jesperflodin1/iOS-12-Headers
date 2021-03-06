/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureRecognizer.h>

@interface MiroTouchingGestureRecognizer : UIGestureRecognizer {

	unsigned long long __touchCount;

}

@property (assign,setter=_setTouchCount:,nonatomic) unsigned long long _touchCount;              //@synthesize _touchCount=__touchCount - In the implementation block
-(unsigned long long)_touchCount;
-(void)_setTouchCount:(unsigned long long)arg1 ;
-(void)_incrementTouchesBy:(unsigned long long)arg1 ;
-(void)_decrementTouchesBy:(unsigned long long)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
@end

