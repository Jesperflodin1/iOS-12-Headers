/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFBaseMessage <NSObject>
@property (nonatomic,readonly) unsigned uid; 
@property (nonatomic,readonly) unsigned dateReceivedInterval; 
@property (nonatomic,readonly) unsigned dateSentInterval; 
@property (nonatomic,readonly) long long conversationHash; 
@property (nonatomic,readonly) unsigned mailboxID; 
@property (nonatomic,readonly) long long messageIDHash; 
@property (nonatomic,readonly) BOOL flagged; 
@property (nonatomic,readonly) BOOL read; 
@property (nonatomic,readonly) BOOL deleted; 
@property (nonatomic,readonly) BOOL senderVIP; 
@property (getter=isKnownToHaveAttachments,nonatomic,readonly) BOOL knownToHaveAttachments; 
@property (getter=isLibraryMessage,nonatomic,readonly) BOOL libraryMessage; 
@property (nonatomic,readonly) unsigned libraryID; 
@required
-(BOOL)deleted;
-(unsigned)libraryID;
-(BOOL)flagged;
-(id)copyMessageInfo;
-(unsigned)mailboxID;
-(BOOL)isLibraryMessage;
-(long long)messageIDHash;
-(BOOL)senderVIP;
-(long long)conversationHash;
-(BOOL)isKnownToHaveAttachments;
-(unsigned)dateReceivedInterval;
-(unsigned)dateSentInterval;
-(BOOL)read;
-(unsigned)uid;

@end

