//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/NSCopying-Protocol.h>

@class IPAAdjustmentStack, NSString;

@interface IPAAdjustmentEnvelope : NSObject <NSCopying>
{
    IPAAdjustmentStack *_adjustmentStack;
    NSString *_originator;
    NSString *_format;
    NSString *_formatVersion;
}

@property(retain, nonatomic) NSString *formatVersion; // @synthesize formatVersion=_formatVersion;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *originator; // @synthesize originator=_originator;
@property(retain, nonatomic) IPAAdjustmentStack *adjustmentStack; // @synthesize adjustmentStack=_adjustmentStack;
- (void).cxx_destruct;
- (id)debugDescription;
- (_Bool)containsVideoAdjustments;
- (_Bool)containsPhotoAdjustments;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)videoAdjustmentStack;
- (id)photoAdjustmentStack;

@end
