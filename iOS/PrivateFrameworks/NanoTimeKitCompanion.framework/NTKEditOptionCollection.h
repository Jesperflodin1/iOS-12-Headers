//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NTKEditOptionCollection : NSObject
{
    long long _mode;
    NSString *_localizedName;
    NSArray *_options;
    unsigned long long _collectionType;
}

+ (id)editOptionCollectionWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4;
@property(nonatomic) unsigned long long collectionType; // @synthesize collectionType=_collectionType;
@property(copy, nonatomic) NSArray *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)filteredCollectionForOSVersion:(unsigned int)arg1;
- (id)filteredCollectionWithObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)initWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4;
@property(readonly, nonatomic) NSString *optionsDescription;
@property(readonly, nonatomic) long long swatchStyle;

@end
