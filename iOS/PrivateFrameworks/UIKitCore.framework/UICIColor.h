//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIColor.h>

@class CIColor;

__attribute__((visibility("hidden")))
@interface UICIColor : UIColor
{
    CIColor *_ciColor;
    UIColor *_rgbColor;
}

- (void).cxx_destruct;
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)CIColor;
- (struct CGColor *)CGColor;
- (id)colorWithAlphaComponent:(double)arg1;
- (void)setStroke;
- (void)setFill;
- (void)set;
- (id)_rgbColor;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCIColor:(id)arg1;

@end
