/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:49:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSBundleController.h>

@class UIAlertView, NSString, NSMutableArray;

@interface WirelessModemBundleController : PSBundleController {

	UIAlertView* _tetheringAlert;
	NSString* _tetheringPhoneNumber;
	NSString* _tetheringURL;
	NSMutableArray* _specifiers;
	BOOL _wifiTetheringSupported;

}
-(id)initWithParentListController:(id)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(id)getTetheringStatus:(id)arg1 ;
-(void)MISStateChangedNotification:(id)arg1 ;
-(void)updateSpecifiersForState:(int)arg1 andReason:(int)arg2 andButton:(id)arg3 ;
-(void)showSetupAlert:(id)arg1 ;
-(id)_specifiersWithSpecifierMain:(id)arg1 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end

