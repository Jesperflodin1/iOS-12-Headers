//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/__UINavigationBarAccessibility_super.h>

@interface UINavigationBarAccessibility : __UINavigationBarAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibility_navigationBarContentsDidChange;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)willRemoveSubview:(id)arg1;
- (void)addSubview:(id)arg1;
- (_Bool)_accessibilityOnlyComparesByXAxis;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityFetchCachedNavBarElements;
- (id)_accessibilityRightButtonElements;
- (id)_accessibilityLeftButtonElements;
- (_Bool)_accessibilityHasLeftRightButtonCountChanged;
- (id)accessibilityElements;
- (_Bool)accessibilityPerformEscape;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)shouldGroupAccessibilityChildren;
- (_Bool)_accessibilityHitTestShouldFallbackToNearestChild;
- (_Bool)_accessibilityAllowOutOfBoundsHitTestAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_accessibilitySetFauxBackButton:(id)arg1;
- (id)_accessibilityFauxBackButton;
- (void)_accessibilitySetNavBarElements:(id)arg1;
- (id)_accessibilityNavBarElements;

@end
