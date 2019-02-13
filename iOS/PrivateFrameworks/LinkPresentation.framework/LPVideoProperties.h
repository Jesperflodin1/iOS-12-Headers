//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSCopying-Protocol.h>

@class NSString, UIColor;

@interface LPVideoProperties : NSObject <NSCopying>
{
    _Bool _hasAudio;
    NSString *_accessibilityText;
    UIColor *__overlappingControlsColor;
}

@property(retain, nonatomic, setter=_setOverlappingControlsColor:) UIColor *_overlappingControlsColor; // @synthesize _overlappingControlsColor=__overlappingControlsColor;
@property(copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(nonatomic) _Bool hasAudio; // @synthesize hasAudio=_hasAudio;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
