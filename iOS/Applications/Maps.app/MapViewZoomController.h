//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MNNavigationServiceObserver-Protocol.h"

@class IOSChromeViewController, MKMapView, NSString, NavigationDisplay;
@protocol MapViewZoomControllerDelegate;

__attribute__((visibility("hidden")))
@interface MapViewZoomController : NSObject <MNNavigationServiceObserver>
{
    unsigned long long _zoom;
    id <MapViewZoomControllerDelegate> _delegate;
    IOSChromeViewController *_chromeViewController;
    NavigationDisplay *_navigationDisplay;
    double _currentCameraOffset;
}

@property(nonatomic) double currentCameraOffset; // @synthesize currentCameraOffset=_currentCameraOffset;
@property(retain, nonatomic) NavigationDisplay *navigationDisplay; // @synthesize navigationDisplay=_navigationDisplay;
@property(nonatomic) __weak IOSChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(nonatomic) __weak id <MapViewZoomControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long zoom; // @synthesize zoom=_zoom;
- (void).cxx_destruct;
- (void)navigationServiceDidArrive:(id)arg1;
- (double)_horizontalCameraOffset;
- (void)_applyOffsetCameraForOverlay:(_Bool)arg1 animated:(_Bool)arg2;
- (CDStruct_02837cd9)_boundingMapRectForLocation:(id)arg1;
- (void)_zoomToOverview:(_Bool)arg1;
- (void)_zoomToLowGuidance:(_Bool)arg1 startCameraTracking:(_Bool)arg2;
- (void)_zoomToDetail:(_Bool)arg1 startCameraTracking:(_Bool)arg2;
- (void)updateCameraForTraits:(id)arg1 containerStyle:(unsigned long long)arg2;
- (void)setZoomToTargetWithRect:(CDStruct_02837cd9)arg1;
- (void)setZoomTo:(unsigned long long)arg1 startCameraTracking:(_Bool)arg2;
- (void)setZoomTo:(unsigned long long)arg1;
@property(readonly, nonatomic) MKMapView *mapView;
- (id)initWithNavigationDisplay:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
