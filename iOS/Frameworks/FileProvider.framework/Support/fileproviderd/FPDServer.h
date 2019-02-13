//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class FPDAccessControlStore, FPDExtensionFileProviderManager, NSString, NSXPCListener;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface FPDServer : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_source> *_sigIntSrc;
    NSObject<OS_dispatch_source> *_sigQuitSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSObject<OS_dispatch_queue> *_xpcListenerReadyQueue;
    NSObject<OS_dispatch_queue> *_xpcListenerAppUpdateQueue;
    NSObject<OS_dispatch_queue> *_finishSetupQueue;
    NSObject<OS_dispatch_group> *_fileProviderManagerIsReadyGroup;
    _Bool _isUnlocked;
    FPDAccessControlStore *_accessControlStore;
    FPDExtensionFileProviderManager *_fileProviderManager;
    NSXPCListener *_listener;
}

@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) FPDExtensionFileProviderManager *fileProviderManager; // @synthesize fileProviderManager=_fileProviderManager;
@property(nonatomic) __weak FPDAccessControlStore *accessControlStore; // @synthesize accessControlStore=_accessControlStore;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (void)_computeUnlockedStatus;
- (void)_startXPCListener;
- (void)_setup;
- (void)exitWithCode:(int)arg1;
- (void)handleExitSignal:(int)arg1;
- (void)_initSignals;
- (void)signalProviderChanges;
- (void)providersDidChange:(id)arg1 error:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
