//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicReadPolicy-Protocol.h>

@class NSString;

@interface HFNotSupportedReadPolicy : NSObject <HFCharacteristicReadPolicy>
{
}

- (_Bool)_requiresNotificationsForCharacteristic:(id)arg1;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
