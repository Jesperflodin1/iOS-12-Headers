//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/_SFActivityItemProvider.h>

@class NSData, NSString, WKWebView;

@interface _SFImageActivityItemProvider : _SFActivityItemProvider
{
    NSData *_imageOnlyDocumentData;
    NSString *_documentUTI;
    WKWebView *_webView;
}

- (void).cxx_destruct;
- (id)_imageData;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)item;
- (id)initWithWebView:(id)arg1;

@end
