//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIDatePicker;

@interface _RemindersDatePickerCell : UITableViewCell
{
    UIDatePicker *_datePicker;
    long long _targetEditorRow;
}

@property(nonatomic) long long targetEditorRow; // @synthesize targetEditorRow=_targetEditorRow;
@property(readonly, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
