//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol INSpeakableStringExport <NSObject, JSExport>
@property(retain, nonatomic) NSString *vocabularyIdentifier;
@property(retain, nonatomic) NSString *identifier;
@property(retain, nonatomic) NSString *pronunciationHint;
@property(retain, nonatomic) NSString *spokenPhrase;
- (id)init;
@end
