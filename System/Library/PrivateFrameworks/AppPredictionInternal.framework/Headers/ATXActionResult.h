/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:55 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSString, ATXScoredPrediction;

@interface ATXActionResult : NSObject {

	ATXPredictionItem _predictionItem;
	BOOL _hasPredictionItem;
	ATXScoredPrediction* _scoredAction;
	NSString* _actionKey;

}

@property (nonatomic,readonly) ATXScoredPrediction * scoredAction;                   //@synthesize scoredAction=_scoredAction - In the implementation block
@property (nonatomic,readonly) NSString * actionKey;                                 //@synthesize actionKey=_actionKey - In the implementation block
@property (nonatomic,readonly) const ATXPredictionItem* predictionItem; 
-(NSString *)actionKey;
-(ATXScoredPrediction *)scoredAction;
-(const ATXPredictionItem*)predictionItem;
-(void)setPredictionItem:(const ATXPredictionItem*)arg1 ;
-(id)initWithScoredAction:(ATXScoredPrediction*)arg1 predictionItem:(const ATXPredictionItem*)arg2 actionKey:(id)arg3 ;
@end

