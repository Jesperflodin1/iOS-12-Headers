/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:38 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NMSEpisodeSizeInfo : NSObject <NSSecureCoding> {

	BOOL _downloaded;
	unsigned long long _size;
	double _duration;

}

@property (nonatomic,readonly) unsigned long long size;                          //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (getter=isDownloaded,nonatomic,readonly) BOOL downloaded;              //@synthesize downloaded=_downloaded - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isDownloaded;
-(id)initWithSize:(unsigned long long)arg1 duration:(double)arg2 downloaded:(BOOL)arg3 ;
-(unsigned long long)size;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(double)duration;
@end

