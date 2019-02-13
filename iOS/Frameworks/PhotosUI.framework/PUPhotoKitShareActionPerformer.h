//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotoKitActionPerformer.h>

@class PUPhotosSharingViewController;

__attribute__((visibility("hidden")))
@interface PUPhotoKitShareActionPerformer : PUPhotoKitActionPerformer
{
    PUPhotosSharingViewController *_preheatedSharingViewController;
}

+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
@property(retain, nonatomic) PUPhotosSharingViewController *preheatedSharingViewController; // @synthesize preheatedSharingViewController=_preheatedSharingViewController;
- (void).cxx_destruct;
- (id)_assetsFetchResultByAssetCollectionFromCollectionListFetchResult:(id)arg1 inDataSource:(id)arg2;
- (void)performUserInteractionTask;
- (void)preheatUserInteractionTask;
- (id)_createSharingViewControllerFromCurrentSelection;

@end
