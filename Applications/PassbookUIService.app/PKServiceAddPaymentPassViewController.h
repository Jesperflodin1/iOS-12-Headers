//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKNavigationController.h>

#import "PKAddPaymentPassDevicePickerDelegate-Protocol.h"
#import "PKAddPaymentPassRequestViewControllerDelegate-Protocol.h"
#import "PKExplanationViewDelegate-Protocol.h"
#import "PKPaymentSetupViewControllerDelegate-Protocol.h"
#import "PKPaymentVerificationControllerDelegate-Protocol.h"
#import "PKServiceAddPaymentPassViewControllerProtocol-Protocol.h"

@class NSArray, NSError, NSSet, NSString, PKAddPaymentPassRequestConfiguration, PKPaymentPass, PKPaymentVerificationController;

@interface PKServiceAddPaymentPassViewController : PKNavigationController <PKAddPaymentPassRequestViewControllerDelegate, PKExplanationViewDelegate, PKAddPaymentPassDevicePickerDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentVerificationControllerDelegate, PKServiceAddPaymentPassViewControllerProtocol>
{
    PKAddPaymentPassRequestConfiguration *_configuration;
    PKPaymentPass *_pass;
    NSSet *_automaticExpressModes;
    NSError *_error;
    _Bool _showIntro;
    _Bool _hasDeviceWebService;
    _Bool _hasWatchWebService;
    NSArray *_webServices;
    _Bool _entitled;
    NSString *_teamID;
    PKPaymentVerificationController *_verificationController;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
- (void).cxx_destruct;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)pickerViewController:(id)arg1 didPickWebService:(id)arg2;
- (id)_addRequestViewControllerForWebService:(id)arg1;
- (id)rootAddingVC;
- (id)devicePickerViewController;
- (id)introViewController;
- (_Bool)_shouldShowAutomaticPresentationScreenForTargetDevice:(id)arg1;
- (void)_done;
- (void)_cancel;
- (void)_next;
- (void)_applyDoneItem:(id)arg1 animated:(_Bool)arg2;
- (void)_applyDoneItem:(id)arg1;
- (void)_applyCancelItem:(id)arg1;
- (void)presentAutomaticPresentationScreenForPass:(id)arg1 webService:(id)arg2;
- (void)presentVerificationViewControllerForPass:(id)arg1 webService:(id)arg2;
- (_Bool)shouldPresentVerificationFlowForState:(long long)arg1;
- (void)presentVerificationViewController:(id)arg1 animated:(_Bool)arg2;
- (void)requestViewController:(id)arg1 provisioningController:(id)arg2 error:(id)arg3;
- (void)requestViewController:(id)arg1 generateRequestWithCertificateChain:(id)arg2 nonce:(id)arg3 nonceSignature:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)setConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

