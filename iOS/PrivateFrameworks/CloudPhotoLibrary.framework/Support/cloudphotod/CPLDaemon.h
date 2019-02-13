//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"
#import "CPLBatterySaverWatcherDelegate-Protocol.h"
#import "CPLCameraWatcherDelegate-Protocol.h"
#import "CPLDaemonLibraryManagerDelegate-Protocol.h"
#import "CPLEngineLibraryOwner-Protocol.h"
#import "CPLFileWatcherDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "UMUserSyncStakeholder-Protocol.h"

@class APSConnection, CKNotification, CPLBatterySaverWatcher, CPLCameraWatcher, CPLEngineLibrary, CPLFileWatcher, NSArray, NSDate, NSMutableArray, NSString, NSXPCListener, UMUserSyncTask;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CPLDaemon : NSObject <UMUserSyncStakeholder, CPLDaemonLibraryManagerDelegate, CPLEngineLibraryOwner, NSXPCListenerDelegate, APSConnectionDelegate, CPLCameraWatcherDelegate, CPLFileWatcherDelegate, CPLBatterySaverWatcherDelegate>
{
    NSDate *_launchDate;
    NSXPCListener *_listener;
    NSMutableArray *_daemonManagers;
    CPLEngineLibrary *_engineLibrary;
    NSObject<OS_dispatch_source> *_watchCPLLibrarySource;
    NSObject<OS_dispatch_source> *_watchKillSignalSource;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _deactivated;
    CPLCameraWatcher *_cameraWatcher;
    _Bool _disabledEngineBecauseOfCamera;
    CPLBatterySaverWatcher *_batterySaverWatcher;
    _Bool _disabledEngineBecauseOfBatterySaver;
    CPLFileWatcher *_testPauseWatcher;
    CPLFileWatcher *_userPauseWatcher;
    CPLFileWatcher *_deactivateWatcher;
    UMUserSyncTask *_syncTask;
    UMUserSyncTask *_logoutTask;
    _Bool _registeredStakeholder;
    _Bool _clientIsForeground;
    APSConnection *_pushConnection;
    _Bool _ignorePushNotifications;
    NSString *_pushEnvironment;
    NSArray *_pushTopics;
    NSDate *_lastPushNotificationDate;
    NSDate *_lastStartOfPushNotificationBurst;
    unsigned long long _countOfPushNotificationBurst;
    NSString *_lastPushTopic;
    NSString *_pushRegistrationStatus;
    NSString *_pushRegistrationError;
    CKNotification *_lastPushNotification;
    _Bool _stoppedWaitingForPush;
}

- (void).cxx_destruct;
- (void)_disablePushNotificationsLocked;
- (void)startWatchingPushNotifications;
- (void)_setPushRegistrationStatus:(id)arg1 error:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)engineLibrary:(id)arg1 noteClientIsInForeground:(_Bool)arg2;
- (void)engineLibrary:(id)arg1 getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)engineLibrary:(id)arg1 getStatusWithCompletionHandler:(CDUnknownBlockType)arg2;
- (id)ownerNameForEngineLibrary:(id)arg1;
- (void)batterySaverWatcherDidChangeState:(id)arg1;
- (void)fileWatcherFileDidDisappear:(id)arg1;
- (void)fileWatcherFileDidAppear:(id)arg1;
- (void)cameraWatcherDidChangeState:(id)arg1;
- (void)startSyncTask;
- (void)daemonLibraryManagerIsDeactivatingLibrary:(id)arg1;
- (void)daemonLibraryManagerHasBeenDisconnected:(id)arg1;
- (id)daemonLibraryManager:(id)arg1 engineLibraryWithClientLibraryBaseURL:(id)arg2 cloudLibraryStateStorageURL:(id)arg3 cloudLibraryResourceStorageURL:(id)arg4 libraryIdentifier:(id)arg5 options:(unsigned long long)arg6 error:(id *)arg7;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)allowedProtocolForClientAccess:(id)arg1;
- (_Bool)_resetLibraryInfoWithError:(id *)arg1;
- (_Bool)_storeClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 options:(unsigned long long)arg5 error:(id *)arg6;
- (_Bool)_getStoredClientLibraryBaseURL:(id *)arg1 cloudLibraryStateStorageURL:(id *)arg2 cloudLibraryResourceStorageURL:(id *)arg3 libraryIdentifier:(id *)arg4 options:(unsigned long long *)arg5;
- (void)_startWatchingLibraryFolder:(id)arg1;
- (void)_setupEngineLibraryWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 options:(unsigned long long)arg5;
- (id)init;
- (void)uploadContent;
- (void)willSwitchUser;
- (void)registerForSyncBubble;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
