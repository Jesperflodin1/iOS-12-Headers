/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface NFRemoteAdminCardIngestionRequest : NSObject <NSSecureCoding> {

	NSString* _serverIdentifier;
	NSString* _uri;
	NSString* _sessionToken;
	NSDictionary* _cardServiceInfo;
	unsigned long long _maxDetectionTimeout;

}

@property (nonatomic,retain) NSString * serverIdentifier;                         //@synthesize serverIdentifier=_serverIdentifier - In the implementation block
@property (nonatomic,retain) NSString * uri;                                      //@synthesize uri=_uri - In the implementation block
@property (nonatomic,retain) NSString * sessionToken;                             //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) NSDictionary * cardServiceInfo;                      //@synthesize cardServiceInfo=_cardServiceInfo - In the implementation block
@property (assign,nonatomic) unsigned long long maxDetectionTimeout;              //@synthesize maxDetectionTimeout=_maxDetectionTimeout - In the implementation block
+(id)cardIngestionRequestWithServerIdentifier:(id)arg1 sessionToken:(id)arg2 readerModeMetadata:(id)arg3 maxDetectionTimeout:(unsigned long long)arg4 ;
+(BOOL)supportsSecureCoding;
-(void)setUri:(NSString *)arg1 ;
-(void)setSessionToken:(NSString *)arg1 ;
-(NSString *)sessionToken;
-(NSString *)serverIdentifier;
-(void)setServerIdentifier:(NSString *)arg1 ;
-(void)setMaxDetectionTimeout:(unsigned long long)arg1 ;
-(void)setCardServiceInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)cardServiceInfo;
-(unsigned long long)maxDetectionTimeout;
-(NSString *)uri;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

