/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:38 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTCompositionItem.h>

@class AVAsset;

@interface JTMovieCompositionItem : JTCompositionItem {

	int _audioAssetOverwriteStartOffset;
	AVAsset* _asset;
	AVAsset* _audioAssetOverwrite;

}

@property (nonatomic,retain) AVAsset * asset;                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) AVAsset * audioAssetOverwrite;                   //@synthesize audioAssetOverwrite=_audioAssetOverwrite - In the implementation block
@property (assign,nonatomic) int audioAssetOverwriteStartOffset;              //@synthesize audioAssetOverwriteStartOffset=_audioAssetOverwriteStartOffset - In the implementation block
-(SCD_Struct_JT16)applySpeed:(SCD_Struct_JT16)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_JT16)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JT6)arg1 paddedFromTime:(SCD_Struct_JT6)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_JT16)arg1 ;
-(id)speedRangesForSourceRange:(SCD_Struct_JT16)arg1 destinationRange:(SCD_Struct_JT16)arg2 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JT6)arg1 ;
-(id)segmentWithCharacteristic:(id)arg1 sourceRange:(SCD_Struct_JT16)arg2 destinationRange:(SCD_Struct_JT16)arg3 ;
-(id)initWithClip:(id)arg1 timeScale:(int)arg2 ;
-(AVAsset *)audioAssetOverwrite;
-(int)audioAssetOverwriteStartOffset;
-(BOOL)needAudioLoop;
-(id)videoTrackSegmentsLoopedWithDestinationRange:(SCD_Struct_JT16)arg1 ;
-(id)audioTrackSegmentsLoopedWithDestinationTime:(SCD_Struct_JT6)arg1 ;
-(void)setAudioAssetOverwrite:(AVAsset *)arg1 ;
-(void)setAudioAssetOverwriteStartOffset:(int)arg1 ;
-(void)setAsset:(AVAsset *)arg1 ;
-(AVAsset *)asset;
@end

