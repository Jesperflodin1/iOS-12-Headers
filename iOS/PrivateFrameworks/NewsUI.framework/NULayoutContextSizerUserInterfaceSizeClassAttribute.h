//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NULayoutContextSizerAttribute-Protocol.h>

@class NSString;

@interface NULayoutContextSizerUserInterfaceSizeClassAttribute : NSObject <NULayoutContextSizerAttribute>
{
    long long _widthUserInterfaceSizeClass;
    long long _heightUserInterfaceSizeClass;
}

@property(readonly, nonatomic) long long heightUserInterfaceSizeClass; // @synthesize heightUserInterfaceSizeClass=_heightUserInterfaceSizeClass;
@property(readonly, nonatomic) long long widthUserInterfaceSizeClass; // @synthesize widthUserInterfaceSizeClass=_widthUserInterfaceSizeClass;
- (_Bool)matchForLayoutContext:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithWidthUserInterfaceSizeClass:(long long)arg1 heightUserInterfaceSizeClass:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
