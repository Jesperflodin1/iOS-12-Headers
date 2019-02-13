//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioRecorderDelegate-Protocol.h>
#import <CoreSpeech/CSAudioRouteChangeMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSAudioServerCrashMonitorGibraltarDelegate-Protocol.h>
#import <CoreSpeech/CSLanguageCodeUpdateMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSiriEnabledMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSSmartSiriVolumeDelegate-Protocol.h>
#import <CoreSpeech/CSStateMachineDelegate-Protocol.h>
#import <CoreSpeech/CSVoiceTriggerAssetDownloadMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSVoiceTriggerDelegate-Protocol.h>

@class CSAudioCircularBuffer, CSAudioRecorder, CSSmartSiriVolume, CSStateMachine, NSDictionary, NSHashTable, NSString, NSUUID;
@protocol CSSpeechManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface CSSpeechManager : NSObject <CSAudioRecorderDelegate, CSStateMachineDelegate, CSVoiceTriggerDelegate, CSSiriEnabledMonitorDelegate, CSAudioServerCrashMonitorGibraltarDelegate, CSSmartSiriVolumeDelegate, CSAudioRouteChangeMonitorDelegate, CSVoiceTriggerAssetDownloadMonitorDelegate, CSLanguageCodeUpdateMonitorDelegate>
{
    _Bool _isSiriEnabled;
    _Bool _deviceRoleIsStereo;
    _Bool _isAudioSessionActive;
    CSAudioRecorder *_audioRecorder;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_assetQueryQueue;
    CSStateMachine *_stateMachine;
    CSAudioCircularBuffer *_audioBuffer;
    id <CSSpeechManagerDelegate> _clientController;
    unsigned long long _secondPassStartSampleCount;
    NSDictionary *_lastVoiceTriggerEventInfo;
    CSSmartSiriVolume *_smartSiriVolume;
    NSHashTable *_activeAudioProcessors;
    NSHashTable *_continuousAudioProcessors;
    unsigned long long _lastForwardedSampleCount;
    unsigned long long _clientStartSampleCount;
    NSObject<OS_dispatch_source> *_listenPollingTimer;
    NSObject<OS_dispatch_source> *_clearLoggingFileTimer;
    long long _listenPollingTimerCount;
    long long _clearLoggingFileTimerCount;
    NSUUID *_pendingSetRecordModeToRecordingToken;
    CDUnknownBlockType _pendingSetRecordModeToRecordingCompletion;
    double _audioSessionActivationDelay;
}

