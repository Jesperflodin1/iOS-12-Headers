/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:59 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingSupport-Structs.h>
#import <libobjc.A.dylib/AVCVirtualTTYDeviceDelegate.h>

@protocol OS_dispatch_queue, TTYCallDelegate;
@class NSObject, TTYConversation, TUCall, AVCVirtualTTYDevice, NSDictionary, NSString;

@interface TTYCall : NSObject <AVCVirtualTTYDeviceDelegate> {

	long long _ttyMode;
	NSObject*<OS_dispatch_queue> _callQueue;
	id<TTYCallDelegate> _delegate;
	TTYConversation* _conversation;
	TUCall* _call;
	AVCVirtualTTYDevice* _ttyDevice;
	NSDictionary* _substitutions;

}

@property (nonatomic,retain) AVCVirtualTTYDevice * ttyDevice;                  //@synthesize ttyDevice=_ttyDevice - In the implementation block
@property (nonatomic,retain) TTYConversation * conversation;                   //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) TUCall * call;                                    //@synthesize call=_call - In the implementation block
@property (nonatomic,retain) NSDictionary * substitutions;                     //@synthesize substitutions=_substitutions - In the implementation block
@property (assign,nonatomic,__weak) id<TTYCallDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCall:(TUCall *)arg1 ;
-(TUCall *)call;
-(void)setSubstitutions:(NSDictionary *)arg1 ;
-(id)initWithCall:(id)arg1 ;
-(NSDictionary *)substitutions;
-(void)device:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3 ;
-(void)deviceDidStop:(id)arg1 ;
-(void)device:(id)arg1 didReceiveCharacter:(unsigned short)arg2 ;
-(void)device:(id)arg1 didReceiveText:(NSString*)arg2 ;
-(TTYConversation *)conversation;
-(void)setConversation:(TTYConversation *)arg1 ;
-(void)registerNotifications;
-(void)audioSessionWasInterrupted:(id)arg1 ;
-(void)mediaServerDied;
-(void)sendString:(id)arg1 ;
-(void)recreateTTYDevice:(id)arg1 ;
-(AVCVirtualTTYDevice *)ttyDevice;
-(void)setTtyDevice:(AVCVirtualTTYDevice *)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)setDelegate:(id<TTYCallDelegate>)arg1 ;
-(id<TTYCallDelegate>)delegate;
-(void)stop;
-(void)start;
@end

