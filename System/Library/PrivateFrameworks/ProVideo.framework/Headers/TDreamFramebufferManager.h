/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:53 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSMutableArray, NSString, TDreamFramebuffer;

@interface TDreamFramebufferManager : NSObject {

	id memoryWarningObserver;
	NSMutableArray* framebufferArrayLarge;
	NSMutableArray* framebufferArraySmall;
	NSString* actualLookUp;
	NSString* actualPalette;
	CGSize smallUseSize;
	CGSize largeUseSize;
	TDreamFramebuffer* _outputBufferAndTexture;
	TDreamFramebuffer* _lookUpBuffer;

}

@property (nonatomic,retain) TDreamFramebuffer * outputBufferAndTexture;              //@synthesize outputBufferAndTexture=_outputBufferAndTexture - In the implementation block
@property (nonatomic,retain) TDreamFramebuffer * lookUpBuffer;                        //@synthesize lookUpBuffer=_lookUpBuffer - In the implementation block
-(void)deleteLargeFramebuffers;
-(void)deleteSmallFramebuffers;
-(TDreamFramebuffer *)outputBufferAndTexture;
-(void)setOutputBufferAndTexture:(TDreamFramebuffer *)arg1 ;
-(void)setLookUpBuffer:(TDreamFramebuffer *)arg1 ;
-(void)deleteAllFramebuffers;
-(unsigned)getOutputBufferNameWithIPImage:(IPImage)arg1 ;
-(BOOL)lookupFailedToLoad;
-(TDreamFramebuffer *)lookUpBuffer;
-(void)clearFrameBuffers;
-(void)addImageBufferToArray:(int)arg1 ipImage:(IPImage)arg2 ;
-(unsigned)getBufferFromArray:(int)arg1 withSize:(CGSize)arg2 ;
-(unsigned)getTextureNameFromArray:(int)arg1 ;
-(void)newLookUp:(id)arg1 ;
-(unsigned)getOutputBufferNamer;
-(id)init;
-(void)dealloc;
@end

