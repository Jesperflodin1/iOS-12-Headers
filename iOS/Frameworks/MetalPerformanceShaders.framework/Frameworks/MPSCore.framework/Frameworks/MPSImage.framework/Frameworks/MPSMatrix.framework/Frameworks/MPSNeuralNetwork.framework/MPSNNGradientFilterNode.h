//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNGradientFilterNode : MPSNNFilterNode
{
}

- (id)resultStates;
- (id)resultState;
- (id)initWithGradientImages:(id)arg1 sourceImages:(id)arg2 gradientState:(id)arg3 paddingPolicy:(id)arg4;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;

@end
