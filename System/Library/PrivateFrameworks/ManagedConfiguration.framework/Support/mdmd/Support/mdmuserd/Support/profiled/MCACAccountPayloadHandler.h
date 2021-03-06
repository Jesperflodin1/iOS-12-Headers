//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class ACAccount;

@interface MCACAccountPayloadHandler : MCNewPayloadHandler
{
    _Bool _updatedOverInstalledAccount;
    ACAccount *_setAsideAccount;
}

@property(nonatomic) _Bool updatedOverInstalledAccount; // @synthesize updatedOverInstalledAccount=_updatedOverInstalledAccount;
@property(retain, nonatomic) ACAccount *setAsideAccount; // @synthesize setAsideAccount=_setAsideAccount;
- (void).cxx_destruct;
- (id)_installedSetAsideAccount;
- (id)MCACAccountIdentifier;
- (id)unhashedAccountIdentifier;
- (id)accountTypeIdentifiers;
- (id)_installedAccount;
- (void)_deleteAccountAndAssociatedData:(id)arg1;
- (id)_destructiveDataclassActionsForRemovalOfAccount:(id)arg1;
- (void)markIfUpdatingOverInstalledAccount:(id)arg1;
- (id)installedAccountWithIdentifier:(id)arg1;

@end

