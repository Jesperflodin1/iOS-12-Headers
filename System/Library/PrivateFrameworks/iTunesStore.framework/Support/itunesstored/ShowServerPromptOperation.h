//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ShowServerPromptOperation : ISOperation
{
    NSString *_promptIdentifier;
}

- (_Bool)_promptNeedsDisplay;
- (id)_newStoreURLOperation:(id *)arg1;
- (_Bool)_automaticDownloadsPromptNeedsDisplay;
- (void)run;
@property(readonly) NSString *promptIdentifier;
- (void)dealloc;
- (id)initWithPromptIdentifier:(id)arg1;
- (id)init;

@end

