//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface TPSDataCacheController : NSObject
{
    NSObject<OS_dispatch_queue> *_dataCacheSerialQueue;
    long long _dataType;
    _Bool _backgroundOriginUpdate;
    _Bool _dataCacheDirty;
    float _defaultPriority;
    NSString *_languageCode;
    NSMutableArray *_dataCacheArray;
    unsigned long long _cacheSize;
    unsigned long long _maxDataCacheSize;
    NSString *_identifier;
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_dataCacheMap;
    NSString *_cacheDirectory;
    NSMutableArray *_originFetchItems;
}

+ (id)sharedInstance;
+ (void)setAppGroupIdentifier:(id)arg1;
@property(retain, nonatomic) NSMutableArray *originFetchItems; // @synthesize originFetchItems=_originFetchItems;
@property(retain, nonatomic) NSString *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
@property(retain, nonatomic) NSMutableDictionary *dataCacheMap; // @synthesize dataCacheMap=_dataCacheMap;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool dataCacheDirty; // @synthesize dataCacheDirty=_dataCacheDirty;
@property(nonatomic) unsigned long long maxDataCacheSize; // @synthesize maxDataCacheSize=_maxDataCacheSize;
@property(nonatomic) unsigned long long cacheSize; // @synthesize cacheSize=_cacheSize;
@property(retain, nonatomic) NSMutableArray *dataCacheArray; // @synthesize dataCacheArray=_dataCacheArray;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(nonatomic) _Bool backgroundOriginUpdate; // @synthesize backgroundOriginUpdate=_backgroundOriginUpdate;
@property(nonatomic) float defaultPriority; // @synthesize defaultPriority=_defaultPriority;
- (void).cxx_destruct;
- (id)formattedDataWithFileURL:(id)arg1;
- (id)formattedDataWithData:(id)arg1;
- (void)formattedDataWithFileURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isURLValid:(id)arg1;
- (id)formattedDataForPath:(id)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)formattedDataForRequest:(id)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)saveFileURL:(id)arg1 identifier:(id)arg2 fileSize:(unsigned long long)arg3 lastModified:(id)arg4 dataCache:(id)arg5;
- (id)newDataCache;
- (void)removeDataCache:(id)arg1 updateCache:(_Bool)arg2;
- (void)removeDataCache:(id)arg1;
- (void)removeCacheForIdentifier:(id)arg1;
- (void)removeAllDataCache;
- (void)cancelAllOriginSessionItems;
- (void)addDataCache:(id)arg1;
- (void)updateCacheDelay;
- (void)updateCache;
- (void)reloadDataCache;
- (id)cacheFileURLForIdentifier:(id)arg1;
- (id)cacheFileURLForDataCache:(id)arg1;
- (_Bool)cacheValidForIdentifier:(id)arg1 path:(id)arg2;
- (void)createCacheDirectory;
- (id)dataCacheForIdentifier:(id)arg1;
- (id)dataCacheForPath:(id)arg1;
- (void)syncCacheImmediately;
- (id)initWithIdentifier:(id)arg1 directoryName:(id)arg2 maxCacheSize:(unsigned long long)arg3 URLSessionDataType:(long long)arg4;
- (id)init;
- (void)commonInit;
- (void)dealloc;

@end

