/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:08 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DiagnosticsSupport/DiagnosticsSupport-Structs.h>
@interface DSIOHIDDevice : NSObject {

	IOHIDManagerRef _manager;
	IOHIDDeviceRef _device;

}
+(id)deviceWithDeviceIdentifier:(SCD_Struct_DS2)arg1 ;
-(id)_sharedSerialQueue;
-(id)stringFromHIDReport:(long long)arg1 ;
-(id)serialNumber;
-(id)initWithDeviceIdentifier:(SCD_Struct_DS2)arg1 ;
-(void)dealloc;
@end

