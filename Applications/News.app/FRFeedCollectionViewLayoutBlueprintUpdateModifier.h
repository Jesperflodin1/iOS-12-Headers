//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedCollectionViewLayoutBlueprintModifierType-Protocol.h"

@class FCOperation, NFLFeedSettings, NSString;
@protocol FRFeldsparContext;

@interface FRFeedCollectionViewLayoutBlueprintUpdateModifier : NSObject <FRFeedCollectionViewLayoutBlueprintModifierType>
{
    _Bool _waitable;
    id <FRFeldsparContext> _feldsparContext;
    NSString *_fromHeadlineTileInfoID;
    NSString *_toHeadlineTileInfoID;
    double _refreshAge;
    FCOperation *_operation;
    NFLFeedSettings *_feedSettings;
    unsigned long long _modification;
    NSString *_identifier;
    long long _priority;
}

@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long modification; // @synthesize modification=_modification;
@property(nonatomic) _Bool waitable; // @synthesize waitable=_waitable;
@property(copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(nonatomic) __weak FCOperation *operation; // @synthesize operation=_operation;
@property(nonatomic) double refreshAge; // @synthesize refreshAge=_refreshAge;
@property(copy, nonatomic) NSString *toHeadlineTileInfoID; // @synthesize toHeadlineTileInfoID=_toHeadlineTileInfoID;
@property(copy, nonatomic) NSString *fromHeadlineTileInfoID; // @synthesize fromHeadlineTileInfoID=_fromHeadlineTileInfoID;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void).cxx_destruct;
- (void)resetPrefetchStateForHeadlines:(id)arg1;
- (void)checkForDeletedHeadlines:(id)arg1;
- (void)modifyBlueprint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancel;
@property(readonly, copy) NSString *description;
- (id)initWithFeldsparContext:(id)arg1 fromHeadlineTileInfoID:(id)arg2 toHeadlineTileInfoID:(id)arg3 refreshAge:(double)arg4 feedSettings:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

