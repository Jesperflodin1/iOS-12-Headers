//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ExternalDownloadState : NSObject
{
    NSMutableDictionary *_externalAssetValues;
    NSMutableDictionary *_externalDownloadValues;
}

- (void)_setValues:(id)arg1 forEntity:(long long)arg2 dictionary:(id)arg3;
- (void)_setValue:(id)arg1 forEntity:(long long)arg2 property:(id)arg3 dictionary:(id)arg4;
- (id)_copyValueForEntity:(long long)arg1 property:(id)arg2 dictionary:(id)arg3;
- (id)valueForExternalProperty:(id)arg1 ofDownloadID:(long long)arg2;
- (id)valueForExternalProperty:(id)arg1 ofAssetID:(long long)arg2;
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofDownloadID:(long long)arg3;
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofAssetID:(long long)arg3;
- (void)setExternalValuesWithDictionary:(id)arg1 forDownloadID:(long long)arg2;
- (void)setExternalValuesWithDictionary:(id)arg1 forAssetID:(long long)arg2;
- (void)setBytesUploaded:(long long)arg1 forAssetID:(long long)arg2 ofDownloadID:(long long)arg3;
- (void)setBytesDownloaded:(long long)arg1 forAssetID:(long long)arg2 ofDownloadID:(long long)arg3;
- (void)removeExternalValuesForDownloadID:(long long)arg1;
- (void)removeExternalValuesForAssetID:(long long)arg1;
- (id)externalValuesForDownloadID:(long long)arg1;
- (id)externalValuesForAssetID:(long long)arg1;
- (void)dealloc;
- (id)init;

@end
