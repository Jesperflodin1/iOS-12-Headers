//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AgentState.h"

@interface JobAgentState : AgentState
{
}

- (void)_didPause;
- (void)_didFinishInstallWithError:(id)arg1;
- (void)_didCancel;
- (void)_determineNextStateForError:(id)arg1;
- (void)onMessage:(id)arg1;

@end
