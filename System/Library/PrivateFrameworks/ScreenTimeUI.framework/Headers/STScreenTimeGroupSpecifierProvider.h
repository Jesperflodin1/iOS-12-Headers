//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

@interface STScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider
{
    PSSpecifier *_thisDeviceSpecifier;
    PSSpecifier *_usageSummarySpecifier;
}

@property(retain, nonatomic) PSSpecifier *usageSummarySpecifier; // @synthesize usageSummarySpecifier=_usageSummarySpecifier;
@property(retain, nonatomic) PSSpecifier *thisDeviceSpecifier; // @synthesize thisDeviceSpecifier=_thisDeviceSpecifier;
- (void).cxx_destruct;
- (void)showUsageDetailController:(id)arg1;
- (id)getCoordinator:(id)arg1;
- (id)getUsageDescription:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;

@end

