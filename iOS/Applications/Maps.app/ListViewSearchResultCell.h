//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GEOLocation, MKStarRatingView, MKTransitInfoLabelView, NSArray, NSLayoutConstraint, NSMutableArray, NSURL, SearchResult, UIColor, UIImageView, UILabel, UILayoutGuide, UIView;

__attribute__((visibility("hidden")))
@interface ListViewSearchResultCell : UITableViewCell
{
    UILabel *_nameLabel;
    UILabel *_closedLabel;
    UILabel *_distanceLabel;
    UILabel *_detailsLabel;
    SearchResult *_searchResult;
    MKStarRatingView *_ratingView;
    UILabel *_numReviewsLabel;
    MKTransitInfoLabelView *_transitInfoLabel;
    UIImageView *_photoImageView;
    NSURL *_currentLoadingURL;
    _Bool _showDistance;
    _Bool _showCloseLabel;
    _Bool _needsCreateLayout;
    UILabel *_delimiter;
    UIView *_selectedView;
    UIColor *_lightContentPlaceholderImageColor;
    UIColor *_placeholderImageColor;
    NSMutableArray *_constraints;
    UILayoutGuide *_photoLayoutGuide;
    NSLayoutConstraint *_photoLayoutGuideTrailing;
    NSLayoutConstraint *_photoHeightConstraint;
    NSArray *_closedLabelVisibleConstraints;
    NSArray *_closedLabelHiddenConstraints;
    NSArray *_ratingVisibleConstraints;
    NSArray *_ratingHiddenConstraints;
    NSArray *_detailsEmptyConstraints;
    NSArray *_detailsConstraints;
    _Bool _ratingConstraintsVisible;
    _Bool _closedConstraintsVisible;
    _Bool _detailsEmptyConstraintsVisible;
    _Bool _displaysPhoto;
    _Bool _displaysAsChainResult;
    _Bool _displaysAddressInsteadDistance;
    _Bool _displaysLightContent;
    GEOLocation *_currentLocation;
}

+ (id)_delimiterString;
+ (id)reuseIdentifier;
@property(nonatomic) _Bool displaysLightContent; // @synthesize displaysLightContent=_displaysLightContent;
@property(nonatomic) _Bool displaysAddressInsteadDistance; // @synthesize displaysAddressInsteadDistance=_displaysAddressInsteadDistance;
@property(nonatomic) _Bool displaysAsChainResult; // @synthesize displaysAsChainResult=_displaysAsChainResult;
@property(nonatomic) _Bool displaysPhoto; // @synthesize displaysPhoto=_displaysPhoto;
@property(retain, nonatomic) GEOLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setBadgeBackground;
- (void)setImageBackgroundSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)updatePhotoConstraint;
- (void)updateClosedConstraintsWith:(_Bool)arg1;
- (void)updateClosedConstraints;
- (void)updateRatingConstraintsWith:(_Bool)arg1;
- (void)updateRatingConstraints;
- (void)updateDetailsConstraintsWith:(_Bool)arg1;
- (void)updateDetailsConstraints;
- (void)addConstraints;
- (double)_transitInfoLabelBaselineToBottom;
- (double)_detailsLabelBaselineToTransitInfoShieldLabelCenter;
- (double)_detailsLabelBaselineToTransitInfoLabelBaseline;
- (double)_numReviewsLabelBaselineToBottom;
- (double)_numReviewsLabelBaselineToStarRatingBottom;
- (double)_detailsLabelBaselineToNumReviewsLabelBaseline;
- (double)_nameLabelBaselineToAddressLabelBaseline;
- (double)_topToNameLabelBaseline;
- (void)_updateLabels;
- (_Bool)showClosedBadge;
- (id)_distanceStringFromLocation:(id)arg1 toMapItem:(id)arg2;
- (void)updateCellWithBlock:(CDUnknownBlockType)arg1;
- (void)updateLabels;
- (void)setNeedsUpdateLabels;
@property(retain, nonatomic) SearchResult *searchResult;
- (void)_updateStyleValuesFromTheme;
- (void)_updateFonts;
- (void)prepareForReuse;
- (void)changeSizeNotification;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
