//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SVSBaseMainController.h"

@class PINPairAuthViewController, PINPairDoneViewController, PINPairStartViewController, SFPINPairSession, SVSCommonNavController, UIStoryboard;

@interface PINPairMainController : SVSBaseMainController
{
    _Bool _dismissed;
    UIStoryboard *_storyboard;
    PINPairDoneViewController *_vcDone;
    PINPairAuthViewController *_vcAuth;
    SVSCommonNavController *_vcNav;
    PINPairStartViewController *_vcStart;
    unsigned int _testFlags;
    SFPINPairSession *_pairingSession;
}

@property(nonatomic) unsigned int testFlags; // @synthesize testFlags=_testFlags;
@property(retain, nonatomic) SFPINPairSession *pairingSession; // @synthesize pairingSession=_pairingSession;
- (void).cxx_destruct;
- (void)_startPairing:(id)arg1;
- (void)showDoneUI:(int)arg1;
- (void)showAuthUIWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (void)handleButtonActions:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dismiss:(int)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

