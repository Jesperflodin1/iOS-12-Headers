//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRCollectionViewFeedPickerLayout.h"

@interface FRCollectionViewPagedLayout : FRCollectionViewFeedPickerLayout
{
    double _pageOffset;
    double _pageSpacing;
    struct CGSize _pageSize;
}

@property(nonatomic) double pageSpacing; // @synthesize pageSpacing=_pageSpacing;
@property(nonatomic) double pageOffset; // @synthesize pageOffset=_pageOffset;
@property(nonatomic) struct CGSize pageSize; // @synthesize pageSize=_pageSize;
- (id)adjustLayoutAttributeForPageOffset:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;

@end

