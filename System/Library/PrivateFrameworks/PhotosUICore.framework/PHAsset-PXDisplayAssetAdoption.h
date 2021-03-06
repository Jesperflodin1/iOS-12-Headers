//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAsset.h>

#import <PhotosUICore/PXPhotoKitAdjustedDisplayAsset-Protocol.h>

@class NSDate, NSString;

@interface PHAsset (PXDisplayAssetAdoption) <PXPhotoKitAdjustedDisplayAsset>
- (id)applyAdjustmentsToEditModel:(id)arg1 editSource:(id)arg2;
@property(readonly, nonatomic) PHAsset *photoKitAsset;
@property(readonly, nonatomic) NSString *adjustedContentIdentifier;
@property(readonly, nonatomic) _Bool wantsAdjustments;
- (void)_adjustRectWithFaces:(struct CGRect *)arg1 forAssetRect:(struct CGRect)arg2 verticalContentMode:(long long)arg3;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;
- (long long)isContentEqualTo:(id)arg1;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly, nonatomic) _Bool isInCloud;

// Remaining properties
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) float hdrGain;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly) Class superclass;
@end

