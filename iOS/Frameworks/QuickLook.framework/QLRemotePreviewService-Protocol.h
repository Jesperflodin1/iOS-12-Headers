//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class NSString, NSValue, QLAppearance, QLPreviewContext;
@protocol QLCustomItemViewControllerHost;

@protocol QLRemotePreviewService <NSObject>
- (void)invalidateService;
- (void)previewControllerDidUpdatePreferredContentSize:(NSValue *)arg1;
- (void)previewControllerDidUpdateTitle:(NSString *)arg1;
- (void)previewControllerWantsFullScreen:(_Bool)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillAppear:(_Bool)arg1;
- (void)setAppearance:(QLAppearance *)arg1 animated:(_Bool)arg2;
- (void)setHostViewControllerProxy:(id <QLCustomItemViewControllerHost>)arg1;
- (void)getPrinterProxyWithCompletionHandler:(void (^)(id <QLPrintingProtocol>))arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(QLPreviewContext *)arg2 completionHandler:(void (^)(NSError *, NSDictionary *))arg3;
@end
