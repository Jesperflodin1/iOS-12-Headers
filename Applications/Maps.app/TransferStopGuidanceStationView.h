//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImageView;

__attribute__((visibility("hidden")))
@interface TransferStopGuidanceStationView : UIView
{
    UIImageView *_stationIcon;
    _Bool _shouldShowHighlight;
    CAShapeLayer *_highlightLayer;
}

+ (double)necessaryTopOffset;
@property(nonatomic) _Bool shouldShowHighlight; // @synthesize shouldShowHighlight=_shouldShowHighlight;
@property(readonly) UIImageView *stationIcon; // @synthesize stationIcon=_stationIcon;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

