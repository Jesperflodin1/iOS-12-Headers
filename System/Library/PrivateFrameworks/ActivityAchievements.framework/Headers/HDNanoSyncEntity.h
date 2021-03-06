/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDNanoSyncEntity <HDSyncEntity>
@optional
+(BOOL)companionDidChangeForProfile:(id)arg1 error:(id*)arg2;
+(id)nanoSyncPredicateForSession:(id)arg1;
+(int)nanoSyncObjectType;
+(BOOL)supportsSpeculativeNanoSyncChanges;

@required
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;

@end

