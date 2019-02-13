//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACDDatabase;

@interface ACDClientAuthorizationManager : NSObject
{
    ACDDatabase *_database;
}

- (void).cxx_destruct;
- (id)_setFromCSVString:(id)arg1;
- (id)_csvStringFromSet:(id)arg1;
- (id)removeAllClientAuthorizationsForAccountTypeWithIdentifier:(id)arg1;
- (id)removeAllClientAuthorizationsForAccountType:(id)arg1;
- (id)allAuthorizationsForAccountTypeWithIdentifier:(id)arg1;
- (id)allAuthorizationsForAccountType:(id)arg1;
- (id)removeAuthorizationForClient:(id)arg1 accountTypeWithIdentifier:(id)arg2;
- (id)removeAuthorizationForClient:(id)arg1 accountType:(id)arg2;
- (id)setAuthorization:(id)arg1 forClient:(id)arg2 onAccountType:(id)arg3;
- (id)authorizationForClient:(id)arg1 accountTypeWithIdentifier:(id)arg2;
- (id)authorizationForClient:(id)arg1 accountType:(id)arg2;
- (id)initWithDatabase:(id)arg1;

@end
