/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UITouch;

@interface UITouchData : NSObject {

	CGPoint startTouchDownLocation;
	unsigned long long lastTapCount;
	double lastTouchUpTimestamp;
	double lastTouchDownTimestamp;
	BOOL touchIsValidTap;
	UITouch* lastTouch;

}
@end

