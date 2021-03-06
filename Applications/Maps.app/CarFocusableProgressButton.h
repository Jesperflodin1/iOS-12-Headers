//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CarFocusableButton.h"

@class NSLayoutConstraint, UIColor, UIView;

__attribute__((visibility("hidden")))
@interface CarFocusableProgressButton : CarFocusableButton
{
    double _progress;
    UIView *_fillView;
    UIView *_barView;
    NSLayoutConstraint *_horizontalConstraint;
    UIColor *_progressFillColor;
    UIColor *_progressFillFocusedColor;
}

@property(retain, nonatomic) UIColor *progressFillFocusedColor; // @synthesize progressFillFocusedColor=_progressFillFocusedColor;
@property(retain, nonatomic) UIColor *progressFillColor; // @synthesize progressFillColor=_progressFillColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)_updateProgressConstraint;
- (void)layoutSubviews;
- (void)setProgessFillColor:(id)arg1;
- (void)_insertFillViewIfNecessary;
- (void)didMoveToWindow;

@end

