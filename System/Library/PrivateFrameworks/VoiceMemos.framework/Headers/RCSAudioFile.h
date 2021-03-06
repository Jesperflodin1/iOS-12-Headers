/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:40 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, AVAudioFormat;


@protocol RCSAudioFile <NSObject>
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) AVAudioFormat * fileFormat; 
@property (nonatomic,readonly) AVAudioFormat * processingFormat; 
@required
-(AVAudioFormat *)processingFormat;
-(AVAudioFormat *)fileFormat;
-(NSURL *)url;

@end

