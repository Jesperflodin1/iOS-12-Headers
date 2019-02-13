//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface VUIPlistMediaDatabaseEntity : NSObject <NSCopying>
{
    NSString *_identifier;
    unsigned long long _type;
    NSString *_title;
    NSString *_genreTitle;
    NSString *_contentDescription;
    NSURL *_coverArtURL;
}

@property(copy, nonatomic) NSURL *coverArtURL; // @synthesize coverArtURL=_coverArtURL;
@property(copy, nonatomic) NSString *contentDescription; // @synthesize contentDescription=_contentDescription;
@property(copy, nonatomic) NSString *genreTitle; // @synthesize genreTitle=_genreTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy, nonatomic, getter=isLocal) NSNumber *local;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;

@end
