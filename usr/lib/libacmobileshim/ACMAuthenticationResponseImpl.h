/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMMessage.h>
#import <libobjc.A.dylib/ACMAuthenticationResponse.h>

@class NSString, NSDictionary, NSError;

@interface ACMAuthenticationResponseImpl : ACMMessage <ACMAuthenticationResponse>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSString * token; 
@property (retain) NSString * userName; 
@property (retain) NSDictionary * rawResponseData; 
@property (retain) NSError * error; 
@property (assign) BOOL generatedWithTouchID; 
+(id)authenticationResponse;
@end

