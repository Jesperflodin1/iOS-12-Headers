//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IXOwnedDataPromiseSeed.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface IXPlaceholderSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying>
{
    _Bool _isPlugin;
    NSString *_bundleName;
    NSString *_bundleID;
    unsigned long long _installType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isPlugin; // @synthesize isPlugin=_isPlugin;
@property(nonatomic) unsigned long long installType; // @synthesize installType=_installType;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
