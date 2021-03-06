//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import "UIApplicationDelegate-Protocol.h"

@class CLLocationManager, NSMutableArray, NSMutableDictionary, NSString, RTRoutineManager, RemindersCardController, RemindersScheduledListController, UIWindow;

@interface RemindersApp : UIApplication <UIApplicationDelegate>
{
    NSMutableArray *_sortedCalendars;
    CLLocationManager *_locationManager;
    UIWindow *_window;
    NSMutableDictionary *_cardControllersByCalendar;
    NSMutableDictionary *_contentControllersByCalendar;
    RemindersCardController *_scheduledCard;
    RemindersScheduledListController *_scheduledList;
    RTRoutineManager *_routineManager;
    _Bool _allowArchive;
    _Bool _isUITesting;
}

@property(nonatomic) _Bool isUITesting; // @synthesize isUITesting=_isUITesting;
- (void).cxx_destruct;
- (_Bool)allowArchive;
- (void)_updateEverConnectedToCar;
- (void)_displayInvitationForUserActivity:(id)arg1;
- (void)_displayScheduledCard;
- (void)_displayCalendar:(id)arg1;
- (_Bool)displayAndHighlightReminder:(id)arg1;
- (id)archivedSortedLists;
- (void)archive:(_Bool)arg1;
- (void)calendarsChanged;
- (void)calendarsChangedWithChangedObjectIDs:(id)arg1;
- (int)highestDisplayOrderInSource:(id)arg1;
- (id)sortedDisplayOrders:(id)arg1;
- (void)assignDisplayOrders:(id)arg1;
- (void)moveCalendar:(id)arg1 toSortedIndex:(long long)arg2;
- (void)deleteCalendar:(id)arg1;
- (void)addCalendar:(id)arg1;
- (id)sortedCalendars;
- (void)_alarmsDidFire;
- (void)eventStoreChanged:(id)arg1;
- (id)createReminderInCalendar:(id)arg1;
- (void)removeUnnecessaryCachedControllers;
- (id)contentControllerForCalendarToDisplay:(id)arg1 useCache:(_Bool)arg2;
- (id)cardControllerForCalendarToDisplay:(id)arg1 useCache:(_Bool)arg2;
- (struct CGRect)detailViewContentRect;
- (void)reenableLocationReminders;
- (void)extendedLaunchFinished;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)didRemoveDeactivationReason:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)applicationDidResume;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)reminderURLFromLaunchURL:(id)arg1 openedViaBB:(_Bool *)arg2 isLocation:(_Bool *)arg3 isDisplayScheduledCard:(_Bool *)arg4;
- (void)dealloc;
- (void)_didPerformShowReminderDetailsKeyboardCommand;
- (void)_performShowReminderDetailsKeyboardCommand;
- (void)RemindersAppUITestingTearDown;
- (void)RemindersAppUITestingSetUpWithArguments:(id)arg1;
- (void)startShowDetailsTestWithName:(id)arg1 options:(id)arg2;
- (void)startRotateTestWithName:(id)arg1 options:(id)arg2;
- (id)_extendLaunchTest;
- (void)_simulateExternalChange;
- (void)startScrollSearchTestWithName:(id)arg1 options:(id)arg2;
- (void)startScrollListInEditModeTestWithName:(id)arg1 options:(id)arg2;
- (void)startScrollListWithCompletedTestWithName:(id)arg1 options:(id)arg2;
- (void)startScrollScheduledRemindersCardTestWithName:(id)arg1 simulateSync:(_Bool)arg2 options:(id)arg3;
- (void)stackViewShown;
- (void)startShowCardStackTestWithName:(id)arg1 options:(id)arg2;
- (void)cardViewShown;
- (void)startShowScheduledRemindersCardTestWithName:(id)arg1 options:(id)arg2;
- (void)startScrollRemindersCardStackTestWithName:(id)arg1 options:(id)arg2;
- (_Bool)runTest:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

