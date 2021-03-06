/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:41 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPCloudSynchronizerDelegate <NSObject>
@required
-(id)storedUserIdentityForSynchronizer:(id)arg1;
-(void)synchronizer:(id)arg1 storeNewUserIdentity:(id)arg2;
-(id)storedClientRegistrationIdentifierForSynchronizer:(id)arg1;
-(void)synchronizer:(id)arg1 storeNewClientRegistrationIdentifier:(id)arg2;
-(id)storedBoostDateForSynchronizer:(id)arg1;
-(void)synchronizer:(id)arg1 storeNewBoostDate:(id)arg2;
-(void)synchronizer:(id)arg1 userIdentityDidLogOutWithFollowUp:(long long)arg2;
-(id)taskToMergeLocalAndCloudStoresForSynchronizer:(id)arg1;
-(id)taskToDownloadCloudStoreByErasingLocalStoreForSynchronizer:(id)arg1;
-(void)synchronizer:(id)arg1 didFailAttemptingTask:(id)arg2 withError:(id)arg3 reattemptingAfterDate:(id)arg4;

@end

