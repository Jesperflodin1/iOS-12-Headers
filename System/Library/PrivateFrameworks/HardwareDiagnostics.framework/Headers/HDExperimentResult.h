/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface HDExperimentResult : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _measurements;
	NSMutableDictionary* _auxiliaryData;
	NSMutableDictionary* _files;

}

@property (nonatomic,readonly) NSMutableDictionary * measurements;               //@synthesize measurements=_measurements - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * auxiliaryData;              //@synthesize auxiliaryData=_auxiliaryData - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * files;                      //@synthesize files=_files - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSMutableDictionary *)measurements;
-(NSMutableDictionary *)files;
-(NSMutableDictionary *)auxiliaryData;
-(BOOL)isEqualToExperimentResult:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

