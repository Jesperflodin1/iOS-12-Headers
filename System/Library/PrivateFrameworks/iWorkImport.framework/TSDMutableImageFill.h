//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDImageFill.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSPData, TSUColor;

__attribute__((visibility("hidden")))
@interface TSDMutableImageFill : TSDImageFill <NSCopying>
{
}

@property(nonatomic) double scale; // @dynamic scale;
@property(nonatomic) struct CGSize fillSize; // @dynamic fillSize;
@property(retain, nonatomic) TSPData *imageData; // @dynamic imageData;
@property(nonatomic) int technique; // @dynamic technique;
@property(copy, nonatomic) TSUColor *tintColor; // @dynamic tintColor;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

