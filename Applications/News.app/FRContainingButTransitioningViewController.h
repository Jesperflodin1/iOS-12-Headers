//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface FRContainingButTransitioningViewController : UIViewController
{
    _Bool _didAppear;
    _Bool _betweenWillAndDidAppear;
    CDUnknownBlockType _didAppearBlock;
}

@property(readonly, nonatomic) _Bool betweenWillAndDidAppear; // @synthesize betweenWillAndDidAppear=_betweenWillAndDidAppear;
@property(readonly, nonatomic) _Bool didAppear; // @synthesize didAppear=_didAppear;
@property(copy, nonatomic) CDUnknownBlockType didAppearBlock; // @synthesize didAppearBlock=_didAppearBlock;
- (void).cxx_destruct;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

