//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDContainerRep.h>

#import <iWorkImport/CAAnimationDelegate-Protocol.h>

@class CALayer, CAShapeLayer, NSArray, NSString, TSDLayout, TSWPSearchReference, TSWPSelection, TSWPStorage;
@protocol TSWPLayoutTarget;

__attribute__((visibility("hidden")))
@interface TSWPRep : TSDContainerRep <CAAnimationDelegate>
{
    CALayer *_textLayers[2];
    CALayer *_caretLayer;
    CAShapeLayer *_selectionLineLayers[2];
    CAShapeLayer *_selectionHighlightLayer;
    CAShapeLayer *_selectionParagraphBorderLayer;
    CAShapeLayer *_markHighlightLayer;
    CAShapeLayer *_smartFieldHighlightLayer;
    CAShapeLayer *_secondaryHighlightLayer;
    struct _NSRange _secondaryHighlightRange;
    int _secondaryHighlightPathStyle;
    _Bool _caretAnimationDisabled;
    _Bool _suppressCaret;
    struct _NSRange _suppressedMisspellingRange;
    _Bool _updatingHighlights;
    _Bool _suppressSelectionHighlight;
    struct _NSRange _dragRange;
    TSWPSelection *_lastSelection;
    _Bool _selectionChanged;
    _Bool _markChanged;
    unsigned long long _newSelectionFlags;
    _Bool _repFieldsAreActive;
    _Bool _hudStateDirty;
    _Bool _invalidateHUDState;
    _Bool _useKeyboardWhenEditing;
    double _listLevelIndents[9];
    TSWPSelection *_dropSelection;
    _Bool _isShowingCommentKnobs;
    _Bool _tornDown;
    _Bool _searchHitsAreInvalid;
    _Bool _findIsShowing;
    TSWPSearchReference *_activeSearchReference;
    NSArray *_searchReferences;
    CALayer *_floatingCaretLayer;
    struct CGAffineTransform _transformToConvertNaturalToScaledRoot;
}

