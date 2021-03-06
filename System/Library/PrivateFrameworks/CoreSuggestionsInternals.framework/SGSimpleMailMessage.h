//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGMessage.h>

@class NSArray, NSNumber, NSString, SGSimpleNamedEmailAddress;

@interface SGSimpleMailMessage : SGMessage
{
    _Bool _isInhuman;
    _Bool _isPartiallyDownloaded;
    SGSimpleNamedEmailAddress *_from;
    SGSimpleNamedEmailAddress *_replyTo;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_bcc;
    NSString *_messageId;
    NSString *_htmlBody;
    NSNumber *_received;
    NSArray *_headers;
    SGSimpleNamedEmailAddress *_mailingList;
}

+ (_Bool)headersContainInhumanOnes:(id)arg1 keys:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (id)subjectByCleaningPrefixesInSubject:(id)arg1;
+ (id)fromMFMailMessage:(id)arg1;
+ (id)parseRfc822Headers:(id)arg1 htmlContent:(id)arg2;
+ (id)simpleMailMessageFromHeadersOfMessage:(id)arg1;
@property(copy, nonatomic) SGSimpleNamedEmailAddress *mailingList; // @synthesize mailingList=_mailingList;
@property(readonly, nonatomic) NSArray *headers; // @synthesize headers=_headers;
@property(nonatomic) _Bool isPartiallyDownloaded; // @synthesize isPartiallyDownloaded=_isPartiallyDownloaded;
@property(nonatomic) _Bool isInhuman; // @synthesize isInhuman=_isInhuman;
@property(copy, nonatomic) NSNumber *received; // @synthesize received=_received;
@property(copy, nonatomic) NSString *htmlBody; // @synthesize htmlBody=_htmlBody;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(copy, nonatomic) NSArray *bcc; // @synthesize bcc=_bcc;
@property(copy, nonatomic) NSArray *cc; // @synthesize cc=_cc;
@property(copy, nonatomic) NSArray *to; // @synthesize to=_to;
@property(copy, nonatomic) SGSimpleNamedEmailAddress *replyTo; // @synthesize replyTo=_replyTo;
@property(copy, nonatomic) SGSimpleNamedEmailAddress *from; // @synthesize from=_from;
- (void).cxx_destruct;
- (id)spotlightUniqueIdentifier;
- (id)spotlightBundleIdentifier;
- (id)allRecipients;
- (unsigned long long)contentLength;
- (id)initWithSearchableItem:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToSimpleMailMessage:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)uniqueIdentifier;
@property(copy, nonatomic) NSString *body; // @dynamic body;
- (id)textContent;
- (id)rfc822Data;
- (id)headersDictionary;
- (id)asDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)searchableItem;
- (id)searchableItemWithSource:(id)arg1;
- (void)setHeaders:(id)arg1;

@end

