//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RAPLocalizedNameProtocol-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RAPBooleanProblem : NSObject <RAPLocalizedNameProtocol>
{
    _Bool _booleanValue;
    NSString *_title;
}

@property(readonly, nonatomic) _Bool booleanValue; // @synthesize booleanValue=_booleanValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedName;
- (id)initWithValue:(_Bool)arg1 title:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

