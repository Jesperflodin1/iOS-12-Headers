/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:48:04 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UINavigationBarAccessibility_super.h>

@interface UINavigationBarAccessibility : __UINavigationBarAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityAllowOutOfBoundsHitTestAtPoint:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityFetchCachedNavBarElements;
-(id)_accessibilityLeftButtonElements;
-(id)_accessibilityRightButtonElements;
-(BOOL)_accessibilityHasLeftRightButtonCountChanged;
-(id)_accessibilityFauxBackButton;
-(void)_accessibilitySetFauxBackButton:(id)arg1 ;
-(void)_accessibilitySetNavBarElements:(id)arg1 ;
-(id)_accessibilityNavBarElements;
-(BOOL)_accessibilityOnlyComparesByXAxis;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)shouldGroupAccessibilityChildren;
-(BOOL)accessibilityPerformEscape;
-(id)accessibilityIdentifier;
-(id)accessibilityElements;
-(void)addSubview:(id)arg1 ;
-(void)insertSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)insertSubview:(id)arg1 belowSubview:(id)arg2 ;
-(void)_accessibility_navigationBarContentsDidChange;
-(void)insertSubview:(id)arg1 aboveSubview:(id)arg2 ;
-(void)willRemoveSubview:(id)arg1 ;
@end

