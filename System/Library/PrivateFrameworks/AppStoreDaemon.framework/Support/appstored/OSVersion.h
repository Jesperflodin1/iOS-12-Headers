//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OSVersion : NSObject
{
    struct _OSVersion _version;
}

+ (id)anyVersion;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToVersion:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly, copy) NSString *canonicalString;
- (id)_initWithVersion:(struct _OSVersion)arg1;
- (id)initWithString:(id)arg1;

@end

