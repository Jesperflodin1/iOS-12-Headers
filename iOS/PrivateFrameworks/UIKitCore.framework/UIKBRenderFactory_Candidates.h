//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIKBRenderFactory.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory_Candidates : UIKBRenderFactory
{
    _Bool _shouldUseKeyboardBackground;
}

@property(nonatomic) _Bool shouldUseKeyboardBackground; // @synthesize shouldUseKeyboardBackground=_shouldUseKeyboardBackground;
- (id)traitsForExtendedView;
- (id)traitsForEdgeGradientWithSize:(struct CGSize)arg1;
- (id)traitsForSortControlBackgroundWithSize:(struct CGSize)arg1 edges:(unsigned long long)arg2;
- (id)traitsForEmptyExtendedPane:(struct CGSize)arg1 rowHeight:(double)arg2 idiomPad:(_Bool)arg3 clipCorners:(_Bool)arg4;
- (id)traitsForExtendedCellSize:(struct CGSize)arg1 highlighted:(_Bool)arg2 groupHeader:(_Bool)arg3 edges:(unsigned long long)arg4;
- (id)traitsForHWRCellSize:(struct CGSize)arg1 highlighted:(_Bool)arg2;
- (id)traitsForToggleButtonWithSize:(struct CGSize)arg1 highlighted:(_Bool)arg2 edges:(unsigned long long)arg3;
- (id)traitsForCellSize:(struct CGSize)arg1 disambiguation:(_Bool)arg2 highlighted:(_Bool)arg3 edges:(unsigned long long)arg4;
- (id)initWithRenderingContext:(id)arg1;
- (id)controlKeyDividerColorName;
- (id)controlKeyForegroundColorName;
- (id)controlKeyBackgroundColorName;
- (id)defaultKeyDividerColorName;
- (long long)lightHighQualityEnabledBlendForm;

@end
