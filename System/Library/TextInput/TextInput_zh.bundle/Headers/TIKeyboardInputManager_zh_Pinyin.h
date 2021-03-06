/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:57:13 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_zh/TIKeyboardInputManager_zh_Phonetic.h>

@interface TIKeyboardInputManager_zh_Pinyin : TIKeyboardInputManager_zh_Phonetic
-(id)validCharacterSetForAutocorrection;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(BOOL)shouldSearchCompletionForSubstrings;
-(BOOL)supportsPairedPunctutationInput;
-(BOOL)isSpecialInput:(id)arg1 ;
-(BOOL)usesGeometryModelData;
-(BOOL)currentShuangpinTypeUsesSemicolon;
-(BOOL)isShuangpinSemicolon:(id)arg1 ;
-(id)remapInput:(id)arg1 isFacemarkInput:(BOOL*)arg2 ;
-(id)keyboardBehaviors;
-(unsigned long long)initialSelectedIndex;
-(BOOL)usesAutoDeleteWord;
@end

