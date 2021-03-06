/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:40 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCROBrailleDisplayCommandDispatcherDelegate <NSObject>
@required
-(id)brailleInputManager;
-(void)handleCommandPanLeftForDispatcher:(id)arg1;
-(void)handleCommandPanRightForDispatcher:(id)arg1;
-(void)handleCommandMoveLeftForDispatcher:(id)arg1;
-(void)handleCommandMoveRightForDispatcher:(id)arg1;
-(void)handleCommandRouterKeyEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandDeleteKeyEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandForwardDeleteKeyEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandEscapeForDispatcher:(id)arg1;
-(void)handleCommandTranslateForDispatcher:(id)arg1;
-(void)handleCommandReturnBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandToggleContractedBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleCommandToggleEightDotBrailleEvent:(id)arg1 forDispatcher:(id)arg2;
-(void)handleUnsupportedKeyEvent:(id)arg1 forDispatcher:(id)arg2;

@end

