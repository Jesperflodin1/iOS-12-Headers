//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKInkParser : NSObject
{
}

+ (id)stringForInkInput:(unsigned long long)arg1;
+ (id)stringForFunctionMask:(id)arg1;
+ (id)controlPointArrayForInkFunction:(id)arg1;
+ (id)dictionaryForInkFunction:(id)arg1;
+ (void)addFunctionsIfNecessaryForInk:(id)arg1 property:(unsigned long long)arg2 forDictionary:(id)arg3;
+ (id)dictionaryForInk:(id)arg1 name:(id)arg2;
+ (unique_ptr_94812230)loadFunction:(id)arg1;
+ (void)validatePiecewiseBezierFunction:(struct PKFunctionPiecewiseBezier *)arg1;
+ (vector_2b0a8222)loadOutput:(id)arg1 forBehavior:(id)arg2;
+ (void)loadBaseRadius:(id)arg1 forBehavior:(id)arg2;
+ (void)verifyParameters:(id)arg1;
+ (id)inkBehaviorVariantWithDictionary:(id)arg1 renderingDescriptor:(id)arg2 variant:(id)arg3;
+ (id)inkRenderingDescriptorWithDictionary:(id)arg1;
+ (struct CGImage *)imageRefForTextureName:(id)arg1;
+ (id)inkBehaviorsWithIdentifer:(id)arg1 version:(unsigned long long)arg2;
+ (id)inkBehaviorsWithIdentifer:(id)arg1;
+ (id)inkBehaviorFromDictionary:(id)arg1 identifier:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4;
+ (id)plistDictionaryForInk:(id)arg1;

@end

