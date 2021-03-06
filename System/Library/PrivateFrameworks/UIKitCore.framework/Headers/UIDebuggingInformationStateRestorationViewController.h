/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:14 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSDictionary, NSArray, NSString;

@interface UIDebuggingInformationStateRestorationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	NSDictionary* _data;
	id _inspected;
	NSArray* _labels;

}

@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSDictionary * data;                   //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) id inspected;                          //@synthesize inspected=_inspected - In the implementation block
@property (nonatomic,retain) NSArray * labels;                      //@synthesize labels=_labels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITableView *)tableView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(void)setInspected:(id)arg1 ;
-(void)setLabels:(NSArray *)arg1 ;
-(NSArray *)labels;
-(void)inspect:(id)arg1 ;
-(id)inspected;
@end

