//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AutocompleteContext, NSString;

__attribute__((visibility("hidden")))
@interface SearchBarSearchManagerRequest : NSObject
{
    NSString *_searchName;
    int _searchMode;
    long long _types;
    AutocompleteContext *_context;
}

@property(retain, nonatomic) AutocompleteContext *context; // @synthesize context=_context;
@property(nonatomic) long long types; // @synthesize types=_types;
@property(nonatomic) int searchMode; // @synthesize searchMode=_searchMode;
@property(copy, nonatomic) NSString *searchName; // @synthesize searchName=_searchName;
- (void).cxx_destruct;

@end

