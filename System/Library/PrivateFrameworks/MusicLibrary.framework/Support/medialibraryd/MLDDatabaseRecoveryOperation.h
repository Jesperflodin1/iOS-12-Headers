//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSString;

@interface MLDDatabaseRecoveryOperation : NSOperation
{
    NSString *_path;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)_recreateDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateLastCorruptionRestoreAttemptDate;
- (id)_lastCorruptionRestoreAttemptDate;
- (id)_createSQLiteErrorWithCode:(int)arg1 description:(id)arg2;
- (void)main;
- (id)initWithDatabaseFilePath:(id)arg1;

@end

