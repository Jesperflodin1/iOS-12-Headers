/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:28 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKEditOptionContainerView <NSObject>
@property (nonatomic,readonly) unsigned long long numberOfSides; 
@property (nonatomic,readonly) unsigned long long numberOfVisibleSides; 
@required
-(void)enumerateSideViewsWithBlock:(/*^block*/id)arg1;
-(unsigned long long)numberOfSides;
-(void)setView:(id)arg1 forSideAtIndex:(unsigned long long)arg2;
-(id)viewForSideAtIndex:(unsigned long long)arg1;
-(void)transitionToSideAtIndex:(unsigned long long)arg1;
-(void)transitionToFraction:(double)arg1 fromSideAtIndex:(unsigned long long)arg2 toSideAtIndex:(unsigned long long)arg3;
-(unsigned long long)numberOfVisibleSides;

@end

