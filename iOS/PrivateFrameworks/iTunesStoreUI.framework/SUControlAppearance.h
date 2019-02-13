//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface SUControlAppearance : NSObject <NSCopying>
{
    NSMutableDictionary *_images;
    NSMutableDictionary *_textAttributes;
    NSMutableDictionary *_titlePositions;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_copyKeyForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (struct UIOffset)titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (id)textAttributesForState:(unsigned long long)arg1;
- (void)styleButton:(id)arg1;
- (void)styleBarButtonItem:(id)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
@property(readonly, nonatomic) long long numberOfImages;
- (id)imageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (void)enumerateTitlePositionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateTextAttributesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateImagesUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end
