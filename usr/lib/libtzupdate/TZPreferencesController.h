/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:04 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libtzupdate.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TZPreferencesController : NSObject

@property (nonatomic,readonly) BOOL updatesEnabled; 
@property (nonatomic,readonly) long long loggingLevel; 
+(id)sharedPreferencesController;
-(void)preferencesChanged:(id)arg1 ;
-(long long)loggingLevel;
-(BOOL)updatesEnabled;
-(id)init;
@end

