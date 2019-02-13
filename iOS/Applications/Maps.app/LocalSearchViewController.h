//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GEOLogContextDelegate-Protocol.h"
#import "LocalSearchBusinessControllerDelegate-Protocol.h"
#import "LocalSearchViewDelegate-Protocol.h"

@class BrowseVenueBusinessController, CardView, LocalSearchView, NSString, RefreshSearchHereBusinessController, UIVisualEffectView;
@protocol LocalSearchBusinessController, LocalSearchViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface LocalSearchViewController : UIViewController <LocalSearchViewDelegate, LocalSearchBusinessControllerDelegate, GEOLogContextDelegate>
{
    CardView *_cardView;
    LocalSearchView *_contentView;
    _Bool _buttonMode;
    UIVisualEffectView *_blurView;
    _Bool _enable;
    _Bool _viewHasAppeared;
    id <LocalSearchViewControllerDelegate> _delegate;
    RefreshSearchHereBusinessController *_refreshSearchHereBusinessController;
    BrowseVenueBusinessController *_browseVenueBusinessController;
    double _bottomInset;
    id <LocalSearchBusinessController> _activeBusinessController;
    id <LocalSearchBusinessController> _reportedVisibleBusinessController;
}

@property(retain, nonatomic) id <LocalSearchBusinessController> reportedVisibleBusinessController; // @synthesize reportedVisibleBusinessController=_reportedVisibleBusinessController;
@property(retain, nonatomic) id <LocalSearchBusinessController> activeBusinessController; // @synthesize activeBusinessController=_activeBusinessController;
@property(readonly, nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(readonly, nonatomic) BrowseVenueBusinessController *browseVenueBusinessController; // @synthesize browseVenueBusinessController=_browseVenueBusinessController;
@property(readonly, nonatomic) RefreshSearchHereBusinessController *refreshSearchHereBusinessController; // @synthesize refreshSearchHereBusinessController=_refreshSearchHereBusinessController;
@property(nonatomic) __weak id <LocalSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)currentMapViewTargetForAnalytics;
- (int)currentUITargetForAnalytics;
- (void)businessControllerContentSizeDidChange:(id)arg1;
- (void)businessControllerVisibilityDidChange:(id)arg1;
- (id)venueWithFocus;
- (void)localSearchViewContentSizeChanged;
- (void)localSearchViewVisibilityChanged;
- (void)localSearchViewSelected:(id)arg1;
@property(readonly, nonatomic) _Bool showInCardFooterWhenCardHasExpandedLayout;
@property(readonly, nonatomic) _Bool shouldBeVisible;
- (void)reportVisibilityIfNeeded;
- (_Bool)updateActiveBusinessController;
- (id)businessControllers;
- (id)contentView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initAsButton:(_Bool)arg1;
- (void)updateTheme;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
