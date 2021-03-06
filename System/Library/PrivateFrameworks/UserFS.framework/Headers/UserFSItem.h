/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:22:53 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UserFS/UserFS-Structs.h>
@class UserFSVolume, NSString;

@interface UserFSItem : NSObject {

	BOOL _isDirectory;
	BOOL _locked;
	UserFSVolume* _volume;
	NSString* _path;
	NSString* _name;
	unsigned long long _length;
	timespec _createdDate;
	timespec _modifiedDate;

}

@property (nonatomic,retain) UserFSVolume * volume;                    //@synthesize volume=_volume - In the implementation block
@property (nonatomic,copy) NSString * path;                            //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL isDirectory;                         //@synthesize isDirectory=_isDirectory - In the implementation block
@property (assign,getter=isLocked,nonatomic) BOOL locked;              //@synthesize locked=_locked - In the implementation block
@property (assign,nonatomic) unsigned long long length;                //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) timespec createdDate;                     //@synthesize createdDate=_createdDate - In the implementation block
@property (assign,nonatomic) timespec modifiedDate;                    //@synthesize modifiedDate=_modifiedDate - In the implementation block
+(id)_itemWithVolume:(id)arg1 path:(id)arg2 properties:(id)arg3 ;
-(BOOL)isDirectory;
-(void)setIsDirectory:(BOOL)arg1 ;
-(timespec)createdDate;
-(void)setCreatedDate:(timespec)arg1 ;
-(void)setModifiedDate:(timespec)arg1 ;
-(timespec)modifiedDate;
-(unsigned long long)length;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)setLength:(unsigned long long)arg1 ;
-(void)setVolume:(UserFSVolume *)arg1 ;
-(UserFSVolume *)volume;
@end

