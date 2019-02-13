//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCConnectionHealthMonitorDelegate-Protocol.h>

@class NSString, VCConnectionHealthMonitor, VCStatsRecorder;
@protocol OS_dispatch_queue, VCConnectionManagerDelegate, VCConnectionProtocol;

__attribute__((visibility("hidden")))
@interface VCConnectionManager : NSObject <VCConnectionHealthMonitorDelegate>
{
    unsigned int _callID;
    int _relayServerProvider;
    struct _opaque_pthread_rwlock_t _stateRWlock;
    id <VCConnectionProtocol> _primaryConnection;
    id <VCConnectionProtocol> _secondaryConnection;
    id <VCConnectionProtocol> _connectionForDuplication;
    id <VCConnectionProtocol> _lastPrimaryConnectionInUse;
    struct opaqueRTCReporting *_reportingAgent;
    _Bool _isInitialConnectionEstablished;
    int _mediaExcessiveCellularTxBytes;
    int _mediaExcessiveCellularRxBytes;
    int _signalingExcessiveCellularTxBytes;
    int _signalingExcessiveCellularRxBytes;
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _duplicationType;
    CDUnknownFunctionPointerType _duplicationCallback;
    double _lastConnectionUnstableTime;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    void *_duplicationContext;
    _Bool _duplicationPending;
    _Bool _enableDuplication;
    _Bool _supportDuplication;
    int _preferredLocalInterfaceForDuplication;
    int _preferredRemoteInterfaceForDuplication;
    _Bool _isPrimaryLocalUsingCell;
    VCConnectionHealthMonitor *_connectionHealthMonitor;
    CDStruct_b3143830 _localConnectionStats;
    CDStruct_b3143830 _remoteConnectionStats;
    double _remoteNoRemotePacketInterval;
    _Bool _isAudioOnly;
    int _localiRATLinkTypeSuggestion;
    int _remoteiRATLinkTypeSuggestion;
    _Bool _isRemoteDuplicating;
    double _lastiRATCheckTime;
    double _localLinkTypeSuggestionChangeTime;
    double _iRATNotificationRequestTime;
    int _localWRMLinkTypeFromDefaults;
    _Bool _allowRequestForWRMNotification;
    _Bool _forceHandoverToCell;
    _Bool _disableRemoteInterfaceInference;
    CDUnknownFunctionPointerType _wrmStatusUpdateCallback;
    CDUnknownFunctionPointerType _wrmRequestNotificationCallback;
    void *_wrmCallbacksContext;
    VCStatsRecorder *_statsRecorder;
}

