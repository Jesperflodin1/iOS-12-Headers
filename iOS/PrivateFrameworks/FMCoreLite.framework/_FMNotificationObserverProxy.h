//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FMCoreLite/_FMObserverProxy.h>

@class NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface _FMNotificationObserverProxy : _FMObserverProxy
{
    id _notificationObserver;
    NSOperationQueue *_observerQueue;
    CDUnknownBlockType _observerBlock;
    NSString *_notificationName;
}

@property(readonly, copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(readonly, copy, nonatomic) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
@property(readonly, nonatomic) NSOperationQueue *observerQueue; // @synthesize observerQueue=_observerQueue;
- (void).cxx_destruct;
- (void)invalidate;
- (void)performObserverBlock;
- (id)initWithWeakObserver:(id)arg1 notificationName:(id)arg2 observerQueue:(id)arg3 observerBlock:(CDUnknownBlockType)arg4;

@end
