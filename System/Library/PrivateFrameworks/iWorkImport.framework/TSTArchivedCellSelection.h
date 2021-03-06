//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TSKSelection, TSTCellRegion, TSTCellSelection;

__attribute__((visibility("hidden")))
@interface TSTArchivedCellSelection : TSPObject <TSKArchivedSelection>
{
    TSTCellSelection *_cellSelection;
    _Bool _isLegacyBasedIDSelection;
    struct TSUCellCoord _legacyAnchorCellID;
    struct TSUCellCoord _legacyCursorCellID;
    TSTCellRegion *_legacyCellRegion;
    TSTCellRegion *_legacyBaseCellRegion;
    long long _selectionType;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(retain, nonatomic) TSKSelection *selection;
- (id)selectionWithParent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

