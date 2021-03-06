//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet;
@protocol MediaSocialErrorDelegate, OS_dispatch_queue;

@interface MediaSocialErrorCoordinator : NSObject
{
    id <MediaSocialErrorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    id _notification;
    NSMutableOrderedSet *_postIDs;
    NSArray *_temporaryPostIDs;
    NSArray *_temporaryUploadIDs;
    NSMutableOrderedSet *_uploadIDs;
}

@property(nonatomic) __weak id <MediaSocialErrorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_showDialog:(id)arg1;
- (void)_sendDidFinishWithResponseFlags:(unsigned long long)arg1;
- (id)_newErrorDialogWithServerMessageWithPost:(id)arg1 erroMessage:(id)arg2 canRetry:(_Bool)arg3;
- (id)_newSingleErrorDialogWithUpload:(id)arg1;
- (id)_newSingleErrorDialogWithPost:(id)arg1;
- (id)_newPluralErrorDialogWithUploadCount:(long long)arg1;
- (id)_newPluralErrorDialogWithPostCount:(long long)arg1 uploadCount:(long long)arg2;
- (id)_newPluralErrorDialogWithPostCount:(long long)arg1;
- (id)_newPluralErrorDialogWithCount:(long long)arg1 formatString:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *uploadIdentifiers;
@property(readonly, copy, nonatomic) NSArray *postIdentifiers;
- (void)dismissAllDialogs;
- (_Bool)addDialogForUploadIdentifiers:(id)arg1;
- (_Bool)addDialogForUpload:(id)arg1;
- (_Bool)addDialogForPost:(id)arg1 errorMessage:(id)arg2 canRetry:(_Bool)arg3;
- (_Bool)addDialogForPost:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1;

@end

