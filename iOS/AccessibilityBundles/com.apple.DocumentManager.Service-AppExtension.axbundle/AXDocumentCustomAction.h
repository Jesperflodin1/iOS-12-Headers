//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityCustomAction.h>

@class FPItem, UIDocumentBrowserAction;

@interface AXDocumentCustomAction : UIAccessibilityCustomAction
{
    UIDocumentBrowserAction *_documentAction;
    FPItem *_item;
}

@property(retain, nonatomic) FPItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UIDocumentBrowserAction *documentAction; // @synthesize documentAction=_documentAction;
- (void).cxx_destruct;

@end
