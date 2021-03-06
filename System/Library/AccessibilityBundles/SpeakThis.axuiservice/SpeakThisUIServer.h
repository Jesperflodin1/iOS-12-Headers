//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXOratorDelegate-Protocol.h"
#import "AXSpeakOverlayViewControllerDelegate-Protocol.h"
#import "AXUIService-Protocol.h"

@class AXElement, AXOrator, AXSpeakOverlayViewController, BKSProcessAssertion, NSArray, NSMutableArray, NSString;

@interface SpeakThisUIServer : NSObject <AXOratorDelegate, AXUIService, AXSpeakOverlayViewControllerDelegate>
{
    AXOrator *_orator;
    AXSpeakOverlayViewController *_viewController;
    AXElement *_systemApp;
    AXElement *_currentApp;
    AXElement *_currentPageTurnElement;
    int _stopType;
    _Bool _isReadingFromFrontmostApp;
    _Bool _isPausingAssistiveTechnology;
    _Bool _isWaitingForPageScroll;
    _Bool _lockButtonPressedSinceReadAllStart;
    NSArray *_speakingRangeAndElements;
    NSString *_springBoardActionHandlerId;
    struct __AXObserver *_observer;
    CDUnknownBlockType _readNextPageCompletion;
    BKSProcessAssertion *_assertionForFetchingMoreContent;
    NSMutableArray *_sentenceRanges;
    struct _NSRange _currentSentenceRange;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool lockButtonPressedSinceReadAllStart; // @synthesize lockButtonPressedSinceReadAllStart=_lockButtonPressedSinceReadAllStart;
@property(nonatomic) struct _NSRange currentSentenceRange; // @synthesize currentSentenceRange=_currentSentenceRange;
@property(retain, nonatomic) NSMutableArray *sentenceRanges; // @synthesize sentenceRanges=_sentenceRanges;
@property(retain, nonatomic) BKSProcessAssertion *assertionForFetchingMoreContent; // @synthesize assertionForFetchingMoreContent=_assertionForFetchingMoreContent;
@property(copy, nonatomic) CDUnknownBlockType readNextPageCompletion; // @synthesize readNextPageCompletion=_readNextPageCompletion;
@property(nonatomic) _Bool isWaitingForPageScroll; // @synthesize isWaitingForPageScroll=_isWaitingForPageScroll;
@property(nonatomic) _Bool isPausingAssistiveTechnology; // @synthesize isPausingAssistiveTechnology=_isPausingAssistiveTechnology;
@property(nonatomic) _Bool isReadingFromFrontmostApp; // @synthesize isReadingFromFrontmostApp=_isReadingFromFrontmostApp;
@property(retain, nonatomic) struct __AXObserver *observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSString *springBoardActionHandlerId; // @synthesize springBoardActionHandlerId=_springBoardActionHandlerId;
@property(retain, nonatomic) NSArray *speakingRangeAndElements; // @synthesize speakingRangeAndElements=_speakingRangeAndElements;
- (void).cxx_destruct;
- (void)_pageDidScroll:(id)arg1;
- (void)_frontmostAppMayHaveChanged:(_Bool)arg1;
- (void)_didToggleHighlightContentSetting;
- (void)_didToggleSpeakScreenSetting;
- (_Bool)isSpeaking;
- (void)slowDownButtonPressed;
- (void)speedUpButtonPressed;
- (void)_handleRateChangeSpeechIfNeeded:(_Bool)arg1;
- (void)stopButtonPressed;
- (void)pauseButtonPressed;
- (void)playButtonPressed;
- (void)rewindButtonPressed;
- (void)fastForwardButtonPressed;
- (_Bool)highlightSentences;
- (_Bool)highlightWords;
- (void)orator:(id)arg1 willSpeakRange:(struct _NSRange)arg2 ofContent:(id)arg3;
- (void)oratorDidCancelSpeaking:(id)arg1;
- (void)oratorDidStartSpeaking:(id)arg1;
- (void)oratorDidResumeSpeaking:(id)arg1;
- (void)oratorDidPauseSpeaking:(id)arg1;
- (void)oratorDidFinishSpeaking:(id)arg1;
- (void)_handleIdleTimerReset;
- (id)_systemApp;
- (id)_convertAXValueSceneReferenceRects:(id)arg1 toView:(id)arg2 fromElement:(id)arg3;
- (unsigned long long)_findIndexOfRange:(struct _NSRange)arg1;
- (void)_handleSpeakingStopped;
- (void)_reallyHideUI;
- (void)setIdleTimerDisabled:(_Bool)arg1;
- (void)_readNextPageIfApplicableInForwardDirection:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_giveUpWaitingForPageToScroll;
- (void)_handleNewPage;
- (void)_finishHandlingPageScroll:(_Bool)arg1;
- (long long)_stsErrorCodeForOratorErrorCode:(long long)arg1;
- (void)_updateCurrentAppWithPoint:(id)arg1;
- (id)_handleUnknownMessageIdentifier:(unsigned long long)arg1;
- (void)_handleRewind:(CDUnknownBlockType)arg1;
- (void)_handleFastForward:(CDUnknownBlockType)arg1;
- (id)_handleSpeakSlower;
- (id)_handleSpeakFaster;
- (id)_handleToggleSpeaking;
- (id)_handleResumeSpeaking;
- (id)_handlePauseSpeaking;
- (void)_handleSpeakThisWithOptions:(long long)arg1 appPoint:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_dispatchQueueForFetches;
- (void)_takeAssertionIfNeeded;
- (unsigned int)_assertionFlagsForFetchingContent;
- (unsigned int)_assertionFlagsForStayingAlive;
- (void)_clearAssertionForFetchingMoreContent;
- (void)_fetchContentStartingWithPageTurnElement:(_Bool)arg1 shouldRefreshContent:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_appendContentFromElementsAndStrings:(id)arg1 toContentString:(id)arg2 speakingRanges:(id)arg3 startWithPageTurnElement:(_Bool)arg4;
- (id)_handleFinishShowingUI:(struct CGPoint)arg1;
- (void)_handleNoSpeakableContent:(id)arg1;
- (id)_handleLoadUIAtAppPoint:(id)arg1;
- (id)_handleHideUI;
- (struct CGPoint)convertPointToViewControllerSpace:(struct CGPoint)arg1;
- (void)_handleLockButtonPress;
- (void)fetchContentStringStartingWithPageTurnForUnitTest:(CDUnknownBlockType)arg1;
- (void)processMessageAsynchronously:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)messageWithIdentifierShouldBeProcessedAsynchronously:(unsigned long long)arg1;
- (id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id *)arg4;
- (void)_observeNotifications:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

