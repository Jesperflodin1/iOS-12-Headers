/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:17 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUUID, NSString;


@protocol HMDWACDevice
@property (nonatomic,readonly) NSUUID * identifier; 
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) NSString * ssid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL isConfigured; 
@property (nonatomic,readonly) BOOL supportsAirPlay2; 
@property (nonatomic,readonly) id underlyingDevice; 
@required
-(NSString *)deviceID;
-(BOOL)isConfigured;
-(void)cancelConfigurationWithCompletionHandler:(/*^block*/id)arg1;
-(void)startConfigurationWithCompletionHandler:(/*^block*/id)arg1;
-(NSString *)ssid;
-(BOOL)supportsAirPlay2;
-(id)underlyingDevice;
-(NSUUID *)identifier;
-(NSString *)name;

@end

