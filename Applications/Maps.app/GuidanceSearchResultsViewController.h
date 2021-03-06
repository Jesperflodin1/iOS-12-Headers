//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContaineeViewController.h"

#import "DataSourceDelegate-Protocol.h"
#import "GEOLogContextDelegate-Protocol.h"
#import "GuidanceSearchResultsViewModelDelegate-Protocol.h"
#import "NavActionContaineeProtocol-Protocol.h"
#import "NavContaineeProtocol-Protocol.h"
#import "SARSearchResultTableViewCellDelegate-Protocol.h"

@class GuidanceSearchResultsView, GuidanceSearchResultsViewModel, NSString, SearchResultsDataSource, UIViewController;
@protocol ContainerProtocol, NavActionCoordination><NavActionViewModelSource;

__attribute__((visibility("hidden")))
@interface GuidanceSearchResultsViewController : ContaineeViewController <GuidanceSearchResultsViewModelDelegate, SARSearchResultTableViewCellDelegate, DataSourceDelegate, GEOLogContextDelegate, NavContaineeProtocol, NavActionContaineeProtocol>
{
    id <NavActionCoordination><NavActionViewModelSource> _navContaineeDelegate;
    GuidanceSearchResultsViewModel *_viewModel;
    GuidanceSearchResultsView *_resultsView;
    SearchResultsDataSource *_dataSource;
}

@property(retain, nonatomic) SearchResultsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) GuidanceSearchResultsView *resultsView; // @synthesize resultsView=_resultsView;
@property(readonly, nonatomic) GuidanceSearchResultsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <NavActionCoordination><NavActionViewModelSource> navContaineeDelegate; // @synthesize navContaineeDelegate=_navContaineeDelegate;
- (void).cxx_destruct;
- (int)currentMapViewTargetForAnalytics;
- (int)currentUITargetForAnalytics;
- (void)viewModelDidFinishLoading:(id)arg1 error:(id)arg2;
- (void)viewModelWillStartLoading:(id)arg1;
- (void)searchResultTableViewCellDidTapActionButton:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;
- (int)listForDataSource:(id)arg1;
- (void)dataSourceUpdated:(id)arg1;
- (void)headerViewTapped:(id)arg1;
- (void)headerViewDoneTapped:(id)arg1;
- (unsigned long long)defaultLayoutForContainerStyle:(unsigned long long)arg1 traitCollection:(id)arg2;
@property(readonly, nonatomic) unsigned long long maxLayoutForEdgeInsetsUpdate;
- (_Bool)updateConstraintsForLayout:(unsigned long long)arg1;
- (double)heightForLayout:(unsigned long long)arg1;
- (void)willChangeContainerStyle:(unsigned long long)arg1;
- (id)contentView;
- (double)headerHeight;
- (void)applyAlphaToContent:(double)arg1;
- (id)_modalHeaderCardConfigurationForStyle:(unsigned long long)arg1 traitCollection:(id)arg2;
- (void)_updateLayoutWithContainerStyle:(unsigned long long)arg1 traitCollection:(id)arg2;
- (_Bool)_isEmpty;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(nonatomic) __weak UIViewController<ContainerProtocol> *containerViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool presentedModally;
@property(readonly) Class superclass;
@property(nonatomic) _Bool takesAvailableHeight;

@end

