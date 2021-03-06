//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UIVisualEffectSubviewSource-Protocol.h>

@class NSArray, NSString, _UIVisualEffectViewBackdropCaptureGroup;
@protocol _UIVisualEffectViewSubviewMonitoring;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectSubview : UIView <_UIVisualEffectSubviewSource>
{
    _UIVisualEffectViewBackdropCaptureGroup *_primaryCaptureGroup;
    id <_UIVisualEffectViewSubviewMonitoring> _subviewMonitor;
    NSArray *_viewEffects;
    NSArray *_filters;
}

@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(readonly, copy, nonatomic) NSArray *viewEffects; // @synthesize viewEffects=_viewEffects;
@property(nonatomic) __weak id <_UIVisualEffectViewSubviewMonitoring> subviewMonitor; // @synthesize subviewMonitor=_subviewMonitor;
@property(retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup; // @synthesize primaryCaptureGroup=_primaryCaptureGroup;
- (void).cxx_destruct;
- (id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(_Bool)arg3;
- (_Bool)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2;
- (void)applyIdentityFilterEffects;
- (void)applyRequestedFilterEffects;
- (void)_applyFilterValues:(id)arg1 baseName:(id)arg2 toLayer:(id)arg3;
- (void)removeViewEffects;
- (void)applyIdentityViewEffects;
- (void)applyRequestedViewEffects;
- (void)addViewEffects:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)asBackdropView;
- (id)asImageView;
- (id)asView;
- (id)asLayer;
- (void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

