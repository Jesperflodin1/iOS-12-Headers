/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSSPropertyValueValidator
@required
+(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2;
+(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
+(BOOL)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
+(BOOL)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
+(BOOL)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
+(BOOL)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;
+(id)propertiesAllowingNSNull;
-(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2;
-(BOOL)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
-(BOOL)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
-(BOOL)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
-(BOOL)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
-(BOOL)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;

@end

