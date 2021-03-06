/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol YTAuthenticatorDelegate;
@class NSMutableArray;

@interface YTAuthenticator : NSObject {

	id<YTAuthenticatorDelegate> _delegate;
	NSMutableArray* _deferredRequests;
	int _accountAuthState;

}
+(id)authenticationDialogWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)sharedAuthenticator;
-(void)_failedToAuthenticateAccount:(id)arg1 ;
-(void)_removeAccountAuthenticationObservers;
-(void)_completeAuthenticationForDeferredRequests;
-(void)_removeDefferredRequests;
-(void)_addAccountAuthenticationObserers;
-(void)_addDeferredRequest:(id)arg1 accountAuthRequired:(BOOL)arg2 ;
-(void)didAuthenticateAccount;
-(void)invalidateToken;
-(BOOL)isAccountAuthenticated;
-(BOOL)cachedCredentialsValid;
-(void)clearAccountInfo;
-(BOOL)loadStoredCredentials;
-(void)setAuthenticatedUsername:(id)arg1 oauth2Token:(id)arg2 oauth2RefreshToken:(id)arg3 youTubeName:(id)arg4 ;
-(void)userCancelledAccountAuthentication;
-(id)accountUsername;
-(void)setAuthenticatedOauth2Token:(id)arg1 ;
-(void)addAuthenticationHeadersToRequest:(id)arg1 accountAuthRequired:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
@end

