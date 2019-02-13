//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioIOControllerControl-Protocol.h>
#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCAudioIOSource-Protocol.h>
#import <AVConference/VCAudioSessionDelegate-Protocol.h>

@class AVAudioDevice, NSDictionary, NSMutableArray, NSMutableSet, NSString, VCAudioSessionMediaProperties, VCAudioUnitProperties;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAudioManager : NSObject <VCAudioIOControllerControl, VCAudioIOSink, VCAudioIOSource, VCAudioSessionDelegate>
{
    struct tagHANDLE *_hAUIO;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct AudioEventQueue_t *_sourceEventQueue;
    struct AudioEventQueue_t *_sinkEventQueue;
    unsigned int _state;
    VCAudioSessionMediaProperties *_currentAudioSessionMediaProperties;
    VCAudioUnitProperties *_currentAudioUnitProperties;
    NSDictionary *_vpOperatingModeToAudioSessionMediaFormatMapping;
    struct AudioEventQueue_t *_eventQueue;
    NSMutableArray *_allClients;
    NSMutableArray *_suspendedClients;
    NSMutableArray *_startingIOClients;
    NSMutableSet *_sourceClients;
    NSMutableSet *_sinkClients;
    AVAudioDevice *_inputDevice;
    AVAudioDevice *_outputDevice;
    struct opaqueVCAudioBufferList *_sourceBuffer;
    _Bool _isGKVoiceChat;
    _Bool _isMicrophoneMuted;
    _Bool _isInDaemon;
    _Bool _isInputMeteringEnabled;
    _Bool _isOutputMeteringEnabled;
    _Bool _isSpeakerPhoneEnabled;
    _Bool _isSuspended;
    struct _VCAudioIOControllerIOState _sinkData;
    struct _VCAudioIOControllerIOState _sourceData;
    struct opaqueVCAudioLimiter *_audioLimiter;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isInDaemon; // @synthesize isInDaemon=_isInDaemon;
@property(retain, nonatomic) VCAudioUnitProperties *currentAudioUnitProperties; // @synthesize currentAudioUnitProperties=_currentAudioUnitProperties;
@property(retain, nonatomic) VCAudioSessionMediaProperties *currentAudioSessionMediaProperties; // @synthesize currentAudioSessionMediaProperties=_currentAudioSessionMediaProperties;
@property(nonatomic, getter=isSpeakerPhoneEnabled) _Bool speakerPhoneEnabled; // @synthesize speakerPhoneEnabled=_isSpeakerPhoneEnabled;
@property(retain, nonatomic) AVAudioDevice *currentOutputDevice; // @synthesize currentOutputDevice=_outputDevice;
@property(retain, nonatomic) AVAudioDevice *currentInputDevice; // @synthesize currentInputDevice=_inputDevice;
@property(nonatomic, getter=isMicrophoneMuted) _Bool microphoneMuted; // @synthesize microphoneMuted=_isMicrophoneMuted;
@property(nonatomic) _Bool isGKVoiceChat; // @synthesize isGKVoiceChat=_isGKVoiceChat;
- (void)didSessionEnd;
- (void)didSessionStop;
- (void)didSessionResume;
- (void)didSessionPause;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)stopAudioSession;
- (void)resetAudioSessionWithProperties:(id)arg1;
- (_Bool)startAudioSessionWithProperties:(id)arg1;
- (void)refreshOutputMetering;
- (void)refreshInputMetering;
- (void)updateClient:(id)arg1;
- (void)stopClient:(id)arg1;
- (void)startClient:(id)arg1;
- (_Bool)updateStateWithAudioIOClient:(id)arg1;
- (_Bool)stateRunningWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;
- (void)stateRunningToSessionStarted;
- (_Bool)stateSessionStartedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;
- (void)_resumeSuspendedClients;
- (void)_suspendAllClients;
- (_Bool)stateIdleWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;
- (void)removeSinkClient:(id)arg1;
- (void)addSinkClient:(id)arg1;
- (void)removeSourceClient:(id)arg1;
- (void)addSourceClient:(id)arg1;
- (void)stopAUIO;
- (void)resetAUIOWithProperties:(id)arg1;
- (_Bool)shouldResetAudioSessionWithProperties:(id)arg1;
- (_Bool)shouldResetAudioUnitWithProperties:(id)arg1;
- (_Bool)startAUIOWithProperties:(id)arg1;
- (void)setupIODevicesForAUIO:(struct tagHANDLE *)arg1;
- (id)newAudioSessionMediaPropertiesWithClient:(id)arg1;
- (id)newAudioUnitPropertiesWithClient:(id)arg1;
- (unsigned int)vpOperationModeForConferenceOperatingMode:(int)arg1 deviceRole:(int)arg2;
- (void)_cleanupDeadClients;
- (_Bool)removeClient:(id)arg1;
- (_Bool)addClient:(id)arg1;
- (void)flushEventQueue:(struct AudioEventQueue_t *)arg1;
- (void)processEventQueue:(struct AudioEventQueue_t *)arg1 clientList:(id)arg2;
- (void)resetAudioTimestamps;
- (void)computeHardwarePreferences;
- (void)setOutputMetering;
- (void)setInputMetering;
- (void)dealloc;
- (id)init;
- (void)getPreferredFormat:(struct AudioStreamBasicDescription *)arg1 blockSize:(double *)arg2 vpOperatingMode:(unsigned int *)arg3 forOperatingMode:(int)arg4 deviceRole:(int)arg5 suggestedFormat:(struct AudioStreamBasicDescription *)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
