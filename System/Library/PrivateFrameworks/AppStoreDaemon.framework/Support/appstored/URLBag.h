//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSLookupBagContract-Protocol.h"
#import "AMSMescalBagContract-Protocol.h"
#import "AMSMetricsBagContract-Protocol.h"
#import "AppUsageBagContract-Protocol.h"
#import "AutoUpdateBagContract-Protocol.h"
#import "BuyProductBagContract-Protocol.h"
#import "CrossfireBagContract-Protocol.h"
#import "IAPInfoBagContract-Protocol.h"
#import "OwnsCheckBagContract-Protocol.h"
#import "PersonalizationBagContract-Protocol.h"
#import "PurchaseHistoryBagContract-Protocol.h"
#import "PushNotificationBagcontract-Protocol.h"
#import "StoreQueueBagContract-Protocol.h"
#import "SubscriptionEntitlementsBagContract-Protocol.h"
#import "SystemAppsBagContract-Protocol.h"
#import "UpdatesBagContract-Protocol.h"
#import "WelcomeToAppStoreNotificationBagContract-Protocol.h"

@class AMSBag, AMSBagValue, NSString;
@protocol AMSMescalBagContract, AMSMetricsBagContract;

@interface URLBag : NSObject <AMSLookupBagContract, AMSMescalBagContract, AMSMetricsBagContract, AppUsageBagContract, AutoUpdateBagContract, BuyProductBagContract, CrossfireBagContract, OwnsCheckBagContract, PersonalizationBagContract, IAPInfoBagContract, PurchaseHistoryBagContract, SubscriptionEntitlementsBagContract, UpdatesBagContract, StoreQueueBagContract, PushNotificationBagcontract, SystemAppsBagContract, WelcomeToAppStoreNotificationBagContract>
{
    AMSBag *_bag;
}

+ (id)_keySet;
+ (id)defaultBag;
- (void).cxx_destruct;
- (id)v2UpdateSchedulingEnabled;
- (id)viewUpdatesRequestURL;
- (id)updateUsingOptimizedRequest;
- (id)availableUpdatesRequestURL;
@property(readonly) AMSBagValue *hideableSystemApps;
@property(readonly) AMSBagValue *pendingAppsURL;
@property(readonly) AMSBagValue *completeStoreDownloadURL;
@property(readonly) AMSBagValue *subscriptionEntitlementsRefreshIntervalInSeconds;
@property(readonly) AMSBagValue *subscriptionEntitlementsTimeout;
@property(readonly) AMSBagValue *subscriptionEntitlementsURL;
@property(readonly) AMSBagValue *welcomeToAppStoreActionURL;
@property(readonly) AMSBagValue *welcomeToAppStoreActionButton;
@property(readonly) AMSBagValue *welcomeToAppStoreDontRemindMe;
@property(readonly) AMSBagValue *welcomeToAppStoreRemindMe;
@property(readonly) AMSBagValue *welcomeToAppStoreLaterButton;
@property(readonly) AMSBagValue *welcomeToAppStoreMessage;
@property(readonly) AMSBagValue *welcomeToAppStoreTitle;
@property(readonly) AMSBagValue *welcomeToAppStoreSample;
@property(readonly) AMSBagValue *welcomeToAppStoreDelay;
@property(readonly) AMSBagValue *pushNotificationEnvironment;
@property(readonly) AMSBagValue *PurchaseHistoryForcedRefreshMinutes;
@property(readonly) AMSBagValue *PurchaseHistoryDatabaseID;
@property(readonly) AMSBagValue *PurchaseHistoryBaseURL;
@property(readonly) AMSBagValue *IAPInfoForcedRefreshMinutes;
@property(readonly) AMSBagValue *IAPInfoDatabaseID;
@property(readonly) AMSBagValue *IAPInfoBaseURL;
@property(readonly) AMSBagValue *clusterMappingRefreshFrequencySeconds;
@property(readonly) AMSBagValue *clusterMappingURL;
@property(readonly) AMSBagValue *appUsageSamplingPercentage;
@property(readonly) AMSBagValue *appUsageResetActorIDFrequencySeconds;
@property(readonly) AMSBagValue *appUsagePostsPerDay;
@property(readonly) AMSBagValue *appUsagePostGracePeriodSeconds;
@property(readonly) AMSBagValue *ownsCheckURL;
@property(readonly) AMSBagValue *crossfireIncludeLaunches;
@property(readonly) AMSBagValue *crossfireSamplingPercentage;
@property(readonly) AMSBagValue *crossfirePostIntervalSeconds;
@property(readonly) AMSBagValue *autoUpdateReloadIntervalSeconds;
@property(readonly) AMSBagValue *appUsageFlushIntervalSeconds;
@property(readonly, nonatomic) AMSBagValue *trustedDomains;
@property(readonly, nonatomic) id <AMSMetricsBagContract> metricsContract;
@property(readonly, nonatomic) id <AMSMescalBagContract> mescalContract;
@property(readonly, nonatomic) AMSBagValue *mescalSignSapResponses;
@property(readonly, nonatomic) AMSBagValue *mescalSignSapRequests;
@property(readonly, nonatomic) AMSBagValue *mescalSignedActions;
@property(readonly, nonatomic) AMSBagValue *mescalSetupURL;
@property(readonly, nonatomic) AMSBagValue *mescalCertificateURL;
@property(readonly, nonatomic) AMSBagValue *metricsURL;
@property(readonly, nonatomic) AMSBagValue *metricsDictionary;
@property(readonly, nonatomic) AMSBagValue *unpersonalizedLookupURL;
@property(readonly, nonatomic) AMSBagValue *personalizedLookupURL;
@property(readonly) AMSBagValue *buyProductURL;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) AMSBagValue *TFOSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *TFOSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *apsAllowedProductTypes;
@property(readonly, nonatomic) AMSBagValue *apsEnabledPatterns;
@property(readonly, nonatomic) AMSBagValue *apsSamplingPercent;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) AMSBagValue *guidRegexes;
@property(readonly, nonatomic) AMSBagValue *guidSchemes;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) AMSBagValue *mescalPrimingURL;
@property(readonly, nonatomic) AMSBagValue *metricsUrl;
@property(readonly, nonatomic) AMSBagValue *storefrontSuffix;
@property(readonly) Class superclass;

@end

