//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CarChromeModeController-Protocol.h"
#import "CarTableViewFocusing-Protocol.h"
#import "NSObject-Protocol.h"

@class CarDestinationsTabBarItem;
@protocol CarDestinationsTabDelegate;

@protocol CarDestinationsTab <NSObject, CarChromeModeController, CarTableViewFocusing>
@property(nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) CarDestinationsTabBarItem *destinationsTabBarItem;
@property(nonatomic) __weak id <CarDestinationsTabDelegate> delegate;

@optional
- (void)didReselectTab;
- (void)didSelectTab;
@end
