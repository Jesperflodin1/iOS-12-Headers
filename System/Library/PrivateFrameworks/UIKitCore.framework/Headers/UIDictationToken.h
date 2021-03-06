/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:58 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface UIDictationToken : NSObject <NSSecureCoding> {

	BOOL _removeSpaceBefore;
	BOOL _removeSpaceAfter;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL removeSpaceBefore;               //@synthesize removeSpaceBefore=_removeSpaceBefore - In the implementation block
@property (nonatomic,readonly) BOOL removeSpaceAfter;              //@synthesize removeSpaceAfter=_removeSpaceAfter - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)setRemoveSpaceBefore:(BOOL)arg1 ;
-(BOOL)removeSpaceBefore;
-(BOOL)removeSpaceAfter;
-(id)_descriptionExtra;
-(id)initWithText:(id)arg1 removeSpaceBefore:(BOOL)arg2 removeSpaceAfter:(BOOL)arg3 ;
@end

