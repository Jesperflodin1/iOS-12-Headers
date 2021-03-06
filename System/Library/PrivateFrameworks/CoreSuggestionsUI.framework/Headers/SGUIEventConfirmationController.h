//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsUI/SGUISuggestionConfirmationController.h>

#import <CoreSuggestionsUI/EKEventEditViewDelegate-Protocol.h>
#import <CoreSuggestionsUI/EKEventViewDelegate-Protocol.h>
#import <CoreSuggestionsUI/EKEventViewDelegatePrivate-Protocol.h>

@class NSString, SGRealtimeEvent;

@interface SGUIEventConfirmationController : SGUISuggestionConfirmationController <EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate>
{
    SGRealtimeEvent *_realtimeEvent;
    CDUnknownBlockType _finished;
}

+ (void)rejectSuggestion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)confirmSuggestion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)_eventsSuggestionsService;
- (void).cxx_destruct;
- (_Bool)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)confirmSuggestion:(id)arg1 withPresentationHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

