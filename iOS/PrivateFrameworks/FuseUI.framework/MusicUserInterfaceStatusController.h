//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/ISURLBagObserver-Protocol.h>
#import <FuseUI/MCProfileConnectionObserver-Protocol.h>

@class MusicStoreBag, NSArray, NSDictionary, NSString, RadioAvailabilityController;
@protocol OS_dispatch_queue;

@interface MusicUserInterfaceStatusController : NSObject <ISURLBagObserver, MCProfileConnectionObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Bool _canShowConnect;
    _Bool _canShowRadio;
    _Bool _canShowSubscriptionContent;
    _Bool _hasSuccessfullyLoadedBagOnce;
    unsigned long long _observersCount;
    MusicStoreBag *_storeBag;
    NSArray *_supportedTabIdentifiers;
    NSDictionary *_tabConfigurations;
    long long _tabState;
    _Bool _displayingLocalLibrary;
    RadioAvailabilityController *_radioAvailabilityController;
    NSString *_storeFrontID;
}

+ (id)sharedUserInterfaceStatusController;
@property(readonly, nonatomic) NSString *storeFrontID; // @synthesize storeFrontID=_storeFrontID;
@property(readonly, nonatomic) RadioAvailabilityController *radioAvailabilityController; // @synthesize radioAvailabilityController=_radioAvailabilityController;
@property(readonly, nonatomic, getter=isDisplayingLocalLibrary) _Bool displayingLocalLibrary; // @synthesize displayingLocalLibrary=_displayingLocalLibrary;
- (void).cxx_destruct;
- (void)_updateAllowedUserInterfaceComponentsWithStoreBag:(id)arg1;
- (void)_updateAllowedUserInterfaceComponentsWithStoreBagDictionary:(id)arg1;
- (void)_updateAllowedUserInterfaceComponents;
- (_Bool)_isMusicSubscriptionServiceRestricted;
- (_Bool)_isConnectRestricted;
- (_Bool)_iOSVersions:(id)arg1 traverseCurrentVersionSinceVersion:(id)arg2;
- (id)_defaultTabConfigurations;
- (id)_calculateCurrentStoreFrontID;
- (void)_handleStoreFrontDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionStatusDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionAvailabilityDidChangeNotification:(id)arg1;
- (void)_handleRadioAvailabilityDidChangeNotification:(id)arg1;
- (void)_handleDefaultLibraryDidDhangeNotification:(id)arg1;
- (void)_handleDefaultsDidChangeNotification:(id)arg1;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (id)supportedTabIdentifiersForTraitCollection:(id)arg1;
- (void)updateWelcomeScreenAcknowledgmentDefaults:(_Bool)arg1;
- (long long)reasonForWelcomScreenPresentation;
- (void)endObservingAllowedUserInterfaceComponents;
- (void)beginObservingAllowedUserInterfaceComponents;
@property(readonly, nonatomic) long long tabState;
@property(readonly, nonatomic) _Bool hasLoadedStoreBagOnce;
@property(readonly, nonatomic) _Bool canShowSubscriptionContent;
@property(readonly, nonatomic) _Bool canShowRadio;
@property(readonly, nonatomic) _Bool canShowConnect;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)bagDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
