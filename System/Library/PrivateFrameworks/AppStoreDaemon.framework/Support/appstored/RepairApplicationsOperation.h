//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ASDRepairApplicationRequestOptions, NSArray, NSNumber, NSString;

@interface RepairApplicationsOperation : ISOperation
{
    ASDRepairApplicationRequestOptions *_options;
    NSNumber *_accountDSID;
    NSString *_bundleID;
    long long _claimStyle;
    _Bool _appWasClaimed;
    _Bool _vppMigrated;
    NSString *_clientIdentifierHeader;
    CDUnknownBlockType _resultBlock;
    NSString *_userAgent;
    NSArray *_claimedBundleIdentifiers;
}

@property(readonly, nonatomic) _Bool vppMigrated; // @synthesize vppMigrated=_vppMigrated;
@property(readonly) NSArray *claimedBundleIdentifiers; // @synthesize claimedBundleIdentifiers=_claimedBundleIdentifiers;
@property(readonly, nonatomic) _Bool appWasClaimed; // @synthesize appWasClaimed=_appWasClaimed;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(copy, nonatomic) NSString *clientIdentifierHeader; // @synthesize clientIdentifierHeader=_clientIdentifierHeader;
- (void).cxx_destruct;
- (_Bool)_wasInstalledByConfigurator:(id)arg1;
- (void)_showFamilyLeaveAlert:(id)arg1;
- (_Bool)_claimApps:(id)arg1;
- (void)run;
- (id)initWithOptions:(id)arg1;

@end

