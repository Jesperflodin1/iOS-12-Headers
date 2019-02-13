//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/PKExplanationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentDocumentSubmissionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPeerPaymentDocumentSubmissionViewControllerResponder-Protocol.h>

@class NSString, NSTimer, PKPeerPaymentDocumentSubmissionController;

@interface PKPeerPaymentDocumentSubmissionInfoViewController : PKExplanationViewController <PKPeerPaymentDocumentSubmissionControllerDelegate, PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPeerPaymentDocumentSubmissionViewControllerResponder>
{
    PKPeerPaymentDocumentSubmissionController *_controller;
    long long _context;
    long long _currentState;
    long long _currentSide;
    NSTimer *_timerDismissAfterSuccess;
}

- (void).cxx_destruct;
- (void)captureController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;
- (void)captureController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (void)captureController:(id)arg1 didChangeStateTo:(long long)arg2;
- (void)didSelectSetupLater;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)updateUIWithState:(long long)arg1;
- (id)secondaryButton;
- (void)_cancelPressed;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1 context:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
