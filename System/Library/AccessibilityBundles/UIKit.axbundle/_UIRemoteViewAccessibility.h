//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/___UIRemoteViewAccessibility_super.h>

@interface _UIRemoteViewAccessibility : ___UIRemoteViewAccessibility_super
{
}

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)accessibilityElements;
- (void)_accessibilitySetRemoteElementIfNecessary;
- (void)_accessibilityTransmitRemoteUUIDToPid:(int)arg1 machPort:(unsigned int)arg2 value:(id)arg3;
- (id)_accessibilityResponderElement;
- (id)_accessibilityActiveKeyboard;
- (_Bool)_accessibilityServesAsFirstResponder;
- (void)_accessibilitySetRetainedValue:(id)arg1 forKey:(id)arg2;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)accessibilityIdentifier;
- (id)_accessibilityRemoteElementCommunicationQueue;
- (void)_accessibilitySetRemoteElementArray:(id)arg1;
- (id)_accessibilityGetRemoteElementArray;

@end

