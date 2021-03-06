//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BatteryMonitorToken-Protocol.h"

@class NSString;
@protocol BatteryMonitorTokenDelegate, _BatteryMonitorConcreteTokenDelegate;

__attribute__((visibility("hidden")))
@interface _BatteryMonitorConcreteToken : NSObject <BatteryMonitorToken>
{
    id <BatteryMonitorTokenDelegate> _delegate;
    id <_BatteryMonitorConcreteTokenDelegate> _concreteTokenDelegate;
}

@property(nonatomic) __weak id <_BatteryMonitorConcreteTokenDelegate> concreteTokenDelegate; // @synthesize concreteTokenDelegate=_concreteTokenDelegate;
@property(nonatomic) __weak id <BatteryMonitorTokenDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_batteryStateDidChange:(id)arg1;
- (_Bool)batteryIsChargingOrFull;
- (long long)currentBatteryState;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

