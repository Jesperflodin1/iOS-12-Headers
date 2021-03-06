/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:38 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NMSMediaContainerQuotaData, NSDictionary;

@interface NMSMediaItemGroup : NSObject {

	BOOL _offPowerSyncAllowed;
	BOOL _downloadedItemsOnly;
	id _referenceObj;
	NMSMediaContainerQuotaData* _quotaData;
	unsigned long long _type;
	NSDictionary* _itemSizesDict;

}

@property (assign,nonatomic) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id referenceObj;                                     //@synthesize referenceObj=_referenceObj - In the implementation block
@property (nonatomic,retain) NMSMediaContainerQuotaData * quotaData;              //@synthesize quotaData=_quotaData - In the implementation block
@property (assign,nonatomic) BOOL offPowerSyncAllowed;                            //@synthesize offPowerSyncAllowed=_offPowerSyncAllowed - In the implementation block
@property (nonatomic,readonly) BOOL isEstimate; 
@property (assign,nonatomic) BOOL downloadedItemsOnly;                            //@synthesize downloadedItemsOnly=_downloadedItemsOnly - In the implementation block
@property (nonatomic,retain) NSDictionary * itemSizesDict;                        //@synthesize itemSizesDict=_itemSizesDict - In the implementation block
+(id)itemGroupWithSyncedPlaylistID:(id)arg1 downloadedItemsOnly:(BOOL)arg2 ;
+(id)itemGroupWithSyncedAlbumID:(id)arg1 downloadedItemsOnly:(BOOL)arg2 ;
+(id)itemGroupWithStoreRecommendation:(id)arg1 downloadedItemsOnly:(BOOL)arg2 ;
+(id)itemGroupWithLibraryHeavyRotationRecommendation:(id)arg1 playlistID:(id)arg2 downloadedItemsOnly:(BOOL)arg3 ;
+(id)itemGroupWithLibraryHeavyRotationRecommendation:(id)arg1 albumID:(id)arg2 downloadedItemsOnly:(BOOL)arg3 ;
+(id)itemGroupWithPodcastFeedURL:(id)arg1 downloadOrder:(unsigned long long)arg2 episodeLimit:(unsigned long long)arg3 downloadedItemsOnly:(BOOL)arg4 ;
+(id)_itemsForContainerClass:(Class)arg1 containerIDs:(id)arg2 includingNonLibraryContent:(BOOL)arg3 includingDownloadedContentOnly:(BOOL)arg4 sizesDictOut:(id*)arg5 ;
+(id)itemGroupWithPodcastFeedURL:(id)arg1 downloadOrder:(unsigned long long)arg2 ;
+(id)itemGroupWithQuotaRefObj:(id)arg1 ;
+(id)_fetchSizeDictForItems:(id)arg1 ;
-(BOOL)isEstimate;
-(id)itemList;
-(id)libraryIdentifiers;
-(NMSMediaContainerQuotaData *)quotaData;
-(NSDictionary *)itemSizesDict;
-(void)setItemSizesDict:(NSDictionary *)arg1 ;
-(BOOL)offPowerSyncAllowed;
-(id)referenceObj;
-(id)libraryIdentifiersForContainerType:(unsigned long long)arg1 ;
-(id)initWithType:(unsigned long long)arg1 refObj:(id)arg2 offPowerSyncAllowed:(BOOL)arg3 quotaRefObj:(id)arg4 downloadedItemsOnly:(BOOL)arg5 ;
-(BOOL)isEqualToContainer:(id)arg1 ;
-(BOOL)downloadedItemsOnly;
-(void)setReferenceObj:(id)arg1 ;
-(void)setQuotaData:(NMSMediaContainerQuotaData *)arg1 ;
-(void)setOffPowerSyncAllowed:(BOOL)arg1 ;
-(void)setDownloadedItemsOnly:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
@end

