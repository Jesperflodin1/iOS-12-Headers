//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUReachabilityMonitor, MAAsset, NSDictionary, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface SFDeviceAssetManager : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    MAAsset *_deviceAssetManagement;
    CUReachabilityMonitor *_reachabilityMonitor;
    NSDictionary *_productTypesMappingTable;
    NSDictionary *_cachedProductMappingsTable;
    NSDictionary *_mpnMappingTable;
    NSDictionary *_cachedMpnMappingTable;
    NSURL *_cacheDirectory;
    NSMutableDictionary *_cachedQueryPaths;
    _Bool _useProcessLocalCache;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_networkStatus;
}

@property(readonly, nonatomic) NSString *networkStatus; // @synthesize networkStatus=_networkStatus;
@property(nonatomic) _Bool useProcessLocalCache; // @synthesize useProcessLocalCache=_useProcessLocalCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)storeEntries:(id)arg1 inLocalCacheWithFileName:(id)arg2;
- (id)localCacheWithFileName:(id)arg1;
- (void)storeQueryResultsInLocalCache:(id)arg1;
- (void)clearQueryResultFromLocalCache:(id)arg1;
- (void)addQueryResultToLocalCache:(id)arg1 url:(id)arg2 isFallback:(_Bool)arg3;
- (id)locallyCachedQueryResults;
- (void)storeMPNsInLocalCache:(id)arg1 forProductType:(id)arg2;
- (id)locallyCachedMPNsForProductType:(id)arg1;
- (void)storeProductMappingsInLocalCache:(id)arg1;
- (id)locallyCachedProductMappings;
- (id)cacheDirectory;
- (id)hardcodedMappedProducts;
- (void)addKeyValuePair:(id)arg1 with:(id)arg2 toQuery:(id)arg3;
- (id)mpnMappingFileNameForProductType:(id)arg1;
- (id)onqueue_assetMappedMPNForMPN:(id)arg1 forProductType:(id)arg2;
- (id)onqueue_assetMappedProductTypeForProductType:(id)arg1;
- (id)onqueue_managementAsset;
- (void)onqueue_validateMPNInQuery:(id)arg1;
- (id)onqueue_mappedProductTypeForProductType:(id)arg1;
- (void)mappedProductTypeForProductType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)onqueue_validateProductTypeInQuery:(id)arg1;
- (void)onqueue_downloadAsset:(id)arg1 ucat:(struct LogCategory *)arg2 queryLogString:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)onqueue_findAssetBundleForAssetQuery:(id)arg1 ucat:(struct LogCategory *)arg2 queryType:(id)arg3 fallback:(_Bool)arg4 retryAttempt:(_Bool)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (void)onqueue_findAssetBundleForDeviceQuery:(id)arg1 installedOnly:(_Bool)arg2 fallback:(_Bool)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)onqueue_manuallyFindFallbackAssetBundleMatchingQuery:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)queryTypeForInstalledOnly:(_Bool)arg1 fallback:(_Bool)arg2;
- (_Bool)canUseMobileAssetSPI;
- (void)onqueue_purgeAssetsMatchingQuery:(id)arg1;
- (void)purgeAssetsMatchingQuery:(id)arg1;
- (void)onqueue_getAssetBundleForDeviceQuery:(id)arg1 timeout:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)onqueue_getCachedAssetBundleForTask:(id)arg1;
- (void)getAssetBundleForDeviceQuery:(id)arg1 timeout:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)onqueue_invalidate;
- (void)invalidate;
- (void)onqueue_updateManagementAssetIfNecessary;
- (void)onqueue_updateMetaDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)logNetworkStatus;
- (void)onqueue_activate;
- (void)activate;
- (id)init;

@end

