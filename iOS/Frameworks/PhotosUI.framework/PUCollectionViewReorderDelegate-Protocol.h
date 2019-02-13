//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSIndexPath, PUCollectionView;

@protocol PUCollectionViewReorderDelegate <NSObject>
- (void)collectionView:(PUCollectionView *)arg1 moveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3 completionHandler:(void (^)(void))arg4;

@optional
- (NSIndexPath *)collectionView:(PUCollectionView *)arg1 targetIndexPathForMoveFromIndexPath:(NSIndexPath *)arg2 toProposedIndexPath:(NSIndexPath *)arg3;
- (_Bool)collectionView:(PUCollectionView *)arg1 canReorderItemAtIndexPath:(NSIndexPath *)arg2;
@end
