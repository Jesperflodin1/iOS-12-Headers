//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "B238SetupBaseViewController.h"

@class SFTermsAndConditionsManager;

@interface B238SetupTermsViewController : B238SetupBaseViewController
{
    SFTermsAndConditionsManager *_termsManager;
}

@property(retain, nonatomic) SFTermsAndConditionsManager *termsManager; // @synthesize termsManager=_termsManager;
- (void).cxx_destruct;
- (void)handleTermsAgreed;
- (void)handleTermsAndConditionsButton:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)handleAgreeButton:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

