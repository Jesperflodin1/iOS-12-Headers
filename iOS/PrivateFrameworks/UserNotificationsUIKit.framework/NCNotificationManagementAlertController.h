//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

#import <UserNotificationsUIKit/NCNotificationManagementController-Protocol.h>

@class NCNotificationRequest, NSString;
@protocol NCNotificationManagementControllerSettingsDelegate;

@interface NCNotificationManagementAlertController : UIAlertController <NCNotificationManagementController>
{
    id <NCNotificationManagementControllerSettingsDelegate> _settingsDelegate;
    NCNotificationRequest *_request;
}

@property(retain, nonatomic) NCNotificationRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <NCNotificationManagementControllerSettingsDelegate> settingsDelegate; // @synthesize settingsDelegate=_settingsDelegate;
- (void).cxx_destruct;
- (void)_configureView;
- (void)viewDidLoad;
- (id)initWithRequest:(id)arg1 withPresentingView:(id)arg2 settingsDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
