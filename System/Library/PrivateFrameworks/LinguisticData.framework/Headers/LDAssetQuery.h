/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:08 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/LinguisticData.framework/LinguisticData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSConditionLock;

@interface LDAssetQuery : NSObject {

	NSString* _language;
	NSConditionLock* _conditionLock;
	BOOL _hasCompleted;
	BOOL _waitTimedOut;

}

@property (readonly) BOOL hasCompleted; 
-(BOOL)hasCompleted;
-(BOOL)waitForCompletion;
-(void)_runInForeground:(BOOL)arg1 ;
-(void)runInForeground;
-(void)runInBackground;
-(id)initWithLanguage:(id)arg1 ;
-(void)dealloc;
@end

