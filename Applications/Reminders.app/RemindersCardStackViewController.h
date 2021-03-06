//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "RemindersArchiving-Protocol.h"
#import "RemindersCardStackViewDataSource-Protocol.h"
#import "RemindersCardStackViewDelegate-Protocol.h"
#import "RemindersInvitationControllerDelegate-Protocol.h"
#import "RemindersListControllerDelegate-Protocol.h"
#import "RemindersNewListControllerDelegate-Protocol.h"
#import "RemindersSearchControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class EKCalendar, NSMutableArray, NSString, RemindersCardController, RemindersCardStackView, RemindersCategoryListController, RemindersDetailEditorController, RemindersSearchController, UIView;

@interface RemindersCardStackViewController : UIViewController <RemindersCardStackViewDataSource, RemindersCardStackViewDelegate, RemindersArchiving, RemindersNewListControllerDelegate, RemindersListControllerDelegate, RemindersSearchControllerDelegate, RemindersInvitationControllerDelegate, UIScrollViewDelegate>
{
    RemindersCardStackView *_stackView;
    RemindersCategoryListController *_highlightedList;
    UIView *_containerView;
    RemindersCardController *_newListCard;
    struct CGPoint _scrollOffsetAtDragStart;
    double _originalCardHeight;
    double _cardSpacing;
    _Bool _isDeleting;
    EKCalendar *_reorderingCalendar;
    EKCalendar *_cachedInvitation;
    RemindersDetailEditorController *_detailController;
    NSMutableArray *_blocksToBeExcutedOnMainThreadWhenNotBusy;
    _Bool _runningBlocksToBeExcutedOnMainThreadWhenNotBusy;
    _Bool _isScrolling;
    _Bool _needsReload;
    _Bool _hasPerformedInitialLoad;
    _Bool _showingNewListCard;
    _Bool _stackViewHasFinishedAnimating;
    _Bool _launchingToSingleCard;
    RemindersSearchController *_searchController;
    unsigned long long _springloadedIndex;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property _Bool launchingToSingleCard; // @synthesize launchingToSingleCard=_launchingToSingleCard;
@property _Bool stackViewHasFinishedAnimating; // @synthesize stackViewHasFinishedAnimating=_stackViewHasFinishedAnimating;
@property _Bool showingNewListCard; // @synthesize showingNewListCard=_showingNewListCard;
@property _Bool hasPerformedInitialLoad; // @synthesize hasPerformedInitialLoad=_hasPerformedInitialLoad;
@property _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(readonly) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property unsigned long long springloadedIndex; // @synthesize springloadedIndex=_springloadedIndex;
@property(readonly) RemindersSearchController *searchController; // @synthesize searchController=_searchController;
- (void).cxx_destruct;
- (void)cancelAddReminder;
- (void)createReminder;
- (void)searchControllerDidTapActionButton:(id)arg1;
- (void)searchController:(id)arg1 didSelectReminder:(id)arg2 forSearchTerm:(id)arg3;
- (void)searchController:(id)arg1 willBecomeActive:(_Bool)arg2;
- (void)addBlocksToBeExcutedOnMainThreadWhenNotBusy:(CDUnknownBlockType)arg1;
- (void)tryToExecuteBlockOnMainThreadWhenNotBusy;
- (void)listControllerFinishedLoadingData:(id)arg1;
- (void)_finishExtendedLaunchIfNeeded;
- (_Bool)listControllerIsOnTop:(id)arg1;
- (void)listControllerDeletedList:(id)arg1 atIndex:(long long)arg2;
- (void)deleteCard:(id)arg1 atIndex:(long long)arg2;
- (void)swapDisplayedCard:(id)arg1;
- (void)showNewListCard;
- (void)invitationControllerDeclined:(id)arg1;
- (void)invitationControllerAccepted:(id)arg1;
- (void)newListControllerCreatedList:(id)arg1;
- (void)newListControllerCanceledList:(id)arg1;
- (void)listControllerEndedEditing:(id)arg1;
- (void)listControllerBeganEditing:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)cardStackViewDidChangeSafeAreaInsets:(id)arg1;
- (_Bool)cardStackView:(id)arg1 cardShouldSlideBackIntoStackWhenDismissed:(id)arg2;
- (void)cardStackView:(id)arg1 willAddGestureRecognizer:(id)arg2 toCardAtIndex:(long long)arg3;
- (void)cardStackView:(id)arg1 didDismissCard:(id)arg2;
- (void)cardStackViewDidPresentCard:(id)arg1;
- (void)cardStackViewDidEndReordering:(id)arg1;
- (void)cardStackView:(id)arg1 cardDidMoveFromIndex:(long long)arg2 toIndex:(long long)arg3;
- (long long)cardStackView:(id)arg1 targetIndexForMoveFromIndex:(long long)arg2 toProposedIndex:(long long)arg3;
- (_Bool)cardStackView:(id)arg1 canReorderCardAtIndex:(long long)arg2;
- (long long)numberOfInvitations;
- (double)cardSpacing;
- (long long)indexOfCard:(id)arg1;
- (id)cardAtIndex:(long long)arg1;
- (long long)numberOfCards;
- (id)sortedCalendars;
- (void)_createNewListCard;
- (void)fontSizeChanged;
- (void)displayScheduledCard;
- (void)displayCalendar:(id)arg1;
- (id)displayedCard;
- (void)unhighlightReminder;
- (void)highlightReminder:(id)arg1 withSearchTerm:(id)arg2;
- (void)displayEditorForReminder:(id)arg1;
- (void)endSearching;
- (void)beginSearch:(id)arg1;
- (void)endEditing;
- (void)setContentOffset:(struct CGPoint)arg1;
- (int)state;
- (void)alarmsFired;
- (void)eventStoreChangedWithChangedObjectIDs:(id)arg1;
- (void)_reloadStack;
- (void)_loadSecondaryListsIfNeeded;
- (void)_loadInitialList;
- (void)applyArchive:(id)arg1;
- (id)listControllerForIndex:(unsigned long long)arg1;
- (void)displayCardWithIndex:(unsigned long long)arg1;
- (id)archive;
- (void)resizeToSize:(struct CGSize)arg1;
- (void)stackViewShown;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (id)searchViewController;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (id)searchResultsTableView;
- (void)performTestSearch;
- (void)displaySearch;
- (id)_stackView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

