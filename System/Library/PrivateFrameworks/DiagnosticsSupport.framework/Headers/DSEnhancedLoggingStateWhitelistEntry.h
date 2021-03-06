/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:08 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DSEnhancedLoggingStateWhitelistEntry : NSObject {

	BOOL _requiresFollowup;
	BOOL _retry;
	NSString* _bundleIdentifier;
	NSString* _parameterName;
	NSString* _displayNameLocalizationKey;
	NSString* _descriptionLocalizationKey;
	NSString* _sensitiveInformationLocalizationKey;

}

@property (nonatomic,retain) NSString * bundleIdentifier;                                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * parameterName;                                      //@synthesize parameterName=_parameterName - In the implementation block
@property (nonatomic,retain) NSString * displayNameLocalizationKey;                         //@synthesize displayNameLocalizationKey=_displayNameLocalizationKey - In the implementation block
@property (nonatomic,retain) NSString * descriptionLocalizationKey;                         //@synthesize descriptionLocalizationKey=_descriptionLocalizationKey - In the implementation block
@property (nonatomic,readonly) NSString * sensitiveInformationLocalizationKey;              //@synthesize sensitiveInformationLocalizationKey=_sensitiveInformationLocalizationKey - In the implementation block
@property (nonatomic,readonly) BOOL requiresFollowup;                                       //@synthesize requiresFollowup=_requiresFollowup - In the implementation block
@property (nonatomic,readonly) BOOL retry;                                                  //@synthesize retry=_retry - In the implementation block
-(BOOL)retry;
-(id)initWithBundleIdentifier:(id)arg1 parameterName:(id)arg2 baseLocalizationKey:(id)arg3 needsWAPIKeys:(BOOL)arg4 requiresFollowup:(BOOL)arg5 retry:(BOOL)arg6 ;
-(NSString *)parameterName;
-(id)initWithBundleIdentifier:(id)arg1 parameterName:(id)arg2 displayNameLocalizationKey:(id)arg3 descriptionLocalizationKey:(id)arg4 sensitiveInformationLocalizationKey:(id)arg5 needsWAPIKeys:(BOOL)arg6 requiresFollowup:(BOOL)arg7 retry:(BOOL)arg8 ;
-(void)setParameterName:(NSString *)arg1 ;
-(NSString *)descriptionLocalizationKey;
-(void)setDescriptionLocalizationKey:(NSString *)arg1 ;
-(NSString *)sensitiveInformationLocalizationKey;
-(BOOL)requiresFollowup;
-(void)setDisplayNameLocalizationKey:(NSString *)arg1 ;
-(NSString *)displayNameLocalizationKey;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

