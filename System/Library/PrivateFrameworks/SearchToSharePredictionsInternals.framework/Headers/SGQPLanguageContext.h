//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SGQPEmotivePhrases, SGQPMLPredictor, SGQPMetricsTracker, SGQPParsecEntitiesPredictor;

@interface SGQPLanguageContext : NSObject
{
    SGQPMLPredictor *_mlPredictor;
    SGQPParsecEntitiesPredictor *_parsecPredictor;
    SGQPEmotivePhrases *_emotivePhrases;
    NSArray *_finalOrderingPattern;
    double _finalThreshold;
    NSArray *_finalOrderingPatternCategories;
    double _finalThresholdCategories;
    SGQPMetricsTracker *_metricsTracker;
    NSString *_language;
    NSString *_abGroup;
}

+ (id)unsupportedLanguageContextWithMetricsTracker:(id)arg1;
+ (id)languageContextsWithMetricsTracker:(id)arg1 asset:(id)arg2;
+ (id)orderingPatternFromString:(id)arg1;
+ (id)array:(id)arg1 orderedByPattern:(id)arg2;
@property(readonly, nonatomic) NSString *abGroup; // @synthesize abGroup=_abGroup;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
- (id)rankedCategoriesForMessages:(id)arg1 conversationId:(id)arg2 limit:(unsigned long long)arg3;
- (id)queryPredictionsForMessages:(id)arg1 conversationId:(id)arg2 limit:(unsigned long long)arg3;
- (id)emotivePhrasesPredictionsFromMessages:(id)arg1;
- (id)parsecEntitiesInMessages:(id)arg1;
- (id)initWithParsecPredictor:(id)arg1 emotivePhrases:(id)arg2 finalOrderingPattern:(id)arg3 finalThreshold:(double)arg4 mlPredictor:(id)arg5 finalOrderingPatternCategories:(id)arg6 finalThresholdCategories:(double)arg7 language:(id)arg8 abGroup:(id)arg9 metricsTracker:(id)arg10;
- (id)init;

@end

