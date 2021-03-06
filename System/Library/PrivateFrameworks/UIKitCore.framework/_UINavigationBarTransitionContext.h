//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, UINavigationBar, UIView, _UIBarBackground, _UINavigationBarContentView, _UINavigationBarContentViewLayout, _UINavigationBarItemStack, _UINavigationBarLargeTitleView, _UINavigationBarLargeTitleViewLayout, _UINavigationBarModernPromptView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContext : NSObject
{
    UINavigationBar *_navigationBar;
    _UINavigationBarItemStack *_stack;
    _UINavigationBarModernPromptView *_promptView;
    _UINavigationBarContentView *_contentView;
    _UIBarBackground *_backgroundView;
    _UINavigationBarLargeTitleView *_largeTitleView;
    _UINavigationBarContentViewLayout *_fromContentLayout;
    _UINavigationBarContentViewLayout *_toContentLayout;
    _UINavigationBarLargeTitleViewLayout *_fromLargeTitleLayout;
    _UINavigationBarLargeTitleViewLayout *_toLargeTitleLayout;
    int _largeTitleTransitionType;
    _Bool _isRTL;
    _Bool _allowLargeTitles;
    _Bool _twoPart;
    _Bool _beginWithLargeTitle;
    _Bool _endWithLargeTitle;
    NSMutableSet *_clippingViews;
}

+ (id)contextForTransition:(int)arg1;
@property(retain, nonatomic) _UINavigationBarLargeTitleViewLayout *toLargeTitleLayout; // @synthesize toLargeTitleLayout=_toLargeTitleLayout;
@property(retain, nonatomic) _UINavigationBarLargeTitleViewLayout *fromLargeTitleLayout; // @synthesize fromLargeTitleLayout=_fromLargeTitleLayout;
@property(retain, nonatomic) _UINavigationBarContentViewLayout *toContentLayout; // @synthesize toContentLayout=_toContentLayout;
@property(retain, nonatomic) _UINavigationBarContentViewLayout *fromContentLayout; // @synthesize fromContentLayout=_fromContentLayout;
@property(retain, nonatomic) _UINavigationBarLargeTitleView *largeTitleView; // @synthesize largeTitleView=_largeTitleView;
@property(retain, nonatomic) _UIBarBackground *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UINavigationBarContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) _UINavigationBarModernPromptView *promptView; // @synthesize promptView=_promptView;
@property(nonatomic) _Bool twoPart; // @synthesize twoPart=_twoPart;
@property(nonatomic) _Bool allowLargeTitles; // @synthesize allowLargeTitles=_allowLargeTitles;
@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
@property(retain, nonatomic) _UINavigationBarItemStack *stack; // @synthesize stack=_stack;
@property(nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(nonatomic) _Bool endWithLargeTitle; // @synthesize endWithLargeTitle=_endWithLargeTitle;
@property(nonatomic) _Bool beginWithLargeTitle; // @synthesize beginWithLargeTitle=_beginWithLargeTitle;
- (void).cxx_destruct;
- (void)_removeAllClippingViews;
- (void)_addClippingView:(id)arg1;
@property(readonly, nonatomic) double contentViewMaxY;
@property(readonly, nonatomic) double contentViewFittingHeight;
@property(readonly, nonatomic) UIView *viewUsingEaseInCurve;
@property(readonly, nonatomic) UIView *viewUsingEaseOutCurve;
@property(readonly, nonatomic) UIView *viewFadingInFromCustomAlpha;
- (void)cancel;
- (void)complete;
- (void)setAllLargeTitleLayoutsVisible;
- (void)animate;
- (void)prepare;
- (void)recordUpdates:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, nonatomic) int transition; // @dynamic transition;

@end

