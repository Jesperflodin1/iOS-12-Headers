//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@class NSString;

@interface RTBluetoothManagerNotificationDisconnected : RTNotification
{
    NSString *_deviceName;
    NSString *_deviceAddress;
}

@property(readonly, nonatomic) NSString *deviceAddress; // @synthesize deviceAddress=_deviceAddress;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void).cxx_destruct;
- (id)initWithDeviceName:(id)arg1 andDeviceAddress:(id)arg2;

@end
