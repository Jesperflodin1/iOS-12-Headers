/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _UIDictionaryManager : NSObject {

	NSArray* _availableDefinitionDictionaries;

}

@property (readonly) NSArray * availableDefinitionDictionaries;              //@synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries - In the implementation block
+(id)assetManager;
-(id)init;
-(NSArray *)availableDefinitionDictionaries;
-(id)_allAvailableDefinitionDictionariesUsingRemoteInfo:(BOOL)arg1 ;
-(id)_definitionValuesForTerm:(id)arg1 ;
-(BOOL)_hasDefinitionForTerm:(id)arg1 ;
-(id)_currentlyAvailableDefinitionDictionaries;
-(id)_availableDictionaryAssetsUsingRemoteInfo:(BOOL)arg1 ;
-(BOOL)_isTTYEnabled;
-(id)_availableDictionaryAssets;
@end

