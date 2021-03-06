//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UITouch;

__attribute__((visibility("hidden")))
@interface RCSelectionTouchTrackingInfo : NSObject
{
    double _lastLocation;
    UITouch *_touch;
    double _trackingOffset;
    long long _selectionBarType;
    long long _selectionAffinity;
}

@property(nonatomic) long long selectionAffinity; // @synthesize selectionAffinity=_selectionAffinity;
@property(nonatomic) long long selectionBarType; // @synthesize selectionBarType=_selectionBarType;
@property(nonatomic) double trackingOffset; // @synthesize trackingOffset=_trackingOffset;
@property(nonatomic) __weak UITouch *touch; // @synthesize touch=_touch;
- (void).cxx_destruct;
- (id)description;
- (void)updateTrackingInfo;

@end

