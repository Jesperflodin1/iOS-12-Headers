/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:27:37 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSPServerCommands <NSObject>
@optional
-(void)setCurrentLatitude:(double)arg1 longitude:(double)arg2 timestamp:(id)arg3 forClient:(id)arg4;
-(void)setEdgeSet:(id)arg1 forIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setAppRule:(id)arg1 forLabel:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)fetchAppRuleForLabel:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchCurrentConfigurationWithCompletionHandler:(/*^block*/id)arg1;
-(void)setCurrentConfiguration:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)fetchEdgeSetForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)establishTrustWithEdgeSetForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchCurrentMetricsWithCompletionHandler:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)resetCurrentMetricsWithCompletionHandler:(/*^block*/id)arg1;
-(void)reportMetricsNowWithCompletionHandler:(/*^block*/id)arg1;
-(void)refreshWaldoNowWithCompletionHandler:(/*^block*/id)arg1;
-(void)updateKeyBagData:(id)arg1 usageData:(id)arg2 fromClient:(id)arg3;
-(void)addRequestMetrics:(id)arg1;
-(void)addConnectionMetrics:(id)arg1;
-(void)fetchStateForClient:(id)arg1 withPeerEndpoint:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)setTestLatencyMap:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

