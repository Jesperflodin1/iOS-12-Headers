//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpotlightServices/PRSAnonymousPipelineManager.h>

@class PARSession;

@interface PRSAnonymousPipelineManagerSession : PRSAnonymousPipelineManager
{
    PARSession *_session;
}

+ (id)sharedManager;
@property(retain, nonatomic) PARSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)setPARSession:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)sendCustomFeedback:(id)arg1;
- (id)init;

@end

