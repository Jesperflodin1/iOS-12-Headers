//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RichMapsActivityCreatingTask-Protocol.h"

@class RichMapsActivity;

__attribute__((visibility("hidden")))
@interface RichMapsActivityCreatingTaskImpl : NSObject <RichMapsActivityCreatingTask>
{
    CDUnknownBlockType _completion;
    RichMapsActivity *_computedRichMapsActivity;
}

@property(readonly, nonatomic) RichMapsActivity *computedRichMapsActivity; // @synthesize computedRichMapsActivity=_computedRichMapsActivity;
- (void).cxx_destruct;
- (void)taskFailed;
- (void)taskFinished:(id)arg1;
- (void)taskStarted;
- (void)cancelTask;
- (void)performTask;
- (void)performTaskWithCompletion:(CDUnknownBlockType)arg1;
- (id)description;

@end

