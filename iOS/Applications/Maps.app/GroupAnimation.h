//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GroupAnimation : NSObject
{
    NSMutableArray *_preparations;
    NSMutableArray *_animations;
    NSMutableArray *_completions;
    _Bool _didPrepare;
    _Bool _didAnimate;
    _Bool _didComplete;
    _Bool _preventsAnimationDuringPreparation;
    _Bool _animated;
    double _duration;
    double _delay;
    unsigned long long _options;
    double _springDamping;
    double _initialVelocity;
}

+ (id)animationForImplicitAnimationState;
+ (id)animationForAnimatedFlag:(_Bool)arg1;
+ (double)defaultAnimationDuration;
+ (id)animation;
@property(nonatomic) double initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property(nonatomic) double springDamping; // @synthesize springDamping=_springDamping;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) _Bool preventsAnimationDuringPreparation; // @synthesize preventsAnimationDuringPreparation=_preventsAnimationDuringPreparation;
- (void).cxx_destruct;
- (void)runWithoutAnimation;
- (void)runWithDuration:(double)arg1 delay:(double)arg2 springDamping:(double)arg3 initialVelocity:(double)arg4 options:(unsigned long long)arg5;
- (void)runWithDelay:(double)arg1 initialVelocity:(double)arg2 options:(unsigned long long)arg3;
- (void)runWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3;
- (void)runWithCurrentOptions;
- (void)runWithDefaultOptions;
- (void)complete:(_Bool)arg1;
- (void)animate;
- (void)prepare;
- (_Bool)_hasPrepared;
- (void)addPreparation:(CDUnknownBlockType)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool hasAnimations;
- (id)init;

@end
