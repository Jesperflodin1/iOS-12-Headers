//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BCImageStore, BCMessageData, BCMessageInfo, NSAttributedString, NSData, NSDictionary, NSString, NSURL, UIImage;
@protocol BCDictionaryImageSerializable;

@interface BCMessage : NSObject
{
    _Bool _isFromMe;
    NSString *_version;
    NSString *_requestIdentifier;
    NSString *_messageGUID;
    id <BCDictionaryImageSerializable> _rootObject;
    BCImageStore *_imageStore;
    BCMessageData *_messageData;
    BCMessageInfo *_receivedMessage;
    BCMessageInfo *_replyMessage;
    NSString *_title;
    NSAttributedString *_subtitle;
    NSString *_summaryText;
    NSString *_subcaption;
    NSString *_accessibilityLabel;
    NSString *_internalRootKey;
}

+ (id)defaultBubbleTitleFor:(id)arg1;
@property(retain, nonatomic) NSString *internalRootKey; // @synthesize internalRootKey=_internalRootKey;
@property(retain, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(retain, nonatomic) NSString *subcaption; // @synthesize subcaption=_subcaption;
@property(retain, nonatomic) NSString *summaryText; // @synthesize summaryText=_summaryText;
@property(retain, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) BCMessageInfo *replyMessage; // @synthesize replyMessage=_replyMessage;
@property(retain, nonatomic) BCMessageInfo *receivedMessage; // @synthesize receivedMessage=_receivedMessage;
@property(retain, nonatomic) BCMessageData *messageData; // @synthesize messageData=_messageData;
@property(retain, nonatomic) BCImageStore *imageStore; // @synthesize imageStore=_imageStore;
@property(retain, nonatomic) id <BCDictionaryImageSerializable> rootObject; // @synthesize rootObject=_rootObject;
@property(nonatomic) _Bool isFromMe; // @synthesize isFromMe=_isFromMe;
@property(retain, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (_Bool)isVersionSupported;
- (_Bool)isAnyUnknownRootKey;
@property(readonly, nonatomic) Class rootModelObject;
@property(readonly, nonatomic) NSString *rootKey;
- (id)encodedStringForDictionary:(id)arg1;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) long long style;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSDictionary *dictionaryValue;
- (void)updateTitles;
- (id)initFromOriginalMessage:(id)arg1 rootKey:(id)arg2 rootObject:(id)arg3 receivedMessage:(id)arg4 replyMessage:(id)arg5;
- (id)initWithData:(id)arg1 url:(id)arg2 isFromMe:(_Bool)arg3;
- (id)initWithData:(id)arg1 url:(id)arg2 messageGUID:(id)arg3 isFromMe:(_Bool)arg4;

@end
