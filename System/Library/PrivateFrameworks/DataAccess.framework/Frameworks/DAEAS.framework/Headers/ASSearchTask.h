/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:08 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class DASearchQuery;

@interface ASSearchTask : ASTask {

	int _numDownloadedElements;
	DASearchQuery* _query;

}

@property (nonatomic,retain) DASearchQuery * query;                  //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) int numDownloadedElements;              //@synthesize numDownloadedElements=_numDownloadedElements - In the implementation block
-(id)initWithQuery:(id)arg1 ;
-(void)setQuery:(DASearchQuery *)arg1 ;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(int)numDownloadedElements;
-(void)setNumDownloadedElements:(int)arg1 ;
-(id)description;
-(DASearchQuery *)query;
@end

