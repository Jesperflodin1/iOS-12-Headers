/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:50:14 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CVAPortraitVideoPipeline <CVAVideoPipeline>
@required
-(int)renderWithRequest:(id)arg1 requestTo:(id)arg2 mixValue:(float)arg3 destinationColorPixelBuffer:(CVBufferRef)arg4 error:(id*)arg5 disparityPostprocessingCompletionHandler:(/*^block*/id)arg6 mattingCompletionHandler:(/*^block*/id)arg7 portraitCompletionHandler:(/*^block*/id)arg8;
-(int)renderWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(/*^block*/id)arg2 mattingCompletionHandler:(/*^block*/id)arg3 portraitCompletionHandler:(/*^block*/id)arg4;

@end

