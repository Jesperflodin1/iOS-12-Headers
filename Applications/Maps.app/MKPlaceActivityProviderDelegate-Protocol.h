//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MKAnnotationView, MKPlaceActivityProvider, NSDictionary, NSString;

@protocol MKPlaceActivityProviderDelegate <NSObject>

@optional
- (NSDictionary *)airdropURLJSONForMapActivity:(MKPlaceActivityProvider *)arg1;
- (MKAnnotationView *)annotationViewForMapActivity:(MKPlaceActivityProvider *)arg1;
- (NSString *)socialTitleForMapActivity:(MKPlaceActivityProvider *)arg1;
- (NSString *)titleForMapActivity:(MKPlaceActivityProvider *)arg1;
- (NSString *)webPlaceCardURLForMapActivity:(MKPlaceActivityProvider *)arg1;
- (NSString *)urlForMapActivity:(MKPlaceActivityProvider *)arg1;
- (_Bool)shouldUseWebPlaceCardForMapActivity:(MKPlaceActivityProvider *)arg1 activityType:(NSString *)arg2;
@end

