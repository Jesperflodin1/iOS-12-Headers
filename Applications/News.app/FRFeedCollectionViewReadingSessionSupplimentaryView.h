//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton, UILabel;

@interface FRFeedCollectionViewReadingSessionSupplimentaryView : UICollectionReusableView
{
    UILabel *_label;
    UIButton *_toggleButton;
    CDUnknownBlockType _tapCallback;
}

+ (id)kind;
+ (id)identifier;
@property(copy, nonatomic) CDUnknownBlockType tapCallback; // @synthesize tapCallback=_tapCallback;
@property(retain, nonatomic) UIButton *toggleButton; // @synthesize toggleButton=_toggleButton;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)setCollapsed:(_Bool)arg1 withCount:(long long)arg2;
- (void)toggleTapped:(id)arg1;
- (void)_setupViewAfterCreating;
- (id)initWithFrame:(struct CGRect)arg1;

@end

