//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebUI/WBSRecentWebSearchesController.h>

@class NSString;

@interface _SFRecentWebSearchesController : WBSRecentWebSearchesController
{
    NSString *_pathToLegacySearchesFile;
}

+ (unsigned long long)_maximumNumberOfSearchesToTrack;
- (void).cxx_destruct;
- (void)_migrateLegacyData;
- (id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1;
- (void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2;
- (void)_removeLegacyRecentSearchesData;
- (id)initWithPathToLegacySearchesFile:(id)arg1;

@end
