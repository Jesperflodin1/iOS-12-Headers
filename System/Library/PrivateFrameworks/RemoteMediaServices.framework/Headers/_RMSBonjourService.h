/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:54:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RMSService, NSNetService;

@interface _RMSBonjourService : NSObject {

	BOOL _available;
	RMSService* _service;
	NSNetService* _netService;
	long long _state;

}

@property (nonatomic,retain) RMSService * service;                           //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSNetService * netService;                      //@synthesize netService=_netService - In the implementation block
@property (assign,nonatomic) long long state;                                //@synthesize state=_state - In the implementation block
@property (assign,getter=isAvailable,nonatomic) BOOL available;              //@synthesize available=_available - In the implementation block
-(RMSService *)service;
-(void)setService:(RMSService *)arg1 ;
-(void)setNetService:(NSNetService *)arg1 ;
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)isAvailable;
-(NSNetService *)netService;
-(long long)state;
-(void)setState:(long long)arg1 ;
@end

