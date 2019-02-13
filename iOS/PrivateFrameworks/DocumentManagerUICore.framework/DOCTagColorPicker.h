//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSNumber, UIGestureRecognizer, UIStackView;

@interface DOCTagColorPicker : UIView
{
    long long _selectedTagColor;
    UIGestureRecognizer *_changeColorTapGestureRecognizer;
    UIGestureRecognizer *_changeColorPanGestureRecognizer;
    NSArray *_dotViews;
    NSNumber *_previousSelectedTagColor;
    UIStackView *_stackView;
}

@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSNumber *previousSelectedTagColor; // @synthesize previousSelectedTagColor=_previousSelectedTagColor;
@property(readonly, nonatomic) NSArray *dotViews; // @synthesize dotViews=_dotViews;
@property(readonly, nonatomic) UIGestureRecognizer *changeColorPanGestureRecognizer; // @synthesize changeColorPanGestureRecognizer=_changeColorPanGestureRecognizer;
@property(readonly, nonatomic) UIGestureRecognizer *changeColorTapGestureRecognizer; // @synthesize changeColorTapGestureRecognizer=_changeColorTapGestureRecognizer;
@property(nonatomic) long long selectedTagColor; // @synthesize selectedTagColor=_selectedTagColor;
- (void).cxx_destruct;
- (void)setSelectedTagColorForLocation:(struct CGPoint)arg1;
- (void)handleChangeColor:(id)arg1;
- (void)setColorDotSpacing;
- (void)layoutSubviews;
- (id)selectedTagDotView;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;

@end
