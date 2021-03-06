/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:59 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray;

@interface TTYConversation : NSObject <NSSecureCoding> {

	NSString* _callIdentifier;
	NSMutableArray* _utterances;

}

@property (nonatomic,retain) NSString * callIdentifier;                //@synthesize callIdentifier=_callIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * utterances;              //@synthesize utterances=_utterances - In the implementation block
+(id)conversationWithCall:(id)arg1 ;
+(id)conversationWithID:(id)arg1 andUtterances:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(NSMutableArray *)utterances;
-(void)setUtterances:(NSMutableArray *)arg1 ;
-(BOOL)isEqualToConversation:(id)arg1 ;
-(void)addUtterance:(id)arg1 ;
-(id)appendStringFromOtherContactPath:(id)arg1 ;
-(unsigned long long)utteranceCountForMe:(BOOL)arg1 ;
-(id)lastUtteranceForMe:(BOOL)arg1 ;
-(id)otherContactPath;
-(id)transcriptString;
-(NSString *)callIdentifier;
-(void)setCallIdentifier:(NSString *)arg1 ;
-(id)processBackspaceForMe:(BOOL)arg1 ;
-(id)mergeUtterancesIfPossible;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)cleanup;
@end

