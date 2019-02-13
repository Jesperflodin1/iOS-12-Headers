//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosImagingFoundation/IPAImageTransform.h>

__attribute__((visibility("hidden")))
@interface IPAAffineImageTransform : IPAImageTransform
{
    _Bool _canAlignToPixelsExactly;
    struct Matrix4d _matrix;
}

- (id).cxx_construct;
- (id)description;
- (_Bool)canAlignToPixelsExactly;
- (struct Vector2d)mapVector:(struct Vector2d)arg1;
- (id)inverseTransform;
- (struct Matrix4d)matrix;
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 matrix:(const struct Matrix4d *)arg3 canAlignToPixelsExactly:(_Bool)arg4;

@end
