//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSFeedModuleType-Protocol.h"

@protocol FRFeldsparContext;

@interface FRFeedModule : NSObject <TSFeedModuleType>
{
    id <FRFeldsparContext> _feldsparContext;
}

@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void).cxx_destruct;
- (id)createViewControllerForFeedDescriptor:(id)arg1 withFeedViewContext:(id)arg2;
- (id)createViewControllerForFeedDescriptor:(id)arg1 withTableOfContentsRank:(long long)arg2 tableOfContentsSection:(long long)arg3 presentationReason:(long long)arg4;
- (id)initWithFeldsparContext:(id)arg1;

@end
