/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:47:28 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/AccessibilityBundles/MediaPlayerFramework.axbundle/MediaPlayerFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerFramework/MediaPlayerFramework-Structs.h>
#import <MediaPlayerFramework/__MPAddKeepLocalControlAccessibility_super.h>

@interface MPAddKeepLocalControlAccessibility : __MPAddKeepLocalControlAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)setControlStatus:(MPAddKeepLocalControlStatus)arg1 animated:(BOOL)arg2 ;
-(id)_accessibilityLabelForStatusType:(long long)arg1 ;
-(id)_accessibilityValueForStatusType:(long long)arg1 andDownloadProgress:(double)arg2 ;
-(id)_accessibilityCustomActionLabelForControlStatus:(long long)arg1 ;
-(void)_accessibilitySetCustomActionLabel:(id)arg1 ;
-(id)_accessibilityCustomActionLabel;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
@end

