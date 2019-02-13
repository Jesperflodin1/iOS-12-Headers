//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUAlbumListViewControllerCommonPhoneSpec.h>

@interface PUAlbumListViewControllerPhoneSpec : PUAlbumListViewControllerCommonPhoneSpec
{
}

- (id)nameOfRecentlyDeletedAlbumPlaceholderImage;
- (id)nameOfHiddenAlbumPlaceholderImage;
- (id)nameOfEmptySharedAlbumPlaceholderImage;
- (id)nameOfAddSharedAlbumPlaceholderImage;
- (id)nameOfEmptyAlbumPlaceholderImage;
- (_Bool)shouldShowSectionHeaders;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (void)configureGridLayout:(id)arg1 forLayoutReferenceSize:(struct CGSize)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (struct CGSize)cellSizeForStackSize:(struct CGSize)arg1;
- (struct CGSize)stackSizeForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct UIEdgeInsets)sectionInsetsForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (long long)cellContentViewLayout;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (struct CGSize)stackSize;
- (struct CGSize)imageSizeForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)imageSize;
- (_Bool)shouldUseTableView;
- (unsigned long long)folderStackViewStyle;
- (unsigned long long)stackViewStyle;

@end
