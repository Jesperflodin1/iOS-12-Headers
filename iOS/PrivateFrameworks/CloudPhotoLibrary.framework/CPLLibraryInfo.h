//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLAccountFlags, CPLFeatureVersionHistory, CPLMomentShare, NSData, NSDictionary;

@interface CPLLibraryInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_assetCounts;
    CPLFeatureVersionHistory *_featureVersionHistory;
    struct NSData *_lastKnownSyncAnchor;
    NSData *_accountFlagsData;
    CPLMomentShare *_momentShare;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) CPLMomentShare *momentShare; // @synthesize momentShare=_momentShare;
@property(copy, nonatomic) NSData *accountFlagsData; // @synthesize accountFlagsData=_accountFlagsData;
@property(copy, nonatomic) NSData *lastKnownSyncAnchor; // @synthesize lastKnownSyncAnchor=_lastKnownSyncAnchor;
@property(retain, nonatomic) CPLFeatureVersionHistory *featureVersionHistory; // @synthesize featureVersionHistory=_featureVersionHistory;
@property(copy, nonatomic) NSDictionary *assetCounts; // @synthesize assetCounts=_assetCounts;
- (void).cxx_destruct;
@property(readonly, nonatomic) CPLAccountFlags *accountFlags;
- (id)prettyDescriptionWithAnchorDesciptionBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
