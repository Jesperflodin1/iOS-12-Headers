/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:35:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFFavoriteLocationProvider <NSObject>
@property (assign,nonatomic,__weak) id<WFFavoriteLocationProviderDelegate> delegate; 
@optional
-(id)migrationOperation;

@required
-(id)locations;
-(void)addLocation:(id)arg1;
-(id)initWithDelegate:(id)arg1 persistence:(id)arg2;
-(void)removeLocation:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<WFFavoriteLocationProviderDelegate>)delegate;
-(void)setLocations:(id)arg1;

@end

