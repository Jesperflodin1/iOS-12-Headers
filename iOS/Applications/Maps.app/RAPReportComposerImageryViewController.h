//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPReportTableViewController.h"

#import "RAPInstrumentableTarget-Protocol.h"

@class NSString, RAPImageryQuestion, RAPReportComposerCommentPart, RAPReportComposerImageryRegionSection, RAPTableCheckmarkRadioSection, RAPTablePart;

__attribute__((visibility("hidden")))
@interface RAPReportComposerImageryViewController : RAPReportTableViewController <RAPInstrumentableTarget>
{
    RAPImageryQuestion *_question;
    RAPTablePart *_regionPart;
    RAPReportComposerImageryRegionSection *_regionSection;
    RAPTablePart *_problemKindPart;
    RAPTableCheckmarkRadioSection *_problemKindSection;
    RAPReportComposerCommentPart *_commentPart;
}

- (void).cxx_destruct;
- (void)_instrumentSelectedIssue;
- (id)tableParts;
@property(readonly, nonatomic) int analyticTarget;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
