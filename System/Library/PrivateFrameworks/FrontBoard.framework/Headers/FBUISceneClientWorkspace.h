/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:36:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBUISceneClientIdentity;


@protocol FBUISceneClientWorkspace <NSObject>
@property (nonatomic,retain,readonly) id<FBUIProcess> clientProcess; 
@property (nonatomic,copy,readonly) FBUISceneClientIdentity * clientIdentity; 
@required
-(id<FBUIProcess>)clientProcess;
-(FBUISceneClientIdentity *)clientIdentity;
-(id)clientForSceneIdentifier:(id)arg1;
-(void)endTransaction;
-(void)beginTransaction;

@end

