//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTService.h>

@class NSMutableDictionary, RTInvocationDispatcher, RTPersistenceManager;

@interface RTStore : RTService
{
    NSMutableDictionary *_contexts;
    RTInvocationDispatcher *_dispatcher;
    unsigned long long _availability;
    RTPersistenceManager *_persistenceManager;
}

@property(retain, nonatomic) RTPersistenceManager *persistenceManager; // @synthesize persistenceManager=_persistenceManager;
@property(nonatomic) unsigned long long availability; // @synthesize availability=_availability;
@property(retain, nonatomic) RTInvocationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) NSMutableDictionary *contexts; // @synthesize contexts=_contexts;
- (void).cxx_destruct;
- (void)executeDeleteRequests:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_purgePredating:(id)arg1 predicateMappings:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)purgePredating:(id)arg1 predicateMappings:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_removeAll:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeAll:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_performBlock:(CDUnknownBlockType)arg1 contextType:(unsigned long long)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)updateTransformableObjects:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_updateTransformableObjects:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_storeTransformableObjects:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)storeTransformableObjects:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)_shutdown;
- (void)onPersistenceManagerNotification:(id)arg1;
- (void)_onPersistenceManagerNotification:(id)arg1;
- (void)_setupContextsHandler:(CDUnknownBlockType)arg1;
- (void)_setup;
- (id)initWithPersistenceManager:(id)arg1;
- (id)init;

@end
