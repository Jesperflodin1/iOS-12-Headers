/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:38 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMusicSync/NMLogAction.h>

@class NMSQuotaEvaluationState;

@interface NMSQuotaEvaluationLogAction : NMLogAction {

	unsigned long long _type;
	NMSQuotaEvaluationState* _state;

}
+(id)logActionWithActionType:(unsigned long long)arg1 state:(id)arg2 ;
-(id)_stringForType:(unsigned long long)arg1 ;
-(id)logMessage;
-(id)initWithActionType:(unsigned long long)arg1 state:(id)arg2 ;
@end

