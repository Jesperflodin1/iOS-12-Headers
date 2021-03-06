//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CarCardContent-Protocol.h"
#import "CarCompressionTestViewDelegate-Protocol.h"

@class CarCompressionTestView, NSDictionary, NSString;
@protocol CarCardContentDelegate, CarCompressionTestCardDelegate;

__attribute__((visibility("hidden")))
@interface CarCompressionTestCardViewController : UIViewController <CarCompressionTestViewDelegate, CarCardContent>
{
    _Bool _useNightMode;
    id <CarCardContentDelegate> _cardContentDelegate;
    id <CarCompressionTestCardDelegate> _delegate;
    CarCompressionTestView *_compressionTest;
}

@property(retain, nonatomic) CarCompressionTestView *compressionTest; // @synthesize compressionTest=_compressionTest;
@property(nonatomic) __weak id <CarCompressionTestCardDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=shouldUseNightMode) _Bool useNightMode; // @synthesize useNightMode=_useNightMode;
@property(nonatomic) __weak id <CarCardContentDelegate> cardContentDelegate; // @synthesize cardContentDelegate=_cardContentDelegate;
- (void).cxx_destruct;
- (void)compressionTestViewRequestsDismiss:(id)arg1;
- (void)compressionTestView:(id)arg1 reloadWithSpacerHeight:(double)arg2;
- (void)setUseNightMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateLayout;
@property(readonly, nonatomic) _Bool hasContent;
@property(nonatomic) double spacerHeight;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDictionary *dynamicDimensionGuides;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

