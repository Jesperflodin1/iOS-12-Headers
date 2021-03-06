//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface MRDExternalDeviceCredentialDatabase : NSObject
{
    struct sqlite3 *_dbHandle;
    NSMutableArray *_tokenRecords;
    NSString *_path;
}

@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)_loadTokenRecords;
- (void)_initializeDatabaseSchema;
- (void)_validateDatabase;
- (void)_openDatabase;
- (_Bool)clearExpiredTokenRecords;
- (_Bool)saveTokenRecord:(id)arg1;
@property(readonly, nonatomic) NSArray *tokenRecords;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1;

@end

