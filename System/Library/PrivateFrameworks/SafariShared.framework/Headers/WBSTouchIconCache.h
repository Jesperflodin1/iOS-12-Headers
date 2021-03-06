//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSSiteMetadataImageCacheDelegate-Protocol.h>
#import <SafariShared/WBSSiteMetadataProvider-Protocol.h>
#import <SafariShared/WBSWebViewMetadataFetchOperationDelegate-Protocol.h>

@class NSCache, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSURL, WBSSiteMetadataImageCache, WBSTouchIconCacheSettingsSQLiteStore;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSTouchIconCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSWebViewMetadataFetchOperationDelegate, WBSSiteMetadataProvider>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    _Bool _didLoadSettings;
    WBSSiteMetadataImageCache *_imageCache;
    NSMutableDictionary *_hostsToRequestSets;
    NSMutableDictionary *_touchIconsDataForHosts;
    NSMutableSet *_failedTouchIconRequestHosts;
    NSCache *_requestsToResponses;
    NSMutableDictionary *_requestsToDelayedResponses;
    NSMutableArray *_pendingSaveTouchIconToDiskBlocks;
    NSMutableSet *_pendingTouchIconRequestHosts;
    WBSTouchIconCacheSettingsSQLiteStore *_cacheSettingsStore;
    long long _protectionType;
    _Bool _allowFetchingOverCellularNetwork;
    long long _fileMappingStyle;
    _Bool _readOnly;
    _Bool _internalQueueBusy;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
    NSURL *_cacheDirectoryURL;
}

+ (id)_monogramConfiguration;
+ (id)_generateDefaultFavoritesIconWithGlyphColor:(id)arg1;
+ (id)_favoritesGlyph;
+ (id)generateFavoritesIconForTitle:(id)arg1 url:(id)arg2 backgroundColor:(id)arg3;
+ (id)_generateFavoritesIconForRequest:(id)arg1 withBackgroundColor:(id)arg2;
+ (id)defaultFavoritesIcon;
+ (id)defaultGlyphColor;
+ (id)defaultBackgroundColor;
@property(getter=isInternalQueueBusy) _Bool internalQueueBusy; // @synthesize internalQueueBusy=_internalQueueBusy;
@property(readonly, nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(readonly, nonatomic) NSURL *cacheDirectoryURL; // @synthesize cacheDirectoryURL=_cacheDirectoryURL;
@property(nonatomic) __weak id <WBSSiteMetadataProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
- (void).cxx_destruct;
- (void)_willSaveTouchIcon:(id)arg1 withCacheSettingsEntry:(id)arg2;
- (void)_didLoadTouchIcon:(id)arg1 withCacheSettingsEntry:(id)arg2;
- (id)_operationWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_didGenerateResponse:(id)arg1 forRequest:(id)arg2;
- (void)webViewMetadataFetchOperation:(id)arg1 didFinishUsingWebView:(id)arg2;
- (id)webViewMetadataFetchOperation:(id)arg1 webViewOfSize:(struct CGSize)arg2 withConfiguration:(id)arg3;
- (id)siteMetadataImageCache:(id)arg1 customFileNameForKeyString:(id)arg2;
- (void)siteMetadataImageCacheDidEmptyCache:(id)arg1;
- (void)siteMetadataImageCache:(id)arg1 didRemoveImageFromCacheForKeyString:(id)arg2;
- (void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3;
- (void)siteMetadataImageCacheDidFinishLoadingSettings:(id)arg1;
- (id)_imageCacheSettingsDatabaseURL;
@property(readonly, nonatomic) NSURL *imageDirectoryURL;
- (void)_notifyImageWasLoaded:(id)arg1 forHost:(id)arg2;
- (id)_responseForRequest:(id)arg1 withTouchIcon:(id)arg2;
- (_Bool)_shouldGenerateTouchIconFromTouchIcon:(id)arg1 forRequest:(id)arg2;
- (void)_removeTouchIconsDataForHost:(id)arg1;
- (void)removeTouchIconMetadataForHosts:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateTouchIconsDataForHost:(id)arg1 image:(id)arg2 requestDidSucceed:(_Bool)arg3 isUserLoadedWebpageRequest:(_Bool)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(_Bool)arg5 UUIDString:(id)arg6;
- (void)_saveTouchIconToDiskWithResult:(id)arg1 forRequest:(id)arg2;
- (void)_enumerateRequestsForHost:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_registerRequest:(id)arg1;
- (id)_resizedImage:(id)arg1 forHost:(id)arg2;
- (double)_maximumScreenScale;
- (void)savePendingChangesBeforeTermination;
- (void)purgeUnneededCacheEntries;
- (void)emptyCaches;
- (id)operationForRequest:(id)arg1;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (void)_setUpAndReturnPreparedResponseForRequest:(id)arg1 didReceiveNewData:(_Bool)arg2;
- (void)_setUpAndReturnDelayedResponseForRequest:(id)arg1;
- (id)_responseForTouchIconRequestWithNoHost:(id)arg1;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(_Bool)arg2;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(_Bool *)arg2;
- (_Bool)canHandleRequest:(id)arg1;
- (_Bool)_shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(_Bool)arg2 initiatedFromBookmarkInteraction:(_Bool)arg3;
- (_Bool)_shouldRequestTouchIconWithTimeoutForURL:(id)arg1 inUserLoadedWebpage:(_Bool)arg2 initiatedFromBookmarkInteraction:(_Bool)arg3;
- (_Bool)shouldRequestTouchIconForURL:(id)arg1 inUserLoadedWebpage:(_Bool)arg2;
- (_Bool)shouldRequestTouchIconForWebPageNavigationFromBookmarkInteractionForURL:(id)arg1;
- (_Bool)hasDeterminedIconAvailabilityForURL:(id)arg1;
- (void)releaseTouchIconsForHosts:(id)arg1;
- (void)releaseTouchIconForHost:(id)arg1;
- (void)releaseTouchIconForURLString:(id)arg1;
- (void)retainTouchIconsForHosts:(id)arg1;
- (void)retainTouchIconForHost:(id)arg1;
- (void)retainTouchIconForURLString:(id)arg1;
- (void)cacheFirstAvailableTouchIcon:(id)arg1 forURL:(id)arg2;
- (void)_saveTouchIconToDisk:(id)arg1 forHost:(id)arg2 requestDidSucceed:(_Bool)arg3 isUserLoadedWebpageRequest:(_Bool)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(_Bool)arg5;
- (id)_touchIconForURL:(id)arg1;
- (void)_ensureCacheDirectory;
- (void)_setUpImageCacheSettingsSQLiteStore;
- (id)uuidStringToHost;
- (void)_openCacheSettingsDatabaseIfNeeded;
- (void)dealloc;
- (id)initWithCacheDirectoryURL:(id)arg1 isReadOnly:(_Bool)arg2 protectionType:(long long)arg3 allowFetchingOverCellularNetwork:(_Bool)arg4 fileMappingStyle:(long long)arg5;
- (id)initWithCacheDirectoryURL:(id)arg1 isReadOnly:(_Bool)arg2;
- (id)initWithCacheDirectoryURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool providesFavicons;
@property(readonly) Class superclass;

@end