@property(readonly, nonatomic) VCStatsRecorder *statsRecorder; // @synthesize statsRecorder=_statsRecorder;
@property(readonly) double remoteNoRemotePacketInterval; // @synthesize remoteNoRemotePacketInterval=_remoteNoRemotePacketInterval;
@property _Bool isAudioOnly; // @synthesize isAudioOnly=_isAudioOnly;
@property(readonly) int signalingExcessiveCellularRxBytes; // @synthesize signalingExcessiveCellularRxBytes=_signalingExcessiveCellularRxBytes;
@property(readonly) int signalingExcessiveCellularTxBytes; // @synthesize signalingExcessiveCellularTxBytes=_signalingExcessiveCellularTxBytes;
@property(readonly) int mediaExcessiveCellularRxBytes; // @synthesize mediaExcessiveCellularRxBytes=_mediaExcessiveCellularRxBytes;
@property(readonly) int mediaExcessiveCellularTxBytes; // @synthesize mediaExcessiveCellularTxBytes=_mediaExcessiveCellularTxBytes;
@property _Bool supportDuplication; // @synthesize supportDuplication=_supportDuplication;
@property(retain, nonatomic) id <VCConnectionProtocol> connectionForDuplication; // @synthesize connectionForDuplication=_connectionForDuplication;
@property(retain, nonatomic) id <VCConnectionProtocol> lastPrimaryConnectionInUse; // @synthesize lastPrimaryConnectionInUse=_lastPrimaryConnectionInUse;
@property(retain, nonatomic) id <VCConnectionProtocol> secondaryConnection; // @synthesize secondaryConnection=_secondaryConnection;
@property(retain, nonatomic) id <VCConnectionProtocol> primaryConnection; // @synthesize primaryConnection=_primaryConnection;
@property int preferredRemoteInterfaceForDuplication; // @synthesize preferredRemoteInterfaceForDuplication=_preferredRemoteInterfaceForDuplication;
@property int preferredLocalInterfaceForDuplication; // @synthesize preferredLocalInterfaceForDuplication=_preferredLocalInterfaceForDuplication;
@property(nonatomic, setter=setDuplicationEnabled:) _Bool isDuplicationEnabled; // @synthesize isDuplicationEnabled=_enableDuplication;
@property int relayServerProvider; // @synthesize relayServerProvider=_relayServerProvider;
@property unsigned int callID; // @synthesize callID=_callID;
- (void)updateConnectionStatsWithIndicatorPrimaryImproved:(CDStruct_b3143830 *)arg1;
- (void)updateConnectionStatsWithIndicatorNone:(CDStruct_b3143830 *)arg1;
- (void)updateConnectionStatsWithIndicatorNoPackets:(CDStruct_b3143830 *)arg1;
- (void)connectionHealthDidUpdate:(int)arg1 isLocalConnection:(_Bool)arg2;
- (void)setDuplicationFlag:(_Bool)arg1 withPreferredLocalLinkTypeForDuplication:(int)arg2;
- (_Bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (id)copyConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isPrimary:(_Bool *)arg2;
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isSourceOnCellular:(_Bool *)arg2 isSourceIPv6:(_Bool *)arg3;
- (void)updateCellularTech:(int)arg1 forLocalInterface:(_Bool)arg2;
- (void)updateCellularMTU:(int)arg1;
- (int)removeConnection:(id)arg1;
- (int)addConnection:(id)arg1;
- (void)useConnectionAsPrimary:(id)arg1;
- (void)updateConnectionHealthWithIndicator:(_Bool)arg1;
- (int)processConnectionHealthFromControlInfo:(void *)arg1;
- (int)setConnectionHealthOnControlInfo:(void *)arg1;
- (void)updateCellularExcessiveBytesWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 bytes:(int)arg2 isMediaData:(_Bool)arg3 isOutgoing:(_Bool)arg4;
- (void)updateTransmittedExcessiveBytes:(int)arg1 isMediaData:(_Bool)arg2 isIPv6:(_Bool)arg3;
- (void)updateReceivedExcessiveBytes:(int)arg1 isMediaData:(_Bool)arg2 isIPv6:(_Bool)arg3;
- (void)reportConnection:(id)arg1 isInitialConnection:(_Bool)arg2;
@property(readonly) _Bool isLocalCellularInterfaceUsed;
- (struct tagVCSourceDestinationInfo *)createSourceDestinationInfoList;
- (_Bool)shouldHandoverWhenUpdateWRMDuplication:(int)arg1;
- (void)updateWRMDuplicationForHandover;
- (void)updateWRMDuplicationForRemoteiRATSuggestion;
- (_Bool)updateWRMDuplicationForLocaliRATSuggestion;
- (void)checkiRATSuggestionDefaultValue;
- (void)checkiRATSuggestion;
- (void)requestWRMNotificationAtTime:(double)arg1;
- (id)connectionForQuality:(int)arg1;
- (id)connectionForQualityInternal:(int)arg1;
- (_Bool)isOptimalConnection:(id)arg1 asPrimary:(_Bool)arg2 interfaceMask:(int)arg3;
- (_Bool)isBetterConnection:(id)arg1 asPrimary:(_Bool)arg2;
- (void)promoteSecondaryConnectionToPrimary:(id)arg1;
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)updateSessionStats:(unsigned short)arg1;
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;
- (void)synchronizeParticipantGenerationCounter:(unsigned char)arg1;
- (void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(_Bool)arg4 isOutgoing:(_Bool)arg5;
- (void)updateReceivedPacketsAndBytesWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 bytesReceived:(int)arg2 isMediaData:(_Bool)arg3 shouldCountPacket:(_Bool)arg4 numOfStreamId:(int)arg5 isPriorityIncluded:(_Bool)arg6;
- (void)updateTransmittedPacketsAndBytesWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 bytesSent:(int)arg2 isMediaData:(_Bool)arg3 shouldCountPacket:(_Bool)arg4 numOfStreamId:(int)arg5 isPriorityIncluded:(_Bool)arg6;
- (_Bool)isConnectedOnRelayForActiveConnectionWithQuality:(int)arg1;
- (_Bool)isConnectedOnIPv6ForActiveConnectionWithQuality:(int)arg1;
- (int)getCellularMTUForActiveConnectionWithQuality:(int)arg1;
- (int)getCellularTechForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(_Bool)arg2;
- (int)getConnectionTypeForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(_Bool)arg2;
- (_Bool)isInterfaceOnCellularForActiveConnectionWithQuality:(int)arg1 forLocalInterface:(_Bool)arg2;
- (int)getNumberOfConnectionsInternal;
@property(readonly) int connectionCount;
- (int)processRemoteWRMSuggestion:(int)arg1 isRemoteDuplicating:(_Bool)arg2;
- (int)processWRMNotification:(CDStruct_d2860d30 *)arg1;
- (int)setWRMUpdateCallback:(CDUnknownFunctionPointerType)arg1 requestNotificationCallback:(CDUnknownFunctionPointerType)arg2 withContext:(void *)arg3;
- (const char *)reasonStringWithDuplicationType:(int)arg1;
- (void)setDuplicationEnabledInternal:(_Bool)arg1;
- (void)setConnectionPause:(_Bool)arg1 isLocalConnection:(_Bool)arg2;
- (void)setDuplicationCallback:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;
- (void)setReportingAgent:(struct opaqueRTCReporting *)arg1;
@property id <VCConnectionManagerDelegate> delegate;
- (void)setupConnectionHealthMonitor;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
