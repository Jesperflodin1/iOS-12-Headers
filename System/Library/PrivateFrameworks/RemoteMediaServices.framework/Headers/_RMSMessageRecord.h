/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:54:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _RMSMessageRecord : NSObject {

	unsigned short _messageType;
	id _responseBlock;

}

@property (assign,nonatomic) unsigned short messageType;              //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) id responseBlock;                        //@synthesize responseBlock=_responseBlock - In the implementation block
-(void)setMessageType:(unsigned short)arg1 ;
-(unsigned short)messageType;
-(id)responseBlock;
-(void)setResponseBlock:(id)arg1 ;
@end

