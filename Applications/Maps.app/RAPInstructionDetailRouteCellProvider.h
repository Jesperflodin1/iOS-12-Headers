//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Route;

__attribute__((visibility("hidden")))
@interface RAPInstructionDetailRouteCellProvider : NSObject
{
    Route *_route;
}

- (void).cxx_destruct;
- (void)_calculateLeadingInstructionMarginForTableView:(id)arg1;
- (id)_cellBackgrundColor;
- (void)_adjustPassItemCellHeight:(id)arg1;
- (id)transitDirectionsCellForTableView:(id)arg1 item:(id)arg2;
- (id)spacerCellForTableView:(id)arg1 previousListItem:(id)arg2;
- (double)cellHeightForListItem:(id)arg1 routeStep:(id)arg2;
- (double)spacerHeightForPreviousListItem:(id)arg1;
- (_Bool)shouldDisplaySpacerCellforListItem:(id)arg1;
- (id)directionStepCellForTableView:(id)arg1 step:(id)arg2;
- (void)registerCellsForTableView:(id)arg1;
- (id)initWithRoute:(id)arg1;

@end

