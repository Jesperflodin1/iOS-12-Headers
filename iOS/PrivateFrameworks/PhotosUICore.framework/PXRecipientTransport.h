//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSString;

@interface PXRecipientTransport : NSObject <NSCopying>
{
    NSString *_address;
    long long _addressKind;
}

+ (id)new;
@property(readonly, nonatomic) long long addressKind; // @synthesize addressKind=_addressKind;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAddress:(id)arg1 addressKind:(long long)arg2;
- (id)init;

@end
