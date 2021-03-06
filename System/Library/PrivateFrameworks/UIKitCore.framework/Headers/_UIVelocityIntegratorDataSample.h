/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIVelocityIntegratorDataSample : NSObject {

	double _timestamp;
	CGVector _translation;
	CGPoint _point;

}

@property (assign,nonatomic) double timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) CGVector translation;              //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) CGPoint point;                     //@synthesize point=_point - In the implementation block
-(id)description;
-(CGPoint)point;
-(double)timestamp;
-(CGVector)translation;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isSampleDistinctEnoughFromTouchLocation:(CGPoint)arg1 minimumRequiredMovement:(double)arg2 ;
-(void)updateTimeToNow;
-(void)setTranslation:(CGVector)arg1 ;
-(void)setPoint:(CGPoint)arg1 ;
@end

