/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:09 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSObject;

@interface EntityMapCacheEntry : NSObject {

	NSDate* _expiryTime;
	NSObject* _entityName;

}

@property (retain) NSDate * expiryTime;                //@synthesize expiryTime=_expiryTime - In the implementation block
@property (retain) NSObject * entityName;              //@synthesize entityName=_entityName - In the implementation block
-(NSObject *)entityName;
-(void)setEntityName:(NSObject *)arg1 ;
-(NSDate *)expiryTime;
-(void)setExpiryTime:(NSDate *)arg1 ;
-(id)description;
@end

