/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FIUIChartDataSetDataSource <NSObject>
@optional
-(id)labelsForSet:(id)arg1;

@required
-(unsigned long long)numberOfDataPointsForDataSet:(id)arg1;
-(id)dataSet:(id)arg1 chartPointForIndex:(unsigned long long)arg2;

@end

