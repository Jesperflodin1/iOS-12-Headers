//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SiriUIKeyline, UILabel;

@interface SVSStarkTableViewCell : UITableViewCell
{
    _Bool _showFavoriteStar;
    _Bool _showKeyline;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    SiriUIKeyline *_keyline;
}

+ (double)_tableViewCellVetricalEdgesBuffer;
+ (double)_tableViewCellHorizontalEdgesBuffer;
@property(retain, nonatomic, getter=_keyline) SiriUIKeyline *keyline; // @synthesize keyline=_keyline;
@property(nonatomic) _Bool showKeyline; // @synthesize showKeyline=_showKeyline;
@property(nonatomic) _Bool showFavoriteStar; // @synthesize showFavoriteStar=_showFavoriteStar;
@property(readonly, nonatomic) UILabel *tertiaryLabel; // @synthesize tertiaryLabel=_tertiaryLabel;
@property(readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
