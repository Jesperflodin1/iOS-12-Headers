//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FRGenericIntroductionSceneDelegate-Protocol.h"

@class FRGenericIntroductionScene, FROnboardingCardViewController, FROnboardingCardViewControllerDataManager, NSString;

@interface FRFavoritesPickerViewController : UIViewController <FRGenericIntroductionSceneDelegate>
{
    FRGenericIntroductionScene *_favoritesPickerScene;
    FROnboardingCardViewController *_cardViewController;
    FROnboardingCardViewControllerDataManager *_cardDataManager;
    CDUnknownBlockType _completionBlock;
    struct CGPoint _initialTitleCenter;
    struct CGPoint _initialBodyCenter;
}

+ (id)viewControllerWithAppConfigurationManager:(id)arg1 subscriptionList:(id)arg2 tagController:(id)arg3 feedManager:(id)arg4 tagRanker:(id)arg5 completion:(CDUnknownBlockType)arg6;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) struct CGPoint initialBodyCenter; // @synthesize initialBodyCenter=_initialBodyCenter;
@property(nonatomic) struct CGPoint initialTitleCenter; // @synthesize initialTitleCenter=_initialTitleCenter;
@property(retain, nonatomic) FROnboardingCardViewControllerDataManager *cardDataManager; // @synthesize cardDataManager=_cardDataManager;
@property(nonatomic) __weak FROnboardingCardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
@property(nonatomic) __weak FRGenericIntroductionScene *favoritesPickerScene; // @synthesize favoritesPickerScene=_favoritesPickerScene;
- (void).cxx_destruct;
- (void)introductionSceneWantsToContinue:(id)arg1;
- (void)introductionSceneWantsToSkip:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_updateOffsets;
- (void)_layoutForSize:(struct CGSize)arg1;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
