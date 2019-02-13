//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDGroupInfo.h>

@class TSDShapeInfo;

__attribute__((visibility("hidden")))
@interface TSDFreehandDrawingInfo : TSDGroupInfo
{
    TSDShapeInfo *_freehandDrawingSpacerShape;
    double _opacity;
}

@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) TSDShapeInfo *freehandDrawingSpacerShape; // @synthesize freehandDrawingSpacerShape=_freehandDrawingSpacerShape;
- (void).cxx_destruct;
- (id)tsaxTypeDescription;
- (void)saveToArchive:(struct GroupArchive *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct GroupArchive *)arg1 unarchiver:(id)arg2 upgradeDOLC:(_Bool)arg3;
- (id)copyWithContext:(id)arg1;
- (id)allNestedChildrenInfosForWrap;
- (Class)repClass;
- (Class)layoutClass;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)infosToObserveForAttachedInfo;
- (id)childEnumerator;
- (void)setFreehandDrawingSpacerShape:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)animationFilters;
- (_Bool)isFreehandDrawing;
- (id)initWithSpacerShapeAndContext:(id)arg1 geometry:(id)arg2;
- (_Bool)containsDisallowedElementKind:(unsigned int)arg1;
- (int)elementKind;

@end
