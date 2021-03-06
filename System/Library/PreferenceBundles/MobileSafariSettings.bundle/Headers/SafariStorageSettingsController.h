/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:49:18 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSEditableListController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>

@class UISearchController, NSString, UIBarButtonItem, PSSpecifier, NSArray, NSMutableDictionary, NSMutableArray;

@interface SafariStorageSettingsController : PSEditableListController <UISearchControllerDelegate, UISearchResultsUpdating> {

	UISearchController* _searchController;
	NSString* _searchPattern;
	BOOL _hasLoadedDomains;
	BOOL _isShowingAllDomains;
	UIBarButtonItem* _editToolbarItem;
	UIBarButtonItem* _doneToolbarItem;
	PSSpecifier* _totalUsageSpecifier;
	NSArray* _deleteButtonSpecifiers;
	NSMutableDictionary* _domainSpecifiers;
	NSMutableArray* _sortedDomains;
	BOOL _cancelDomainSpecifierUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)deleteAllData;
-(void)_updateToolbarItems;
-(void)_showDeleteAllOriginsAlert;
-(void)_toggleEditing;
-(void)_createDomainSpecifiers;
-(id)_getSpecifierDiskUsage:(id)arg1 ;
-(void)_deleteOriginData:(id)arg1 ;
-(void)_addWebsiteDataRecord:(id)arg1 toDictionary:(id)arg2 ;
-(id)_totalUsageString;
-(id)_specifiersForDomainList;
-(void)_updateTotalUsageSpecifier;
-(void)_addDomainSpecifiers;
-(void)_addWebSecurityDomainsToDictionary:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)showAllDomainSpecifiers;
-(id)_specifiersForLoadingSpinner;
-(id)_specifiersForSearchResults;
-(void)_deleteAllOrigins;
-(id)specifiers;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)_setContentInset:(double)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)willPresentSearchController:(id)arg1 ;
-(void)didPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
@end

