/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBDataProviderStoreDelegate <NSObject>
@optional
-(void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2;

@required
-(void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 performMigration:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2;

@end

