//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SVSBaseViewController.h"

@class NSError, UIButton, UIImageView, UILabel;

@interface RepairDoneViewController : SVSBaseViewController
{
    UILabel *_titleLabel;
    UILabel *_infoLabel;
    UIImageView *_imageView;
    UIButton *_reportBugButton;
    UIButton *_doneButton;
    int _status;
    NSError *_error;
}

@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)handleReportBugButton:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (void)handleActionButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

