/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:33 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MTSyncOperation <NSObject,NSSecureCoding,NSCopying,NAEquatable>
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) long long priority; 
@required
+(id)operationFromMetaData:(id)arg1;
-(BOOL)requiresResponse;
-(BOOL)isFromSync;
-(BOOL)isEquivalentToOperation:(id)arg1;
-(id)responseOperation;
-(id)operationMetaData;
-(BOOL)shouldRetry;
-(NSString *)uuid;
-(long long)priority;

@end

