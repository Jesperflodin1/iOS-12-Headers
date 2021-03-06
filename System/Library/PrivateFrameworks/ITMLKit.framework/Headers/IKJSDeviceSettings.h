//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSDeviceSettings-Protocol.h>
#import <ITMLKit/NSObject-Protocol.h>
#import <ITMLKit/_IKJSDeviceSettings-Protocol.h>
#import <ITMLKit/_IKJSDeviceSettingsProxy-Protocol.h>

@class IKJSRestrictions, NSString;
@protocol IKAppDeviceConfig;

@interface IKJSDeviceSettings : IKJSObject <NSObject, IKJSDeviceSettings, _IKJSDeviceSettingsProxy, _IKJSDeviceSettings>
{
    id _restrictionDidChangeToken;
    id <IKAppDeviceConfig> _deviceConfig;
}

@property(nonatomic) __weak id <IKAppDeviceConfig> deviceConfig; // @synthesize deviceConfig=_deviceConfig;
- (void).cxx_destruct;
- (void)_restrictionsDidChangeNotification:(id)arg1;
- (id)_formatStringForVideoFormat:(unsigned long long)arg1;
@property(readonly, nonatomic) IKJSRestrictions *restrictions;
@property(readonly, nonatomic) IKJSRestrictions *Restrictions;
@property(readonly, nonatomic) struct CGSize screen;
@property(readonly, nonatomic) struct CGSize Screen;
@property(readonly, retain, nonatomic) NSString *preferredVideoPreviewFormat;
@property(readonly, retain, nonatomic) NSString *preferredVideoFormat;
@property(readonly, retain, nonatomic) NSString *storefrontCountryCode;
@property(readonly, retain, nonatomic) NSString *language;
@property(readonly, retain, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;
- (id)asPrivateIKJSDeviceSettings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

