/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:41:39 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol SiriUISiriStatusViewProtocol <NSObject>
@property (assign,nonatomic) long long mode; 
@property (assign,nonatomic) double flamesViewWidth; 
@property (assign,nonatomic) double disabledMicOpacity; 
@property (assign,nonatomic,__weak) id<SiriUISiriStatusViewDelegate> delegate; 
@property (nonatomic,readonly) UIView * flamesContainerView; 
@property (assign,nonatomic) BOOL flamesViewDeferred; 
@property (assign,getter=isInUITrackingMode,nonatomic) BOOL inUITrackingMode; 
@property (assign,nonatomic) BOOL paused; 
@property (nonatomic,readonly) double statusViewHeight; 
@required
-(void)fadeOutCurrentAura;
-(double)flamesViewWidth;
-(void)setupOrbIfNeeded;
-(void)forceMicVisible:(BOOL)arg1;
-(void)setFlamesViewWidth:(double)arg1;
-(double)disabledMicOpacity;
-(void)setDisabledMicOpacity:(double)arg1;
-(UIView *)flamesContainerView;
-(BOOL)flamesViewDeferred;
-(void)setFlamesViewDeferred:(BOOL)arg1;
-(BOOL)isInUITrackingMode;
-(void)setInUITrackingMode:(BOOL)arg1;
-(double)statusViewHeight;
-(void)setDelegate:(id)arg1;
-(id<SiriUISiriStatusViewDelegate>)delegate;
-(void)setPaused:(BOOL)arg1;
-(long long)mode;
-(void)setMode:(long long)arg1;
-(BOOL)paused;

@end

