//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "MapsTheming-Protocol.h"

@class NSNumber, NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface VenueFloorPickerCell : UICollectionViewCell <MapsTheming>
{
    _Bool _isUserLocation;
    _Bool _lacksSearchResults;
    _Bool _showSelection;
    NSNumber *_floorOrdinal;
    UILabel *_floorNameLabel;
    UIView *_selectionBackgroundView;
}

+ (id)floorNameFont;
+ (double)cellHeight;
+ (id)reuseIdentifier;
@property(nonatomic) _Bool showSelection; // @synthesize showSelection=_showSelection;
@property(nonatomic) _Bool lacksSearchResults; // @synthesize lacksSearchResults=_lacksSearchResults;
@property(nonatomic) _Bool isUserLocation; // @synthesize isUserLocation=_isUserLocation;
@property(retain, nonatomic) UIView *selectionBackgroundView; // @synthesize selectionBackgroundView=_selectionBackgroundView;
@property(retain, nonatomic) UILabel *floorNameLabel; // @synthesize floorNameLabel=_floorNameLabel;
@property(copy, nonatomic) NSNumber *floorOrdinal; // @synthesize floorOrdinal=_floorOrdinal;
- (void).cxx_destruct;
- (void)updateStyle;
- (void)updateTheme;
- (void)setSelected:(_Bool)arg1;
- (void)prepareForReuse;
@property(copy, nonatomic) NSString *floorName;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
