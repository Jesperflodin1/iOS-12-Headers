//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SYDWriteTracker : NSObject
{
    _Bool _enabled;
    NSMutableDictionary *_clientsByIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) NSMutableDictionary *clientsByIdentifier; // @synthesize clientsByIdentifier=_clientsByIdentifier;
- (void).cxx_destruct;
- (id)plistRepresentation;
- (id)reset;
- (id)disable;
- (void)enable;
- (void)wroteBytes:(unsigned long long)arg1 forIdentifier:(id)arg2;
- (id)initWithPlistRepresentation:(id)arg1;
- (id)init;

@end
