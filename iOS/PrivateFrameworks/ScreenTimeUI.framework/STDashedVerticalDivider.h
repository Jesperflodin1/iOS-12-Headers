//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSString, UIImageView, UILabel;

@interface STDashedVerticalDivider : UIView
{
    NSString *_labelText;
    NSLayoutXAxisAnchor *_dashedLineCenterXAnchor;
    NSLayoutYAxisAnchor *_labelLastBaselineAnchor;
    UIImageView *_dashedLine;
    UILabel *_label;
    NSLayoutConstraint *_labelLeftConstraint;
}

+ (id)dashedLineImage;
@property(retain, nonatomic) NSLayoutConstraint *labelLeftConstraint; // @synthesize labelLeftConstraint=_labelLeftConstraint;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *dashedLine; // @synthesize dashedLine=_dashedLine;
@property(readonly, copy, nonatomic) NSLayoutYAxisAnchor *labelLastBaselineAnchor; // @synthesize labelLastBaselineAnchor=_labelLastBaselineAnchor;
@property(readonly, copy, nonatomic) NSLayoutXAxisAnchor *dashedLineCenterXAnchor; // @synthesize dashedLineCenterXAnchor=_dashedLineCenterXAnchor;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (void).cxx_destruct;
- (id)init;

@end
