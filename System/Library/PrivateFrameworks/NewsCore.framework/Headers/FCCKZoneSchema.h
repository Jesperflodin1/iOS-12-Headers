//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FCCKZoneSchema : NSObject
{
    NSDictionary *_recordSchemasByClientType;
    NSDictionary *_recordSchemasByServerType;
    NSDictionary *_staticServerRecordNamesByClientName;
    NSDictionary *_staticClientRecordNamesByServerName;
    _Bool _isDefaultZone;
    _Bool _supportsRecordNameEncryption;
    _Bool _supportsRecordFieldEncryption;
    _Bool _shouldUseZoneWidePCS;
    _Bool _shouldUseSecureContainer;
    NSString *_clientZoneName;
    NSString *_serverZoneName;
    NSArray *_staticRecordNamesEligibleForMigration;
}

+ (id)defaultZoneWithRecords:(id)arg1 staticRecordNames:(id)arg2 staticRecordNameMigrationBlacklist:(id)arg3 shouldUseSecureContainer:(_Bool)arg4;
+ (id)zoneWithClientName:(id)arg1 serverName:(id)arg2 records:(id)arg3 staticRecordNames:(id)arg4 shouldEncryptRecordNames:(_Bool)arg5 shouldUseZoneWidePCS:(_Bool)arg6 shouldUseSecureContainer:(_Bool)arg7;
+ (id)zoneWithClientName:(id)arg1 serverName:(id)arg2 records:(id)arg3;
@property(readonly, nonatomic) _Bool shouldUseSecureContainer; // @synthesize shouldUseSecureContainer=_shouldUseSecureContainer;
@property(readonly, nonatomic) _Bool shouldUseZoneWidePCS; // @synthesize shouldUseZoneWidePCS=_shouldUseZoneWidePCS;
@property(readonly, nonatomic) _Bool supportsRecordFieldEncryption; // @synthesize supportsRecordFieldEncryption=_supportsRecordFieldEncryption;
@property(readonly, nonatomic) _Bool supportsRecordNameEncryption; // @synthesize supportsRecordNameEncryption=_supportsRecordNameEncryption;
@property(readonly, copy, nonatomic) NSArray *staticRecordNamesEligibleForMigration; // @synthesize staticRecordNamesEligibleForMigration=_staticRecordNamesEligibleForMigration;
@property(readonly, nonatomic) _Bool isDefaultZone; // @synthesize isDefaultZone=_isDefaultZone;
@property(readonly, copy, nonatomic) NSString *serverZoneName; // @synthesize serverZoneName=_serverZoneName;
@property(readonly, copy, nonatomic) NSString *clientZoneName; // @synthesize clientZoneName=_clientZoneName;
- (void).cxx_destruct;
- (void)enumerateRecordSchemasWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)shouldDecryptServerRecordName:(id)arg1;
- (_Bool)shouldEncryptClientRecordName:(id)arg1;
- (_Bool)isKnownServerRecordName:(id)arg1;
- (_Bool)isKnownClientRecordName:(id)arg1;
- (id)clientRecordNameForServerRecordName:(id)arg1;
- (id)serverRecordNameForClientRecordName:(id)arg1;
- (id)schemaForRecordWithServerType:(id)arg1;
- (id)schemaForRecordWithClientType:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allClientRecordTypes;
- (id)initWithClientZoneName:(id)arg1 serverZoneName:(id)arg2 recordSchemas:(id)arg3 staticRecordNames:(id)arg4 staticRecordNameMigrationBlacklist:(id)arg5 shouldEncryptRecordNames:(_Bool)arg6 shouldUseZoneWidePCS:(_Bool)arg7 shouldUseSecureContainer:(_Bool)arg8;
- (id)init;

@end

