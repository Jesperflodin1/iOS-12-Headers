//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIButton, UILabel;

__attribute__((visibility("hidden")))
@interface StepperControl : UIControl
{
    unsigned long long _minValue;
    unsigned long long _maxValue;
    NSString *_singularValueTitleFormat;
    NSString *_pluralValueTitleFormat;
    unsigned long long _value;
    UILabel *_titleLabel;
    UIButton *_plusButton;
    UIButton *_minusButton;
}

@property(retain, nonatomic) UIButton *minusButton; // @synthesize minusButton=_minusButton;
@property(retain, nonatomic) UIButton *plusButton; // @synthesize plusButton=_plusButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *pluralValueTitleFormat; // @synthesize pluralValueTitleFormat=_pluralValueTitleFormat;
@property(copy, nonatomic) NSString *singularValueTitleFormat; // @synthesize singularValueTitleFormat=_singularValueTitleFormat;
@property(nonatomic) unsigned long long maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) unsigned long long minValue; // @synthesize minValue=_minValue;
- (void).cxx_destruct;
- (void)plusButtonTapped:(id)arg1;
- (void)minusButtonTapped:(id)arg1;
- (void)updateLabel;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end
