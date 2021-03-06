//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAReplicatorLayer;

@interface CMKTimelapseShutterRingView : UIView
{
    _Bool _animating;
    CALayer *__smallTickLayer;
    CALayer *__largeTickLayer;
    CAReplicatorLayer *__smallTickReplicatorLayer;
    CAReplicatorLayer *__largeTickReplicatorLayer;
    CALayer *__timerHandLayer;
    CALayer *__timerHandParentLayer;
}

@property(readonly, nonatomic) CALayer *_timerHandParentLayer; // @synthesize _timerHandParentLayer=__timerHandParentLayer;
@property(readonly, nonatomic) CALayer *_timerHandLayer; // @synthesize _timerHandLayer=__timerHandLayer;
@property(readonly, nonatomic) CAReplicatorLayer *_largeTickReplicatorLayer; // @synthesize _largeTickReplicatorLayer=__largeTickReplicatorLayer;
@property(readonly, nonatomic) CAReplicatorLayer *_smallTickReplicatorLayer; // @synthesize _smallTickReplicatorLayer=__smallTickReplicatorLayer;
@property(readonly, nonatomic) CALayer *_largeTickLayer; // @synthesize _largeTickLayer=__largeTickLayer;
@property(readonly, nonatomic) CALayer *_smallTickLayer; // @synthesize _smallTickLayer=__smallTickLayer;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (double)_rotationZFromTransform:(struct CATransform3D)arg1;
- (void)_addStopAnimations;
- (void)_addStartAnimations;
- (_Bool)_shouldUseAnimations;
- (void)_removeStopAnimations;
- (void)_removeStartAnimations;
- (void)_stopAnimating;
- (void)_startAnimating;
- (void)layoutSublayersOfLayer:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

