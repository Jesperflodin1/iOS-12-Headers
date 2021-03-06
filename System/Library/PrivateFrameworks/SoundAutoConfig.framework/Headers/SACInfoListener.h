/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SoundAutoConfig.framework/SoundAutoConfig
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SACServiceInfoDelegate.h>

@protocol SACServiceDelegate, SACInfoDelegate;
@class NSXPCConnection, NSString;

@interface SACInfoListener : NSObject <SACServiceInfoDelegate> {

	NSXPCConnection* mServiceConnection;
	id<SACServiceDelegate> mProxyInterface;
	unsigned long long mVerbosity;
	id<SACInfoDelegate> _delegate;

}

@property (nonatomic,retain) id<SACInfoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startServiceConnection;
-(void)handleServiceCrash;
-(void)setListenerVerbosity:(unsigned long long)arg1 ;
-(void)handleSACInfo:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<SACInfoDelegate>)arg1 ;
-(id<SACInfoDelegate>)delegate;
@end

