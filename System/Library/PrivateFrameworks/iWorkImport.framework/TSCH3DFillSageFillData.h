//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCH3DSageFillData-Protocol.h>

@class NSMutableArray, TSCH3DFill;

__attribute__((visibility("hidden")))
@interface TSCH3DFillSageFillData : NSObject <TSCH3DSageFillData>
{
    TSCH3DFill *mFill;
    NSMutableArray *mTextures;
    NSMutableArray *mTextureBlendModes;
}

+ (id)dataWithFill:(id)arg1;
- (id)fillSetIdentifier;
- (id)textureForIndex:(unsigned long long)arg1;
- (id)layerLightenPercentageForIndex:(unsigned long long)arg1;
- (int)layerTilingModeForIndex:(unsigned long long)arg1;
- (long long)layerBlendModeForIndex:(unsigned long long)arg1;
- (_Bool)layerIsEnvironmentMapForIndex:(unsigned long long)arg1;
- (float)layerRotationForIndex:(unsigned long long)arg1;
- (float)layerScaleForIndex:(unsigned long long)arg1;
- (_Bool)isLayerEnabledForIndex:(unsigned long long)arg1;
- (unsigned long long)layerCount;
- (Color_1703f521)emissive;
- (Color_1703f521)specular;
- (Color_1703f521)diffuse;
- (float)shininess;
- (float)opacity;
- (id)materialAtIndex:(unsigned long long)arg1;
- (unsigned long long)modulateCount;
- (unsigned long long)diffuseCount;
- (id)environment;
- (id)modulateMaterial;
- (id)diffuseMaterial;
- (id)phongMaterials;
- (id)lightingModel;
- (void)p_addMaterial:(id)arg1 blendMode:(long long)arg2;
- (void)dealloc;
- (id)initWithFill:(id)arg1;

@end

