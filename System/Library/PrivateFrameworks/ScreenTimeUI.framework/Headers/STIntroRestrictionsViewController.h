//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STIntroSplashViewController.h>

#import <ScreenTimeUI/UITableViewDataSource-Protocol.h>
#import <ScreenTimeUI/UITableViewDelegate-Protocol.h>

@class NSString, STAllowance, UITableView;

@interface STIntroRestrictionsViewController : STIntroSplashViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _showAllCategories;
    _Bool _hasSetTimeAmount;
    _Bool _showingDatePicker;
    UITableView *_categoriesTableView;
    UITableView *_settingsTableView;
    STAllowance *_allowance;
}

@property _Bool showingDatePicker; // @synthesize showingDatePicker=_showingDatePicker;
@property _Bool hasSetTimeAmount; // @synthesize hasSetTimeAmount=_hasSetTimeAmount;
@property _Bool showAllCategories; // @synthesize showAllCategories=_showAllCategories;
@property(retain) STAllowance *allowance; // @synthesize allowance=_allowance;
@property(retain) UITableView *settingsTableView; // @synthesize settingsTableView=_settingsTableView;
@property(retain) UITableView *categoriesTableView; // @synthesize categoriesTableView=_categoriesTableView;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)selectedCategories;
- (void)datePickerChanged:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

