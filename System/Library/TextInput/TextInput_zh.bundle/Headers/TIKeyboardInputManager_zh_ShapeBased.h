/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:57:13 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_zh/TIKeyboardInputManager_zh.h>
#import <libobjc.A.dylib/TIKeyboardInputManagerChineseCompletion.h>

@class NSMutableString, NSString;

@interface TIKeyboardInputManager_zh_ShapeBased : TIKeyboardInputManager_zh <TIKeyboardInputManagerChineseCompletion> {

	NSMutableString* _searchString;
	BOOL _keepRemainingInput;
	NSString* _remainingInput;
	BOOL _previousActionWasAutoConfirmation;

}

@property (nonatomic,readonly) NSMutableString * searchString;                    //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSString * remainingInput;                           //@synthesize remainingInput=_remainingInput - In the implementation block
@property (assign,nonatomic) BOOL previousActionWasAutoConfirmation;              //@synthesize previousActionWasAutoConfirmation=_previousActionWasAutoConfirmation - In the implementation block
-(void)loadDictionaries;
-(BOOL)supportsLearning;
-(id)keyboardConfigurationLayoutTag;
-(id)rawInputString;
-(void)inputLocationChanged;
-(id)didAcceptCandidate:(id)arg1 ;
-(NSString *)remainingInput;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)acceptInput;
-(void)setInputIndex:(unsigned)arg1 ;
-(id)sortingMethods;
-(BOOL)isHardwareKeyboardAutocorrectionEnabled;
-(BOOL)shouldLookForCompletionCandidates;
-(void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(BOOL)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(BOOL)arg2 ;
-(void)cancelCandidatesThread;
-(BOOL)previousActionWasAutoConfirmation;
-(void)setPreviousActionWasAutoConfirmation:(BOOL)arg1 ;
-(void)setRemainingInput:(NSString *)arg1 ;
-(id)formattedSearchString;
-(id)markedTextWithAutoconvertedCandidates;
-(id)candidateResultSet;
-(BOOL)hasCandidates;
-(id)keyboardBehaviors;
-(unsigned long long)initialSelectedIndex;
-(void)clearInput;
-(BOOL)usesCandidateSelection;
-(BOOL)acceptInputString:(id)arg1 ;
-(id)searchStringForMarkedText;
-(NSMutableString *)searchString;
-(BOOL)usesAutoDeleteWord;
-(BOOL)shouldExtendPriorWord;
-(BOOL)suppliesCompletions;
-(unsigned)inputIndex;
-(unsigned)inputCount;
@end

