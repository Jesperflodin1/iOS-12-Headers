//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NavManeuverSignLayoutDelegate-Protocol.h"

@class NavPrimaryDrivingSignView;

@protocol NavDrivingSignLayoutDelegate <NavManeuverSignLayoutDelegate>
- (struct UIEdgeInsets)laneGuidanceViewInternalEdgeInsetsForSign:(NavPrimaryDrivingSignView *)arg1;
- (_Bool)shouldTransformLaneViewsForSign:(NavPrimaryDrivingSignView *)arg1;
- (double)laneGuidanceViewVerticalScaleForSign:(NavPrimaryDrivingSignView *)arg1;
- (double)laneGuidanceViewSideMarginForSign:(NavPrimaryDrivingSignView *)arg1;
- (double)laneGuidanceViewTopMarginForSign:(NavPrimaryDrivingSignView *)arg1;
- (_Bool)forceHideLaneGuidanceViewForSign:(NavPrimaryDrivingSignView *)arg1;
@end

