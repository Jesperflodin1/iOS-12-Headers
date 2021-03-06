//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCArticleListEditorialMetadata, FCInterestToken, NSArray, NSDate, NSString, NTPBArticleListRecord;

@interface FCArticleList : NSObject
{
    NSString *_identifier;
    NSArray *_articleIDs;
    unsigned long long _type;
    FCArticleListEditorialMetadata *_editorialMetadata;
    NSDate *_lastModifiedDate;
    NTPBArticleListRecord *_record;
    FCInterestToken *_interestToken;
}

@property(readonly, nonatomic) FCInterestToken *interestToken; // @synthesize interestToken=_interestToken;
@property(readonly, nonatomic) NTPBArticleListRecord *record; // @synthesize record=_record;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, nonatomic) FCArticleListEditorialMetadata *editorialMetadata; // @synthesize editorialMetadata=_editorialMetadata;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *articleIDs; // @synthesize articleIDs=_articleIDs;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2;

@end

