/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol CHStrokeProvider <NSObject>
@property (retain,readonly) id<CHStrokeProviderVersion> strokeProviderVersion; 
@property (copy,readonly) NSArray * orderedStrokes; 
@optional
-(long long)compareOrderOfStroke:(id)arg1 toStroke:(id)arg2;

@required
-(id)strokeForIdentifier:(id)arg1;
-(long long)compareOrderOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
-(BOOL)enumerateChangesSinceVersion:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(id<CHStrokeProviderVersion>)strokeProviderVersion;
-(NSArray *)orderedStrokes;

@end

