//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PBItem, _DUIItemDetail;

@interface DRDragItem : NSObject
{
    PBItem *_pasteboardItem;
    _DUIItemDetail *_detail;
}

@property(retain, nonatomic) _DUIItemDetail *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) PBItem *pasteboardItem; // @synthesize pasteboardItem=_pasteboardItem;
- (void).cxx_destruct;
- (id)initWithPasteboardItem:(id)arg1 detail:(id)arg2;

@end

