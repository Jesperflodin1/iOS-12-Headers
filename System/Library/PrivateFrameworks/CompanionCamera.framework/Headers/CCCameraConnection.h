/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:50:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionCamera/CompanionCamera-Structs.h>
#import <libobjc.A.dylib/CCCameraConnectionProtocol.h>
#import <libobjc.A.dylib/FigCameraViewfinderDelegate.h>
#import <libobjc.A.dylib/FigCameraViewfinderSessionDelegate.h>

@protocol OS_dispatch_source, CCCameraConnectionDelegate;
@class CCCameraConnectionInternal, NSXPCConnection, NSString, FigCameraViewfinder, FigCameraViewfinderSession, NSObject, NSDate;

@interface CCCameraConnection : NSObject <CCCameraConnectionProtocol, FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {

	CCCameraConnectionInternal* _internal;
	NSXPCConnection* _xpc;
	id _orientationChangeObserver;
	NSString* _previewEndpoint;
	FigCameraViewfinder* _remoteViewfinder;
	FigCameraViewfinderSession* _remoteViewfinderSession;
	unsigned long long _desiredPreviewState;
	unsigned long long _currentPreviewState;
	unsigned long long _interruptionCount;
	NSObject*<OS_dispatch_source> _zoomTimer;
	float _pendingZoomAmount;
	float _lastSentZoomAmount;
	int _deviceConnectedNotificationToken;
	int _deviceDisconnectedNotificationToken;
	BOOL _burstInProgress;
	BOOL _capturing;
	NSDate* _captureStartDate;
	long long _shallowDepthOfFieldStatus;
	id<CCCameraConnectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CCCameraConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2 ;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2 ;
-(void)cameraViewfinderSession:(id)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_CC0)arg4 ;
-(void)cameraViewfinderSessionPreviewStreamDidOpen:(id)arg1 ;
-(void)cameraViewfinderSession:(id)arg1 previewStreamDidCloseWithStatus:(int)arg2 ;
-(void)photoTaken:(id)arg1 ;
-(void)switchedMirroringMode:(BOOL)arg1 ;
-(long long)_flashMode;
-(void)burstCaptureNumberOfPhotosDidChange:(unsigned long long)arg1 ;
-(void)didStartCaptureTimer;
-(void)countdownCanceled;
-(void)willStartCapturing;
-(void)didStopCapture;
-(void)burstCaptureWillStart;
-(void)burstCaptureDidStop;
-(long long)_captureMode;
-(void)modeSelected:(long long)arg1 ;
-(void)showingLivePreviewDidChange;
-(void)captureDeviceDidChange;
-(void)flashModeDidChange;
-(void)hdrModeDidChange;
-(void)irisModeDidChange;
-(void)zoomDidChange:(double)arg1 ;
-(void)didUpdateShallowDepthOfFieldStatus:(long long)arg1 ;
-(void)didUpdateThumbnailWithData:(id)arg1 isVideo:(BOOL)arg2 ;
-(void)switchedOrientation:(long long)arg1 ;
-(BOOL)isOpen;
-(void)_zoomTimerFired;
-(oneway void)xpc_ensureSwitchedToOneOfSupportedCaptureModes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)takePhotoWithCountdown:(unsigned long long)arg1 ;
-(oneway void)xpc_beginBurstCaptureWithReply:(/*^block*/id)arg1 ;
-(oneway void)xpc_endBurstCaptureWithReply:(/*^block*/id)arg1 ;
-(oneway void)xpc_setCaptureMode:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_startCaptureWithMode:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_stopCaptureWithReply:(/*^block*/id)arg1 ;
-(oneway void)xpc_setPreviewEndpoint:(id)arg1 ;
-(oneway void)xpc_setFocusPoint:(id)arg1 ;
-(oneway void)xpc_fetchCurrentStateIncludingSupportedCaptureModes:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_cancelCountdown;
-(oneway void)xpc_setZoom:(float)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_setFlashMode:(long long)arg1 ;
-(oneway void)xpc_setHDRMode:(long long)arg1 ;
-(oneway void)xpc_setIrisMode:(long long)arg1 ;
-(oneway void)xpc_toggleCameraDevice;
-(void)_checkin;
-(void)closePreview;
-(BOOL)_shouldReportEvent;
-(long long)_hdrMode;
-(long long)_irisMode;
-(BOOL)_isShowingLivePreview;
-(id)_supportedCaptureModes;
-(void)openPreview;
-(BOOL)_toggleCameraDeviceSupport;
-(BOOL)_zoomSupport;
-(double)_zoomAmount;
-(long long)_flashSupport;
-(long long)_hdrSupport;
-(long long)_irisSupport;
-(BOOL)_burstSupport;
-(void)_performPreviewStateTransitionsIfNeeded;
-(BOOL)isPreviewConnected;
-(void)_handleInvalidation;
-(void)_handleInterruption;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<CCCameraConnectionDelegate>)arg1 ;
-(id<CCCameraConnectionDelegate>)delegate;
-(long long)_currentOrientation;
-(void)open;
-(void)close;
@end

