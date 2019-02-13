//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, UILocalizedIndexedCollation;

__attribute__((visibility("hidden")))
@interface AddressEditorCountryPickerController : UITableViewController
{
    _Bool _showCountriesWithUnsupportedAddressFormats;
    CDUnknownBlockType _handler;
    NSString *_selectedCountryCode;
    UILocalizedIndexedCollation *_currentCollation;
    NSArray *_sections;
}

- (void).cxx_destruct;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)countryNameAtIndexPath:(id)arg1;
- (id)countryNamesInSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithCountry:(id)arg1 showCountriesWithUnsupportedAddressFormats:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;

@end
