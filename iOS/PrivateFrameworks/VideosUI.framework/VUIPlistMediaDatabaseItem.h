//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/VUIPlistMediaDatabaseEntity.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSDate, NSNumber, NSString, NSURL, VUIContentRating, VUIMediaItemCredits, VUIPlistMediaDatabaseSeason;

@interface VUIPlistMediaDatabaseItem : VUIPlistMediaDatabaseEntity <NSCopying>
{
    NSNumber *_local;
    VUIPlistMediaDatabaseSeason *_season;
    NSNumber *_duration;
    NSDate *_releaseDate;
    NSURL *_previewFrameURL;
    VUIContentRating *_contentRating;
    NSNumber *_episodeNumber;
    NSString *_studio;
    VUIMediaItemCredits *_credits;
}

@property(copy, nonatomic) VUIMediaItemCredits *credits; // @synthesize credits=_credits;
@property(copy, nonatomic) NSString *studio; // @synthesize studio=_studio;
@property(copy, nonatomic) NSNumber *episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(copy, nonatomic) VUIContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(copy, nonatomic) NSURL *previewFrameURL; // @synthesize previewFrameURL=_previewFrameURL;
@property(copy, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(nonatomic) __weak VUIPlistMediaDatabaseSeason *season; // @synthesize season=_season;
- (id)isLocal;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic, getter=isPlayable) NSNumber *playable;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end
