//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSCNNDropoutGradientNode : MPSNNGradientFilterNode
{
    float _keepProbability;
    unsigned long long _seed;
    CDStruct_da2e99ad _maskStride;
}

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 keepProbability:(float)arg4 seed:(unsigned long long)arg5 maskStrideInPixels:(CDStruct_14f26992)arg6;
@property(readonly, nonatomic) CDStruct_14f26992 maskStrideInPixels; // @synthesize maskStrideInPixels=_maskStride;
@property(readonly, nonatomic) unsigned long long seed; // @synthesize seed=_seed;
@property(readonly, nonatomic) float keepProbability; // @synthesize keepProbability=_keepProbability;
- (struct FilterGraphNode *)newFilterNode;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 keepProbability:(float)arg4 seed:(unsigned long long)arg5 maskStrideInPixels:(CDStruct_14f26992)arg6;

@end
