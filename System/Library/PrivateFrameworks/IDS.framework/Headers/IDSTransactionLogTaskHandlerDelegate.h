/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:50 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSTransactionLogTaskHandlerDelegate
@required
-(void)taskHandler:(id)arg1 groupsWithGroupIDs:(id)arg2 completion:(/*^block*/id)arg3;
-(void)taskHandler:(id)arg1 participantsWithDestinations:(id)arg2 completion:(/*^block*/id)arg3;
-(void)taskHandler:(id)arg1 messagesFromToken:(id)arg2 completion:(/*^block*/id)arg3;
-(void)taskHandler:(id)arg1 persistToken:(id)arg2 completion:(/*^block*/id)arg3;
-(void)persistedTokenForTaskHandler:(id)arg1 completion:(/*^block*/id)arg2;
-(void)taskHandler:(id)arg1 accountInfoForAliases:(id)arg2 completion:(/*^block*/id)arg3;

@end

