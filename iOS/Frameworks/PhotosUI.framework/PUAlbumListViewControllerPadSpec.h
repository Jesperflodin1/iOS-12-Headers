//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUAlbumListViewControllerSpec.h>

@interface PUAlbumListViewControllerPadSpec : PUAlbumListViewControllerSpec
{
}

- (_Bool)canShowVirtualCollections;
- (id)feedViewControllerSpec;
- (id)photosPickerViewControllerSpec;
- (id)panoramaViewControllerSpec;
- (id)albumViewControllerSpec;
- (id)gridViewControllerSpec;
- (long long)albumDeletionConfirmationStyle;
- (id)nameOfRecentlyDeletedAlbumPlaceholderImage;
- (id)nameOfHiddenAlbumPlaceholderImage;
- (id)nameOfEmptySharedAlbumPlaceholderImage;
- (id)nameOfAddSharedAlbumPlaceholderImage;
- (id)nameOfEmptyAlbumPlaceholderImage;
- (_Bool)shouldShowSectionHeaders;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (struct CGSize)imageSizeForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (void)configureGridLayout:(id)arg1 forLayoutReferenceSize:(struct CGSize)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (struct CGSize)cellSizeForStackSize:(struct CGSize)arg1;
- (struct CGSize)stackSizeForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct UIEdgeInsets)sectionInsetsForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (_Bool)shouldUseCollageForCloudFeedPlaceholder;
- (_Bool)usesStackTransitionToGrid;
- (long long)cellContentViewLayout;
- (_Bool)showsDeleteButtonOnCellContentView;
- (double)posterSubitemCornerRadius;
- (double)posterSquareCornerRadius;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (double)collageSpacing;
- (long long)collageImageContentMode;
- (struct CGSize)collageImageSize;
- (struct UIOffset)stackPerspectiveOffset;
- (struct UIEdgeInsets)stackPerspectiveInsets;
- (struct UIOffset)stackOffset;
- (struct CGSize)stackSize;
- (id)emptyStackPhotoDecoration;
- (id)stackPhotoDecoration;
- (unsigned long long)folderStackViewStyle;
- (unsigned long long)stackViewStyle;
- (struct CGSize)imageSize;

@end
