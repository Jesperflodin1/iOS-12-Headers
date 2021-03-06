/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface STYUserScenario : NSObject {

	NSString* _scenarioGroup;
	NSString* _scenarioID;
	long long _kpi;
	NSString* _titleText;
	NSString* _appBundleId;
	NSString* _appName;

}

@property (readonly) NSString * scenarioGroup;              //@synthesize scenarioGroup=_scenarioGroup - In the implementation block
@property (readonly) NSString * scenarioID;                 //@synthesize scenarioID=_scenarioID - In the implementation block
@property (readonly) long long kpi;                         //@synthesize kpi=_kpi - In the implementation block
@property (readonly) NSString * titleText;                  //@synthesize titleText=_titleText - In the implementation block
@property (readonly) NSString * appBundleId;                //@synthesize appBundleId=_appBundleId - In the implementation block
@property (readonly) NSString * appName;                    //@synthesize appName=_appName - In the implementation block
+(id)scenarioFromSignpostInterval:(id)arg1 error:(id*)arg2 ;
+(id)scenarioFromSignpostEvent:(id)arg1 error:(id*)arg2 ;
-(NSString *)titleText;
-(NSString *)appBundleId;
-(NSString *)scenarioID;
-(NSString *)scenarioGroup;
-(long long)kpi;
-(id)initWithLifecycleScenarioCategoryAndModelName:(id)arg1 modelName:(id)arg2 titleText:(id)arg3 ;
-(id)initWithConfiguration:(id)arg1 scenarioGroup:(id)arg2 kpi:(long long)arg3 processBundleID:(id)arg4 titleText:(id)arg5 processName:(id)arg6 ;
-(NSString *)appName;
@end

