//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAutoloopVideoTask.h>

@class AVAsset;

@interface PXAutoloopVideoRenderTask : PXAutoloopVideoTask
{
    AVAsset *_outputVideo;
}

@property(retain) AVAsset *outputVideo; // @synthesize outputVideo=_outputVideo;
- (void).cxx_destruct;
- (void)performTaskWithInput:(id)arg1;

@end
