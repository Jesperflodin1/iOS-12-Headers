//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@interface LUIUserGridViewLayout : UICollectionViewLayout
{
}

- (double)contentViewTopEdgeInsetForCollectionViewFrame:(struct CGRect)arg1 contentHeight:(double)arg2;
- (struct UIEdgeInsets)edgeInsetsForCollectionViewFrame:(struct CGRect)arg1 layoutInfo:(id)arg2;
- (id)layoutInfoForItemCount:(unsigned long long)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;

@end
