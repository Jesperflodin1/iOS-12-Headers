//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MapsThemeLabel, ShorteningLabel, UIButton, VibrantView;
@protocol TrayHeaderDelegate;

__attribute__((visibility("hidden")))
@interface FlyoverTrayHeader : UIView
{
    id <TrayHeaderDelegate> _delegate;
    MapsThemeLabel *_titleLabel;
    ShorteningLabel *_subtitleLabel;
    UIButton *_button;
    VibrantView *_vibrantView;
}

@property(retain, nonatomic) VibrantView *vibrantView; // @synthesize vibrantView=_vibrantView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) ShorteningLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MapsThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <TrayHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)trayHeaderDidReceiveTap:(id)arg1;
- (void)buttonDidTouchUpInside:(id)arg1;
- (void)setAttributedSubtitleAlternatives:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)updateTheme;
- (void)_setupConstraints;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