@property(nonatomic) double audioSessionActivationDelay; // @synthesize audioSessionActivationDelay=_audioSessionActivationDelay;
@property(nonatomic) _Bool isAudioSessionActive; // @synthesize isAudioSessionActive=_isAudioSessionActive;
@property(nonatomic) _Bool deviceRoleIsStereo; // @synthesize deviceRoleIsStereo=_deviceRoleIsStereo;
@property(nonatomic) _Bool isSiriEnabled; // @synthesize isSiriEnabled=_isSiriEnabled;
@property(copy, nonatomic) CDUnknownBlockType pendingSetRecordModeToRecordingCompletion; // @synthesize pendingSetRecordModeToRecordingCompletion=_pendingSetRecordModeToRecordingCompletion;
@property(retain, nonatomic) NSUUID *pendingSetRecordModeToRecordingToken; // @synthesize pendingSetRecordModeToRecordingToken=_pendingSetRecordModeToRecordingToken;
@property(nonatomic) long long clearLoggingFileTimerCount; // @synthesize clearLoggingFileTimerCount=_clearLoggingFileTimerCount;
@property(nonatomic) long long listenPollingTimerCount; // @synthesize listenPollingTimerCount=_listenPollingTimerCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *clearLoggingFileTimer; // @synthesize clearLoggingFileTimer=_clearLoggingFileTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *listenPollingTimer; // @synthesize listenPollingTimer=_listenPollingTimer;
@property(nonatomic) unsigned long long clientStartSampleCount; // @synthesize clientStartSampleCount=_clientStartSampleCount;
@property(nonatomic) unsigned long long lastForwardedSampleCount; // @synthesize lastForwardedSampleCount=_lastForwardedSampleCount;
@property(retain, nonatomic) NSHashTable *continuousAudioProcessors; // @synthesize continuousAudioProcessors=_continuousAudioProcessors;
@property(retain, nonatomic) NSHashTable *activeAudioProcessors; // @synthesize activeAudioProcessors=_activeAudioProcessors;
@property(retain, nonatomic) CSSmartSiriVolume *smartSiriVolume; // @synthesize smartSiriVolume=_smartSiriVolume;
@property(retain, nonatomic) NSDictionary *lastVoiceTriggerEventInfo; // @synthesize lastVoiceTriggerEventInfo=_lastVoiceTriggerEventInfo;
@property(nonatomic) unsigned long long secondPassStartSampleCount; // @synthesize secondPassStartSampleCount=_secondPassStartSampleCount;
@property(nonatomic) __weak id <CSSpeechManagerDelegate> clientController; // @synthesize clientController=_clientController;
@property(retain, nonatomic) CSAudioCircularBuffer *audioBuffer; // @synthesize audioBuffer=_audioBuffer;
@property(retain, nonatomic) CSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueryQueue; // @synthesize assetQueryQueue=_assetQueryQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
- (void).cxx_destruct;
- (void)handleServerDidRestart;
- (void)handleLostServerConnection;
- (void)_startClearLoggingFilesTimer;
- (void)_createClearLoggingFileTimer;
- (void)CSSmartSiriVolumeDidReceiveTimerChanged:(long long)arg1;
- (void)CSSmartSiriVolumeDidReceiveAlarmChanged:(long long)arg1;
- (void)CSSmartSiriVolumeDidReceiveMusicVolumeChanged:(float)arg1;
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;
- (float)getEstimatedTTSVolume;
- (id)_eventName:(unsigned long long)arg1;
- (id)_stateName:(long long)arg1;
- (void)_reinitializeSmartSiriVolumeWithAsset:(id)arg1;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
- (void)CSVoiceTriggerAssetDownloadMonitor:(id)arg1 didInstallNewAsset:(_Bool)arg2;
- (void)voiceTriggerDidDetectTwoShotAtTime:(double)arg1;
- (void)voiceTriggerDidDetectKeyword:(id)arg1;
- (void)audioRecorderDisconnected:(id)arg1;
- (void)audioRecorder:(id)arg1 didSetAudioSessionActive:(_Bool)arg2;
- (void)audioRecorder:(id)arg1 willSetAudioSessionActive:(_Bool)arg2;
- (void)audioRecorderEndRecordInterruption:(id)arg1;
- (void)audioRecorderBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
- (void)audioRecorderBeginRecordInterruption:(id)arg1;
- (void)audioRecorderDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;
- (void)audioRecorderDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)audioRecorderDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;
- (void)audioRecorderBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)audioRecorderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;
- (id)_getClientRecordContext;
- (void)_startForwardingToSmartSiriVolume;
- (void)_stopForwardingToClient;
- (void)_startForwardingToClient;
- (void)_destroyAudioRecorderIfNeeded;
- (void)_stopListenPolling;
- (void)_startListenPolling;
- (void)_createListenPollingTimer;
- (void)didIgnoreEvent:(long long)arg1 from:(long long)arg2;
- (void)didTransitFrom:(long long)arg1 to:(long long)arg2 by:(long long)arg3;
- (void)mediaserverdDidRestart;
- (void)audioRecorderLostMediaserverd:(id)arg1;
- (void)_stopRecordingWithEvent:(unsigned long long)arg1;
- (void)stopRecordingWithEvent:(unsigned long long)arg1;
- (void)_startRecordingForClient:(id)arg1 error:(id *)arg2;
- (_Bool)_startRecordingForAOPFirstPassTriggerWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)_startRecordingWithSettings:(id)arg1 event:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)startRecordingWithSetting:(id)arg1 event:(unsigned long long)arg2 error:(id *)arg3;
- (void)startRecordingAsyncWithSetting:(id)arg1 event:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_handleVoiceTriggerSwitchAOP2APEvent:(unsigned long long)arg1 settings:(id)arg2 error:(id *)arg3;
- (_Bool)_handleAOPFirstPassTriggerEvent:(unsigned long long)arg1 settings:(id)arg2 error:(id *)arg3;
- (void)_enableMiniDucking:(_Bool)arg1;
- (_Bool)_releaseAudioSessionForListening:(unsigned long long)arg1 error:(id *)arg2;
- (void)_releaseClientAudioSession:(unsigned long long)arg1;
- (void)releaseClientAudioSession:(unsigned long long)arg1;
- (void)releaseClientAudioSession;
- (_Bool)_setCurrentContext:(id)arg1 error:(id *)arg2;
- (void)_performPendingSetRecordModeToRecordingForReason:(id)arg1;
- (void)_cancelPendingSetRecordModeToRecordingForReason:(id)arg1;
- (void)_scheduleSetRecordModeToRecordingWithDelay:(double)arg1 forReason:(id)arg2 validator:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_setRecordMode:(long long)arg1 withDelay:(double)arg2 error:(id *)arg3;
- (_Bool)_setRecordMode:(long long)arg1 error:(id *)arg2;
- (_Bool)_startListening:(id *)arg1;
- (_Bool)_startRecordingWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)prepareRecordingForClient:(id)arg1 error:(id *)arg2;
- (_Bool)setClientContext:(id)arg1 error:(id *)arg2;
- (_Bool)isNarrowBand;
- (_Bool)isClientRecording;
- (id)recordSettings;
- (id)recordDeviceInfo;
- (id)recordRoute;
- (void)prewarmAudioSession;
- (_Bool)_prepareListenWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)_prepareRecorderWithSettings:(id)arg1 error:(id *)arg2;
- (_Bool)_createRecorderWithContextIfNeeded:(id)arg1 error:(id *)arg2;
- (void)_notifyEvent:(unsigned long long)arg1;
- (void)notifyEvent:(unsigned long long)arg1;
- (long long)getCurrentState;
- (void)_setupStateMachine;
- (void)registerSpeechController:(id)arg1;
- (void)_destroyCircularBuffer;
- (void)_createCircularBuffer;
- (void)_setupCircularBuffer;
- (void)_getVoiceTriggerAsset:(CDUnknownBlockType)arg1;
- (void)_getVoiceTriggerAssetForMac:(CDUnknownBlockType)arg1;
- (void)_reset;
- (void)reset;
- (void)startManager;
- (void)dealloc;
- (id)initWithVoiceTriggerFirstPass:(id)arg1 voicetriggerSecondPass:(id)arg2 voicetriggerEventNotifier:(id)arg3 audioRecorder:(id)arg4;
- (id)init;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (void)updateMeters;
- (void)setMeteringEnabled:(_Bool)arg1;
- (unsigned long long)alertStartTime;
- (_Bool)playRecordStartingAlertAndResetEndpointer;
- (_Bool)playAlertSoundForType:(long long)arg1;
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (id)metrics;
- (id)passThruVoiceTriggerInfo;
- (void)setDuckOthersOption:(_Bool)arg1;
- (_Bool)duckOthersOption;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
