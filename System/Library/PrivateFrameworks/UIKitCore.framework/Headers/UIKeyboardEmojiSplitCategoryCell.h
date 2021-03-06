/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:58 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell {

	UIImageView* _symbol;
	UILabel* _title;
	UIView* _selectedCircle;

}

@property (nonatomic,retain) UIImageView * symbol;                 //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,retain) UILabel * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIView * selectedCircle;              //@synthesize selectedCircle=_selectedCircle - In the implementation block
-(void)dealloc;
-(void)setTitle:(UILabel *)arg1 ;
-(UILabel *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)titleFont;
-(void)setPressIndicatorHidden:(BOOL)arg1 ;
-(UIImageView *)symbol;
-(void)setTitleText:(id)arg1 ;
-(void)setSelectedCircleBlendMode:(BOOL)arg1 ;
-(id)symbolFont;
-(void)setSymbol:(UIImageView *)arg1 ;
-(UIView *)selectedCircle;
-(void)setSelectedCircle:(UIView *)arg1 ;
@end

