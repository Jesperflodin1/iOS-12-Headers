//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface RidesharingPartitionedAppSuggestions : NSObject
{
    NSArray *_installedSuggestions;
    NSArray *_notInstalledSuggestions;
}

@property(readonly, copy, nonatomic) NSArray *notInstalledSuggestions; // @synthesize notInstalledSuggestions=_notInstalledSuggestions;
@property(readonly, copy, nonatomic) NSArray *installedSuggestions; // @synthesize installedSuggestions=_installedSuggestions;
- (void).cxx_destruct;
- (id)initWithInstalledSuggestions:(id)arg1 notInstalledSuggestions:(id)arg2;

@end

