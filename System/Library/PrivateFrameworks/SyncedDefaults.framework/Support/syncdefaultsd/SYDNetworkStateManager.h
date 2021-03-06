//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_transaction;

@interface SYDNetworkStateManager : NSObject
{
    struct __SCNetworkReachability *_reachability;
    int _serviceState;
    _Bool _stateIsKnown;
    _Bool _isStarted;
    unsigned int _reachabilityFlags;
    _Bool _allowsCellular;
    NSString *_serviceHostname;
    _Bool _initialReachabilityTestFailedActive;
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)networkManager;
@property(nonatomic) _Bool allowsCellular; // @synthesize allowsCellular=_allowsCellular;
@property(readonly, nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(readonly, nonatomic) int serviceState; // @synthesize serviceState=_serviceState;
@property(copy, nonatomic) NSString *serviceHostname; // @synthesize serviceHostname=_serviceHostname;
- (void).cxx_destruct;
- (void)shutdown;
@property(readonly, nonatomic) NSString *serviceStateDescription;
- (void)start;
- (void)_initialReachabilityTestFailed;
- (void)_reachabilityFlagsDidChange:(unsigned int)arg1;
- (void)_setServiceState:(int)arg1;
- (void)_setupReachability;
- (void)_teardownReachability;
- (void)dealloc;
- (id)init;

@end

