//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface COSWristAttributeConfidences : NSObject
{
    double _observationTime;
    double _none;
    double _invalid;
    double _leftWristRightCrown;
    double _leftWristLeftCrown;
    double _rightWristRightCrown;
    double _rightWristLeftCrown;
    double _palm;
    double _dock;
}

@property(readonly, nonatomic) double dock; // @synthesize dock=_dock;
@property(readonly, nonatomic) double palm; // @synthesize palm=_palm;
@property(readonly, nonatomic) double rightWristLeftCrown; // @synthesize rightWristLeftCrown=_rightWristLeftCrown;
@property(readonly, nonatomic) double rightWristRightCrown; // @synthesize rightWristRightCrown=_rightWristRightCrown;
@property(readonly, nonatomic) double leftWristLeftCrown; // @synthesize leftWristLeftCrown=_leftWristLeftCrown;
@property(readonly, nonatomic) double leftWristRightCrown; // @synthesize leftWristRightCrown=_leftWristRightCrown;
@property(readonly, nonatomic) double invalid; // @synthesize invalid=_invalid;
@property(readonly, nonatomic) double none; // @synthesize none=_none;
@property(readonly, nonatomic) double observationTime; // @synthesize observationTime=_observationTime;
- (id)description;
- (void)divideConfidencesBy:(long long)arg1;
- (void)addConfidences:(id)arg1;
- (id)initWithObservationTime:(double)arg1;
- (id)initWithObservationTime:(double)arg1 none:(double)arg2 invalid:(double)arg3 lr:(double)arg4 ll:(double)arg5 rr:(double)arg6 rl:(double)arg7 palm:(double)arg8 dock:(double)arg9;

@end

