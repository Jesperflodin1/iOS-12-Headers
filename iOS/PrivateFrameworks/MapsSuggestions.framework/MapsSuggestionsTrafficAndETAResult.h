//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MapsSuggestionsTrafficAndETAResult : NSObject
{
    _Bool _isSuccess;
    double _seconds;
    NSString *_shortTrafficString;
    NSString *_longTrafficString;
}

@property(copy, nonatomic) NSString *longTrafficString; // @synthesize longTrafficString=_longTrafficString;
@property(copy, nonatomic) NSString *shortTrafficString; // @synthesize shortTrafficString=_shortTrafficString;
@property(nonatomic) double seconds; // @synthesize seconds=_seconds;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
- (void).cxx_destruct;
- (id)initWithGEOTrafficAndETAResult:(id)arg1;

@end
