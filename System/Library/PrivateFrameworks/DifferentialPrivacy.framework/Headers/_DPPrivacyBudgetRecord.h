/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
#import <libobjc.A.dylib/_DPStorageMOConversion.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSManagedObjectID;

@interface _DPPrivacyBudgetRecord : NSObject <_DPStorageMOConversion, NSSecureCoding> {

	BOOL _submitted;
	NSString* _key;
	double _creationDate;
	double _lastUpdate;
	long long _balance;
	NSManagedObjectID* _objectId;

}

@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) double lastUpdate;                         //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (assign,nonatomic) long long balance;                         //@synthesize balance=_balance - In the implementation block
@property (assign,nonatomic) BOOL submitted;                            //@synthesize submitted=_submitted - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectId;              //@synthesize objectId=_objectId - In the implementation block
+(id)createRecordFromManagedObject:(id)arg1 ;
+(id)entityName;
+(BOOL)supportsSecureCoding;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(id)initWithKey:(id)arg1 creationDate:(double)arg2 lastUpdate:(double)arg3 balance:(long long)arg4 objectId:(id)arg5 ;
-(BOOL)isEqualToPrivacyBudgetRecord:(id)arg1 ;
-(double)creationDate;
-(void)setCreationDate:(double)arg1 ;
-(id)entityName;
-(NSManagedObjectID *)objectId;
-(void)setObjectId:(NSManagedObjectID *)arg1 ;
-(void)setLastUpdate:(double)arg1 ;
-(long long)balance;
-(void)setBalance:(long long)arg1 ;
-(void)setSubmitted:(BOOL)arg1 ;
-(BOOL)submitted;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(double)lastUpdate;
@end

