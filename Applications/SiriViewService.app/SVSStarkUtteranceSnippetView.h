//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface SVSStarkUtteranceSnippetView : UIView
{
    UILabel *_label;
}

@property(readonly, nonatomic, getter=_label) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *prompt;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)canBecomeFirstResponder;

@end

