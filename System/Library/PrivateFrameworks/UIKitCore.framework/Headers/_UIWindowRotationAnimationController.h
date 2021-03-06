/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:50 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIWindowAnimationController.h>

@interface _UIWindowRotationAnimationController : _UIWindowAnimationController {

	BOOL _skipCallbacks;
	BOOL _updateStatusBarIfNecessary;
	/*^block*/id _animations;
	double _duration;

}

@property (nonatomic,copy) id animations;                                  //@synthesize animations=_animations - In the implementation block
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL skipCallbacks;                           //@synthesize skipCallbacks=_skipCallbacks - In the implementation block
@property (assign,nonatomic) BOOL updateStatusBarIfNecessary;              //@synthesize updateStatusBarIfNecessary=_updateStatusBarIfNecessary - In the implementation block
-(void)dealloc;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setAnimations:(id)arg1 ;
-(id)animations;
-(double)duration;
-(BOOL)skipCallbacks;
-(BOOL)updateStatusBarIfNecessary;
-(void)setSkipCallbacks:(BOOL)arg1 ;
-(void)setUpdateStatusBarIfNecessary:(BOOL)arg1 ;
@end

