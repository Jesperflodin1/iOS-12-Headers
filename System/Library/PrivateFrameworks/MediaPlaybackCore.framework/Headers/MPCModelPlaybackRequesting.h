/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:35:25 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MPSectionedCollection;


@protocol MPCModelPlaybackRequesting <NSObject>
@property (nonatomic,readonly) MPSectionedCollection * playbackSourceModelObjects; 
@optional
-(void)setShouldExcludeNonShuffleItems:(BOOL)arg1;
-(void)setPlaybackPrioritizedIndexPaths:(id)arg1;
-(void)setAllowsPlaybackResponseBatching:(BOOL)arg1;
-(MPSectionedCollection *)playbackSourceModelObjects;

@end

