//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface VCUIHeadlineView : UIView
{
    UILabel *_supertitleLabel;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *supertitleLabel; // @synthesize supertitleLabel=_supertitleLabel;
- (void).cxx_destruct;
- (void)clear;
- (void)updateTitleWithHeadline:(id)arg1 subheadline:(id)arg2 superheadline:(id)arg3 isUtterance:(_Bool)arg4;
- (id)initWithHeadline:(id)arg1 subheadline:(id)arg2 superheadline:(id)arg3 isUtterance:(_Bool)arg4;
- (id)init;

@end
