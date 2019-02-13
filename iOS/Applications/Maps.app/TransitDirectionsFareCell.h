//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TransitDirectionsIconCell.h"

@class NSLayoutConstraint, TransitDirectionsListItem, _MKUILabel;

__attribute__((visibility("hidden")))
@interface TransitDirectionsFareCell : TransitDirectionsIconCell
{
    NSLayoutConstraint *_topToPrimaryLabelBaselineConstraint;
    NSLayoutConstraint *_leadingFareLabelConstraint;
    _MKUILabel *_fareLabel;
    TransitDirectionsListItem *_previousTransitDirectionsListItem;
    long long _previousTransitDirectionsListItemsNavigationState;
}

- (void).cxx_destruct;
- (double)_alphaForFareLabel;
- (void)setNavigationState:(long long)arg1;
- (double)_topToPrimaryLabelBaselineDistance;
- (void)_contentSizeCategoryDidChange;
- (void)setPreviousItem:(id)arg1 withPreviousNavigationState:(long long)arg2;
- (void)configureWithItem:(id)arg1;
- (id)_initialConstraints;
- (void)_createSubviews;

@end
