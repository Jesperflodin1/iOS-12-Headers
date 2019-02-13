//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerInteractiveTransitioning-Protocol.h"

@class CADisplayLink, FRAnimationAffineTransformFunction, FRAnimationFloatFunction, FRAnimationRectFunction, NSArray, NSString, UINavigationBar, UIView;
@protocol UIViewControllerContextTransitioning;

@interface FRStackViewControllerPopAnimator : NSObject <UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning>
{
    double _fromTitleViewY;
    double _toTitleViewY;
    struct CATransform3D _fromTitleViewTransform;
    struct CATransform3D _toTitleViewTransform;
    FRAnimationAffineTransformFunction *_toViewTransformFunction;
    FRAnimationAffineTransformFunction *_fromViewTransformFunction;
    FRAnimationAffineTransformFunction *_fromTitleViewTransformFunction;
    FRAnimationAffineTransformFunction *_toTitleViewTransformFunction;
    FRAnimationRectFunction *_toViewFrameFunction;
    FRAnimationRectFunction *_fromViewFrameFunction;
    FRAnimationRectFunction *_toTitleViewFrameFunction;
    FRAnimationRectFunction *_fromTitleViewFrameFunction;
    FRAnimationFloatFunction *_shadowOpacityFunction;
    FRAnimationFloatFunction *_navBarFadingOutViewsAlphaFunction;
    FRAnimationFloatFunction *_navBarFadingInViewsAlphaFunction;
    _Bool _observingFrame;
    _Bool _completeAnimationCalled;
    id <UIViewControllerContextTransitioning> _transitionContext;
    CADisplayLink *_displayLink;
    double _startTime;
    double _duration;
    double _currentPercent;
    double _startX;
    UIView *_containerView;
    UIView *_fromView;
    UIView *_toView;
    UINavigationBar *_fromNavBar;
    UINavigationBar *_toNavBar;
    UIView *_fromTitleView;
    UIView *_toTitleView;
    NSArray *_navBarFadingOutViews;
    NSArray *_navBarFadingInViews;
    CDUnknownBlockType _cleanupBlock;
    long long _fromStatusBarStyle;
    long long _toStatusBarStyle;
    struct CGRect _fromViewLastFrame;
    struct CGRect _toViewLastFrame;
}

@property(nonatomic) long long toStatusBarStyle; // @synthesize toStatusBarStyle=_toStatusBarStyle;
@property(nonatomic) long long fromStatusBarStyle; // @synthesize fromStatusBarStyle=_fromStatusBarStyle;
@property(copy, nonatomic) CDUnknownBlockType cleanupBlock; // @synthesize cleanupBlock=_cleanupBlock;
@property(retain, nonatomic) NSArray *navBarFadingInViews; // @synthesize navBarFadingInViews=_navBarFadingInViews;
@property(retain, nonatomic) NSArray *navBarFadingOutViews; // @synthesize navBarFadingOutViews=_navBarFadingOutViews;
@property(retain, nonatomic) UIView *toTitleView; // @synthesize toTitleView=_toTitleView;
@property(retain, nonatomic) UIView *fromTitleView; // @synthesize fromTitleView=_fromTitleView;
@property(retain, nonatomic) UINavigationBar *toNavBar; // @synthesize toNavBar=_toNavBar;
@property(retain, nonatomic) UINavigationBar *fromNavBar; // @synthesize fromNavBar=_fromNavBar;
@property(retain, nonatomic) UIView *toView; // @synthesize toView=_toView;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool completeAnimationCalled; // @synthesize completeAnimationCalled=_completeAnimationCalled;
@property(nonatomic) _Bool observingFrame; // @synthesize observingFrame=_observingFrame;
@property(nonatomic) struct CGRect toViewLastFrame; // @synthesize toViewLastFrame=_toViewLastFrame;
@property(nonatomic) struct CGRect fromViewLastFrame; // @synthesize fromViewLastFrame=_fromViewLastFrame;
@property(nonatomic) double startX; // @synthesize startX=_startX;
@property(nonatomic) double currentPercent; // @synthesize currentPercent=_currentPercent;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
- (void).cxx_destruct;
- (void)dealloc;
- (void)completeAnimation:(_Bool)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransitionWithGesture:(id)arg1 edge:(unsigned long long)arg2;
- (void)updateInteractiveTransitionWithGesture:(id)arg1;
- (void)startInteractiveTransitionWithGesture:(id)arg1 transitionContext:(id)arg2;
- (void)update;
- (void)updateWithProgress:(double)arg1;
- (void)updateContentViews:(double)arg1 transform:(_Bool)arg2;
- (void)updateNavBars:(double)arg1 transform:(_Bool)arg2;
- (void)startInteractiveTransition:(id)arg1;
- (void)tick:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setup:(id)arg1;
@property(readonly, nonatomic) _Bool shouldAnimateNavBar;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end
