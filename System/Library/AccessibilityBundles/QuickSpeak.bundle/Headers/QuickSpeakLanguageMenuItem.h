/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:47:43 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIMenuItem.h>

@class AXDialectMap;

@interface QuickSpeakLanguageMenuItem : UIMenuItem {

	AXDialectMap* _dialect;

}

@property (nonatomic,retain) AXDialectMap * dialect;              //@synthesize dialect=_dialect - In the implementation block
-(AXDialectMap *)dialect;
-(void)setDialect:(AXDialectMap *)arg1 ;
-(id)accessibilityLanguage;
-(id)description;
@end

