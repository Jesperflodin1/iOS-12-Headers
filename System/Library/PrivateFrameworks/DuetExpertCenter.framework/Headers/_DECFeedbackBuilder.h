/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:35 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _DECFeedbackBuilder : NSObject {

	/*^block*/id _feedbackHandler;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)initWithFeedbackHandler:(/*^block*/id)arg1 ;
-(void)receiveFeedback:(id)arg1 result:(id)arg2 metadata:(id)arg3 engaged:(BOOL)arg4 ;
@end

