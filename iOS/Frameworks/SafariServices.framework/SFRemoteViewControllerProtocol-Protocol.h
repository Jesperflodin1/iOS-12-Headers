//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSNumber, NSString, NSURL;

@protocol SFRemoteViewControllerProtocol <NSObject>
- (void)didChangeFullScreen:(_Bool)arg1;
- (void)initialLoadDidRedirectToURL:(NSURL *)arg1;
- (void)didDecideCookieSharingForURL:(NSURL *)arg1 shouldCancel:(_Bool)arg2;
- (void)willOpenURLInHostApplication:(NSURL *)arg1;
- (void)setRemoteSwipeGestureEnabled:(_Bool)arg1;
- (void)executeCustomActivityProxyID:(NSNumber *)arg1;
- (void)fetchActivityViewControllerInfoForURL:(NSURL *)arg1 title:(NSString *)arg2;
- (void)didFinishInitialLoad:(_Bool)arg1;
- (void)willDismissServiceViewController;
- (void)didLoadWebView;
@end
