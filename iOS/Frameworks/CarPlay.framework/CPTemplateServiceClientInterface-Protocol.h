//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CarPlay/CPBannerDelegate-Protocol.h>

@class NSUUID;

@protocol CPTemplateServiceClientInterface <CPBannerDelegate>
- (void)updateInterestingLayoutGuideWithInsets:(struct UIEdgeInsets)arg1;
- (void)templateIdentifierDidDismiss:(NSUUID *)arg1;
- (void)templateIdentifierDidPop:(NSUUID *)arg1;
- (void)clientExceededHierarchyDepthLimit;
@end
