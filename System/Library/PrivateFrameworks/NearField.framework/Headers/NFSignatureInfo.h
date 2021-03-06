/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NFSignatureInfo : NSObject <NSSecureCoding> {

	NSString* _rsaCert;
	NSString* _eccCert;
	NSString* _eckaCert;
	NSString* _seid;
	NSString* _platformId;
	NSString* _jsblCounter;
	unsigned long long _certificateVersion;

}

@property (nonatomic,readonly) NSString * rsaCert;                                 //@synthesize rsaCert=_rsaCert - In the implementation block
@property (nonatomic,readonly) NSString * eccCert;                                 //@synthesize eccCert=_eccCert - In the implementation block
@property (nonatomic,readonly) NSString * eckaCert;                                //@synthesize eckaCert=_eckaCert - In the implementation block
@property (nonatomic,readonly) NSString * seid;                                    //@synthesize seid=_seid - In the implementation block
@property (nonatomic,readonly) NSString * platformId;                              //@synthesize platformId=_platformId - In the implementation block
@property (nonatomic,readonly) NSString * jsblCounter;                             //@synthesize jsblCounter=_jsblCounter - In the implementation block
@property (nonatomic,readonly) unsigned long long certificateVersion;              //@synthesize certificateVersion=_certificateVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)certificateVersion;
-(NSString *)rsaCert;
-(NSString *)eccCert;
-(NSString *)jsblCounter;
-(NSString *)platformId;
-(NSString *)seid;
-(NSString *)eckaCert;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
@end

