/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface PMMMusicContainer : NSObject <NSSecureCoding> {

	NSString* _bundleId;
	NSString* _trackIdentifier;
	NSDate* _playTime;
	NSDate* _pauseTime;

}

@property (nonatomic,readonly) NSString * bundleId;                     //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * trackIdentifier;              //@synthesize trackIdentifier=_trackIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * playTime;                       //@synthesize playTime=_playTime - In the implementation block
@property (nonatomic,readonly) NSDate * pauseTime;                      //@synthesize pauseTime=_pauseTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)pauseTime;
-(void)setPlayingWithBundleId:(id)arg1 trackIdentifier:(id)arg2 playTime:(id)arg3 ;
-(void)setPauseIfUnset;
-(NSString *)trackIdentifier;
-(NSDate *)playTime;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)bundleId;
@end

