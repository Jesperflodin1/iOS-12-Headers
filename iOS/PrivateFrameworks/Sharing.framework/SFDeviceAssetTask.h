//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSError, SFDeviceAssetQuery;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SFDeviceAssetTask : NSObject
{
    _Bool _useProcessLocalCache;
    SFDeviceAssetQuery *_deviceAssetQuery;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_timer;
    CDUnknownBlockType _completionHandler;
    NSBundle *_assetBundle;
    NSBundle *_fallbackAssetBundle;
    NSBundle *_cachedAssetBundle;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSBundle *cachedAssetBundle; // @synthesize cachedAssetBundle=_cachedAssetBundle;
@property(readonly, nonatomic) NSBundle *fallbackAssetBundle; // @synthesize fallbackAssetBundle=_fallbackAssetBundle;
@property(readonly, nonatomic) NSBundle *assetBundle; // @synthesize assetBundle=_assetBundle;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) _Bool useProcessLocalCache; // @synthesize useProcessLocalCache=_useProcessLocalCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) SFDeviceAssetQuery *deviceAssetQuery; // @synthesize deviceAssetQuery=_deviceAssetQuery;
- (void).cxx_destruct;
- (_Bool)processCanAccessURL:(id)arg1 error:(id *)arg2;
- (id)bundleAtURL:(id)arg1 error:(id *)arg2;
- (id)bundleURLFromAssetURL:(id)arg1;
- (void)completeWithBundle:(id)arg1 isFallback:(_Bool)arg2 isCached:(_Bool)arg3;
- (_Bool)completeIfPossible;
- (void)cancelTimeout;
- (_Bool)updateTaskWithBundle:(id)arg1 error:(id)arg2 isFallback:(_Bool)arg3 isCached:(_Bool)arg4;
- (_Bool)updateTaskWithAssetBundleURL:(id)arg1 error:(id)arg2 isFallback:(_Bool)arg3 isCached:(_Bool)arg4;
- (_Bool)updateTaskWithAssetURL:(id)arg1 error:(id)arg2 isFallback:(_Bool)arg3 isCached:(_Bool)arg4;
- (id)initWithDeviceQuery:(id)arg1 dispatchQueue:(id)arg2 useProcessLocalCache:(_Bool)arg3 timeout:(double)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;

@end
