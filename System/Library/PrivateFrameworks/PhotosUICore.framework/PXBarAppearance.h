//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXMutableBarAppearance-Protocol.h>

@class NSString, PXBarAnimationOptions, UIViewController;
@protocol PXBarAppearanceImplementationDelegate;

@interface PXBarAppearance : PXObservable <PXMutableBarAppearance, PXChangeObserver>
{
    struct {
        _Bool respondsToWillUpdateBarAppearanceOnViewWillAppear;
        _Bool respondsToIsStatusBarVisible;
    } _implementationDelegateFlags;
    _Bool _prefersStatusBarVisible;
    _Bool _prefersNavigationBarVisible;
    _Bool _prefersToolbarVisible;
    _Bool _prefersTabBarVisible;
    _Bool __hasViewAppeared;
    _Bool _enabled;
    id <PXBarAppearanceImplementationDelegate> __implementationDelegate;
    PXBarAnimationOptions *__animationOptions;
    long long __preferredStatusBarUpdateAnimation;
    UIViewController *_viewController;
    id <PXBarAppearanceImplementationDelegate> _implementationDelegate;
}

@property(nonatomic) __weak id <PXBarAppearanceImplementationDelegate> implementationDelegate; // @synthesize implementationDelegate=_implementationDelegate;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic, setter=_setPreferredStatusBarUpdateAnimation:) long long _preferredStatusBarUpdateAnimation; // @synthesize _preferredStatusBarUpdateAnimation=__preferredStatusBarUpdateAnimation;
@property(copy, nonatomic, setter=_setAnimationOptions:) PXBarAnimationOptions *_animationOptions; // @synthesize _animationOptions=__animationOptions;
@property(nonatomic, setter=_setHasViewAppeared:) _Bool _hasViewAppeared; // @synthesize _hasViewAppeared=__hasViewAppeared;
@property(readonly, nonatomic) _Bool prefersTabBarVisible; // @synthesize prefersTabBarVisible=_prefersTabBarVisible;
@property(readonly, nonatomic) _Bool prefersToolbarVisible; // @synthesize prefersToolbarVisible=_prefersToolbarVisible;
@property(readonly, nonatomic) _Bool prefersNavigationBarVisible; // @synthesize prefersNavigationBarVisible=_prefersNavigationBarVisible;
@property(readonly, nonatomic) _Bool prefersStatusBarVisible; // @synthesize prefersStatusBarVisible=_prefersStatusBarVisible;
@property(nonatomic, setter=_setImplementationDelegate:) __weak id <PXBarAppearanceImplementationDelegate> _implementationDelegate; // @synthesize _implementationDelegate=__implementationDelegate;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_setTabBarVisible:(_Bool)arg1 withAnimationOptions:(id)arg2;
- (void)_setToolbarVisible:(_Bool)arg1 withAnimationOptions:(id)arg2;
- (void)_setNavigationBarVisible:(_Bool)arg1 withAnimationOptions:(id)arg2;
- (void)_updateStatusBarVisibilityWithAnimationOptions:(id)arg1;
- (void)_updateWithAnimationOptions:(id)arg1 isStatusBarHidden:(_Bool)arg2;
- (void)_update;
- (void)_updateOnViewWillAppear:(_Bool)arg1;
- (void)_updateImplementationDelegate;
- (long long)adjustedPreferredStatusBarUpdateAnimation:(long long)arg1;
- (_Bool)adjustedPrefersStatusBarHidden:(_Bool)arg1;
- (void)viewControllerViewDidDisappear:(_Bool)arg1;
- (void)viewControllerViewWillAppear:(_Bool)arg1;
- (void)setPrefersTabBarVisible:(_Bool)arg1;
- (void)setPrefersToolbarVisible:(_Bool)arg1;
- (void)setPrefersNavigationBarVisible:(_Bool)arg1;
- (void)setPrefersStatusBarVisible:(_Bool)arg1;
- (id)mutableChangeObject;
- (void)performChangesWithAnimationOptions:(id)arg1 changes:(CDUnknownBlockType)arg2;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)initWithViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

