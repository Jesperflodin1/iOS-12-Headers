//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRArticleContentViewController, FRWebViewController, NSArray, NSString, NSURL;

@protocol FRArticleContentViewControllerDelegate <NSObject>
- (void)articleContentViewControllerSubscriptionHeaderDidBecomeInvisible:(FRArticleContentViewController *)arg1;
- (void)articleContentViewControllerAlreadySubscriberTappedFromHardPaywall:(FRArticleContentViewController *)arg1;
- (void)articleContentViewControllerGetSubscriptionTappedFromHardPaywall:(FRArticleContentViewController *)arg1;
- (void)articleContentViewControllerAlreadySubscriberTappedFromPlacard:(FRArticleContentViewController *)arg1;
- (void)articleContentViewControllerGetSubscriptionTappedFromPlacard:(FRArticleContentViewController *)arg1;
- (void)articleContentViewController:(FRArticleContentViewController *)arg1 didUpdateTitle:(NSString *)arg2;
- (void)articleContentViewController:(FRArticleContentViewController *)arg1 didScrollToVerticalContentOffset:(double)arg2 withinContentHeight:(double)arg3;
- (void)articleContentViewController:(FRArticleContentViewController *)arg1 wantsToShowWebViewController:(FRWebViewController *)arg2 animated:(_Bool)arg3;
- (void)articleContentViewController:(FRArticleContentViewController *)arg1 openURL:(NSURL *)arg2 animated:(_Bool)arg3;
- (void)articleContentViewControllerDidChangeContent:(FRArticleContentViewController *)arg1;
- (void)articleContentViewControllerDidFailLoading:(FRArticleContentViewController *)arg1 error:(long long)arg2;
- (void)articleContentViewControllerDidFinishLoading:(FRArticleContentViewController *)arg1;
- (void)articleContentViewControllerDidChangeVisitableItem:(FRArticleContentViewController *)arg1;
- (void)articleContentViewController:(FRArticleContentViewController *)arg1 didContinueLoadingWithProgress:(double)arg2;
- (void)articleContentViewController:(FRArticleContentViewController *)arg1 wantsToUpdateProgressBarHidden:(_Bool)arg2;
- (void)articleContentViewControllerWillBeginLoading:(FRArticleContentViewController *)arg1;
- (void)articleContentHasBeenReadPastMidPoint:(FRArticleContentViewController *)arg1;
- (void)articleExcerptHasBeenRead:(FRArticleContentViewController *)arg1;
- (void)articleContentHasBeenRead:(FRArticleContentViewController *)arg1;

@optional
- (void)articleContentViewController:(FRArticleContentViewController *)arg1 didFinishLoadingEndOfArticleSectionWithPublisherHeadlines:(NSArray *)arg2 relatedHeadlines:(NSArray *)arg3;
@end

