/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:15 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIDebuggingIvar, UILabel;

@interface UIDebuggingIvarTableViewCell : UITableViewCell {

	UIDebuggingIvar* _ivar;
	UILabel* _nameLabel;
	UILabel* _typeLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) UILabel * nameLabel;                 //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * typeLabel;                 //@synthesize typeLabel=_typeLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UIDebuggingIvar * ivar;              //@synthesize ivar=_ivar - In the implementation block
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setIvar:(UIDebuggingIvar *)arg1 ;
-(void)setTypeLabel:(UILabel *)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(void)_prepareConstraints;
-(UILabel *)valueLabel;
-(UILabel *)typeLabel;
-(UIDebuggingIvar *)ivar;
@end

