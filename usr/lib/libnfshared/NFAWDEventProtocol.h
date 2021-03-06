/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFAWDEventProtocol <NSObject>
@optional
-(unsigned)getMetricId;
-(id)getMetric;
-(void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
-(unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
-(void)updateExceptionUUID:(id)arg1;
-(unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
-(unsigned long long)updateCardIngestionSessionStateChangeInfoWithPreviousState:(unsigned long long)arg1;
-(unsigned long long)updateExpressTransactionStateInfoWithPreviousState:(unsigned long long)arg1;

@end

