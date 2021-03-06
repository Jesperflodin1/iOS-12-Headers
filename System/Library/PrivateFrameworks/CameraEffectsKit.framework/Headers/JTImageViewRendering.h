/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:39 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class JTImage;


@protocol JTImageViewRendering <NSObject>
@property (nonatomic,retain) JTImage * jtImage; 
@property (nonatomic,readonly) long long renderingType; 
@property (assign,nonatomic) BOOL flipX; 
@property (assign,nonatomic) BOOL flipY; 
@property (assign,nonatomic) BOOL enableDebugDrawing; 
@required
-(void)setFlipY:(BOOL)arg1;
-(void)setFlipX:(BOOL)arg1;
-(BOOL)flipY;
-(BOOL)flipX;
-(void)setJtImage:(id)arg1;
-(JTImage *)jtImage;
-(long long)renderingType;
-(BOOL)enableDebugDrawing;
-(void)setEnableDebugDrawing:(BOOL)arg1;

@end

