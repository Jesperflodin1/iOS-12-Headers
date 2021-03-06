/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:05 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKAxisLabelDataSource <NSObject>
@optional
-(id)extendedModelRangeWithRange:(id)arg1 timeScope:(long long)arg2;

@required
-(id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
-(CGPoint*)renderPositionForLabel:(id)arg1 rect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(BOOL)arg6 optionalOffset:(CGPoint)arg7;

@end

