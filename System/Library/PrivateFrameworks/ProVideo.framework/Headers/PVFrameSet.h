/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:52 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class PVCMSampleBuffer, AVDepthData, PVImageBuffer;

@interface PVFrameSet : NSObject {

	unique_ptr<PVGCDReadWriteLock, std::__1::default_delete<PVGCDReadWriteLock> >* _mdLock;
	NSMutableDictionary* _metadata;
	PVCMSampleBuffer* _colorSampleBuffer;
	AVDepthData* _depthData;
	PVImageBuffer* _alphaMaskImageBuffer;

}

@property (nonatomic,readonly) PVCMSampleBuffer * colorSampleBuffer;               //@synthesize colorSampleBuffer=_colorSampleBuffer - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PV20 presentationTimeStamp; 
@property (nonatomic,readonly) PVImageBuffer * colorImageBuffer; 
@property (nonatomic,readonly) AVDepthData * depthData;                            //@synthesize depthData=_depthData - In the implementation block
@property (retain) PVImageBuffer * alphaMaskImageBuffer;                           //@synthesize alphaMaskImageBuffer=_alphaMaskImageBuffer - In the implementation block
-(AVDepthData *)depthData;
-(PVImageBuffer *)alphaMaskImageBuffer;
-(void)setAlphaMaskImageBuffer:(PVImageBuffer *)arg1 ;
-(void)commonInitWithColorBuffer:(id)arg1 depthData:(id)arg2 metadata:(id)arg3 ;
-(PVCMSampleBuffer *)colorSampleBuffer;
-(SCD_Struct_PV20)presentationTimeStamp;
-(id)initWithColorBuffer:(id)arg1 depthData:(id)arg2 metadata:(id)arg3 ;
-(void)setMetadataDict:(NSDictionary*)arg1 ;
-(void)setMetadataObject:(id)arg1 forKey:(id)arg2 ;
-(PVImageBuffer *)colorImageBuffer;
-(id)initWithColorBuffer:(id)arg1 metadata:(id)arg2 ;
-(id)metadataObjectForKey:(id)arg1 ;
-(NSDictionary*)metadataDict;
@end

