//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface TKVibrationRecorderProgressDotImageView : UIImageView
{
    double _timeInterval;
    double _duration;
    double _previousPauseTimeInterval;
    double _previousPauseDuration;
    double _accessibilityFrameAdditionalHeight;
}

@property(nonatomic) double accessibilityFrameAdditionalHeight; // @synthesize accessibilityFrameAdditionalHeight=_accessibilityFrameAdditionalHeight;
@property(nonatomic) double previousPauseDuration; // @synthesize previousPauseDuration=_previousPauseDuration;
@property(nonatomic) double previousPauseTimeInterval; // @synthesize previousPauseTimeInterval=_previousPauseTimeInterval;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
- (unsigned long long)accessibilityTraits;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;

@end
