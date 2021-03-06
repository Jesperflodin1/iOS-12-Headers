//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceOverServices/NSCopying-Protocol.h>

@class NSString;

@interface VOSBluetoothDevice : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_address;
    struct BTDeviceImpl *_device;
}

- (void).cxx_destruct;
- (void)unpair;
- (void)acceptSSP:(int)arg1;
- (void)setPIN:(id)arg1;
- (void)disconnect;
- (void)connectWithServices:(unsigned int)arg1;
- (void)connect;
- (unsigned int)authorizedServices;
- (_Bool)isServiceSupported:(unsigned int)arg1;
- (unsigned long long)connectedServicesCount;
- (unsigned long long)connectedServices;
- (_Bool)connected;
- (_Bool)paired;
- (id)description;
- (unsigned int)deviceClass;
- (unsigned int)minorClass;
- (unsigned int)majorClass;
- (int)type;
- (id)address;
- (id)name;
- (_Bool)isNameCached;
- (void)_clearName;
- (void)setDevice:(struct BTDeviceImpl *)arg1;
- (struct BTDeviceImpl *)device;
- (_Bool)hasAddress:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToDevice:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDevice:(struct BTDeviceImpl *)arg1 address:(id)arg2;

@end

