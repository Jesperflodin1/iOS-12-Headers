//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITextViewDelegate-Protocol.h"

@class UITextView;

@protocol EKExpandingTextViewDelegate <UITextViewDelegate>
- (void)textViewDidChangeContentHeight:(UITextView *)arg1;

@optional
- (_Bool)textViewShouldSignalContentSizeChange:(UITextView *)arg1;
- (void)commandI:(id)arg1;
@end
