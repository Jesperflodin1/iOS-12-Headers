//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgStateDeviceBase : PBCodable <NSCopying>
{
    int _deviceBatteryState;
    int _deviceInterfaceOrientation;
    _Bool _deviceInVehicle;
    struct {
        unsigned int deviceBatteryState:1;
        unsigned int deviceInterfaceOrientation:1;
        unsigned int deviceInVehicle:1;
    } _has;
}

@property(nonatomic) _Bool deviceInVehicle; // @synthesize deviceInVehicle=_deviceInVehicle;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDeviceInVehicle;
- (int)StringAsDeviceBatteryState:(id)arg1;
- (id)deviceBatteryStateAsString:(int)arg1;
@property(nonatomic) _Bool hasDeviceBatteryState;
@property(nonatomic) int deviceBatteryState; // @synthesize deviceBatteryState=_deviceBatteryState;
- (int)StringAsDeviceInterfaceOrientation:(id)arg1;
- (id)deviceInterfaceOrientationAsString:(int)arg1;
@property(nonatomic) _Bool hasDeviceInterfaceOrientation;
@property(nonatomic) int deviceInterfaceOrientation; // @synthesize deviceInterfaceOrientation=_deviceInterfaceOrientation;

@end
