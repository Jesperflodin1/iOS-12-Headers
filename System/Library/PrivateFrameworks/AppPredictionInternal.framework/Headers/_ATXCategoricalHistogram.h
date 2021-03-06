/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface _ATXCategoricalHistogram : NSObject <NSSecureCoding> {

	unsigned _count;
	unsigned _capacity;
	SCD_Struct_AT2* _entries;
	NSDictionary* _lastDates;

}
+(BOOL)supportsSecureCoding;
-(void)enumerate:(/*^block*/id)arg1 ;
-(id)getLastDatesByCategoryId;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

