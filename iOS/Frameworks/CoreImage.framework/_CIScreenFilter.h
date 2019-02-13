//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface _CIScreenFilter : CIFilter
{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
    NSNumber *inputSharpness;
}

+ (id)_kernel;
+ (id)customAttributes;
+ (id)_kernel_code;
@property(retain, nonatomic) NSNumber *inputSharpness; // @synthesize inputSharpness;
@property(retain, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;
@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;

@end
