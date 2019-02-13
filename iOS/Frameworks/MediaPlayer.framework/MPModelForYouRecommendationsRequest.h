//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPStoreModelRequest.h>

@class NSURL;

@interface MPModelForYouRecommendationsRequest : MPStoreModelRequest
{
    long long _filteringPolicy;
    NSURL *_customForYouURL;
}

+ (id)allSupportedSectionProperties;
+ (id)allSupportedItemProperties;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSURL *customForYouURL; // @synthesize customForYouURL=_customForYouURL;
@property(nonatomic) long long filteringPolicy; // @synthesize filteringPolicy=_filteringPolicy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end
