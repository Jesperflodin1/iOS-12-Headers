/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:18 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class BWStillImageCoordinatorNode;

@interface BWStillImageTurnstileNode : BWNode {

	BWStillImageCoordinatorNode* _stillImageCoordinator;

}
+(void)initialize;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)initWithStillImageCoordinator:(id)arg1 ;
-(void)dealloc;
-(id)nodeType;
@end

