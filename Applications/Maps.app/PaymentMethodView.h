//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface PaymentMethodView : UIView
{
    UIStackView *_paymentLabelView;
    UILabel *_paymentTitleLabel;
    UILabel *_paymentSubtitleLabel;
    UIImageView *_paymentMethodImageView;
}

@property(retain, nonatomic) UIImageView *paymentMethodImageView; // @synthesize paymentMethodImageView=_paymentMethodImageView;
@property(retain, nonatomic) UILabel *paymentSubtitleLabel; // @synthesize paymentSubtitleLabel=_paymentSubtitleLabel;
@property(retain, nonatomic) UILabel *paymentTitleLabel; // @synthesize paymentTitleLabel=_paymentTitleLabel;
@property(retain, nonatomic) UIStackView *paymentLabelView; // @synthesize paymentLabelView=_paymentLabelView;
- (void).cxx_destruct;
- (id)init;

@end

