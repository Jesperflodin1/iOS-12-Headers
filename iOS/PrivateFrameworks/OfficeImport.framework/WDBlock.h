//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WDText;

__attribute__((visibility("hidden")))
@interface WDBlock : NSObject
{
    WDText *mText;
}

- (id)description;
- (void)clearProperties;
- (_Bool)isEmpty;
- (id)newRunIterator;
- (id)runIterator;
- (id)initWithText:(id)arg1;
- (id)init;
- (int)textType;
- (id)document;
- (id)text;
- (int)blockType;

@end
