//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/MKStackingViewControllerFixedHeightAware-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, MKPlaceSectionRowView, NSLayoutConstraint, NSString, NSTextAttachment, UIImage, UIImageView, UILabel;
@protocol MKPlaceParentInfoViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceParentInfoViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate, MKStackingViewControllerFixedHeightAware>
{
    MKPlaceSectionRowView *_sectionRow;
    NSTextAttachment *_attachment;
    _Bool _resizableViewsDisabled;
    _Bool _accessibilityMode;
    id <MKPlaceParentInfoViewControllerDelegate> _delegate;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_leadingLayoutGuideConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_baselineConstraint;
    MKMapItem *_childMapItem;
    MKMapItem *_parentMapItem;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_iconImageView;
    UIImage *_iconImage;
}

+ (id)parentInfoWithPlaceItem:(id)arg1;
@property(nonatomic) _Bool accessibilityMode; // @synthesize accessibilityMode=_accessibilityMode;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MKMapItem *parentMapItem; // @synthesize parentMapItem=_parentMapItem;
@property(retain, nonatomic) MKMapItem *childMapItem; // @synthesize childMapItem=_childMapItem;
@property(retain, nonatomic) NSLayoutConstraint *baselineConstraint; // @synthesize baselineConstraint=_baselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingLayoutGuideConstraint; // @synthesize leadingLayoutGuideConstraint=_leadingLayoutGuideConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) __weak id <MKPlaceParentInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool resizableViewsDisabled; // @synthesize resizableViewsDisabled=_resizableViewsDisabled;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (void)_contentSizeDidChange;
- (void)infoCardThemeChanged:(id)arg1;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)fetchParentItem;
- (id)parentIdentifiers;
- (void)updateLabelsColor;
- (void)updateConstraintsValue;
- (void)addConstraints;
- (id)_titleAttributedString;
- (id)venueTitleForMapItem:(id)arg1;
- (void)setupData;
- (void)showData;
- (void)updateAccessibilityMode;
- (void)viewDidLoad;
- (id)initWithChild:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
