//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGAbstractSuggester.h>

#import <PhotosGraph/PGSuggester-Protocol.h>

@class NSString;

@interface PGTripSharingSuggester : PGAbstractSuggester <PGSuggester>
{
}

+ (_Bool)shouldSuggestCollectionNode:(id)arg1;
+ (id)suggestionSubtypes;
+ (id)suggestionTypes;
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
