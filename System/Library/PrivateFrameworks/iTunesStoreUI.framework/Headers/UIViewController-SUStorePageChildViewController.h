//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SUStorePageProtocol;

@interface UIViewController (SUStorePageChildViewController)
- (_Bool)viewIsReady;
- (void)storePageProtocolDidChange;
@property(retain, nonatomic) SUStorePageProtocol *storePageProtocol;
- (void)storePageCleanupBeforeTearDown;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
@property(readonly, nonatomic) struct CGRect documentBounds;
- (id)displayedURL;
@end

