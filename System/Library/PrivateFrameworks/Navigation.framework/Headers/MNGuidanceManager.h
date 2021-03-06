/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNGuidanceManager <NSObject>
@required
-(void)updateDestination:(id)arg1;
-(void)updateForReroute:(id)arg1;
-(double)timeSinceLastAnnouncement;
-(double)timeUntilNextAnnouncement;
-(void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;
-(BOOL)repeatLastGuidanceAnnouncement:(id)arg1;
-(void)updateForReturnToRoute;
-(void)stop;

@end

