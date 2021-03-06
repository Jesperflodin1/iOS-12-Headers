//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IXSDataPromiseDelegate-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class BKSTerminationAssertion, IXAppInstallCoordinatorSeed, IXSOwnedDataPromise, IXSPlaceholder, IXSPlaceholderFailureInfo, IXSPromisedOutOfBandTransfer, NSArray, NSDate, NSError, NSMutableArray, NSProgress, NSSet, NSString, NSUUID;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface IXSCoordinatedAppInstall : NSObject <IXSDataPromiseDelegate, NSSecureCoding>
{
    _Bool _isPaused;
    _Bool _complete;
    _Bool _loadingPhaseIsComplete;
    _Bool _isTracked;
    _Bool _sentBeginRestoringUserData;
    IXSPlaceholder *_placeholderPromise;
    IXSOwnedDataPromise *_appAssetPromise;
    unsigned long long _appAssetPromiseDRI;
    NSArray *_initialODRAssetPromises;
    IXSPromisedOutOfBandTransfer *_userDataPromise;
    IXSPromisedOutOfBandTransfer *_preparationPromise;
    IXSOwnedDataPromise *_installOptionsPromise;
    unsigned long long _importance;
    unsigned long long _effectiveIntent;
    IXAppInstallCoordinatorSeed *_seed;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_delegateCallQueue;
    NSObject<OS_dispatch_group> *_outstandingInstallOperationsGroup;
    NSError *_error;
    unsigned long long _errorSourceIdentifier;
    NSUUID *_installOptionsPromiseUUID;
    NSArray *_enableExtensionTypes;
    NSUUID *_placeholderPromiseUUID;
    NSUUID *_appAssetPromiseUUID;
    NSArray *_initialODRAssetPromiseUUIDs;
    NSUUID *_userDataPromiseUUID;
    NSUUID *_preparationPromiseUUID;
    NSProgress *_cachedCurrentProgress;
    NSMutableArray *_pendingProgressRequests;
    unsigned long long _placeholderInstallState;
    unsigned long long _appInstallState;
    IXSPlaceholderFailureInfo *_placeholderFailureInfo;
    unsigned long long _originalInstallType;
    BKSTerminationAssertion *_termAssertion;
    NSObject<OS_dispatch_source> *_assertionRetryTimer;
    unsigned long long _assertionRetryCount;
    NSDate *_firstPlugInBusyTime;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDate *firstPlugInBusyTime; // @synthesize firstPlugInBusyTime=_firstPlugInBusyTime;
@property(nonatomic) unsigned long long assertionRetryCount; // @synthesize assertionRetryCount=_assertionRetryCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *assertionRetryTimer; // @synthesize assertionRetryTimer=_assertionRetryTimer;
@property(retain, nonatomic) BKSTerminationAssertion *termAssertion; // @synthesize termAssertion=_termAssertion;
@property(nonatomic) _Bool sentBeginRestoringUserData; // @synthesize sentBeginRestoringUserData=_sentBeginRestoringUserData;
@property(nonatomic) _Bool isTracked; // @synthesize isTracked=_isTracked;
@property(nonatomic) unsigned long long originalInstallType; // @synthesize originalInstallType=_originalInstallType;
@property(retain, nonatomic) IXSPlaceholderFailureInfo *placeholderFailureInfo; // @synthesize placeholderFailureInfo=_placeholderFailureInfo;
@property(nonatomic) unsigned long long appInstallState; // @synthesize appInstallState=_appInstallState;
@property(nonatomic) unsigned long long placeholderInstallState; // @synthesize placeholderInstallState=_placeholderInstallState;
@property(retain, nonatomic) NSMutableArray *pendingProgressRequests; // @synthesize pendingProgressRequests=_pendingProgressRequests;
@property(readonly, nonatomic) NSProgress *cachedCurrentProgress; // @synthesize cachedCurrentProgress=_cachedCurrentProgress;
@property(retain, nonatomic) NSUUID *preparationPromiseUUID; // @synthesize preparationPromiseUUID=_preparationPromiseUUID;
@property(retain, nonatomic) NSUUID *userDataPromiseUUID; // @synthesize userDataPromiseUUID=_userDataPromiseUUID;
@property(copy, nonatomic) NSArray *initialODRAssetPromiseUUIDs; // @synthesize initialODRAssetPromiseUUIDs=_initialODRAssetPromiseUUIDs;
@property(retain, nonatomic) NSUUID *appAssetPromiseUUID; // @synthesize appAssetPromiseUUID=_appAssetPromiseUUID;
@property(retain, nonatomic) NSUUID *placeholderPromiseUUID; // @synthesize placeholderPromiseUUID=_placeholderPromiseUUID;
@property(retain, nonatomic) NSArray *enableExtensionTypes; // @synthesize enableExtensionTypes=_enableExtensionTypes;
@property(retain, nonatomic) NSUUID *installOptionsPromiseUUID; // @synthesize installOptionsPromiseUUID=_installOptionsPromiseUUID;
@property(nonatomic) unsigned long long errorSourceIdentifier; // @synthesize errorSourceIdentifier=_errorSourceIdentifier;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *outstandingInstallOperationsGroup; // @synthesize outstandingInstallOperationsGroup=_outstandingInstallOperationsGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateCallQueue; // @synthesize delegateCallQueue=_delegateCallQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly, nonatomic) IXAppInstallCoordinatorSeed *seed; // @synthesize seed=_seed;
- (void).cxx_destruct;
- (void)promise:(id)arg1 didCancelForReason:(id)arg2 client:(unsigned long long)arg3;
- (void)promise:(id)arg1 didUpdateProgress:(double)arg2;
- (void)promiseDidReset:(id)arg1;
- (void)promiseDidComplete:(id)arg1;
- (void)promiseDidBegin:(id)arg1;
- (void)_onQueue_updateLoadingProgress;
- (void)_onQueue_finishLoadingProgress;
- (void)_onQueue_cancelLoadingProgress;
- (void)_onQueue_resumeProgress;
- (void)_onQueue_pauseProgress;
- (void)_pauseProgressObject:(id)arg1;
- (void)_onQueue_fetchProgressAndRun:(CDUnknownBlockType)arg1;
- (void)_limitedConcurrency_fetchProgressForPlaceholderInstallType:(unsigned long long)arg1 andRun:(CDUnknownBlockType)arg2;
- (void)_runWithProgress:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool loadingPhaseIsComplete; // @synthesize loadingPhaseIsComplete=_loadingPhaseIsComplete;
@property(readonly, copy, nonatomic) NSSet *promiseUUIDs;
@property(nonatomic) unsigned long long effectiveIntent; // @synthesize effectiveIntent=_effectiveIntent;
@property(readonly, nonatomic) unsigned long long originalIntent; // @dynamic originalIntent;
@property(readonly, nonatomic) unsigned long long creator; // @dynamic creator;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(readonly, copy) NSString *description;
- (void)_updatePendingOperationsForChangeFromPreviousState:(unsigned long long)arg1 toNewState:(unsigned long long)arg2;
- (void)_onQueue_removeSavedState;
- (void)_onQueue_saveState;
- (void)_onQueue_internal_cancelForReason:(id)arg1 client:(unsigned long long)arg2;
- (void)_onQueue_cancelForReason:(id)arg1 client:(unsigned long long)arg2;
- (void)cancelForReason:(id)arg1 client:(unsigned long long)arg2;
- (void)_onQueue_cancelPlaceholderIfNeededForReason:(id)arg1 client:(unsigned long long)arg2;
- (void)_onQueue_handleAppAssetPromiseCancellationWhenRestoringWithReason:(id)arg1 client:(unsigned long long)arg2;
- (_Bool)_shouldRemovePlaceholderForReason:(id)arg1;
- (void)_onQueue_updatePlaceholderForFailureReason:(id)arg1 client:(unsigned long long)arg2 installType:(unsigned long long)arg3;
- (void)_asyncUpdatePlaceholderMetadataWithInstallType:(unsigned long long)arg1 reason:(long long)arg2 underlyingError:(id)arg3 client:(unsigned long long)arg4;
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
- (void)_onQueue_unregister;
- (void)_onQueue_prioritizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)prioritizeWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool shouldBeginRestoringUserData; // @dynamic shouldBeginRestoringUserData;
@property(nonatomic) unsigned long long importance; // @synthesize importance=_importance;
- (_Bool)externalGetIsPaused;
- (void)externalSetIsPaused:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setIsPaused:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(retain, nonatomic) IXSOwnedDataPromise *installOptionsPromise; // @synthesize installOptionsPromise=_installOptionsPromise;
- (void)_internal_setInstallOptionsPromise:(id)arg1;
@property(retain, nonatomic) IXSPromisedOutOfBandTransfer *preparationPromise; // @synthesize preparationPromise=_preparationPromise;
@property(retain, nonatomic) IXSPromisedOutOfBandTransfer *userDataPromise; // @synthesize userDataPromise=_userDataPromise;
@property(copy, nonatomic) NSArray *initialODRAssetPromises; // @synthesize initialODRAssetPromises=_initialODRAssetPromises;
@property(nonatomic) unsigned long long appAssetPromiseDRI; // @synthesize appAssetPromiseDRI=_appAssetPromiseDRI;
@property(retain, nonatomic) IXSOwnedDataPromise *appAssetPromise; // @synthesize appAssetPromise=_appAssetPromise;
- (void)_internal_setAppAssetPromise:(id)arg1;
@property(retain, nonatomic) IXSPlaceholder *placeholderPromise; // @synthesize placeholderPromise=_placeholderPromise;
- (void)_onQueue_fireObserversForClient:(id)arg1;
- (void)_onQueue_acquireAssertionAndDoInstall;
- (void)_onQueue_handleCancelForInstallFailure:(id)arg1;
- (id)_onQueue_fetchInstallOptionsWithError:(id *)arg1;
- (void)_onQueue_acquireAssertionAndInstallPlaceholder;
- (_Bool)_installApplication:(id)arg1 options:(id)arg2 retries:(unsigned long long)arg3 error:(id *)arg4;
- (void)_onQueue_acquireAssertionForPlaceholder:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_onQueue_handleAssertionAcquisitionFailureForPlaceholder:(_Bool)arg1 withError:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_onQueue_runAssertionHandler:(CDUnknownBlockType)arg1;
- (long long)_onQueue_assertionRetrySeconds;
- (void)_runAsyncBlockWithDescription:(id)arg1 onLaunchServicesQueue:(CDUnknownBlockType)arg2;
- (void)_onQueue_checkState;
@property(readonly, nonatomic) unsigned long long state;
- (void)handleUnlockNotification;
- (void)_releasePowerAssertion:(unsigned int)arg1;
- (unsigned int)_createPowerAssertion;
- (_Bool)awakeFromSerializationWithError:(id *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithSeed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_initInternalState;
- (oneway void)_remote_getCoordinationState:(CDUnknownBlockType)arg1;
- (oneway void)_remote_prioritizeWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)_remote_getIsPausedWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setIsPaused:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_fireObserversForClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_getErrorInfo:(CDUnknownBlockType)arg1;
- (oneway void)_remote_getIsComplete:(CDUnknownBlockType)arg1;
- (oneway void)_remote_getPreparationPromise:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setPreparationPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_getUserDataRestoreShouldBegin:(CDUnknownBlockType)arg1;
- (oneway void)_remote_hasUserDataPromise:(CDUnknownBlockType)arg1;
- (oneway void)_remote_getUserDataPromise:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setUserDataPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_hasInitialODRAssetPromises:(CDUnknownBlockType)arg1;
- (oneway void)_remote_getInitialODRAssetPromises:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setInitialODRAssetPromiseUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_importanceWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setImportance:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_hasAutoEnabledExtensionTypes:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setAutoEnabledExtensionTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_hasInstallOptions:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setInstallOptionsPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_setAppAssetPromiseDRI:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_getAppAssetPromiseDRI:(CDUnknownBlockType)arg1;
- (oneway void)_remote_appAssetPromiseHasBegunFulfillment:(CDUnknownBlockType)arg1;
- (oneway void)_remote_hasAppAssetPromise:(CDUnknownBlockType)arg1;
- (oneway void)_remote_getAppAssetPromise:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setAppAssetPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_hasPlaceholderPromise:(CDUnknownBlockType)arg1;
- (oneway void)_remote_getPlaceholderPromise:(CDUnknownBlockType)arg1;
- (oneway void)_remote_setPlaceholderPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)_remote_cancelForReason:(id)arg1 client:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

