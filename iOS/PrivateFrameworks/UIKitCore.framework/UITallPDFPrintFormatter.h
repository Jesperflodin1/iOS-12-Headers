//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIPrintFormatter.h>

@class NSURL;

@interface UITallPDFPrintFormatter : UIPrintFormatter
{
    NSURL *_pdfPath;
    struct CGPDFDocument *_pdfDocRef;
    double _pdfScaleFactor;
    _Bool _rotate90;
    double _shiftUpLength;
}

- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;
- (long long)_recalcPageCount;
- (id)initWithPDFData:(id)arg1;
- (id)initWithPDFURL:(id)arg1;

@end
