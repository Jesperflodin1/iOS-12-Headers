//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FCFeedDescriptor, TSFeedViewContext, UIViewController;
@protocol TSTabBarSplitViewPresentable;

@protocol TSFeedModuleType
- (UIViewController<TSTabBarSplitViewPresentable> *)createViewControllerForFeedDescriptor:(FCFeedDescriptor *)arg1 withFeedViewContext:(TSFeedViewContext *)arg2;
- (UIViewController<TSTabBarSplitViewPresentable> *)createViewControllerForFeedDescriptor:(FCFeedDescriptor *)arg1 withTableOfContentsRank:(long long)arg2 tableOfContentsSection:(long long)arg3 presentationReason:(long long)arg4;
@end

