//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVAudioUnitEQFilterParameters : NSObject
{
    void *_impl;
}

@property(nonatomic) _Bool bypass;
@property(nonatomic) float gain;
@property(nonatomic) float bandwidth;
@property(nonatomic) float frequency;
@property(nonatomic) long long filterType;
- (void)dealloc;
- (id)initWithImpl:(struct AVAudioUnitEQFilterParametersImpl *)arg1;
- (id)init;

@end
