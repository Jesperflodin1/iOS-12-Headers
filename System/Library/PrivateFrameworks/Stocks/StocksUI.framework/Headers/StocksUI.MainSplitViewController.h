/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:18 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StocksUI/StocksUI-Structs.h>
#import <TeaUI/TeaUI.CardSplitViewController.h>
#import <StocksUI/StocksUI.InvertColorsChangeObserverType.h>

@interface StocksUI.MainSplitViewController : TeaUI.CardSplitViewController <StocksUI.InvertColorsChangeObserverType> {

	 styler;
	 invertColorsRefreshManager;
	 fullscreenTransitionCoverManager;

}
-(void)invertColorsStatusDidChange;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
@end

