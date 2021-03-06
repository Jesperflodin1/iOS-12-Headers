/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBRemoteDataProviderServerProxy <NSObject>
@required
-(void)withdrawBulletinsWithRecordID:(id)arg1;
-(void)reloadSectionParameters:(id)arg1;
-(void)reloadDefaultSectionInfo:(id)arg1;
-(void)getClearedInfoWithCompletion:(/*^block*/id)arg1;
-(void)setClearedInfo:(id)arg1;
-(void)setSectionInfo:(id)arg1;
-(void)getSectionInfoWithCompletion:(/*^block*/id)arg1;
-(void)invalidateBulletins;
-(void)modifyBulletin:(id)arg1;
-(void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
-(void)addBulletin:(id)arg1 forDestinations:(unsigned long long)arg2;

@end