+ (void)initialize;
@property(copy, nonatomic) TSWPSelection *lastSelection; // @synthesize lastSelection=_lastSelection;
@property(retain, nonatomic) CALayer *floatingCaretLayer; // @synthesize floatingCaretLayer=_floatingCaretLayer;
@property(retain, nonatomic) NSArray *searchReferences; // @synthesize searchReferences=_searchReferences;
@property(readonly, nonatomic) struct CGAffineTransform transformToConvertNaturalToScaledRoot; // @synthesize transformToConvertNaturalToScaledRoot=_transformToConvertNaturalToScaledRoot;
@property(nonatomic) _Bool useKeyboardWhenEditing; // @synthesize useKeyboardWhenEditing=_useKeyboardWhenEditing;
@property(nonatomic) struct _NSRange dragRange; // @synthesize dragRange=_dragRange;
@property(nonatomic, getter=isSelectionHighlightSuppressed) _Bool suppressSelectionHighlight; // @synthesize suppressSelectionHighlight=_suppressSelectionHighlight;
@property(nonatomic) _Bool findIsShowing; // @synthesize findIsShowing=_findIsShowing;
@property(retain, nonatomic) TSWPSearchReference *activeSearchReference; // @synthesize activeSearchReference=_activeSearchReference;
- (void).cxx_destruct;
- (void)p_drawTextInLayer:(id)arg1 context:(struct CGContext *)arg2 limitSelection:(id)arg3 rubyGlyphRange:(struct _NSRange)arg4 renderMode:(int)arg5 suppressInvisibles:(_Bool)arg6;
- (void)p_teardown;
@property(readonly, nonatomic) _Bool textIsVertical;
- (struct CGPoint)p_pinPoint:(struct CGPoint)arg1 toRect:(struct CGRect)arg2;
- (struct CGRect)p_paragraphModeRectangleForColumn:(id)arg1 selection:(id)arg2;
- (_Bool)isOverflowing;
- (void)p_updateLayersForInsertionPointSelection:(id)arg1;
- (_Bool)p_allowCaretForSelection:(id)arg1;
- (struct CGRect)p_convertNaturalRectToRotated:(struct CGRect)arg1 repAngle:(double)arg2;
- (struct CGRect)glyphRectForRubyFieldAtCharIndex:(unsigned long long)arg1 glyphRange:(struct _NSRange)arg2;
- (unsigned long long)glyphCountForRubyFieldAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)charCountOfGlyphStartingAtCharIndex:(unsigned long long)arg1;
- (unsigned int)fontTraitsForRange:(struct _NSRange)arg1 includingLabel:(_Bool)arg2;
- (struct CGRect)glyphRectForRange:(struct _NSRange)arg1 includingLabel:(_Bool)arg2;
- (struct CGRect)columnRectForRange:(struct _NSRange)arg1;
- (struct CGRect)labelRectForCharIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) TSWPSelection *selection;
@property(readonly, nonatomic) NSArray *columns;
@property(readonly, nonatomic) TSWPStorage *storage;
@property(readonly, nonatomic) __weak TSDLayout<TSWPLayoutTarget> *layout;
- (id)repForCharIndex:(unsigned long long)arg1 isStart:(_Bool)arg2;
- (void)viewDidAppear;
- (void)gesturesDidEnd;
@property(readonly, nonatomic) _Bool isBeingEdited;
- (id)columnForCharIndex:(unsigned long long)arg1;
- (id)closestColumnForPoint:(struct CGPoint)arg1;
- (id)footnoteReferenceAttachmentAtPoint:(struct CGPoint)arg1;
- (id)footnoteMarkAttachmentAtPoint:(struct CGPoint)arg1;
- (id)rubyFieldAtPoint:(struct CGPoint)arg1;
- (id)smartFieldAtPoint:(struct CGPoint)arg1;
- (void)drawRubyInContext:(struct CGContext *)arg1 rubyFieldStart:(unsigned long long)arg2 rubyGlyphRange:(struct _NSRange)arg3;
- (void)drawInContext:(struct CGContext *)arg1 limitSelection:(id)arg2 suppressInvisibles:(_Bool)arg3;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (id)textBackgroundLayer;
- (id)textLayer;
- (void)performBlockOnTextLayers:(CDUnknownBlockType)arg1;
- (id)p_hyperlinkAtPoint:(struct CGPoint)arg1;
- (_Bool)directlyManagesLayerContent;
- (Class)layerClass;
- (_Bool)p_shouldShowCommentsIncludingHighlights:(_Bool)arg1;
- (void)p_unregisterNotifications;
- (void)p_registerNotifications;
- (struct CGRect)p_closestCaretRectForPoint:(struct CGPoint)arg1 inSelection:(_Bool)arg2 allowPastBreak:(_Bool)arg3;
- (struct CGRect)p_topicDragRectForSelection:(id)arg1;
- (struct CGRect)p_caretRectForSelection:(id)arg1;
- (struct CGRect)caretRectForSelection:(id)arg1;
- (CDStruct_7e4c5a1e)wordMetricsAtCharIndex:(unsigned long long)arg1;
- (CDStruct_d12891c8)lineMetricsAtCharIndex:(unsigned long long)arg1;
- (CDStruct_d12891c8)lineMetricsAtPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForCharIndex:(unsigned long long)arg1 leadingEdge:(_Bool)arg2 caretAffinity:(int)arg3;
- (struct CGRect)caretRectForCharIndex:(unsigned long long)arg1 caretAffinity:(int)arg2;
- (struct CGRect)naturalBoundsRectForHyperlinkField:(id)arg1;
- (const struct CGPath *)newPathForSelection:(id)arg1;
- (struct CGRect)rectForSelection:(id)arg1 includeRuby:(_Bool)arg2 includePaginatedAttachments:(_Bool)arg3;
- (_Bool)isPointInSelectedArea:(struct CGPoint)arg1;
- (struct CGRect)selectionRect;
- (struct CGRect)caretRect;
- (struct CGPoint)pinToClosestColumn:(struct CGPoint)arg1;
- (struct CGPoint)pinToNaturalBounds:(struct CGPoint)arg1 andLastLineFragment:(_Bool)arg2;
- (struct _NSRange)range;
- (void)willBeRemoved;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

