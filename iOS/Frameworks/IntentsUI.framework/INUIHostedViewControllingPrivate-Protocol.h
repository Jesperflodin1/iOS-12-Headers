//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IntentsUI/INUIHostedViewControlling-Protocol.h>

@class INInteraction, NSSet;

@protocol INUIHostedViewControllingPrivate <INUIHostedViewControlling>
- (void)configureViewForParameters:(NSSet *)arg1 ofInteraction:(INInteraction *)arg2 context:(unsigned long long)arg3 completion:(void (^)(_Bool, NSSet *, struct CGSize))arg4;

@optional
- (void)viewWasCancelled;
@end
