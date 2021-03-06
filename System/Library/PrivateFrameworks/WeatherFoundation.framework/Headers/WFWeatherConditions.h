//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, WFLocation;

@interface WFWeatherConditions : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _nightForecast;
    WFLocation *_location;
    NSMutableDictionary *_components;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *components; // @synthesize components=_components;
@property(getter=isNightForecast) _Bool nightForecast; // @synthesize nightForecast=_nightForecast;
@property(retain) WFLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (_Bool)wf_isDayIfSunrise:(id)arg1 sunset:(id)arg2;
- (_Bool)wf_isDay;
- (void)setValue:(id)arg1 forComponent:(id)arg2;
- (id)dictionaryRepresentation;
- (void)_retrieveSunrise:(id *)arg1 sunset:(id *)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)valueForComponent:(id)arg1;
- (id)allComponents;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

