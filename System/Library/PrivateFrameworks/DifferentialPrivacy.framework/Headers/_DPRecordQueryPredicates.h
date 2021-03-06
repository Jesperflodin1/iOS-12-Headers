/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DPRecordQueryPredicates : NSObject
+(id)predicateForRecordsWithVersionMismatch;
+(id)predicateForRecordsSubmitted;
+(id)predicateForAllRecords;
+(id)predicateForRecordsOlderThan:(id)arg1 ;
+(id)entityForKey:(id)arg1 ;
+(id)predicateForRecordsNotSubmittedForKeyBeginsWith:(id)arg1 ;
+(id)predicateForRecordsNotSubmittedForKey:(id)arg1 ;
+(id)predicateForKey:(id)arg1 beginsWith:(BOOL)arg2 submitted:(BOOL)arg3 matchReportVersion:(BOOL)arg4 ;
+(id)predicateForRecordsNotSubmitted;
+(id)predicateForKeyBeginsWith:(id)arg1 ;
+(id)predicateForRecordsInDateRangeStart:(id)arg1 end:(id)arg2 ;
+(id)predicateForRecordsSubmittedForKey:(id)arg1 ;
+(id)predicateForKey:(id)arg1 ;
+(void)initialize;
@end

