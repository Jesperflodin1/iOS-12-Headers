//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL, NSUUID;

@interface MCMMetadata : NSObject
{
    _Bool _transient;
    _Bool _existed;
    unsigned int _uid;
    unsigned long long _containerClass;
    NSString *_identifier;
    NSUUID *_uuid;
    NSURL *_url;
    NSString *_userManagedAssetsDirName;
    NSDictionary *_info;
}

+ (id)readAndValidateMetadataAtUrl:(id)arg1 forUser:(unsigned int)arg2 checkClassPath:(_Bool)arg3 error:(id *)arg4;
@property(nonatomic) _Bool existed; // @synthesize existed=_existed;
@property(nonatomic) _Bool transient; // @synthesize transient=_transient;
@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *userManagedAssetsDirName; // @synthesize userManagedAssetsDirName=_userManagedAssetsDirName;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
- (void).cxx_destruct;
- (_Bool)writeMetadataToDiskWithError:(id *)arg1;
- (void)setUserId:(unsigned int)arg1;
- (id)initWithUserId:(unsigned int)arg1 uuid:(id)arg2 containerClass:(unsigned long long)arg3 identifier:(id)arg4 info:(id)arg5 url:(id)arg6 userManagedAssetsDirName:(id)arg7;

@end
