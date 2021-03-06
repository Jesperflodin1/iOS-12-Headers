//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCopying-Protocol.h>

@class NSDictionary, NSString, NSURL, PDFDocumentPrivate, PDFOutline, PDFSelection;
@protocol PDFDocumentDelegate;

@interface PDFDocument : NSObject <NSCopying>
{
    PDFDocumentPrivate *_private;
}

+ (_Bool)pdfDocumentAppendModeActiveForThisThread;
+ (void)setPDFDocumentAppendModeActiveForThisThread:(_Bool)arg1;
- (void).cxx_destruct;
- (void)setPageChangeDelegate:(id)arg1;
- (void)setDocumentHasBurnInAnnotations:(_Bool)arg1;
- (Class)annotationSubclassForType:(id)arg1;
- (id)findPageWithCGPDFDictionaryPageRef:(struct CGPDFDictionary *)arg1;
- (struct __CFDictionary *)gcCreateInfoDictionary;
- (struct __DDScanner *)dataDetector;
- (id)annotationsForFieldName:(id)arg1;
- (void)setFormData:(id)arg1;
- (id)formData;
- (void)scheduledFindOnPage:(id)arg1;
- (void)cleanupFind;
- (_Bool)findOnPage;
- (void)coreFindStrings:(id)arg1;
- (void)coreFindString:(id)arg1;
- (void)normalizeFindOptions:(unsigned long long)arg1;
- (void)enqueueLayoutThreadForPage:(id)arg1 forPDFView:(id)arg2;
- (void)enqueueDataDetectionForPage:(id)arg1 forPDFView:(id)arg2;
- (id)dataDetectorQueue;
- (id)pageLayoutThreadQueue;
- (id)selectionFromPage:(id)arg1 atPoint:(struct CGPoint)arg2 toPage:(id)arg3 atPoint:(struct CGPoint)arg4 type:(int)arg5;
- (_Bool)viewPreferenceRightToLeft;
- (void)resetPageAnnotationChanges;
- (id)pageAnnotationChanges;
- (_Bool)documentChanged;
- (void)revert;
- (_Bool)validateRedo:(id)arg1;
- (void)redo:(id)arg1;
- (_Bool)validateUndo:(id)arg1;
- (void)undo:(id)arg1;
- (id)akController;
- (id)_namedDestination:(id)arg1 forNameDictionary:(struct CGPDFDictionary *)arg2;
- (id)namedDestination:(id)arg1;
- (void)enableLimitedSearch;
- (_Bool)bookmarksChanged;
- (void)updateBookmarksInPDFDocument;
- (id)_bookmarksCatalog;
- (id)bookmarkedPages;
- (void)setBookmarked:(_Bool)arg1 atPageIndex:(unsigned long long)arg2;
- (void)setShowsAnnotations:(_Bool)arg1;
- (_Bool)showsAnnotations;
- (id)selectionFromPage:(id)arg1 atCharacterIndex:(unsigned long long)arg2 toPage:(id)arg3 atCharacterIndex:(unsigned long long)arg4;
- (id)selectionFromPage:(id)arg1 atPoint:(struct CGPoint)arg2 toPage:(id)arg3 atPoint:(struct CGPoint)arg4;
@property(readonly, nonatomic) PDFSelection *selectionForEntireDocument;
- (void)cancelFindString;
@property(readonly, nonatomic) _Bool isFinding;
- (void)didMatchString:(id)arg1;
- (id)_findString:(id)arg1 fromSelection:(id)arg2 withOptions:(unsigned long long)arg3;
- (id)findStringPerPage:(id)arg1 fromSelection:(id)arg2 withOptions:(unsigned long long)arg3;
- (id)findString:(id)arg1 fromSelection:(id)arg2 withOptions:(unsigned long long)arg3;
- (void)beginFindStrings:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)beginFindString:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)findString:(id)arg1 withOptions:(unsigned long long)arg2;
@property(readonly, nonatomic) Class pageClass;
- (void)exchangePageAtIndex:(unsigned long long)arg1 withPageAtIndex:(unsigned long long)arg2;
- (void)removePageAtIndex:(unsigned long long)arg1;
- (void)insertPage:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexForPage:(id)arg1;
- (id)_rawPageAtIndex:(unsigned long long)arg1;
- (void)_notifyAKAdaptorPagePlaceholder:(id)arg1 wasReplacedWithPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)pageAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long pageCount;
- (id)outlineItemForSelection:(id)arg1;
@property(retain, nonatomic) PDFOutline *outlineRoot;
- (_Bool)writeToURL:(id)arg1 withOptions:(id)arg2;
- (_Bool)writeToURL:(id)arg1;
- (_Bool)writeToFile:(id)arg1 withOptions:(id)arg2;
- (_Bool)writeToFile:(id)arg1;
- (id)dataRepresentationWithOptions:(id)arg1;
- (id)dataRepresentation;
- (id)PDFAKControllerDelegate;
- (void)setPDFAKControllerDelegate:(id)arg1;
@property(nonatomic) __weak id <PDFDocumentDelegate> delegate;
@property(readonly, nonatomic) NSString *string;
@property(readonly, nonatomic) long long permissionsStatus;
@property(readonly, nonatomic) _Bool allowsFormFieldEntry;
@property(readonly, nonatomic) _Bool allowsCommenting;
@property(readonly, nonatomic) _Bool allowsContentAccessibility;
@property(readonly, nonatomic) _Bool allowsDocumentAssembly;
@property(readonly, nonatomic) _Bool allowsDocumentChanges;
@property(readonly, nonatomic) _Bool allowsCopying;
@property(readonly, nonatomic) _Bool allowsPrinting;
- (id)passwordUsedForUnlocking;
- (_Bool)unlockWithPassword:(id)arg1;
@property(readonly, nonatomic) _Bool isLocked;
@property(readonly, nonatomic) _Bool isEncrypted;
@property(readonly, nonatomic) long long minorVersion;
@property(readonly, nonatomic) long long majorVersion;
@property(copy, nonatomic) NSDictionary *documentAttributes;
@property(readonly, nonatomic) struct CGPDFDocument *documentRef;
@property(readonly, nonatomic) NSURL *documentURL;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setDocument:(struct CGPDFDocument *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;
- (void)enableDocumentMRUMode:(_Bool)arg1;
- (id)akDocumentAdaptor;
- (struct __CFData *)newXMPFromData:(id)arg1 preserveExistingXMPMetadata:(_Bool)arg2;
- (void)setDocumentCatalogMetadata:(id)arg1 withNSpace:(id)arg2 prefix:(id)arg3 rootPath:(id)arg4;
- (id)documentCatalogMetadataForRootPath:(id)arg1 withKeys:(id)arg2;
- (struct CGPDFAnnotation *)_createCGPDFAnnotationForAnnotation:(id)arg1;
- (_Bool)_writeAppendMode:(struct CGDataConsumer *)arg1;
- (_Bool)writeToConsumer:(struct CGDataConsumer *)arg1 withOptions:(id)arg2;
- (id)_convertWriteOptions:(id)arg1;
- (_Bool)canSaveWithAppendModeUsingOptions:(id)arg1;
- (void)setRenderingProperties:(id)arg1;
- (id)renderingProperties;
- (void)endSaveVisualizer;
- (void)updateSaveVisualizer;
- (void)beginSaveVisualizer;
- (id)_dataFromXMP:(struct __CFData *)arg1 withRootPath:(id)arg2 keys:(id)arg3;
- (id)_getNearestOutline:(id)arg1 forDestination:(id)arg2;
- (_Bool)_verifyAnnotationArray:(id)arg1;
- (_Bool)_verifyAnnotationDictionary:(id)arg1;
- (id)_SASLSanitize:(id)arg1;
- (_Bool)_isNonAsciiSpace:(id)arg1;
- (_Bool)_isCommonlyMappedToNothing:(id)arg1;
- (void)setupAKDocumentAdaptorIfNecessaryWithView:(id)arg1;
- (void)_commonInit;

@end

