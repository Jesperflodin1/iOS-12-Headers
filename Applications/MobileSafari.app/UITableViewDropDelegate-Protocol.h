//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UIDragPreviewParameters, UITableView, UITableViewDropProposal;
@protocol UIDropSession, UITableViewDropCoordinator;

@protocol UITableViewDropDelegate <NSObject>
- (void)tableView:(UITableView *)arg1 performDropWithCoordinator:(id <UITableViewDropCoordinator>)arg2;

@optional
- (UIDragPreviewParameters *)tableView:(UITableView *)arg1 dropPreviewParametersForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 dropSessionDidEnd:(id <UIDropSession>)arg2;
- (void)tableView:(UITableView *)arg1 dropSessionDidExit:(id <UIDropSession>)arg2;
- (UITableViewDropProposal *)tableView:(UITableView *)arg1 dropSessionDidUpdate:(id <UIDropSession>)arg2 withDestinationIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 dropSessionDidEnter:(id <UIDropSession>)arg2;
- (_Bool)tableView:(UITableView *)arg1 canHandleDropSession:(id <UIDropSession>)arg2;
@end

