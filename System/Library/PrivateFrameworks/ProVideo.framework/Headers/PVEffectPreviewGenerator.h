/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:52 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVRendererBase.h>

@interface PVEffectPreviewGenerator : PVRendererBase
+(id)sharedGenerator;
+(void)cleanupCaches;
-(void)generatePreviewForEffect:(id)arg1 atTime:(SCD_Struct_PV20)arg2 inputImage:(CGImageRef)arg3 outputSize:(CGSize)arg4 waitForFinish:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)cancelAllPendingPreviewRequests;
-(id)initWithOptions:(id)arg1 ;
@end

