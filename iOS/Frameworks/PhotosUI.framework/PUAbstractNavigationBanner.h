//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol PUAbstractNavigationBannerDelegate;

__attribute__((visibility("hidden")))
@interface PUAbstractNavigationBanner : NSObject
{
    id <PUAbstractNavigationBannerDelegate> _delegate;
}

@property(nonatomic) __weak id <PUAbstractNavigationBannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *view;
@property(readonly, nonatomic) double height;

@end
