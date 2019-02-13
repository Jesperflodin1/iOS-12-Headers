//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, NSString, TabIconAndTitleView, TabThumbnailHeaderView, UIButton, UIColor, UIFont, UIImage;
@protocol OS_dispatch_queue;

@interface TabThumbnailView : UIView
{
    TabThumbnailHeaderView *_headerView;
    TabIconAndTitleView *_iconAndTitleView;
    NSObject<OS_dispatch_queue> *_titleMeasurementQueue;
    struct CGSize _titleSize;
    _Bool _titleTextNeedsUpdate;
    _Bool _isAccessibilityContentSize;
    _Bool _titleIsHorizontallyCentered;
    _Bool _hidesTabTitle;
    _Bool _recording;
    _Bool _usesDarkTheme;
    _Bool _headerHasFinishedAnimating;
    UIButton *_closeButton;
    double _closeButtonLeftInset;
    double _extraTitleScale;
    NSString *_title;
    double _titleHeight;
    double _titleOffset;
    double _titleScale;
    double _headerCornerRadius;
    double _verticalTextAlignmentAdjustment;
    CDUnknownBlockType _layoutAnimator;
}

+ (double)titleHeightForAccessibilityContentSize:(_Bool)arg1;
+ (void)setShowsIconsInTabs:(_Bool)arg1;
@property(nonatomic) _Bool headerHasFinishedAnimating; // @synthesize headerHasFinishedAnimating=_headerHasFinishedAnimating;
@property(copy, nonatomic) CDUnknownBlockType layoutAnimator; // @synthesize layoutAnimator=_layoutAnimator;
@property(nonatomic) double verticalTextAlignmentAdjustment; // @synthesize verticalTextAlignmentAdjustment=_verticalTextAlignmentAdjustment;
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(nonatomic) double headerCornerRadius; // @synthesize headerCornerRadius=_headerCornerRadius;
@property(nonatomic) double titleScale; // @synthesize titleScale=_titleScale;
@property(nonatomic) double titleOffset; // @synthesize titleOffset=_titleOffset;
@property(nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(nonatomic) _Bool hidesTabTitle; // @synthesize hidesTabTitle=_hidesTabTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool titleIsHorizontallyCentered; // @synthesize titleIsHorizontallyCentered=_titleIsHorizontallyCentered;
@property(nonatomic) double extraTitleScale; // @synthesize extraTitleScale=_extraTitleScale;
@property(nonatomic) double closeButtonLeftInset; // @synthesize closeButtonLeftInset=_closeButtonLeftInset;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic, getter=isAccessibilityContentSize) _Bool accessibilityContentSize; // @synthesize accessibilityContentSize=_isAccessibilityContentSize;
- (void).cxx_destruct;
- (long long)_numberOfLinesForTitleLabelForTraitCollection:(id)arg1;
@property(readonly, nonatomic) _Bool headerIsClear;
- (void)_setHeaderColorScheme;
- (void)updateHeaderView;
- (void)_updateContentSizeCategory;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
@property(readonly, nonatomic) struct CGSize headerViewInset;
@property(retain, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) _Bool shouldUseOpaqueHeaderBackground;
@property(readonly, nonatomic) UIColor *headerBackgroundColor;
@property(readonly, nonatomic) UIImage *closeButtonImage;
@property(readonly, nonatomic) UIColor *titleColor;
@property(nonatomic) double titleAlpha;
@property(retain, nonatomic) UIImage *icon;
- (void)_measureTitle;
@property(nonatomic) _Bool showsCloseButton;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct CGRect headerViewFrame;
@property(readonly, nonatomic) UIView *headerBackgroundView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
