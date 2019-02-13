//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFInterstitialConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    long long _style;
    NSString *_languageCode;
    long long _gender;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)description;
- (id)initWithStyle:(long long)arg1 languageCode:(id)arg2 gender:(long long)arg3;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end
