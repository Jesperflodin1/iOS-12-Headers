//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol FRHeadlineConsuming <NSObject>
- (void)setPreferredRefreshDates:(NSArray *)arg1 withReply:(void (^)(void))arg2;
- (void)markArticleIdentifiersAsSaved:(NSArray *)arg1 articleIdentifiersAsNotSaved:(NSArray *)arg2 withReply:(void (^)(void))arg3;
- (void)setSavedArticleIdentifiers:(NSArray *)arg1 withReply:(void (^)(void))arg2;
- (void)clearAllSeenArticleIdentifiersWithReply:(void (^)(void))arg1;
- (void)consumeSeenArticleIdentifiers:(NSArray *)arg1 withReply:(void (^)(void))arg2;
- (void)fetchHeadlineMetadataWithReply:(void (^)(NSArray *, NSArray *, NSArray *))arg1;
@end
