//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FADigitalHealthDelegate-Protocol.h"
#import "ViewControllerSnapshotting-Protocol.h"

@class FALockOutViewController, NSMutableDictionary, NSString, NSURL;
@protocol DigitalHealthViewControllerDelegate;

@interface DigitalHealthViewController : UIViewController <FADigitalHealthDelegate, ViewControllerSnapshotting>
{
    NSURL *_url;
    FALockOutViewController *_currentLockOutViewController;
    NSMutableDictionary *_urlsToLockOutViewControllers;
    id <DigitalHealthViewControllerDelegate> _digitalHealthViewControllerDelegate;
    double _additionalVerticalSafeAreaMargin;
}

@property(nonatomic) double additionalVerticalSafeAreaMargin; // @synthesize additionalVerticalSafeAreaMargin=_additionalVerticalSafeAreaMargin;
@property(nonatomic) __weak id <DigitalHealthViewControllerDelegate> digitalHealthViewControllerDelegate; // @synthesize digitalHealthViewControllerDelegate=_digitalHealthViewControllerDelegate;
- (void).cxx_destruct;
- (void)lockOutViewControllerDidFinishDismissing:(id)arg1;
- (struct CGRect)snapshotContentRectInBounds:(struct CGRect)arg1;
- (id)snapshotContentView;
- (id)snapshotBackgroundColor;
- (id)_urlStringForLockOutGivenURL:(id)arg1;
- (void)hideLockOutForURL:(id)arg1;
- (void)_updateCurrentLockViewControllerInsetsHorizontalForSizeClass:(long long)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)showLockOutForURL:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

