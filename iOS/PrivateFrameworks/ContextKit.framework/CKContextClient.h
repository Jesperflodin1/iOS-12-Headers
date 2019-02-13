//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface CKContextClient : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    NSSet *_capabilities;
    NSString *_indexVersionId;
    NSMutableArray *_updateHandlers;
    unsigned long long _defaultRequestType;
}

+ (id)clientWithDefaultRequestType:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long defaultRequestType; // @synthesize defaultRequestType=_defaultRequestType;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *capabilities;
- (id)indexVersionId;
- (id)retrieveCapabilites;
- (void)registerConfigurationUpdateHandler:(CDUnknownBlockType)arg1;
- (void)capabilitiesWithReply:(CDUnknownBlockType)arg1;
- (id)newRequest;
- (void)_updateCachedCapabilites;
- (void)_handleConfigurationUpdate;
- (id)initWithDefaultRequestType:(unsigned long long)arg1;

@end
