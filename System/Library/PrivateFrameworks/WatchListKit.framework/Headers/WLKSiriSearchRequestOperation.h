//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSDictionary;

@interface WLKSiriSearchRequestOperation : WLKNetworkRequestOperation
{
    NSDictionary *_options;
}

@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)responseProcessor;
- (id)initWithOptions:(id)arg1;

@end

