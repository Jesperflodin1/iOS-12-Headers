//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSUNetworkReachability : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    struct __SCNetworkReachability *_reachabilityRef;
    long long _enableCount;
    NSString *_hostName;
    long long _cachedStatus;
    _Bool _notifierActive;
    CDUnknownBlockType _reachabilityUpdatedBlock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

+ (id)p_stringForNetworkReachabilityFlags:(unsigned int)arg1;
+ (id)p_stringForNetworkReachabilityStatus:(long long)arg1;
+ (long long)networkStatusForFlags:(unsigned int)arg1;
+ (void)internetReachabilityStatusWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)internetReachabilityStatusQueue;
+ (id)networkReachabilityForInternetConnection;
+ (id)networkReachabilityForDocumentResources;
+ (id)networkReachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)networkReachabilityWithHostName:(id)arg1;
+ (id)networkReachabilityWithNetworkReachabilityRef:(struct __SCNetworkReachability *)arg1 hostNameOrNil:(id)arg2;
+ (struct __SCNetworkReachability *)newNetworkReachabilityRefForInternetConnection;
+ (struct __SCNetworkReachability *)newNetworkReachabilityRefWithAddress:(const struct sockaddr_in *)arg1;
+ (struct __SCNetworkReachability *)newNetworkReachabilityRefWithHostName:(const char *)arg1;
+ (_Bool)synchronousHostLookup:(id)arg1;
@property(nonatomic) _Bool notifierActive; // @synthesize notifierActive=_notifierActive;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(copy, nonatomic) CDUnknownBlockType reachabilityUpdatedBlock; // @synthesize reachabilityUpdatedBlock=_reachabilityUpdatedBlock;
- (void).cxx_destruct;
- (void)enableNotifier;
- (void)disableNotifier;
- (void)p_stopNotifier;
- (void)p_startNotifier;
@property(readonly, nonatomic) long long lastKnownStatus;
- (void)p_updateCachedStatus:(long long)arg1;
- (void)updateCachedStatus:(long long)arg1;
- (long long)statusFromFlags:(unsigned int)arg1;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (struct sockaddr_in)hostAddress;
- (void)dealloc;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;
- (id)init;

@end

