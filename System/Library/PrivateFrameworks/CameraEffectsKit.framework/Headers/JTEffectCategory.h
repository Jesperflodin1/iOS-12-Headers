/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:39 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface JTEffectCategory : NSObject {

	NSString* _categoryID;
	NSString* _displayName;
	NSArray* _effectIDs;

}

@property (nonatomic,retain) NSString * categoryID;               //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSArray * effectIDs;                 //@synthesize effectIDs=_effectIDs - In the implementation block
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)categoryID;
-(void)setCategoryID:(NSString *)arg1 ;
-(NSArray *)effectIDs;
-(void)setEffectIDs:(NSArray *)arg1 ;
-(NSString *)displayName;
@end

