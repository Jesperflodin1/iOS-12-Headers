//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmbeddedAcousticRecognition/_EARSystemResult.h>

@class NSArray;

@interface _EARCombinedResult : _EARSystemResult
{
    NSArray *_nBestStrings;
    NSArray *_nBestSourceIndexes;
    NSArray *_originalRanks;
}

@property(copy, nonatomic) NSArray *originalRanks; // @synthesize originalRanks=_originalRanks;
@property(copy, nonatomic) NSArray *nBestSourceIndexes; // @synthesize nBestSourceIndexes=_nBestSourceIndexes;
@property(copy, nonatomic) NSArray *nBestStrings; // @synthesize nBestStrings=_nBestStrings;
- (void).cxx_destruct;

@end
