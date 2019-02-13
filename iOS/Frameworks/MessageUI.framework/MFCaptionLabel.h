//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSArray;
@protocol MFCaptionLabelDataSource;

@interface MFCaptionLabel : UILabel
{
    _Bool _needsLabelUpdate;
    id <MFCaptionLabelDataSource> _dataSource;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSArray *_fromSenders;
}

+ (id)attributedStringsCache;
@property(retain, nonatomic) NSArray *fromSenders; // @synthesize fromSenders=_fromSenders;
@property(retain, nonatomic) NSArray *bccRecipients; // @synthesize bccRecipients=_bccRecipients;
@property(retain, nonatomic) NSArray *ccRecipients; // @synthesize ccRecipients=_ccRecipients;
@property(retain, nonatomic) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;
@property(nonatomic) __weak id <MFCaptionLabelDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)_formattedAttributedString;
- (void)updateLabelNow;
- (id)_stringAtIndexForCombinedRecipientLists:(unsigned long long)arg1;
- (void)_setNeedsLabelUpdate;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
