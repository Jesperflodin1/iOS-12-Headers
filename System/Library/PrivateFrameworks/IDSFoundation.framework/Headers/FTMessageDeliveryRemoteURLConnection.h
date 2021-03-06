/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:35 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURLRequest;


@protocol FTMessageDeliveryRemoteURLConnection <NSObject>
@property (assign) BOOL requireIDSHost; 
@property (assign) BOOL forceCellularIfPossible; 
@property (assign) BOOL alwaysForceCellular; 
@property (retain) NSString * bundleIdentifierForDataUsage; 
@property (assign) BOOL shouldUsePipelining; 
@property (assign) int concurrentConnections; 
@property (assign) BOOL disableKeepAlive; 
@property (assign) int keepAliveWifi; 
@property (assign) int keepAliveCell; 
@property (assign) BOOL shouldReturnTimingData; 
@property (retain) NSURLRequest * request; 
@property (copy) id block; 
@required
-(void)setRequest:(id)arg1;
-(void)setRequireIDSHost:(BOOL)arg1;
-(NSString *)bundleIdentifierForDataUsage;
-(BOOL)forceCellularIfPossible;
-(BOOL)alwaysForceCellular;
-(BOOL)requireIDSHost;
-(BOOL)shouldUsePipelining;
-(int)concurrentConnections;
-(BOOL)disableKeepAlive;
-(int)keepAliveWifi;
-(int)keepAliveCell;
-(BOOL)shouldReturnTimingData;
-(void)setForceCellularIfPossible:(BOOL)arg1;
-(void)setBundleIdentifierForDataUsage:(id)arg1;
-(void)setShouldUsePipelining:(BOOL)arg1;
-(void)setConcurrentConnections:(int)arg1;
-(void)setDisableKeepAlive:(BOOL)arg1;
-(void)setKeepAliveWifi:(int)arg1;
-(void)setKeepAliveCell:(int)arg1;
-(void)setShouldReturnTimingData:(BOOL)arg1;
-(void)setAlwaysForceCellular:(BOOL)arg1;
-(void)load;
-(void)cancel;
-(id)block;
-(NSURLRequest *)request;
-(void)setBlock:(/*^block*/id)arg1;

@end

