//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol IDSAccountRegistrationDelegate <NSObject>

@optional
- (void)refreshRegistrationForAccount:(NSString *)arg1;
- (void)account:(NSString *)arg1 displayNameChanged:(NSString *)arg2;
- (void)account:(NSString *)arg1 loginChanged:(NSString *)arg2;
- (void)account:(NSString *)arg1 profileChanged:(NSDictionary *)arg2;
- (void)account:(NSString *)arg1 vettedAliasesChanged:(NSArray *)arg2;
- (void)account:(NSString *)arg1 aliasesChanged:(NSArray *)arg2;
- (void)account:(NSString *)arg1 registrationStatusInfoChanged:(NSDictionary *)arg2;
@end
