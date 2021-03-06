//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class WDCancellationToken;

@interface WDBrandLogoView : UIImageView
{
    double _size;
    WDCancellationToken *_cancellationToken;
}

@property(retain, nonatomic) WDCancellationToken *cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(nonatomic) double size; // @synthesize size=_size;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)fetchBrandable:(id)arg1 dataProvider:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

