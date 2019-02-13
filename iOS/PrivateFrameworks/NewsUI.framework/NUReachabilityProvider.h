//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/FCNetworkReachabilityObserving-Protocol.h>
#import <NewsUI/SXReachabilityProvider-Protocol.h>

@class FCNetworkReachability, NSHashTable, NSString;

@interface NUReachabilityProvider : NSObject <FCNetworkReachabilityObserving, SXReachabilityProvider>
{
    FCNetworkReachability *_networkReachability;
    NSHashTable *_observers;
}

@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) FCNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
- (void).cxx_destruct;
- (void)networkReachabilityDidChange:(id)arg1;
- (void)removeReachabilityObserver:(id)arg1;
- (void)addReachabilityObserver:(id)arg1;
- (_Bool)isNetworkReachable;
- (id)initWithNetworkReachability:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
