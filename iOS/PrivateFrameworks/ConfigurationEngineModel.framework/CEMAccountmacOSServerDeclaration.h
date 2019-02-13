//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMAccountmacOSServerDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadHostName;
    NSString *_payloadAccountDescription;
    NSArray *_payloadConfiguredAccounts;
    NSString *_payloadCredentials;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withHostName:(id)arg2 withConfiguredAccounts:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withHostName:(id)arg2 withAccountDescription:(id)arg3 withConfiguredAccounts:(id)arg4 withCredentials:(id)arg5;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadCredentials; // @synthesize payloadCredentials=_payloadCredentials;
@property(copy, nonatomic) NSArray *payloadConfiguredAccounts; // @synthesize payloadConfiguredAccounts=_payloadConfiguredAccounts;
@property(copy, nonatomic) NSString *payloadAccountDescription; // @synthesize payloadAccountDescription=_payloadAccountDescription;
@property(copy, nonatomic) NSString *payloadHostName; // @synthesize payloadHostName=_payloadHostName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (_Bool)mustBeSupervised;
- (_Bool)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
