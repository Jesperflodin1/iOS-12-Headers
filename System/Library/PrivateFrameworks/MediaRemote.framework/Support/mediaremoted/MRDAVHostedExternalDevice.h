//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRAVDistantExternalDeviceClientProtocol-Protocol.h"
#import "MRAVDistantExternalDeviceServiceProtocol-Protocol.h"
#import "MROutputContextDataSourceDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class MRAVDistantEndpoint, MRExternalOutputContextDataSource, MRTransportExternalDevice, NSMutableSet, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface MRDAVHostedExternalDevice : NSObject <NSXPCListenerDelegate, MROutputContextDataSourceDelegate, MRAVDistantExternalDeviceServiceProtocol, MRAVDistantExternalDeviceClientProtocol>
{
    _Bool _useOutputDeviceCache;
    _Bool _tombstoned;
    MRTransportExternalDevice *_externalDevice;
    NSXPCListener *_xpcListener;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_externalDeviceCallbackQueue;
    NSMutableSet *_mutableExternalDeviceClients;
    MRExternalOutputContextDataSource *_externalOutputContext;
    MRAVDistantEndpoint *_endpoint;
}

@property(nonatomic) _Bool tombstoned; // @synthesize tombstoned=_tombstoned;
@property(nonatomic) _Bool useOutputDeviceCache; // @synthesize useOutputDeviceCache=_useOutputDeviceCache;
@property(readonly, nonatomic) MRAVDistantEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) MRExternalOutputContextDataSource *externalOutputContext; // @synthesize externalOutputContext=_externalOutputContext;
@property(retain, nonatomic) NSMutableSet *mutableExternalDeviceClients; // @synthesize mutableExternalDeviceClients=_mutableExternalDeviceClients;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *externalDeviceCallbackQueue; // @synthesize externalDeviceCallbackQueue=_externalDeviceCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(readonly, nonatomic) MRTransportExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
- (void).cxx_destruct;
- (_Bool)_isEndpointsDesignatedGroupLeader:(id)arg1;
- (_Bool)_endpointIsSolo:(id)arg1;
- (_Bool)_endpointSupportsVolumeControl:(id)arg1;
- (_Bool)_endpointShouldPostVolumeNotifications:(id)arg1 outputDevice:(id)arg2;
- (void)_onSerialQueue_reevaluateVolumeControlCapabilitiesForEndpoint:(id)arg1;
- (void)_postVolumeControlCapabilitiesDidChange:(unsigned int)arg1 endpoint:(id)arg2 outputDevice:(id)arg3;
- (void)_maybePostVolumeControlCapabilitiesDidChange:(unsigned int)arg1 outputDevice:(id)arg2;
- (void)_postVolumeDidChange:(float)arg1 endpoint:(id)arg2 outputDevice:(id)arg3;
- (void)_maybePostVolumeDidChange:(float)arg1 outputDevice:(id)arg2;
- (void)_resetExternalDevice:(id)arg1;
- (void)_reloadHostedExternalDeviceNotifications;
- (void)_reloadHostedExternalDeviceCallbacks;
- (void)_initializeExternalDevice:(id)arg1;
- (id)_externalDeviceClientPIDs;
- (id)_mutableExternalDeviceClientsWithRegisteredCallbacks:(unsigned long long)arg1;
- (id)_allExternalDeviceClients;
- (id)_externalDeviceClientForConnection:(id)arg1;
- (void)_externalDeviceClientDidInvalidate:(id)arg1;
- (void)hostedExternalDeviceEndpointDidChange:(id)arg1;
- (void)hostedExternalDeviceVolumeCapabilitiesDidChange:(unsigned int)arg1 forEndpointWithIdentifier:(id)arg2 forOutputDeviceWithIdentifier:(id)arg3;
- (void)hostedExternalDeviceVolumeDidChange:(float)arg1 forEndpointWithIdentifier:(id)arg2 forOutputDeviceWithIdentifier:(id)arg3;
- (void)hostedExternalDeviceDidReceiveCustomData:(id)arg1 withName:(id)arg2;
- (void)hostedExternalDeviceNameDidChange:(id)arg1;
- (void)hostedExternalDeviceConnectionStateDidChange:(unsigned int)arg1 withError:(id)arg2;
- (void)outputContextDataSource:(id)arg1 outputDevice:(id)arg2 didChangeVolumeControlCapabilities:(unsigned int)arg3;
- (void)outputContextDataSource:(id)arg1 outputDevice:(id)arg2 didChangeVolume:(float)arg3;
- (void)outputContextDataSource:(id)arg1 didRemoveOutputDevice:(id)arg2;
- (void)outputContextDataSource:(id)arg1 didAddOutputDevice:(id)arg2;
- (void)pingWithTimeout:(double)arg1 callback:(CDUnknownBlockType)arg2;
- (void)sendCustomData:(id)arg1 withName:(id)arg2;
- (void)modifyOutputContextOfType:(unsigned int)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)outputDeviceVolume:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setOutputDeviceVolume:(float)arg1 forOutputDevice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)unpair;
- (void)disconnect:(id)arg1;
- (void)connectWithOptions:(unsigned int)arg1;
- (void)setNotifications:(unsigned long long)arg1;
- (unsigned long long)notifications;
- (void)setRegisteredCallbacks:(unsigned long long)arg1;
- (unsigned long long)registeredCallbacks;
- (void)getConnectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)getCustomOriginDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)getExternalDeviceMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)tombstone;
- (id)externalDeviceClients;
@property(readonly, nonatomic) NSXPCListenerEndpoint *externalDeviceListenerEndpoint;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithExternalDevice:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

