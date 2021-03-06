//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIVibrancyEffect, UIVisualEffectView;
@protocol DOCTagIconView;

@interface DOCTagIconView : UIView
{
    UIView<DOCTagIconView> *_subview;
    UIVisualEffectView *_vibrantEffectView;
    UIVibrancyEffect *_noneVibrancyEffect;
}

@property(readonly, nonatomic) UIVibrancyEffect *noneVibrancyEffect; // @synthesize noneVibrancyEffect=_noneVibrancyEffect;
@property(readonly, nonatomic) UIVisualEffectView *vibrantEffectView; // @synthesize vibrantEffectView=_vibrantEffectView;
@property(readonly, nonatomic) UIView<DOCTagIconView> *subview; // @synthesize subview=_subview;
- (void).cxx_destruct;
- (id)vibrancyEffect;
@property(nonatomic) long long tagColor;
- (id)initWithFrame:(struct CGRect)arg1 subview:(id)arg2;

@end

