//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString, TIInputContextHistory;

@interface UIInputContextHistory : NSObject
{
    TIInputContextHistory *_tiInputContextHistory;
}

@property(readonly, nonatomic) TIInputContextHistory *tiInputContextHistory; // @synthesize tiInputContextHistory=_tiInputContextHistory;
- (void).cxx_destruct;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifier:(id)arg2;
@property(readonly, nonatomic) NSString *senderIdentifier;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3;
@property(readonly, nonatomic) NSSet *senderIdentifiers;
@property(readonly, nonatomic) NSSet *recipientIdentifiers;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRecipientIdentifiers:(id)arg1;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifiers:(id)arg2;

@end

