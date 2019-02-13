//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUNavigationController.h>

@class NSMutableArray, ServiceBridgedNavigationItem;
@protocol ServiceBridgedNavigationControllerProxy;

@interface ServiceBridgedNavigationController : SUNavigationController
{
    id <ServiceBridgedNavigationControllerProxy> _proxyHandler;
    ServiceBridgedNavigationItem *_bridgedNavigationItem;
    NSMutableArray *_containerViewControllers;
}

+ (id)sharedController;
@property(retain, nonatomic) NSMutableArray *containerViewControllers; // @synthesize containerViewControllers=_containerViewControllers;
@property(readonly, nonatomic) ServiceBridgedNavigationItem *bridgedNavigationItem; // @synthesize bridgedNavigationItem=_bridgedNavigationItem;
@property(nonatomic) __weak id <ServiceBridgedNavigationControllerProxy> proxyHandler; // @synthesize proxyHandler=_proxyHandler;
- (void).cxx_destruct;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)topViewController;
- (id)viewControllers;
- (void)removeAllContainerViewControllers;
- (void)synchonrizeContinainerViewControllers;
- (void)setupWithContainerViewController:(id)arg1;
- (id)init;

@end
