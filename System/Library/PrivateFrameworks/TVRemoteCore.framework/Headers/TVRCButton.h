/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface TVRCButton : NSObject <NSSecureCoding> {

	BOOL _enabled;
	BOOL _hasTapAction;
	long long _buttonType;
	NSDictionary* _properties;

}

@property (nonatomic,readonly) long long buttonType;                        //@synthesize buttonType=_buttonType - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;               //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL hasTapAction;                           //@synthesize hasTapAction=_hasTapAction - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)hasTapAction;
-(id)_initWithButtonType:(long long)arg1 hasTapAction:(BOOL)arg2 properties:(id)arg3 ;
-(BOOL)isEqualToButton:(id)arg1 ;
-(id)_initWithButtonType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEnabled;
-(long long)buttonType;
-(void)_setEnabled:(BOOL)arg1 ;
-(NSDictionary *)properties;
@end

