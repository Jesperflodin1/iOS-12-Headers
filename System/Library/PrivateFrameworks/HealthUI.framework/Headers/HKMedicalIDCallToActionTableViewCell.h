//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;

@interface HKMedicalIDCallToActionTableViewCell : UITableViewCell
{
    UILabel *_callToActionLabel;
    UIButton *_actionButton;
}

+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *callToActionLabel; // @synthesize callToActionLabel=_callToActionLabel;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

