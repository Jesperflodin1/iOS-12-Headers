//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SignHintDisplay-Protocol.h"

@class NSString, UIView;
@protocol SignHintDisplayAnimatable;

__attribute__((visibility("hidden")))
@interface SignHintViewController : UIViewController <SignHintDisplay>
{
    _Bool _hintDisplayCounter;
    _Bool _shouldDisplayTemporaryHintWhenBecomingVisible;
    _Bool _visible;
    unsigned long long _maxDisplayableHintCount;
    UIView<SignHintDisplayAnimatable> *_hintView;
}

@property(retain, nonatomic) UIView<SignHintDisplayAnimatable> *hintView; // @synthesize hintView=_hintView;
@property(readonly, nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) unsigned long long maxDisplayableHintCount; // @synthesize maxDisplayableHintCount=_maxDisplayableHintCount;
- (void).cxx_destruct;
- (void)displayTemporaryHintTextAnimated:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

