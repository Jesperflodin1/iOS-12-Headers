/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTPredictionExpertFeatureAddon.h>

@interface RTPredictionExpertFeatureAddonWeekday : RTPredictionExpertFeatureAddon {

	long long _targetDays;

}

@property (nonatomic,readonly) long long targetDays;              //@synthesize targetDays=_targetDays - In the implementation block
-(long long)targetDays;
-(id)initWithTargetDays:(long long)arg1 ;
-(long long)addonType;
-(id)weekdayStringFromMask:(long long)arg1 ;
-(id)description;
@end

