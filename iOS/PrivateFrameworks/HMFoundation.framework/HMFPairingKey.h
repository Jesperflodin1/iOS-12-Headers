//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/NSCopying-Protocol.h>
#import <HMFoundation/NSSecureCoding-Protocol.h>

@class NSData;

@interface HMFPairingKey : HMFObject <NSSecureCoding, NSCopying>
{
    NSData *_data;
}

+ (_Bool)supportsSecureCoding;
+ (void)load;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributeDescriptions;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPairingKeyData:(id)arg1;
- (id)init;

@end
