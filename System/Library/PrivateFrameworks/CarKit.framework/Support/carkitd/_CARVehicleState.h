//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CARVehicleState-Protocol.h"

@class NSString;

@interface _CARVehicleState : NSObject <CARVehicleState>
{
    unsigned long long _vehicleState;
    unsigned long long _vehicularHints;
    NSString *_deviceID;
}

@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) unsigned long long vehicularHints; // @synthesize vehicularHints=_vehicularHints;
@property(nonatomic) unsigned long long vehicleState; // @synthesize vehicleState=_vehicleState;
- (void).cxx_destruct;
@property(readonly) NSString *vehicleStateDebugDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

