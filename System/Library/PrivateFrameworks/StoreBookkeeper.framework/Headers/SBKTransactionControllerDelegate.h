/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:45 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBKTransactionControllerDelegate <NSObject>
@optional
-(BOOL)transactionController:(id)arg1 shouldScheduleTransaction:(id)arg2;

@required
-(BOOL)transactionController:(id)arg1 transactionDidFail:(id)arg2 error:(id)arg3;
-(void)transactionController:(id)arg1 transactionDidCancel:(id)arg2 error:(id)arg3;
-(void)transactionController:(id)arg1 transactionDidFinish:(id)arg2;

@end

