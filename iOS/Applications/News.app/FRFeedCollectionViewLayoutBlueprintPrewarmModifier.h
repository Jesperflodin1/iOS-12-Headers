//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedCollectionViewLayoutBlueprintModifierType-Protocol.h"

@class FCFeedDescriptor, FRFeedCollectionViewLayoutBlueprint, FRFeedDataStorage, FRSectionHeaderButtonController, NFLFeedSettings, NFMutexLock, NSHashTable, NSString;
@protocol FRFeedLayoutBlueprintBookmark, FRFeldsparContext, TSForYouGroupSizeCalculatorType;

@interface FRFeedCollectionViewLayoutBlueprintPrewarmModifier : NSObject <FRFeedCollectionViewLayoutBlueprintModifierType>
{
    _Bool _forcePrewarmAtTop;
    _Bool _childOperationsCancelled;
    _Bool _waitable;
    NSObject<FRFeedLayoutBlueprintBookmark> *_bookmark;
    FCFeedDescriptor *_feed;
    NFLFeedSettings *_feedSettings;
    FRFeedDataStorage *_feedDataStorage;
    id <FRFeldsparContext> _feldsparContext;
    FRSectionHeaderButtonController *_buttonController;
    FRFeedCollectionViewLayoutBlueprint *_overloadBlueprint;
    NSHashTable *_childOperations;
    NFMutexLock *_childOperationsLock;
    unsigned long long _modification;
    unsigned long long _animation;
    NSString *_identifier;
    long long _priority;
    id <TSForYouGroupSizeCalculatorType> _groupSizeCalculator;
    struct CGRect _bounds;
}

@property(retain, nonatomic) id <TSForYouGroupSizeCalculatorType> groupSizeCalculator; // @synthesize groupSizeCalculator=_groupSizeCalculator;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long animation; // @synthesize animation=_animation;
@property(nonatomic) unsigned long long modification; // @synthesize modification=_modification;
@property(nonatomic) _Bool waitable; // @synthesize waitable=_waitable;
@property(retain, nonatomic) NFMutexLock *childOperationsLock; // @synthesize childOperationsLock=_childOperationsLock;
@property(nonatomic) _Bool childOperationsCancelled; // @synthesize childOperationsCancelled=_childOperationsCancelled;
@property(retain, nonatomic) NSHashTable *childOperations; // @synthesize childOperations=_childOperations;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprint *overloadBlueprint; // @synthesize overloadBlueprint=_overloadBlueprint;
@property(retain, nonatomic) FRSectionHeaderButtonController *buttonController; // @synthesize buttonController=_buttonController;
@property(retain, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(retain, nonatomic) FRFeedDataStorage *feedDataStorage; // @synthesize feedDataStorage=_feedDataStorage;
@property(copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(copy, nonatomic) FCFeedDescriptor *feed; // @synthesize feed=_feed;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(copy, nonatomic) NSObject<FRFeedLayoutBlueprintBookmark> *bookmark; // @synthesize bookmark=_bookmark;
@property(nonatomic) _Bool forcePrewarmAtTop; // @synthesize forcePrewarmAtTop=_forcePrewarmAtTop;
- (void).cxx_destruct;
- (void)startChildOperation:(id)arg1;
- (id)blueprintLoadedFromBookmarkViewport:(id)arg1;
- (void)layoutPrewarmedBlueprint:(id)arg1 source:(unsigned long long)arg2 appConfiguration:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)prewarmAroundBookmarkFromCache:(_Bool)arg1 blueprint:(id)arg2 appConfiguration:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)prewarmAtTopWithBlueprint:(id)arg1 appConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)refreshAtTopWithBlueprint:(id)arg1 appConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)insertSubscriptionPlacardIntoBlueprint:(id)arg1;
- (id)insertAdsIntoBlueprint:(id)arg1;
- (void)modifyBlueprint:(id)arg1 appConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)modifyBlueprint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancel;
@property(readonly, copy) NSString *description;
- (id)initWithBookmark:(id)arg1 bounds:(struct CGRect)arg2 feed:(id)arg3 feedSettings:(id)arg4 feedDataStorage:(id)arg5 feldsparContext:(id)arg6 buttonController:(id)arg7 overloadBlueprint:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
