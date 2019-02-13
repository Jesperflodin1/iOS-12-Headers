//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RTApplicationProxy : NSObject
{
    _Bool _installed;
    _Bool _restricted;
    NSString *_bundleIdentifier;
    NSString *_localizedName;
    long long _capabilities;
}

@property(nonatomic) _Bool restricted; // @synthesize restricted=_restricted;
@property(nonatomic) _Bool installed; // @synthesize installed=_installed;
@property(nonatomic) long long capabilities; // @synthesize capabilities=_capabilities;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBundleIdentifier:(id)arg1 applicationProxy:(id)arg2 capabilities:(long long)arg3;

@end
