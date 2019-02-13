//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCMigrator : NSObject
{
}

+ (id)stringWithContext:(int)arg1;
+ (id)sharedMigrator;
- (void)_wakeDaemonsPostMigration;
- (void)_correctCloudConfigurationIfNecessary;
- (void)_tagIMAPAccountsWithProfileAndPayloadProperties;
- (void)_tagManagedAccounts;
- (void)_correctInstallOptionsOnProfileStubs;
- (void)_removeUnmanageableApps;
- (void)_migrateManagedPreferencesToSystemContainer;
- (void)_cleanUpAppConfiguration;
- (void)_removeSupervisionProfiles;
- (void)_migrateLostModeLastLocationRequestDate;
- (void)_migrateSharedDeviceConfiguration;
- (void)_applyImpliedSettings;
- (void)_updateProfileRestrictions;
- (id)_updateProfileRestrictionsForProfileRestrictions:(id)arg1;
- (void)_updateClientRestrictions;
- (void)_migrateClientRestrictions;
- (void)_migrateSettings;
- (void)_migrateBoolValueToFeature:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 synchronize:(_Bool)arg4;
- (void)_migrateValueRestrictions:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 keysToRestricitons:(id)arg4 currentValueUserSettings:(id)arg5;
- (void)_migrateBoolRestrictions:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 valuesToRestrictions:(id)arg4 currentBoolUserSettings:(id)arg5;
- (void)_applyDefaultSettings;
- (void)_removeOriginalCopies;
- (void)_transferTagsToProfileStubs;
- (_Bool)_applyAccountTagsToProfile:(id)arg1;
- (void)_transferInstallationDatesFromOriginalProfiles;
- (void)_migrateOTAProfiles;
- (void)_transferRemovalPasswordsFromOriginalProfiles;
- (void)_transferSignerCertificates;
- (void)_moveSignerCertificatesInProfileStubDictionary:(id)arg1;
- (id)_removeOrphanedManifestEntriesFromManifestInDirectory:(id)arg1;
- (void)_removeOrphanedManifestEntries;
- (void)_createStubs;
- (void)_removeDuplicatedHiddenIdentifiers;
- (void)_removeUnusedManifestArrays;
- (void)_migrateManifestLocation;
- (void)_moveFilesToPublicDirectories;
- (void)_moveFilesToSystemGroupContainer;
- (void)_removeInvalidOptionsFromLegacyCloudConfiguration;
- (void)_createDirectories;
- (void)migratePostMDMDataMigratorWithContext:(int)arg1;
- (void)migratePostDataMigratorWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2;
- (void)_removeOSXServerPayloadAccount;
- (void)_removeiPCUCertificates;
- (void)_migratePasscodeDidRestore:(_Bool)arg1 passcodeWasSet:(_Bool)arg2;
- (id)_lastUserMigratedBuildVersion;
- (id)_lastSystemMigratedBuildVersion;
- (void)migrateWithPostMigrationTaskQueue:(id)arg1;
- (void)setUserMetadataDictionary:(id)arg1;
- (id)userMetadataDictionary;
- (void)setSystemMetadataDictionary:(id)arg1;
- (id)systemMetadataDictionary;

@end
