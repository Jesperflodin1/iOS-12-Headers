//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SVSStarkConfirmationSnippetView.h"

@class NSString, UILabel;

@interface SVSStarkEmergencyCallConfirmationSnippetView : SVSStarkConfirmationSnippetView
{
    UILabel *_titleLabel;
    NSString *_countdownText;
    UILabel *_countdownLabel;
}

@property(readonly, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(copy, nonatomic) NSString *countdownText; // @synthesize countdownText=_countdownText;
- (void).cxx_destruct;
- (double)_confirmationButtonYOriginInBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_createLabelWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 confirmationButtons:(id)arg2 delegate:(id)arg3;

@end
