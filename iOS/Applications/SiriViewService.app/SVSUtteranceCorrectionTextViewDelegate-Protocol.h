//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UITextViewDelegate-Protocol.h"

@class SVSSpeechRecognizedCorrectionTextView;

@protocol SVSUtteranceCorrectionTextViewDelegate <UITextViewDelegate>
- (void)utteranceTextDidReceiveReturnKey:(SVSSpeechRecognizedCorrectionTextView *)arg1;
- (void)utteranceTextDidResignFirstResponder:(SVSSpeechRecognizedCorrectionTextView *)arg1;
- (void)utteranceTextDidBecomeFirstResponder:(SVSSpeechRecognizedCorrectionTextView *)arg1;
@end
